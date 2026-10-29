__int64 __fastcall sub_3F0A40(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, _BOOL4 *a4)
{
  unsigned int v6; // r13d
  unsigned int tinfo_details; // eax
  __int64 v9; // rdi
  int v10; // edx
  int v11; // esi
  __int64 v12; // rax
  __int64 v13; // rax
  _BOOL4 v14; // eax
  __int64 v15; // rdi
  __int64 v16; // r14
  __int64 v17; // r12
  _QWORD *v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // r13
  __int64 v23; // r12
  _QWORD *v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+10h] [rbp-98h]
  __int128 v29; // [rsp+18h] [rbp-90h]
  __int64 v30; // [rsp+28h] [rbp-80h]
  __int64 v31; // [rsp+30h] [rbp-78h]
  __int64 v32; // [rsp+38h] [rbp-70h]
  __int128 v33; // [rsp+40h] [rbp-68h]
  __int64 v34; // [rsp+50h] [rbp-58h]
  __int128 v35; // [rsp+58h] [rbp-50h]
  char v36; // [rsp+68h] [rbp-40h]
  unsigned __int64 v37; // [rsp+78h] [rbp-30h]

  v37 = __readfsqword(0x28u);
  v27 = 0;
  if ( !(unsigned __int8)sub_381D00(a1, a2, (__int64)&v27, 1) )
  {
LABEL_2:
    v6 = 0;
    goto LABEL_3;
  }
  v36 = 16;
  v28 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v34 = 0;
  v29 = 0;
  v33 = 0;
  v35 = 0;
  tinfo_details = get_tinfo_details();
  v9 = v34;
  v6 = tinfo_details;
  if ( !(_BYTE)tinfo_details )
  {
    if ( v34 )
    {
      *(_QWORD *)&v35 = 0;
      qfree(v34);
    }
    cleanup_argloc();
    clear_tinfo_t();
    v21 = v28;
    if ( v28 )
    {
      v22 = v29;
      if ( (_QWORD)v29 )
      {
        v23 = 0;
        do
        {
          v24 = (_QWORD *)(v21 + 80 * v23);
          clear_tinfo_t();
          v25 = v24[5];
          if ( v25 )
          {
            v24[6] = 0;
            qfree(v25);
          }
          v26 = v24[2];
          if ( v26 )
          {
            v24[3] = 0;
            qfree(v26);
          }
          ++v23;
          cleanup_argloc();
          v21 = v28;
        }
        while ( v22 != v23 );
      }
      *(_QWORD *)&v29 = 0;
      qfree(v21);
    }
    goto LABEL_2;
  }
  if ( (unsigned __int64)a4 | a3 )
  {
    if ( !a3 )
      goto LABEL_13;
    if ( (_QWORD)v29 )
    {
      v10 = 0;
      v11 = 0;
      v12 = 0;
      do
      {
        v13 = v28 + 80 * v12;
        if ( *(_DWORD *)v13 == 3 )
          v11 += (unsigned int)*(unsigned __int16 *)(v13 + 8) - 45 < 8;
        v12 = ++v10;
      }
      while ( v10 < (unsigned __int64)v29 );
    }
    else
    {
      v11 = 0;
    }
    *(_DWORD *)a3 = v11;
    if ( a4 )
    {
LABEL_13:
      v14 = 0;
      if ( (_DWORD)v32 == 3 )
        v14 = (unsigned int)(unsigned __int16)v33 - 45 <= 7;
      *a4 = v14;
    }
  }
  if ( v9 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v9);
  }
  cleanup_argloc();
  clear_tinfo_t();
  v15 = v28;
  if ( v28 )
  {
    v16 = v29;
    if ( (_QWORD)v29 )
    {
      v17 = 0;
      do
      {
        v18 = (_QWORD *)(v15 + 80 * v17);
        clear_tinfo_t();
        v19 = v18[5];
        if ( v19 )
        {
          v18[6] = 0;
          qfree(v19);
        }
        v20 = v18[2];
        if ( v20 )
        {
          v18[3] = 0;
          qfree(v20);
        }
        ++v17;
        cleanup_argloc();
        v15 = v28;
      }
      while ( v16 != v17 );
    }
    *(_QWORD *)&v29 = 0;
    qfree(v15);
  }
LABEL_3:
  clear_tinfo_t();
  return v6;
}
