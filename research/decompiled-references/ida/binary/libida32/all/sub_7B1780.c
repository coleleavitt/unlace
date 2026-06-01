unsigned __int64 __fastcall sub_7B1780(double *a1)
{
  char *v1; // rdx
  char *v3; // rdi
  __m128 v4; // xmm0
  char *v6; // rax
  char *v7; // rbp
  unsigned __int64 v8; // rcx
  char *v9; // r8
  __m128 v10; // xmm0
  __int64 v11; // r13
  char *j; // r12
  char *v13; // rbx
  void *v14; // rdi
  void *v15; // rdi
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  char *v18; // r15
  unsigned __int64 v19; // rbp
  void *v20; // r13
  unsigned __int64 v21; // rdx
  char *v22; // rax
  char *v23; // rbx
  unsigned __int64 v24; // rbx
  void *v25; // r12
  void *v26; // rax
  __int64 v27; // rcx
  _BYTE *v28; // r9
  _BYTE *v29; // rdi
  __int64 i; // r10
  __int64 v31; // rbp
  __int64 v32; // r12
  __int64 v33; // rdx
  __int64 v34; // r13
  size_t v35; // rax
  __int64 v36; // rsi
  __int64 v37; // r9
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned int v41; // [rsp+0h] [rbp-80h]
  char *v42; // [rsp+0h] [rbp-80h]
  __int64 v43; // [rsp+0h] [rbp-80h]
  unsigned int v44; // [rsp+Ch] [rbp-74h]
  char *v45; // [rsp+10h] [rbp-70h]
  void *ptr; // [rsp+28h] [rbp-58h] BYREF
  __m128 v47; // [rsp+30h] [rbp-50h]
  unsigned __int64 v48; // [rsp+40h] [rbp-40h]

  v1 = *((char **)a1 + 1);
  v48 = __readfsqword(0x28u);
  v47 = 0;
  ptr = nullptr;
  if ( !v1 )
  {
    v3 = *(char **)a1;
    *a1 = 0.0;
    v4 = _mm_loadh_ps(a1 + 2);
    a1[2] = 0.0;
    ptr = v3;
    v47 = v4;
    if ( v3 )
      goto LABEL_14;
    return v48 - __readfsqword(0x28u);
  }
  v16 = 0;
  v6 = (char *)qvector_reserve(&ptr, 0, v1, 56);
  v7 = *((char **)a1 + 1);
  v9 = *(char **)a1;
  ptr = v6;
  v17 = v47.m128_u64[0];
  v45 = &v9[56 * (_QWORD)v7];
  if ( v9 == v45 )
  {
    v8 = v47.m128_u64[1];
    goto LABEL_6;
  }
  v18 = v9;
  do
  {
    if ( v17 )
    {
      v6 = (char *)ptr;
      v23 = (char *)ptr + 56 * v17 - 56;
      while ( 1 )
      {
        v16 = *(_QWORD *)v23;
        if ( *(_QWORD *)v18 != *(_QWORD *)v23 )
          break;
        v27 = *((_QWORD *)v23 + 5);
        if ( v27 != *((_QWORD *)v18 + 5) )
          break;
        if ( v27 )
        {
          v28 = *((_BYTE **)v23 + 4);
          v29 = *((_BYTE **)v18 + 4);
          for ( i = 0; i != v27; ++i )
          {
            v16 = (*v29 ^ *v28) & 0xF;
            if ( ((*v29 ^ *v28) & 0xF) != 0 )
              goto LABEL_25;
            v16 = (unsigned int)(*(_DWORD *)v29 ^ *(_DWORD *)v28);
            if ( (unsigned int)v16 > 0xF )
              goto LABEL_25;
            v28 += 4;
            v29 += 4;
          }
        }
        v31 = 8LL * *((_QWORD *)v18 + 2);
        v32 = v31 >> 3;
        if ( v31 >> 3 )
        {
          v33 = *((_QWORD *)v23 + 2);
          v34 = *((_QWORD *)v18 + 1);
          v35 = 0;
          v36 = *((_QWORD *)v23 + 1);
          v37 = 8 * v33;
          v38 = v32 + v33;
          if ( *((_QWORD *)v23 + 3) < v38 )
          {
            v43 = v37;
            v40 = qvector_reserve(v23 + 8, v36, v38, 8);
            *((_QWORD *)v23 + 1) = v40;
            v36 = v40;
            v37 = v43;
            v35 = 8LL * *((_QWORD *)v23 + 2) - v43;
          }
          v42 = (char *)(v37 + v36);
          memmove(&v42[v31], v42, v35);
          v39 = 0;
          v16 = (unsigned __int64)v42;
          if ( v31 )
          {
            do
            {
              *(_QWORD *)&v42[v39] = *(_QWORD *)(v34 + v39);
              v39 += 8;
            }
            while ( v31 != v39 );
          }
          *((_QWORD *)v23 + 2) += v32;
          v17 = v47.m128_u64[0];
          goto LABEL_21;
        }
        v18 += 56;
        if ( v45 == v18 )
          goto LABEL_5;
      }
    }
LABEL_25:
    v24 = *((_QWORD *)v18 + 2);
    v25 = nullptr;
    v41 = *(_DWORD *)v18;
    v44 = *((_DWORD *)v18 + 1);
    if ( v24 )
    {
      v26 = (void *)qalloc_or_throw(8 * v24, (const char *)v16);
      v16 = *((_QWORD *)v18 + 1);
      v25 = v26;
      v20 = nullptr;
      memcpy(v26, (const void *)v16, 8 * v24);
      v19 = *((_QWORD *)v18 + 5);
      if ( v19 )
      {
LABEL_27:
        v20 = (void *)qalloc_or_throw(4 * v19, (const char *)v16);
        memcpy(v20, *((const void **)v18 + 4), 4 * v19);
      }
    }
    else
    {
      v19 = *((_QWORD *)v18 + 5);
      v20 = nullptr;
      if ( v19 )
        goto LABEL_27;
    }
    v21 = v47.m128_u64[0];
    v16 = (unsigned __int64)ptr;
    if ( v47.m128_u64[1] < v47.m128_u64[0] + 1 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v47.m128_u64[0] + 1, 56);
      v21 = v47.m128_u64[0];
      v16 = (unsigned __int64)ptr;
    }
    v22 = (char *)(v16 + 56 * v21);
    *(_QWORD *)v22 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v41), _mm_cvtsi32_si128(v44)).m128i_u64[0];
    *((_QWORD *)v22 + 1) = v25;
    *((__m128i *)v22 + 1) = _mm_unpacklo_epi64((__m128i)v24, (__m128i)v24);
    *((_QWORD *)v22 + 4) = v20;
    *(__m128i *)(v22 + 40) = _mm_unpacklo_epi64((__m128i)v19, (__m128i)v19);
    v17 = ++v47.m128_u64[0];
