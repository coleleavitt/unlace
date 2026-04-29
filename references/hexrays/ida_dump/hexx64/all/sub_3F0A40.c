__int64 __fastcall sub_3F0A40(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, _BOOL4 *a4, __int64 a5)
{
  unsigned int v7; // r13d
  unsigned int tinfo_details; // eax
  __int64 v10; // rdi
  int v11; // edx
  int v12; // esi
  __int64 v13; // rax
  __int64 v14; // rax
  _BOOL4 v15; // eax
  __int64 v16; // rdi
  __int64 v17; // r14
  __int64 v18; // r12
  _QWORD *v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // r13
  __int64 v24; // r12
  _QWORD *v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+10h] [rbp-98h] BYREF
  __int128 v30; // [rsp+18h] [rbp-90h]
  __int64 v31; // [rsp+28h] [rbp-80h]
  __int64 v32; // [rsp+30h] [rbp-78h] BYREF
  __int64 v33; // [rsp+38h] [rbp-70h] BYREF
  __int128 v34; // [rsp+40h] [rbp-68h]
  __int64 v35; // [rsp+50h] [rbp-58h]
  __int128 v36; // [rsp+58h] [rbp-50h]
  char v37; // [rsp+68h] [rbp-40h]
  unsigned __int64 v38; // [rsp+78h] [rbp-30h]

  v38 = __readfsqword(0x28u);
  v28 = 0;
  if ( !(unsigned __int8)sub_381D00(a1, a2, (unsigned __int64)&v28, 1, a5) )
  {
LABEL_2:
    v7 = 0;
    goto LABEL_3;
  }
  v37 = 16;
  v29 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v35 = 0;
  v30 = 0;
  v34 = 0;
  v36 = 0;
  tinfo_details = get_tinfo_details(v28, 12, &v29);
  v10 = v35;
  v7 = tinfo_details;
  if ( !(_BYTE)tinfo_details )
  {
    if ( v35 )
    {
      *(_QWORD *)&v36 = 0;
      qfree(v35);
    }
    cleanup_argloc(&v33);
    clear_tinfo_t(&v32);
    v22 = v29;
    if ( v29 )
    {
      v23 = v30;
      if ( (_QWORD)v30 )
      {
        v24 = 0;
        do
        {
          v25 = (_QWORD *)(v22 + 80 * v24);
          clear_tinfo_t(v25 + 8);
          v26 = v25[5];
          if ( v26 )
          {
            v25[6] = 0;
            qfree(v26);
          }
          v27 = v25[2];
          if ( v27 )
          {
            v25[3] = 0;
            qfree(v27);
          }
          ++v24;
          cleanup_argloc(v25);
          v22 = v29;
        }
        while ( v23 != v24 );
      }
      *(_QWORD *)&v30 = 0;
      qfree(v22);
    }
    goto LABEL_2;
  }
  if ( (unsigned __int64)a4 | a3 )
  {
    if ( !a3 )
      goto LABEL_13;
    if ( (_QWORD)v30 )
    {
      v11 = 0;
      v12 = 0;
      v13 = 0;
      do
      {
        v14 = v29 + 80 * v13;
        if ( *(_DWORD *)v14 == 3 )
          v12 += (unsigned int)*(unsigned __int16 *)(v14 + 8) - 45 < 8;
        v13 = ++v11;
      }
      while ( v11 < (unsigned __int64)v30 );
    }
    else
    {
      v12 = 0;
    }
    *(_DWORD *)a3 = v12;
    if ( a4 )
    {
LABEL_13:
      v15 = 0;
      if ( (_DWORD)v33 == 3 )
        v15 = (unsigned int)(unsigned __int16)v34 - 45 <= 7;
      *a4 = v15;
    }
  }
  if ( v10 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v10);
  }
  cleanup_argloc(&v33);
  clear_tinfo_t(&v32);
  v16 = v29;
  if ( v29 )
  {
    v17 = v30;
    if ( (_QWORD)v30 )
    {
      v18 = 0;
      do
      {
        v19 = (_QWORD *)(v16 + 80 * v18);
        clear_tinfo_t(v19 + 8);
        v20 = v19[5];
        if ( v20 )
        {
          v19[6] = 0;
          qfree(v20);
        }
        v21 = v19[2];
        if ( v21 )
        {
          v19[3] = 0;
          qfree(v21);
        }
        ++v18;
        cleanup_argloc(v19);
        v16 = v29;
      }
      while ( v17 != v18 );
    }
    *(_QWORD *)&v30 = 0;
    qfree(v16);
  }
LABEL_3:
  clear_tinfo_t(&v28);
  return v7;
}
