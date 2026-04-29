unsigned __int64 __fastcall sub_DD090(__int64 a1, __int64 *a2, _QWORD *a3, __int64 *a4)
{
  int v4; // r13d
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rdi
  __int64 v14; // r15
  __int64 v15; // rbx
  _QWORD *v16; // r14
  __int64 v17; // rdi
  __int64 v18; // rdi
  int v19; // r9d
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  int tinfo_size; // [rsp+10h] [rbp-D8h]
  char v25; // [rsp+17h] [rbp-D1h]
  __int64 v26; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+28h] [rbp-C0h]
  _BYTE v28[16]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v30; // [rsp+48h] [rbp-A0h]
  __int128 v31; // [rsp+58h] [rbp-90h] BYREF
  __int64 v32; // [rsp+68h] [rbp-80h] BYREF
  __int128 v33; // [rsp+70h] [rbp-78h]
  __int64 v34; // [rsp+80h] [rbp-68h]
  __int128 v35; // [rsp+88h] [rbp-60h]
  char v36; // [rsp+98h] [rbp-50h]
  unsigned __int64 v37; // [rsp+A8h] [rbp-40h]

  v4 = a1;
  v37 = __readfsqword(0x28u);
  a2[1] = 0;
  tinfo_size = get_tinfo_size(0, *a3, 0);
  if ( tinfo_size > 0 && !(unsigned int)verify_tinfo(*a3) )
  {
    v7 = *(_QWORD *)(a1 + 112);
    v26 = 0;
    v27 = 0;
    v8 = sub_CCC60(v7);
    v29 = 0;
    v31 = 0u;
    v32 = 0;
    v34 = 0;
    v30 = 0;
    v33 = 0;
    v35 = 0;
    if ( (v8 & 0xFFFFFF0F) != 0 || v8 == 192 )
    {
      DWORD1(v31) = v8;
      LOBYTE(v8) = -64;
    }
    v36 = v8;
    copy_tinfo_t((char *)&v31 + 8, a3);
    v25 = calc_retloc(&v29);
    if ( v25 )
    {
      v9 = v33;
      *(_QWORD *)&v33 = v27;
      v27 = v9;
      LODWORD(v9) = v32;
      LODWORD(v32) = v26;
      LODWORD(v26) = v9;
    }
    if ( v34 )
    {
      *(_QWORD *)&v35 = 0;
      qfree(v34);
    }
    cleanup_argloc(&v32);
    clear_tinfo_t((char *)&v31 + 8);
    v13 = v29;
    if ( v29 )
    {
      v14 = v30;
      if ( (_QWORD)v30 )
      {
        v15 = 0;
        do
        {
          v16 = (_QWORD *)(v13 + 80 * v15);
          clear_tinfo_t(v16 + 8);
          v17 = v16[5];
          if ( v17 )
          {
            v16[6] = 0;
            qfree(v17);
          }
          v18 = v16[2];
          if ( v18 )
          {
            v16[3] = 0;
            qfree(v18);
          }
          ++v15;
          cleanup_argloc(v16);
          v13 = v29;
        }
        while ( v14 != v15 );
      }
      *(_QWORD *)&v30 = 0;
      qfree(v13);
    }
    if ( v25 && (unsigned __int8)sub_3290C0(v4, (_DWORD)a3, (unsigned int)&v26, v10, v11, v12) )
    {
      sub_1C2570(v28, &v26, (unsigned int)tinfo_size, 0);
      v29 = 0;
      v30 = 0u;
      v31 = 0;
      sub_1BF770((unsigned int)v28, (unsigned int)&v29, tinfo_size, 0, 0, v19);
      if ( (_QWORD)v31 )
      {
        if ( !under_debugger )
          sub_37EEE0(51715);
        BUG();
      }
      v20 = v29;
      v29 = *a2;
      v21 = a2[1];
      *a2 = v20;
      v22 = v30;
      *(_QWORD *)&v30 = v21;
      a2[1] = v22;
      if ( a4 )
        sub_60840(a4, a2);
      if ( *((_QWORD *)&v30 + 1) )
      {
        *(_QWORD *)&v31 = 0;
        qfree(*((_QWORD *)&v30 + 1));
      }
      qfree(v29);
      cleanup_argloc(v28);
      cleanup_argloc(&v26);
    }
    else
    {
      cleanup_argloc(&v26);
    }
  }
  return v37 - __readfsqword(0x28u);
}