LABEL_21:
    v18 += 56;
  }
  while ( v45 != v18 );
  v6 = (char *)ptr;
LABEL_5:
  v7 = *((char **)a1 + 1);
  v8 = v47.m128_u64[1];
  v9 = *(char **)a1;
LABEL_6:
  *(_QWORD *)a1 = v6;
  v3 = v9;
  v10 = _mm_loadh_ps(a1 + 2);
  *((_QWORD *)a1 + 1) = v17;
  *((_QWORD *)a1 + 2) = v8;
  ptr = v9;
  v47 = v10;
  if ( v9 )
  {
    if ( v7 )
    {
      v11 = 0;
      for ( j = nullptr; j != v7; ++j )
      {
        v13 = &v3[v11];
        v14 = *(void **)&v3[v11 + 32];
        if ( v14 )
        {
          *((_QWORD *)v13 + 5) = 0;
          qfree(v14);
        }
        v15 = *((void **)v13 + 1);
        if ( v15 )
        {
          *((_QWORD *)v13 + 2) = 0;
          qfree(v15);
        }
        v3 = (char *)ptr;
        v11 += 56;
      }
    }
LABEL_14:
    v47.m128_u64[0] = 0;
    qfree(v3);
  }
  return v48 - __readfsqword(0x28u);
}

