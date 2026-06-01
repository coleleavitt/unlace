__int64 __fastcall sub_68C0A0(__int64 a1, const char *a2)
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
  __int64 v17; // r12
  void *v18; // r14
  char *v19; // rdi
  __int64 v20; // r12
  char *v21; // rdi
  __int64 v22; // rbp
  __int64 v23; // rbx
  __int64 v24; // rax
  char *v26; // rsi
  _BYTE *v27; // rax
  __int64 v28; // rbx
  unsigned __int64 v29; // r12
  __int64 v30; // r14
  _BYTE *v31; // rsi
  __m128i si128; // xmm0
  char *v33; // rbx
  char *s; // [rsp+0h] [rbp-14D0h]
  size_t v35; // [rsp+18h] [rbp-14B8h]
  __int64 idc_filename; // [rsp+20h] [rbp-14B0h]
  void *v37; // [rsp+28h] [rbp-14A8h] BYREF
  __int128 v38; // [rsp+30h] [rbp-14A0h]
  void *ptr; // [rsp+48h] [rbp-1488h] BYREF
  __int128 v40; // [rsp+50h] [rbp-1480h]
  char v41[8]; // [rsp+68h] [rbp-1468h] BYREF
  __int128 v42; // [rsp+70h] [rbp-1460h]
  __int64 v43; // [rsp+80h] [rbp-1450h]
  _BYTE v44[1024]; // [rsp+88h] [rbp-1448h] BYREF
  char v45[4104]; // [rsp+488h] [rbp-1048h] BYREF
  unsigned __int64 v46; // [rsp+1490h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  v2 = (__int64)a2;
  v38 = 0;
  v37 = nullptr;
  ptr = nullptr;
  v40 = 0;
  ptr = (void *)qvector_reserve(&ptr, 0, 1, 32);
  v3 = &off_2B37540;
  v4 = (char *)ptr + 32 * v40;
  *v4 = 2;
  *(_OWORD *)(v4 + 8) = 0;
  *((_QWORD *)v4 + 3) = 0;
  *(_QWORD *)&v40 = v40 + 1;
  *v4 = 2;
  *((_QWORD *)v4 + 1) = a1;
  v41[0] = 2;
  v43 = 0;
  v42 = 0;
  do
  {
    v5 = v3;
    v3 += 5;
    add_idc_func(v5);
  }
  while ( v3 != (char **)&unk_2B376A8 );
  v6 = strchr(a2, 47);
  if ( v6 )
  {
    s = v6 + 1;
    v7 = v6 + 1 - a2;
    if ( v7 > 0x400 )
      v7 = 1024;
    qstrncpy(v44, a2, v7);
    if ( !get_file_ext(v44) )
      set_file_ext(v44, 1024, v44, "idc");
    idc_filename = get_idc_filename(v45, 4096, v44);
    if ( !idc_filename )
    {
      v28 = v38;
      if ( (_QWORD)v38 )
      {
        v30 = v38 + 30;
        v29 = v38 + 31;
        v28 = v38 - 1;
      }
      else
      {
        v29 = 32;
        v30 = 31;
      }
      v31 = v37;
      if ( *((_QWORD *)&v38 + 1) < v29 )
      {
        v37 = (void *)qvector_reserve(&v37, v37, v29, 1);
        v31 = v37;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A7F90);
      *(_QWORD *)&v38 = v29;
      v31[v30] = 0;
      v33 = (char *)v37 + v28;
      *(__m128i *)v33 = si128;
      *(__m128i *)(v33 + 15) = _mm_load_si128((const __m128i *)&xmmword_23A7FA0);
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
      v10 = v40;
      v11 = (char *)ptr;
      if ( *((_QWORD *)&v40 + 1) < (unsigned __int64)(v40 + 1) )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v40 + 1, 32);
        v10 = v40;
        v11 = (char *)ptr;
      }
      v12 = &v11[32 * v10];
      *v12 = 2;
      *(_OWORD *)(v12 + 8) = 0;
      *((_QWORD *)v12 + 3) = 0;
      *(_QWORD *)&v40 = v40 + 1;
      free_idcv(v12);
      v13 = strlen(i);
      *v12 = 7;
      *((_QWORD *)v12 + 1) = 0;
      v14 = v13;
      *((_OWORD *)v12 + 1) = 0;
      if ( v13 )
      {
        v35 = v13 + 1;
        v16 = (void *)qvector_reserve(v12 + 8, 0, v13 + 1, 1);
        *((_QWORD *)v12 + 1) = v16;
        *((_QWORD *)v12 + 2) = v35;
        memmove(v16, i, v14);
        *(_BYTE *)(*((_QWORD *)v12 + 1) + v14) = 0;
        if ( !v9 )
        {
LABEL_20:
          v17 = v40;
          v18 = ptr;
          if ( (unsigned __int8)compile_idc_file(idc_filename, &v37, 3)
            && (unsigned __int8)call_idc_func(v41, s, v18, v17, &v37, 0) )
          {
            goto LABEL_22;
          }
LABEL_35:
          sub_378D50();
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
    v26 = (char *)v37;
    if ( *((_QWORD *)&v38 + 1) <= 0x4Eu )
    {
      v37 = (void *)qvector_reserve(&v37, v37, 79, 1);
      v26 = (char *)v37;
    }
    *(_QWORD *)&v38 = 79;
    *(__m128i *)v26 = _mm_load_si128((const __m128i *)&xmmword_23A7FB0);
    v27 = v37;
    *((__m128i *)v26 + 1) = _mm_load_si128((const __m128i *)&xmmword_23A7FC0);
    *((__m128i *)v26 + 2) = _mm_load_si128((const __m128i *)&xmmword_23A7FD0);
    *((__m128i *)v26 + 3) = _mm_load_si128((const __m128i *)&xmmword_23A7FE0);
    *(__m128i *)(v26 + 62) = _mm_load_si128((const __m128i *)&xmmword_23A7FF0);
    v27[78] = 0;
    goto LABEL_35;
  }
  if ( !get_file_ext(a2) )
    v2 = set_file_ext(v44, 1024, a2, "idc");
  if ( !(unsigned __int8)exec_system_script(v2, 1) )
  {
    sub_35A790((char **)&v37);
    copy_idcv(v41);
    goto LABEL_35;
  }
  copy_idcv(v41);
  do
  {
LABEL_22:
    v19 = *(v3 - 5);
    v3 -= 5;
    del_idc_func(v19);
  }
  while ( v3 != &off_2B37540 );
  idcv_long(v41);
  v20 = v42;
  free_idcv(v41);
  v21 = (char *)ptr;
  if ( ptr )
  {
    v22 = v40;
    if ( (_QWORD)v40 )
    {
      v23 = 0;
      do
      {
        v24 = v23++;
        free_idcv(&v21[32 * v24]);
        v21 = (char *)ptr;
      }
      while ( v22 != v23 );
    }
    *(_QWORD *)&v40 = 0;
    qfree(v21);
  }
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37);
  }
  return v20;
}
