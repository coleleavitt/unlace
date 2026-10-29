__int64 __fastcall sub_8AE730(__int64 a1, __int64 a2, const char *a3, unsigned int a4, unsigned int a5)
{
  size_t v9; // r14
  char *v10; // rsi
  __int64 v11; // rdx
  char *v12; // rdi
  unsigned __int64 v13; // rax
  __m128i v14; // xmm0
  char *v15; // rax
  unsigned int v16; // r12d
  char *v17; // rbp
  unsigned __int64 v18; // r13
  char *v19; // rdi
  __int64 v20; // rbp
  __int64 v21; // rbx
  char *v22; // rdx
  void *v23; // rax
  char *v24; // rdx
  __int64 v25; // rbp
  __int64 v26; // rbx
  char *v27; // rax
  void *v28; // rdi
  size_t v30; // r8
  const void *v31; // r9
  void *v32; // rdi
  void *v33; // r15
  __m128i v34; // xmm0
  __m128i v35; // xmm1
  char *v36; // rax
  void *v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rax
  __m128i v41; // [rsp+8h] [rbp-A8h] BYREF
  void *v42; // [rsp+18h] [rbp-98h] BYREF
  __int128 v43; // [rsp+20h] [rbp-90h]
  void *v44; // [rsp+38h] [rbp-78h] BYREF
  __int128 v45; // [rsp+40h] [rbp-70h]
  void *ptr; // [rsp+58h] [rbp-58h] BYREF
  __m128i v47; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v48; // [rsp+70h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  v43 = 0;
  v42 = nullptr;
  v44 = nullptr;
  ptr = nullptr;
  v45 = 0;
  v47 = 0;
  if ( !a3 )
  {
    v10 = nullptr;
    v13 = 1;
    goto LABEL_32;
  }
  v9 = strlen(a3);
  v41.m128i_i64[0] = v9 + 1;
  ptr = (void *)qvector_reserve(&ptr, 0, v9 + 1, 1);
  v47.m128i_i64[0] = v9 + 1;
  memmove(ptr, a3, v9);
  *((_BYTE *)ptr + v9) = 0;
  v10 = (char *)v44;
  v11 = v45;
  v12 = (char *)v44;
  v13 = v45 + 1;
  if ( &ptr < v44 || &ptr >= (void **)((char *)v44 + 24 * *((_QWORD *)&v45 + 1)) )
  {
    if ( *((_QWORD *)&v45 + 1) >= v13 )
    {
LABEL_4:
      v14 = _mm_loadu_si128(&v47);
      v15 = &v12[24 * v11];
      *(_QWORD *)v15 = ptr;
      *(__m128i *)(v15 + 8) = v14;
      *(_QWORD *)&v45 = v45 + 1;
      goto LABEL_5;
    }
LABEL_32:
    v44 = (void *)qvector_reserve(&v44, v10, v13, 24);
    v11 = v45;
    v12 = (char *)v44;
    goto LABEL_4;
  }
  v33 = ptr;
  v34 = _mm_loadl_epi64(&v47);
  ptr = nullptr;
  v35 = _mm_loadl_epi64((const __m128i *)&v47.m128i_u64[1]);
  v47 = 0;
  if ( *((_QWORD *)&v45 + 1) < v13 )
  {
    v41.m128i_i64[1] = v35.m128i_i64[0];
    v41.m128i_i64[0] = v34.m128i_i64[0];
    v44 = (void *)qvector_reserve(&v44, v44, v45 + 1, 24);
    v11 = v45;
    v10 = (char *)v44;
    v35 = _mm_loadl_epi64((const __m128i *)&v41.m128i_u64[1]);
    v34 = _mm_loadl_epi64(&v41);
  }
  v36 = &v10[24 * v11];
  *(_QWORD *)v36 = v33;
  *(__m128i *)(v36 + 8) = _mm_unpacklo_epi64(v34, v35);
  *(_QWORD *)&v45 = v45 + 1;
  if ( ptr )
  {
    v47.m128i_i64[0] = 0;
    qfree(ptr);
  }
LABEL_5:
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, void **, void **, _QWORD, _QWORD))(*(_QWORD *)a2 + 208LL))(
          a2,
          0,
          &v42,
          &v44,
          a4,
          a5);
  if ( !v16 )
  {
    if ( (_QWORD)v43 == 1 )
    {
      v17 = (char *)v42;
      if ( v42 != (void *)a1 )
      {
        v18 = *((_QWORD *)v42 + 1);
        if ( !v18 || (v30 = v18 - 1, v18 == 1) )
        {
          *(_QWORD *)(a1 + 8) = 0;
        }
        else
        {
          v31 = *(const void **)v42;
          v32 = *(void **)a1;
          if ( *(_QWORD *)(a1 + 16) < v18 )
          {
            v37 = *(void **)a1;
            v38 = *((_QWORD *)v42 + 1);
            v41.m128i_i64[0] = *(_QWORD *)v42;
            v39 = qvector_reserve(a1, v37, v38, 1);
            v31 = (const void *)v41.m128i_i64[0];
            v30 = v18 - 1;
            *(_QWORD *)a1 = v39;
            v32 = (void *)v39;
          }
          *(_QWORD *)(a1 + 8) = v18;
          memmove(v32, v31, v30);
          *(_BYTE *)(*(_QWORD *)a1 + v18 - 1) = 0;
        }
      }
      if ( v17 + 24 != (char *)(a1 + 24) )
        *(__m128i *)(a1 + 24) = _mm_loadu_si128((const __m128i *)(v17 + 24));
      *(_QWORD *)(a1 + 40) = *((_QWORD *)v17 + 5);
      *(_QWORD *)(a1 + 48) = *((_QWORD *)v17 + 6);
      *(_DWORD *)(a1 + 56) = *((_DWORD *)v17 + 14);
      *(_DWORD *)(a1 + 60) = *((_DWORD *)v17 + 15);
      *(_DWORD *)(a1 + 64) = *((_DWORD *)v17 + 16);
      *(_DWORD *)(a1 + 68) = *((_DWORD *)v17 + 17);
      *(_BYTE *)(a1 + 72) = v17[72];
    }
    else
    {
      v47 = 0;
      ptr = nullptr;
      sub_3573A0((char **)&ptr);
      set_error_string();
      if ( ptr )
      {
        v47.m128i_i64[0] = 0;
        qfree(ptr);
      }
      v16 = 33;
    }
  }
  v19 = (char *)v44;
  if ( v44 )
  {
    v20 = v45;
    if ( (_QWORD)v45 )
    {
      v21 = 0;
      do
      {
        v22 = &v19[24 * v21];
        v23 = *(void **)v22;
        if ( *(_QWORD *)v22 )
        {
          *((_QWORD *)v22 + 1) = 0;
          qfree(v23);
          v19 = (char *)v44;
        }
        ++v21;
      }
      while ( v20 != v21 );
    }
    *(_QWORD *)&v45 = 0;
    qfree(v19);
  }
  v24 = (char *)v42;
  if ( v42 )
  {
    v25 = v43;
    if ( (_QWORD)v43 )
    {
      v26 = 0;
      do
      {
        v27 = &v24[80 * v26];
        v28 = *(void **)v27;
        if ( *(_QWORD *)v27 )
        {
          *((_QWORD *)v27 + 1) = 0;
          qfree(v28);
          v24 = (char *)v42;
        }
        ++v26;
      }
      while ( v25 != v26 );
    }
    *(_QWORD *)&v43 = 0;
    qfree(v24);
  }
  return v16;
}

