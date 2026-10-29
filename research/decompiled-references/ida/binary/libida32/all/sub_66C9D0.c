__int64 __fastcall sub_66C9D0(int a1, const char *a2)
{
  __int64 v2; // r12
  char **v3; // r15
  char *v4; // rbx
  char **v5; // rdi
  char *v6; // rax
  unsigned __int64 v7; // rdx
  const char *i; // r12
  const char *v9; // r14
  __int64 v10; // rdx
  char *v11; // rsi
  char *v12; // rbx
  size_t v13; // rax
  size_t v14; // rbp
  char *v15; // rax
  void *v16; // rax
  char *v17; // rsi
  char *v18; // rdi
  unsigned int v19; // r12d
  char *v20; // rdi
  __int64 v21; // rbp
  __int64 v22; // rbx
  __int64 v23; // rax
  char *v25; // rsi
  _BYTE *v26; // rax
  __int64 v27; // rbx
  unsigned __int64 v28; // r12
  __int64 v29; // r14
  _BYTE *v30; // rsi
  __m128i si128; // xmm0
  char *v32; // rbx
  char *s; // [rsp+0h] [rbp-14D0h]
  size_t v34; // [rsp+18h] [rbp-14B8h]
  __int64 idc_filename; // [rsp+20h] [rbp-14B0h]
  void *v36; // [rsp+28h] [rbp-14A8h] BYREF
  __int128 v37; // [rsp+30h] [rbp-14A0h]
  void *ptr; // [rsp+48h] [rbp-1488h] BYREF
  __int128 v39; // [rsp+50h] [rbp-1480h]
  char v40[8]; // [rsp+68h] [rbp-1468h] BYREF
  __int128 v41; // [rsp+70h] [rbp-1460h]
  __int64 v42; // [rsp+80h] [rbp-1450h]
  _BYTE v43[1024]; // [rsp+88h] [rbp-1448h] BYREF
  char v44[4104]; // [rsp+488h] [rbp-1048h] BYREF
  unsigned __int64 v45; // [rsp+1490h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  v2 = (__int64)a2;
  v37 = 0;
  v36 = nullptr;
  ptr = nullptr;
  v39 = 0;
  ptr = (void *)qvector_reserve(&ptr, 0, 1, 32);
  v3 = &off_2B0D580;
  v4 = (char *)ptr + 32 * v39;
  *v4 = 2;
  *(_OWORD *)(v4 + 8) = 0;
  *((_QWORD *)v4 + 3) = 0;
  *(_QWORD *)&v39 = v39 + 1;
  *v4 = 2;
  *((_DWORD *)v4 + 2) = a1;
  v40[0] = 2;
  v42 = 0;
  v41 = 0;
  do
  {
    v5 = v3;
    v3 += 5;
    add_idc_func(v5);
  }
  while ( v3 != (char **)&unk_2B0D6E8 );
  v6 = strchr(a2, 47);
  if ( v6 )
  {
    s = v6 + 1;
    v7 = v6 + 1 - a2;
    if ( v7 > 0x400 )
      v7 = 1024;
    qstrncpy(v43, a2, v7);
    if ( !get_file_ext(v43) )
      set_file_ext(v43, 1024, v43, "idc");
    idc_filename = get_idc_filename(v44, 4096, v43);
    if ( !idc_filename )
    {
      v27 = v37;
      if ( (_QWORD)v37 )
      {
        v29 = v37 + 30;
        v28 = v37 + 31;
        v27 = v37 - 1;
      }
      else
      {
        v28 = 32;
        v29 = 31;
      }
      v30 = v36;
      if ( *((_QWORD *)&v37 + 1) < v28 )
      {
        v36 = (void *)qvector_reserve(&v36, v36, v28, 1);
        v30 = v36;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_2383F70);
      *(_QWORD *)&v37 = v28;
      v30[v29] = 0;
      v32 = (char *)v36 + v27;
      *(__m128i *)v32 = si128;
      *(__m128i *)(v32 + 15) = _mm_load_si128((const __m128i *)&xmmword_2383F80);
      goto LABEL_35;
    }
    for ( i = s; ; i = v9 )
    {
      v15 = strchr(i, 47);
      if ( v15 )
      {
        *v15 = 0;
        v9 = v15 + 1;
        if ( s == i )
          continue;
      }
      else
      {
        if ( s == i )
          goto LABEL_20;
        v9 = nullptr;
      }
      v10 = v39;
      v11 = (char *)ptr;
      if ( *((_QWORD *)&v39 + 1) < (unsigned __int64)(v39 + 1) )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v39 + 1, 32);
        v10 = v39;
        v11 = (char *)ptr;
      }
      v12 = &v11[32 * v10];
      *v12 = 2;
      *(_OWORD *)(v12 + 8) = 0;
      *((_QWORD *)v12 + 3) = 0;
      *(_QWORD *)&v39 = v39 + 1;
      free_idcv(v12);
      v13 = strlen(i);
      *v12 = 7;
      *((_QWORD *)v12 + 1) = 0;
      v14 = v13;
      *((_OWORD *)v12 + 1) = 0;
      if ( v13 )
      {
        v34 = v13 + 1;
        v16 = (void *)qvector_reserve(v12 + 8, 0, v13 + 1, 1);
        *((_QWORD *)v12 + 1) = v16;
        *((_QWORD *)v12 + 2) = v34;
        memmove(v16, i, v14);
        *(_BYTE *)(*((_QWORD *)v12 + 1) + v14) = 0;
        if ( !v9 )
        {
LABEL_20:
          if ( (unsigned __int8)compile_idc_file(idc_filename, &v36, 3) )
          {
            v17 = s;
            if ( (unsigned __int8)call_idc_func() )
              goto LABEL_22;
          }
LABEL_35:
          sub_375400();
        }
      }
      else if ( !v9 )
      {
        goto LABEL_20;
      }
    }
  }
  if ( strchr(a2, 59) )
  {
    v25 = (char *)v36;
    if ( *((_QWORD *)&v37 + 1) <= 0x4Eu )
    {
      v36 = (void *)qvector_reserve(&v36, v36, 79, 1);
      v25 = (char *)v36;
    }
    *(_QWORD *)&v37 = 79;
    *(__m128i *)v25 = _mm_load_si128((const __m128i *)&xmmword_2383F90);
    v26 = v36;
    *((__m128i *)v25 + 1) = _mm_load_si128((const __m128i *)&xmmword_2383FA0);
    *((__m128i *)v25 + 2) = _mm_load_si128((const __m128i *)&xmmword_2383FB0);
    *((__m128i *)v25 + 3) = _mm_load_si128((const __m128i *)&xmmword_2383FC0);
    *(__m128i *)(v25 + 62) = _mm_load_si128((const __m128i *)&xmmword_2383FD0);
    v26[78] = 0;
    goto LABEL_35;
  }
  if ( !get_file_ext(a2) )
    v2 = set_file_ext(v43, 1024, a2, "idc");
  if ( !(unsigned __int8)exec_system_script(v2, 1) )
  {
    sub_3573A0((char **)&v36);
    copy_idcv(v40);
    goto LABEL_35;
  }
  v17 = v4;
  copy_idcv(v40);
  do
  {
LABEL_22:
    v18 = *(v3 - 5);
    v3 -= 5;
    del_idc_func(v18);
  }
  while ( v3 != &off_2B0D580 );
  idcv_long(v40, v17);
  v19 = v41;
  free_idcv(v40);
  v20 = (char *)ptr;
  if ( ptr )
  {
    v21 = v39;
    if ( (_QWORD)v39 )
    {
      v22 = 0;
      do
      {
        v23 = v22++;
        free_idcv(&v20[32 * v23]);
        v20 = (char *)ptr;
      }
      while ( v21 != v22 );
    }
    *(_QWORD *)&v39 = 0;
    qfree(v20);
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36);
  }
  return v19;
}

