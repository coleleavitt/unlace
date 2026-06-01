unsigned __int64 __fastcall sub_D4C70(__int64 a1, __int64 *a2, int a3, __int64 *a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  int v11; // r9d
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  int tinfo_size; // [rsp+18h] [rbp-D0h]
  _BYTE v17[9]; // [rsp+1Fh] [rbp-C9h] BYREF
  __int64 v18; // [rsp+28h] [rbp-C0h]
  _BYTE v19[16]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v21; // [rsp+48h] [rbp-A0h]
  __int128 v22; // [rsp+58h] [rbp-90h]
  __int64 v23; // [rsp+68h] [rbp-80h]
  __int128 v24; // [rsp+70h] [rbp-78h]
  __int64 v25; // [rsp+80h] [rbp-68h]
  __int128 v26; // [rsp+88h] [rbp-60h]
  char v27; // [rsp+98h] [rbp-50h]
  unsigned __int64 v28; // [rsp+A8h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  a2[1] = 0;
  tinfo_size = get_tinfo_size();
  if ( tinfo_size > 0 && !(unsigned int)verify_tinfo() )
  {
    v5 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)&v17[1] = 0;
    v18 = 0;
    LODWORD(v5) = *(_DWORD *)(v5 + 48);
    v20 = 0;
    v21 = 0;
    v24 = 0;
    v22 = 0u;
    v26 = 0;
    v27 = (v5 & 8) == 0 ? 112 : 48;
    v23 = 0;
    v25 = 0;
    copy_tinfo_t();
    *(_QWORD *)v17 = (unsigned __int8)calc_retloc();
    if ( v17[0] )
    {
      v6 = v24;
      *(_QWORD *)&v24 = v18;
      v18 = v6;
      LODWORD(v6) = v23;
      LODWORD(v23) = *(_DWORD *)&v17[1];
      *(_DWORD *)&v17[1] = v6;
    }
    cleanup_argloc();
    clear_tinfo_t();
    if ( v17[0] && (unsigned __int8)sub_329FA0(a1, a3, (unsigned int)&v17[1], v7, v8, v9) )
    {
      sub_1C3530(v19, &v17[1], (unsigned int)tinfo_size, 0);
      v20 = 0;
      v21 = 0u;
      v22 = 0;
      sub_1C07A0((unsigned int)v19, (unsigned int)&v20, tinfo_size, 0, 0, v11);
      if ( (_QWORD)v22 )
      {
        if ( !under_debugger )
          sub_37EA20(51715);
        BUG();
      }
      v12 = v20;
      v20 = *a2;
      v13 = a2[1];
      *a2 = v12;
      v14 = v21;
      *(_QWORD *)&v21 = v13;
      a2[1] = v14;
      if ( a4 )
        sub_63980(a4, a2);
      if ( *((_QWORD *)&v21 + 1) )
      {
        *(_QWORD *)&v22 = 0;
        qfree();
      }
      qfree();
      cleanup_argloc();
      cleanup_argloc();
    }
    else
    {
      cleanup_argloc();
    }
  }
  return v28 - __readfsqword(0x28u);
}
