unsigned __int64 __fastcall sub_5153E0(__int64 a1, unsigned int a2)
{
  const char *i; // rax
  void *v3; // rbx
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  char *v6; // rax
  void *v7; // rdi
  const char *v8; // r13
  size_t v9; // rax
  __int64 v10; // r12
  size_t v11; // rbx
  unsigned __int64 v12; // rdi
  __m128i v13; // xmm0
  char *v14; // rax
  __m128i v15; // xmm4
  void *v16; // r14
  __int64 v17; // r15
  __m128i v18; // xmm0
  void *v19; // rdi
  void *v20; // rdi
  __m128i v21; // xmm5
  char *v22; // rbp
  char *v23; // rbx
  char *v24; // rdx
  __int64 v25; // rbp
  __int64 v26; // rbx
  char *v27; // rax
  void *v28; // rdi
  char *v30; // rsi
  __int64 v31; // rax
  __m128i v32; // [rsp+0h] [rbp-D8h] BYREF
  __m128i v33; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+20h] [rbp-B8h]
  unsigned int v35; // [rsp+2Ch] [rbp-ACh]
  char *s; // [rsp+40h] [rbp-98h] BYREF
  __int128 v37; // [rsp+48h] [rbp-90h]
  void *v38; // [rsp+60h] [rbp-78h] BYREF
  __int128 v39; // [rsp+68h] [rbp-70h]
  void *ptr; // [rsp+80h] [rbp-58h] BYREF
  __m128i v41; // [rsp+88h] [rbp-50h] BYREF
  unsigned __int64 v42; // [rsp+98h] [rbp-40h]

  v34 = a1;
  v35 = a2;
  v42 = __readfsqword(0x28u);
  v37 = 0;
  s = nullptr;
  get_import_module_name(&s);
  v38 = nullptr;
  v39 = 0;
  if ( (unsigned __int64)v37 > 1 )
  {
    for ( i = (const char *)qstrtok(s, "/"); ; i = (const char *)qstrtok(nullptr, "/") )
    {
      v8 = i;
      if ( !i )
        break;
      ptr = nullptr;
      v41 = 0;
      v9 = strlen(i);
      v10 = v9 + 1;
      v11 = v9;
      ptr = (void *)qvector_reserve(&ptr, 0, v9 + 1, 1);
      v41.m128i_i64[0] = v10;
      memmove(ptr, v8, v11);
      *((_BYTE *)ptr + v11) = 0;
      v31 = v39;
      v30 = (char *)v38;
      v12 = v39 + 1;
      if ( &ptr < v38 || &ptr >= (void **)((char *)v38 + 24 * *((_QWORD *)&v39 + 1)) )
      {
        if ( *((_QWORD *)&v39 + 1) < v12 )
        {
          v38 = (void *)qvector_reserve(&v38, v38, v39 + 1, 24);
          v30 = (char *)v38;
          v31 = v39;
        }
        v13 = _mm_loadu_si128(&v41);
        v14 = &v30[24 * v31];
        *(_QWORD *)v14 = ptr;
        *(__m128i *)(v14 + 8) = v13;
        *(_QWORD *)&v39 = v39 + 1;
      }
      else
      {
        v3 = ptr;
        v4 = _mm_loadl_epi64(&v41);
        ptr = nullptr;
        v5 = _mm_loadl_epi64((const __m128i *)&v41.m128i_u64[1]);
        v41 = 0;
        if ( *((_QWORD *)&v39 + 1) < v12 )
        {
          v33.m128i_i64[0] = v5.m128i_i64[0];
          v32.m128i_i64[0] = v4.m128i_i64[0];
          v38 = (void *)qvector_reserve(&v38, v38, v39 + 1, 24);
          v30 = (char *)v38;
          v5 = _mm_loadl_epi64(&v33);
          v31 = v39;
          v4 = _mm_loadl_epi64(&v32);
        }
        v6 = &v30[24 * v31];
        *(_QWORD *)v6 = v3;
        v7 = ptr;
        *(__m128i *)(v6 + 8) = _mm_unpacklo_epi64(v4, v5);
        *(_QWORD *)&v39 = v39 + 1;
        if ( v7 )
        {
          v41.m128i_i64[0] = 0;
          qfree(v7);
        }
      }
    }
    v22 = (char *)v38;
    v23 = (char *)v38 + 24 * v39;
    if ( v38 != v23 )
    {
      while ( 1 )
      {
        v23 -= 24;
        if ( v22 >= v23 )
          break;
        v15 = _mm_loadu_si128((const __m128i *)(v22 + 8));
        v16 = *(void **)v22;
        *(_QWORD *)v22 = 0;
        *(_OWORD *)(v22 + 8) = 0;
        v17 = *(_QWORD *)v23;
        v18 = _mm_loadu_si128((const __m128i *)(v23 + 8));
        *(_QWORD *)v23 = 0;
        *(_OWORD *)(v23 + 8) = 0;
        v19 = *(void **)v22;
        v32 = v15;
        if ( v19 )
        {
          *((_QWORD *)v22 + 1) = 0;
          v33 = v18;
          qfree(v19);
          v18 = _mm_load_si128(&v33);
        }
        *(_QWORD *)v22 = v17;
        *(__m128i *)(v22 + 8) = v18;
        v20 = *(void **)v23;
        if ( *(_QWORD *)v23 )
        {
          *((_QWORD *)v23 + 1) = 0;
          qfree(v20);
        }
        v21 = _mm_load_si128(&v32);
        *(_QWORD *)v23 = v16;
        v22 += 24;
        *(__m128i *)(v23 + 8) = v21;
      }
    }
  }
  sub_514FF0((__int64 *)&v38, v34, v35);
  v24 = (char *)v38;
  if ( v38 )
  {
    v25 = v39;
    if ( (_QWORD)v39 )
    {
      v26 = 0;
      do
      {
        v27 = &v24[24 * v26];
        v28 = *(void **)v27;
        if ( *(_QWORD *)v27 )
        {
          *((_QWORD *)v27 + 1) = 0;
          qfree(v28);
          v24 = (char *)v38;
        }
        ++v26;
      }
      while ( v25 != v26 );
    }
    *(_QWORD *)&v39 = 0;
    qfree(v24);
  }
  if ( s )
  {
    *(_QWORD *)&v37 = 0;
    qfree(s);
  }
  return v42 - __readfsqword(0x28u);
}

