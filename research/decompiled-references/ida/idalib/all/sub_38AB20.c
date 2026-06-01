unsigned __int64 __fastcall sub_38AB20(const char *src)
{
  __int64 v1; // r13
  __int64 v2; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // r8d
  int v6; // r9d
  unsigned __int64 i; // rbx
  char *v8; // r15
  __int64 v9; // r8
  __int64 v10; // r9
  size_t v11; // r14
  size_t v12; // rax
  __int64 v13; // r14
  size_t v14; // rbp
  __int64 v15; // rax
  char *v16; // rsi
  unsigned __int64 v17; // rdi
  void *v18; // rbx
  __m128i v19; // xmm0
  __m128i v20; // xmm1
  char *v21; // rax
  void *v22; // rdi
  __m128i v23; // xmm0
  char *v24; // rax
  char *v25; // rdx
  __int64 v26; // rbp
  __int64 v27; // rbx
  char *v28; // rax
  void *v29; // rdi
  __m128i v31; // [rsp+0h] [rbp-C8h] BYREF
  void *v32; // [rsp+10h] [rbp-B8h] BYREF
  __int128 v33; // [rsp+18h] [rbp-B0h]
  void *ptr; // [rsp+30h] [rbp-98h] BYREF
  __m128i v35; // [rsp+38h] [rbp-90h] BYREF
  char v36[8]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v37[24]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE v38[24]; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v39; // [rsp+88h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v1 = add_idc_gvar("ARGV");
  free_idcv(v1);
  idcv_object(v1, 0);
  v32 = nullptr;
  v33 = 0;
  if ( src )
  {
    if ( (unsigned __int8)qfileexist(src, 0) )
    {
      ptr = nullptr;
      v35 = 0;
      v12 = strlen(src);
      v13 = v12 + 1;
      v14 = v12;
      ptr = (void *)qvector_reserve(&ptr, 0, v12 + 1, 1);
      v35.m128i_i64[0] = v13;
      memmove(ptr, src, v14);
      *((_BYTE *)ptr + v14) = 0;
      v15 = v33;
      v16 = (char *)v32;
      v17 = v33 + 1;
      if ( &ptr < v32 || &ptr >= (void **)((char *)v32 + 24 * *((_QWORD *)&v33 + 1)) )
      {
        if ( *((_QWORD *)&v33 + 1) < v17 )
        {
          v32 = (void *)qvector_reserve(&v32, v32, v33 + 1, 24);
          v16 = (char *)v32;
          v15 = v33;
        }
        v23 = _mm_loadu_si128(&v35);
        v24 = &v16[24 * v15];
        *(_QWORD *)v24 = ptr;
        *(__m128i *)(v24 + 8) = v23;
        v2 = v33 + 1;
        *(_QWORD *)&v33 = v33 + 1;
      }
      else
      {
        v18 = ptr;
        v19 = _mm_loadl_epi64(&v35);
        ptr = nullptr;
        v20 = _mm_loadl_epi64((const __m128i *)&v35.m128i_u64[1]);
        v35 = 0;
        if ( *((_QWORD *)&v33 + 1) < v17 )
        {
          v31.m128i_i64[1] = v20.m128i_i64[0];
          v31.m128i_i64[0] = v19.m128i_i64[0];
          v32 = (void *)qvector_reserve(&v32, v32, v33 + 1, 24);
          v16 = (char *)v32;
          v20 = _mm_loadl_epi64((const __m128i *)&v31.m128i_u64[1]);
          v15 = v33;
          v19 = _mm_loadl_epi64(&v31);
        }
        v21 = &v16[24 * v15];
        *(_QWORD *)v21 = v18;
        v22 = ptr;
        *(__m128i *)(v21 + 8) = _mm_unpacklo_epi64(v19, v20);
        v2 = v33 + 1;
        *(_QWORD *)&v33 = v33 + 1;
        if ( v22 )
        {
          v35.m128i_i64[0] = 0;
          qfree(v22);
          v2 = v33;
        }
      }
    }
    else
    {
      if ( !parse_command_line(&v32, 0, src, 4) )
        sub_378C70((__int64)"Invalid -S command line switch");
      v2 = v33;
    }
  }
  else
  {
    v2 = 0;
  }
  v36[0] = 2;
  memset(v37, 0, sizeof(v37));
  free_idcv(v36);
  v36[0] = 2;
  *(_QWORD *)v37 = v2;
  set_idcv_attr(v1, "count", v36, 0, v3, v4);
  for ( i = 0; i < (unsigned __int64)v33; ++i )
  {
    qsnprintf((unsigned int)v38, 20, (unsigned int)"%zu", i, v5, v6);
    v8 = (char *)v32 + 24 * i;
    free_idcv(v36);
    v36[0] = 7;
    memset(v37, 0, sizeof(v37));
    v11 = *((_QWORD *)v8 + 1);
    if ( v11 )
    {
      *(_QWORD *)v37 = qalloc_or_throw(*((_QWORD *)v8 + 1));
      *(_QWORD *)&v37[16] = v11;
      memcpy(*(void **)v37, *(const void **)v8, v11);
      *(_QWORD *)&v37[8] = v11;
    }
    set_idcv_attr(v1, v38, v36, 0, v9, v10);
  }
  free_idcv(v36);
  v25 = (char *)v32;
  if ( v32 )
  {
    v26 = v33;
    if ( (_QWORD)v33 )
    {
      v27 = 0;
      do
      {
        v28 = &v25[24 * v27];
        v29 = *(void **)v28;
        if ( *(_QWORD *)v28 )
        {
          *((_QWORD *)v28 + 1) = 0;
          qfree(v29);
          v25 = (char *)v32;
        }
        ++v27;
      }
      while ( v26 != v27 );
    }
    *(_QWORD *)&v33 = 0;
    qfree(v25);
  }
  return v39 - __readfsqword(0x28u);
}
