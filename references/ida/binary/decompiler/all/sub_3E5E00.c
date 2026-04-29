__int64 __fastcall sub_3E5E00(__int64 a1, __int64 a2, unsigned __int64 a3, _BOOL4 *a4)
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
  __int64 v20; // r13
  __int64 v21; // r12
  _QWORD *v22; // rbx
  __int64 v23; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+10h] [rbp-98h]
  __int128 v25; // [rsp+18h] [rbp-90h]
  __int64 v26; // [rsp+28h] [rbp-80h]
  __int64 v27; // [rsp+30h] [rbp-78h]
  __int64 v28; // [rsp+38h] [rbp-70h]
  __int128 v29; // [rsp+40h] [rbp-68h]
  __int64 v30; // [rsp+50h] [rbp-58h]
  __int128 v31; // [rsp+58h] [rbp-50h]
  char v32; // [rsp+68h] [rbp-40h]
  unsigned __int64 v33; // [rsp+78h] [rbp-30h]

  v33 = __readfsqword(0x28u);
  v23 = 0;
  if ( !(unsigned __int8)sub_37D6C0(a1, a2, &v23, 1) )
  {
LABEL_2:
    v6 = 0;
    goto LABEL_3;
  }
  v32 = 16;
  v24 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v30 = 0;
  v25 = 0;
  v29 = 0;
  v31 = 0;
  tinfo_details = get_tinfo_details();
  v9 = v30;
  v6 = tinfo_details;
  if ( !(_BYTE)tinfo_details )
  {
    if ( v30 )
    {
      *(_QWORD *)&v31 = 0;
      qfree();
    }
    cleanup_argloc();
    clear_tinfo_t();
    v19 = v24;
    if ( v24 )
    {
      v20 = v25;
      if ( (_QWORD)v25 )
      {
        v21 = 0;
        do
        {
          v22 = (_QWORD *)(v19 + 80 * v21);
          clear_tinfo_t();
          if ( v22[5] )
          {
            v22[6] = 0;
            qfree();
          }
          if ( v22[2] )
          {
            v22[3] = 0;
            qfree();
          }
          ++v21;
          cleanup_argloc();
          v19 = v24;
        }
        while ( v20 != v21 );
      }
      *(_QWORD *)&v25 = 0;
      qfree();
    }
    goto LABEL_2;
  }
  if ( (unsigned __int64)a4 | a3 )
  {
    if ( !a3 )
      goto LABEL_13;
    if ( (_QWORD)v25 )
    {
      v10 = 0;
      v11 = 0;
      v12 = 0;
      do
      {
        v13 = v24 + 80 * v12;
        if ( *(_DWORD *)v13 == 3 )
          v11 += (unsigned int)*(unsigned __int16 *)(v13 + 8) - 45 < 8;
        v12 = ++v10;
      }
      while ( v10 < (unsigned __int64)v25 );
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
      if ( (_DWORD)v28 == 3 )
        v14 = (unsigned int)(unsigned __int16)v29 - 45 <= 7;
      *a4 = v14;
    }
  }
  if ( v9 )
  {
    *(_QWORD *)&v31 = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  v15 = v24;
  if ( v24 )
  {
    v16 = v25;
    if ( (_QWORD)v25 )
    {
      v17 = 0;
      do
      {
        v18 = (_QWORD *)(v15 + 80 * v17);
        clear_tinfo_t();
        if ( v18[5] )
        {
          v18[6] = 0;
          qfree();
        }
        if ( v18[2] )
        {
          v18[3] = 0;
          qfree();
        }
        ++v17;
        cleanup_argloc();
        v15 = v24;
      }
      while ( v16 != v17 );
    }
    *(_QWORD *)&v25 = 0;
    qfree();
  }
LABEL_3:
  clear_tinfo_t();
  return v6;
}
