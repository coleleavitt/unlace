__int64 __fastcall sub_5696F0(_QWORD *a1, int a2)
{
  __int64 v3; // rdi
  unsigned __int64 tinfo_property; // rbp
  __int64 v6; // rdi
  char *v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // r13
  char *v10; // rbx
  void *v11; // rdi
  void *v12; // rdi
  char *v13; // rbx
  char v14; // al
  unsigned __int64 v15; // rsi
  __int64 v16; // r13
  __int64 v17; // r12
  char *v18; // rbx
  void *v19; // rdi
  void *v20; // rdi
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  __int128 v22; // [rsp+8h] [rbp-60h]
  __int128 v23; // [rsp+18h] [rbp-50h]
  __int64 v24; // [rsp+28h] [rbp-40h]
  int v25; // [rsp+30h] [rbp-38h]
  unsigned __int64 v26; // [rsp+38h] [rbp-30h]

  v3 = *a1;
  v26 = __readfsqword(0x28u);
  if ( (get_tinfo_property(v3, 2) & 0x2F) != 0xD
    || (tinfo_property = get_tinfo_property(*a1, 15), (getinf(57) & 0xF) != 6) && tinfo_property )
  {
LABEL_4:
    LODWORD(tinfo_property) = a2;
    return (unsigned int)tinfo_property;
  }
  v6 = *a1;
  ptr = nullptr;
  v24 = 0;
  v25 = 1;
  v22 = 0;
  v23 = 0;
  get_tinfo_details(v6, 13, &ptr);
  v7 = (char *)ptr;
  if ( (v24 & 0x8000000000LL) == 0 )
  {
    if ( ptr )
    {
      v8 = v22;
      if ( (_QWORD)v22 )
      {
        v9 = 0;
        do
        {
          v10 = &v7[144 * v9];
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
          v7 = (char *)ptr;
        }
        while ( v8 != v9 );
      }
      *(_QWORD *)&v22 = 0;
      qfree(v7);
    }
    goto LABEL_4;
  }
  if ( !(_QWORD)v22 )
  {
    if ( !ptr )
      return (unsigned int)tinfo_property;
LABEL_9:
    *(_QWORD *)&v22 = 0;
    qfree(v7);
    return (unsigned int)tinfo_property;
  }
  v13 = (char *)ptr + 144 * v22 - 144;
  v14 = get_tinfo_property(*((_QWORD *)v13 + 8), 2);
  v15 = *((_QWORD *)v13 + 1);
  if ( (v14 & 0x2F) == 0xD && (v13[132] & 0x20) != 0 )
    LODWORD(tinfo_property) = (*(_QWORD *)v13 >> 3) + sub_5696F0(v13 + 64, v15 >> 3);
  else
    tinfo_property = (*(_QWORD *)v13 + v15 + 7) >> 3;
  v7 = (char *)ptr;
  if ( ptr )
  {
    v16 = v22;
    if ( (_QWORD)v22 )
    {
      v17 = 0;
      do
      {
        v18 = &v7[144 * v17];
        clear_tinfo_t(v18 + 64);
        v19 = *((void **)v18 + 5);
        if ( v19 )
        {
          *((_QWORD *)v18 + 6) = 0;
          qfree(v19);
        }
        v20 = *((void **)v18 + 2);
        if ( v20 )
        {
          *((_QWORD *)v18 + 3) = 0;
          qfree(v20);
        }
        ++v17;
        v7 = (char *)ptr;
      }
      while ( v16 != v17 );
    }
    goto LABEL_9;
  }
  return (unsigned int)tinfo_property;
}
