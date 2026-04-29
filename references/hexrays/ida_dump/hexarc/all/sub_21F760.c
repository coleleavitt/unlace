unsigned __int64 __fastcall sub_21F760(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 *v4; // r13
  __int64 (__fastcall *v5)(_QWORD *); // rax
  __int64 *v6; // rbx
  __int64 *v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // rbp
  __int64 v17; // rbx
  __int64 v18; // rdi
  _QWORD v20[3]; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v21; // [rsp+18h] [rbp-C0h]
  __int64 v22; // [rsp+20h] [rbp-B8h]
  __int64 v23; // [rsp+30h] [rbp-A8h]
  __int64 v24; // [rsp+40h] [rbp-98h]
  __int64 v25; // [rsp+48h] [rbp-90h]
  __int64 v26; // [rsp+60h] [rbp-78h]
  __int64 v27; // [rsp+68h] [rbp-70h]
  char v28[16]; // [rsp+78h] [rbp-60h] BYREF
  _BYTE v29[32]; // [rsp+88h] [rbp-50h] BYREF
  unsigned __int64 v30; // [rsp+A8h] [rbp-30h]

  v30 = __readfsqword(0x28u);
  sub_215980((__int64)v20, (__int64)a1);
  v2 = sub_109C80(a1[98], 0);
  v3 = v2;
  if ( !v2 )
  {
    if ( !under_debugger )
      sub_37B760(50446);
    BUG();
  }
  ++*(_DWORD *)(v2 + 24);
  sub_FE780((_QWORD *)v2, a1[188], v20, 36);
  sub_21F510((__int64)v20);
  sub_FE750(v3);
  if ( v29[16] )
  {
    v4 = (__int64 *)a1[98];
    if ( v4 )
    {
      v5 = *(__int64 (__fastcall **)(_QWORD *))(*v4 + 8);
      if ( v5 == sub_609B0 )
      {
        v6 = v4 + 27;
        *v4 = (__int64)off_4B8590;
        do
        {
          v7 = v6;
          v6 -= 4;
          sub_60700(v7);
        }
        while ( v6 != v4 + 3 );
        v8 = v4[1];
        *v4 = (__int64)&unk_4B8648;
        if ( v8 )
        {
          v4[2] = 0;
          qfree(v8);
        }
        j__qfree(v4);
      }
      else
      {
        v5((_QWORD *)a1[98]);
      }
    }
    a1[98] = 0;
    sub_60B60(a1);
  }
  v20[0] = &off_4ABF70;
  clear_tinfo_t(v29);
  cleanup_argloc(v28);
  v9 = v26;
  if ( v26 )
  {
    v10 = v27;
    if ( v27 )
    {
      v11 = 0;
      do
      {
        v12 = (__int64 *)(v9 + 32 * v11);
        v13 = *v12;
        if ( *v12 )
        {
          v12[1] = 0;
          qfree(v13);
          v9 = v26;
        }
        ++v11;
      }
      while ( v10 != v11 );
    }
    v27 = 0;
    qfree(v9);
  }
  if ( v24 )
  {
    v25 = 0;
    qfree(v24);
  }
  qfree(v23);
  v14 = v21;
  if ( v21 )
  {
    v15 = v22;
    if ( v22 )
    {
      v16 = 0;
      v17 = 0;
      do
      {
        v18 = *(_QWORD *)(v14 + v16);
        if ( v18 )
        {
          *(_QWORD *)(v14 + v16 + 8) = 0;
          qfree(v18);
          v14 = v21;
        }
        ++v17;
        v16 += 56;
      }
      while ( v15 != v17 );
    }
    v22 = 0;
    qfree(v14);
  }
  return v30 - __readfsqword(0x28u);
}
