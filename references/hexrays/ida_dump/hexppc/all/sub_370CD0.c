unsigned __int64 __fastcall sub_370CD0(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4)
{
  __int64 v8; // rdi
  __int64 v9; // r15
  __int64 v10; // rbp
  char *v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // r12
  __int64 v15; // rbp
  _QWORD *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v21; // [rsp+28h] [rbp-A0h]
  __int64 v22; // [rsp+38h] [rbp-90h]
  __int64 v23; // [rsp+40h] [rbp-88h] BYREF
  __int64 v24; // [rsp+48h] [rbp-80h] BYREF
  __int128 v25; // [rsp+50h] [rbp-78h]
  __int64 v26; // [rsp+60h] [rbp-68h]
  __int128 v27; // [rsp+68h] [rbp-60h]
  char v28; // [rsp+78h] [rbp-50h]
  unsigned __int64 v29; // [rsp+88h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( (get_aflags(a2) & 0x2000000) == 0 )
  {
    *(_QWORD *)(a1 + 120) = a2;
    v8 = *a3;
    v20 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v26 = 0;
    v28 = 16;
    v21 = 0;
    v25 = 0;
    v27 = 0;
    if ( (unsigned __int8)get_tinfo_details(v8, 140, &v20) )
    {
      v9 = v20;
      v10 = v20 + 80 * v21;
      if ( v10 != v20 )
      {
        do
        {
          while ( 1 )
          {
            v11 = (char *)s1;
            if ( *(_QWORD *)(v9 + 24) )
              v11 = *(char **)(v9 + 16);
            if ( (unsigned __int8)sub_20D610(v11, 97) )
            {
              v12 = *(_QWORD *)(v9 + 16);
              if ( v12 )
                break;
            }
            v9 += 80;
            if ( v9 == v10 )
              goto LABEL_12;
          }
          *(_QWORD *)(v9 + 24) = 0;
          qfree(v12);
          *(_QWORD *)(v9 + 16) = 0;
          v9 += 80;
          *(_QWORD *)(v9 - 48) = 0;
        }
        while ( v9 != v10 );
      }
LABEL_12:
      v19 = 0;
      create_tinfo(&v19, 12, 12, &v20);
      set_tinfo(a2, &v19);
      clear_tinfo_t(&v19);
    }
    else
    {
      set_tinfo(a2, a3);
    }
    *(_QWORD *)(a1 + 120) = -1;
    if ( a4 == 2 )
    {
      upd_abits(a2, 3254779904LL, 0x40000000);
    }
    else if ( a4 > 2 )
    {
      if ( a4 == 3 )
        upd_abits(a2, 3254779904LL, 0x80000000LL);
    }
    else if ( a4 )
    {
      upd_abits(a2, 3254779904LL, 0);
    }
    else
    {
      upd_abits(a2, 3254779904LL, 3221225472LL);
    }
    if ( v26 )
    {
      *(_QWORD *)&v27 = 0;
      qfree(v26);
    }
    cleanup_argloc(&v24);
    clear_tinfo_t(&v23);
    v13 = v20;
    if ( v20 )
    {
      v14 = v21;
      if ( (_QWORD)v21 )
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
          v13 = v20;
        }
        while ( v14 != v15 );
      }
      *(_QWORD *)&v21 = 0;
      qfree(v13);
    }
  }
  return v29 - __readfsqword(0x28u);
}
