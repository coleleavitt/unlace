__int64 __fastcall sub_69FC00(unsigned int a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  char tinfo_details; // al
  char *v6; // rbx
  char *v7; // r12
  __int64 v8; // r12
  __int64 v9; // rbp
  char *v10; // rbx
  void *v11; // rdi
  void *v12; // rdi
  char *v14; // rdi
  __int64 v15; // r12
  __int64 v16; // rbp
  char *v17; // rbx
  void *v18; // rdi
  void *v19; // rdi
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  __int128 v21; // [rsp+8h] [rbp-60h]
  __int128 v22; // [rsp+18h] [rbp-50h]
  __int64 v23; // [rsp+28h] [rbp-40h]
  int v24; // [rsp+30h] [rbp-38h]
  unsigned __int64 v25; // [rsp+38h] [rbp-30h]

  v3 = *a2;
  v25 = __readfsqword(0x28u);
  if ( a1 != (unsigned int)get_tinfo_property(v3, 7) )
  {
    if ( (get_tinfo_property(*a2, 2) & 0x2F) == 0xD )
    {
      v4 = *a2;
      ptr = nullptr;
      v23 = 0;
      v24 = 1;
      v21 = 0;
      v22 = 0;
      tinfo_details = get_tinfo_details(v4, 13, &ptr);
      v6 = (char *)ptr;
      if ( tinfo_details )
      {
        v7 = (char *)ptr + 128 * (_QWORD)v21;
        if ( v7 != ptr )
        {
          while ( !(unsigned __int8)sub_69FC00(a1, v6 + 64) )
          {
            v6 += 128;
            if ( v7 == v6 )
            {
              v6 = (char *)ptr;
              goto LABEL_8;
            }
          }
          v14 = (char *)ptr;
          if ( ptr )
          {
            v15 = v21;
            if ( (_QWORD)v21 )
            {
              v16 = 0;
              do
              {
                v17 = &v14[128 * v16];
                clear_tinfo_t(v17 + 64);
                v18 = *((void **)v17 + 5);
                if ( v18 )
                {
                  *((_QWORD *)v17 + 6) = 0;
                  qfree(v18);
                }
                v19 = *((void **)v17 + 2);
                if ( v19 )
                {
                  *((_QWORD *)v17 + 3) = 0;
                  qfree(v19);
                }
                ++v16;
                v14 = (char *)ptr;
              }
              while ( v15 != v16 );
            }
            *(_QWORD *)&v21 = 0;
            qfree(v14);
          }
          return 1;
        }
      }
LABEL_8:
      if ( v6 )
      {
        v8 = v21;
        if ( (_QWORD)v21 )
        {
          v9 = 0;
          do
          {
            v10 = &v6[128 * v9];
            clear_tinfo_t(v10 + 64);
            v11 = *((void **)v10 + 5);
            if ( v11 )
            {
              *((_QWORD *)v10 + 6) = 0;
              qfree(v11);
            }
            v12 = *((void **)v10 + 2);
            if ( v12 )
            {
              *((_QWORD *)v10 + 3) = 0;
              qfree(v12);
            }
            ++v9;
            v6 = (char *)ptr;
          }
          while ( v8 != v9 );
        }
        *(_QWORD *)&v21 = 0;
        qfree(v6);
      }
    }
    return 0;
  }
  return 1;
}

