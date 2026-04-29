unsigned __int64 __fastcall sub_226AE0(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // r13
  __int64 (__fastcall *v8)(_QWORD *); // rax
  _QWORD *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // rbp
  __int64 v20; // rbx
  __int64 v21; // rdi
  _QWORD v23[3]; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v24; // [rsp+18h] [rbp-C0h]
  __int64 v25; // [rsp+20h] [rbp-B8h]
  __int64 v26; // [rsp+30h] [rbp-A8h]
  __int64 v27; // [rsp+40h] [rbp-98h]
  __int64 v28; // [rsp+48h] [rbp-90h]
  __int64 v29; // [rsp+60h] [rbp-78h]
  __int64 v30; // [rsp+68h] [rbp-70h]
  char v31; // [rsp+98h] [rbp-40h]
  unsigned __int64 v32; // [rsp+A8h] [rbp-30h]

  v32 = __readfsqword(0x28u);
  sub_21CD00((__int64)v23, (__int64)a1);
  v2 = sub_110340(a1[98], 0);
  v3 = v2;
  if ( !v2 )
  {
    if ( !under_debugger )
      sub_383060(50446);
    BUG();
  }
  ++*(_DWORD *)(v2 + 24);
  v4 = a1[188];
  sub_104E40((_QWORD *)v2, v4, v23, 36);
  sub_226890((__int64)v23, v4);
  sub_104E10(v3);
  if ( v31 )
  {
    v7 = (_QWORD *)a1[98];
    if ( v7 )
    {
      v8 = *(__int64 (__fastcall **)(_QWORD *))(*v7 + 8LL);
      if ( v8 == sub_66F30 )
      {
        v9 = v7 + 27;
        *v7 = off_4EC750;
        do
        {
          v10 = (__int64)v9;
          v9 -= 4;
          sub_66C80(v10);
        }
        while ( v9 != v7 + 3 );
        v11 = v7[1];
        *v7 = &unk_4EC808;
        if ( v11 )
        {
          v7[2] = 0;
          qfree(v11);
        }
        j__qfree((__int64)v7);
      }
      else
      {
        v8((_QWORD *)a1[98]);
      }
    }
    a1[98] = 0;
    sub_670E0(a1, v4, v5, v6);
  }
  v23[0] = &off_4DF770;
  clear_tinfo_t();
  cleanup_argloc();
  v12 = v29;
  if ( v29 )
  {
    v13 = v30;
    if ( v30 )
    {
      v14 = 0;
      do
      {
        v15 = (__int64 *)(v12 + 32 * v14);
        v16 = *v15;
        if ( *v15 )
        {
          v15[1] = 0;
          qfree(v16);
          v12 = v29;
        }
        ++v14;
      }
      while ( v13 != v14 );
    }
    v30 = 0;
    qfree(v12);
  }
  if ( v27 )
  {
    v28 = 0;
    qfree(v27);
  }
  qfree(v26);
  v17 = v24;
  if ( v24 )
  {
    v18 = v25;
    if ( v25 )
    {
      v19 = 0;
      v20 = 0;
      do
      {
        v21 = *(_QWORD *)(v17 + v19);
        if ( v21 )
        {
          *(_QWORD *)(v17 + v19 + 8) = 0;
          qfree(v21);
          v17 = v24;
        }
        ++v20;
        v19 += 56;
      }
      while ( v18 != v20 );
    }
    v25 = 0;
    qfree(v17);
  }
  return v32 - __readfsqword(0x28u);
}
