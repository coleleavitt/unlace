__int64 __fastcall sub_3CA6F0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rdi
  __int64 tinfo_size; // rbp
  __int64 v6; // rax
  char tinfo_details; // al
  char *v8; // rdi
  char *v9; // r14
  char tinfo_property; // al
  char *v11; // rdi
  __int64 v12; // r15
  __int64 v13; // r13
  char *v14; // r14
  void *v15; // rdi
  void *v16; // rdi
  __int64 v18; // r14
  __int64 v19; // r15
  char *v20; // r12
  void *v21; // rdi
  void *v22; // rdi
  __int64 v23; // r14
  __int64 v24; // r13
  char *v25; // r15
  void *v26; // rdi
  void *v27; // rdi
  bool v28; // [rsp+Bh] [rbp-8Dh]
  unsigned int v29; // [rsp+Ch] [rbp-8Ch]
  __int64 v30; // [rsp+18h] [rbp-80h] BYREF
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int128 v32; // [rsp+28h] [rbp-70h]
  __int128 v33; // [rsp+38h] [rbp-60h]
  __int64 v34; // [rsp+48h] [rbp-50h]
  int v35; // [rsp+50h] [rbp-48h]
  unsigned __int64 v36; // [rsp+58h] [rbp-40h]

  v3 = *a3;
  v36 = __readfsqword(0x28u);
  if ( !get_tinfo_property(v3, 286) )
    return -1;
  tinfo_size = get_tinfo_size(0, *a3, 0);
  if ( (unsigned __int64)(tinfo_size - 1) > 0xFFFFFFFFFFFFFFFDLL )
    return -1;
  v30 = 0;
  copy_tinfo_t(&v30);
  v6 = v30;
  while ( 1 )
  {
    ptr = nullptr;
    v34 = 0;
    v35 = 1;
    v32 = 0;
    v33 = 0;
    tinfo_details = get_tinfo_details(v6, 141, &ptr);
    v8 = (char *)ptr;
    if ( !tinfo_details )
    {
      if ( ptr )
      {
        v18 = v32;
        if ( (_QWORD)v32 )
        {
          v19 = 0;
          do
          {
            v20 = &v8[144 * v19];
            clear_tinfo_t(v20 + 64);
            v21 = *((void **)v20 + 5);
            if ( v21 )
            {
              *((_QWORD *)v20 + 6) = 0;
              qfree(v21);
            }
            v22 = *((void **)v20 + 2);
            if ( v22 )
            {
              *((_QWORD *)v20 + 3) = 0;
              qfree(v22);
            }
            ++v19;
            v8 = (char *)ptr;
          }
          while ( v18 != v19 );
        }
        *(_QWORD *)&v32 = 0;
        qfree(v8);
      }
      goto LABEL_26;
    }
    v9 = (char *)ptr + 144 * v32 - 144;
    tinfo_property = get_tinfo_property(*((_QWORD *)v9 + 8), 2);
    v11 = (char *)ptr;
    if ( (tinfo_property & 0x3F) != 0xD )
      break;
    v6 = *((_QWORD *)v9 + 8);
    *((_QWORD *)v9 + 8) = v30;
    v30 = v6;
    if ( v11 )
    {
      v12 = v32;
      if ( (_QWORD)v32 )
      {
        v13 = 0;
        do
        {
          v14 = &v11[144 * v13];
          clear_tinfo_t(v14 + 64);
          v15 = *((void **)v14 + 5);
          if ( v15 )
          {
            *((_QWORD *)v14 + 6) = 0;
            qfree(v15);
          }
          v16 = *((void **)v14 + 2);
          if ( v16 )
          {
            *((_QWORD *)v14 + 3) = 0;
            qfree(v16);
          }
          ++v13;
          v11 = (char *)ptr;
        }
        while ( v12 != v13 );
      }
      *(_QWORD *)&v32 = 0;
      qfree(v11);
      v6 = v30;
    }
  }
  if ( (*((_QWORD *)v9 + 9) & 0xFLL) != 0xA )
  {
    if ( ptr )
    {
      v28 = 0;
      v29 = -1;
      goto LABEL_31;
    }
LABEL_26:
    clear_tinfo_t(&v30);
    ptr = nullptr;
    goto LABEL_27;
  }
  v29 = *((_DWORD *)v9 + 20);
  v28 = v29 != -1 && a2 != -1;
  if ( ptr )
  {
LABEL_31:
    v23 = v32;
    if ( (_QWORD)v32 )
    {
      v24 = 0;
      do
      {
        v25 = &v11[144 * v24];
        clear_tinfo_t(v25 + 64);
        v26 = *((void **)v25 + 5);
        if ( v26 )
        {
          *((_QWORD *)v25 + 6) = 0;
          qfree(v26);
        }
        v27 = *((void **)v25 + 2);
        if ( v27 )
        {
          *((_QWORD *)v25 + 3) = 0;
          qfree(v27);
        }
        ++v24;
        v11 = (char *)ptr;
      }
      while ( v23 != v24 );
    }
    *(_QWORD *)&v32 = 0;
    qfree(v11);
  }
  clear_tinfo_t(&v30);
  ptr = nullptr;
  if ( v28 && get_udm_by_tid(&ptr, 0, a2) == -1 )
    tinfo_size += get_max_strlit_length(a2 + tinfo_size, v29, 0);
LABEL_27:
  clear_tinfo_t(&ptr);
  return tinfo_size;
}
