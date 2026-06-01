unsigned __int64 __fastcall sub_7D4C60(double *a1)
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
  char *i; // r12
  char *v13; // rbx
  void *v14; // rdi
  void *v15; // rdi
  unsigned __int64 v16; // rdx
  char *v17; // r15
  unsigned __int64 v18; // rbp
  void *v19; // r13
  unsigned __int64 v20; // rdx
  char *v21; // rsi
  char *v22; // rax
  _QWORD *v23; // rbx
  unsigned __int64 v24; // rbx
  void *v25; // r12
  __int64 v26; // rcx
  _BYTE *v27; // r9
  _BYTE *v28; // rdi
  __int64 v29; // r10
  __int64 v30; // rbp
  __int64 v31; // r12
  __int64 v32; // rdx
  __int64 v33; // r13
  size_t v34; // rax
  __int64 v35; // rsi
  __int64 v36; // r9
  unsigned __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned int v40; // [rsp+0h] [rbp-80h]
  char *v41; // [rsp+0h] [rbp-80h]
  __int64 v42; // [rsp+0h] [rbp-80h]
  unsigned int v43; // [rsp+Ch] [rbp-74h]
  char *v44; // [rsp+10h] [rbp-70h]
  void *ptr; // [rsp+28h] [rbp-58h] BYREF
  __m128 v46; // [rsp+30h] [rbp-50h]
  unsigned __int64 v47; // [rsp+40h] [rbp-40h]

  v1 = *((char **)a1 + 1);
  v47 = __readfsqword(0x28u);
  v46 = 0;
  ptr = nullptr;
  if ( !v1 )
  {
    v3 = *(char **)a1;
    *a1 = 0.0;
    v4 = _mm_loadh_ps(a1 + 2);
    a1[2] = 0.0;
    ptr = v3;
    v46 = v4;
    if ( v3 )
      goto LABEL_14;
    return v47 - __readfsqword(0x28u);
  }
  v6 = (char *)qvector_reserve(&ptr, 0, v1, 56);
  v7 = *((char **)a1 + 1);
  v9 = *(char **)a1;
  ptr = v6;
  v16 = v46.m128_u64[0];
  v44 = &v9[56 * (_QWORD)v7];
  if ( v9 == v44 )
  {
    v8 = v46.m128_u64[1];
    goto LABEL_6;
  }
  v17 = v9;
  do
  {
    if ( v16 )
    {
      v6 = (char *)ptr;
      v23 = (char *)ptr + 56 * v16 - 56;
      while ( *(_QWORD *)v17 == *v23 )
      {
        v26 = v23[5];
        if ( v26 != *((_QWORD *)v17 + 5) )
          break;
        if ( v26 )
        {
          v27 = (_BYTE *)v23[4];
          v28 = *((_BYTE **)v17 + 4);
          v29 = 0;
          while ( ((*v28 ^ *v27) & 0xF) == 0 && (unsigned int)(*(_DWORD *)v28 ^ *(_DWORD *)v27) <= 0xF )
          {
            ++v29;
            v27 += 4;
            v28 += 4;
            if ( v26 == v29 )
              goto LABEL_34;
          }
          break;
        }
LABEL_34:
        v30 = 8LL * *((_QWORD *)v17 + 2);
        v31 = v30 >> 3;
        if ( v30 >> 3 )
        {
          v32 = v23[2];
          v33 = *((_QWORD *)v17 + 1);
          v34 = 0;
          v35 = v23[1];
          v36 = 8 * v32;
          v37 = v31 + v32;
          if ( v23[3] < v37 )
          {
            v42 = v36;
            v39 = qvector_reserve(v23 + 1, v35, v37, 8);
            v23[1] = v39;
            v35 = v39;
            v36 = v42;
            v34 = 8LL * v23[2] - v42;
          }
          v41 = (char *)(v36 + v35);
          memmove(&v41[v30], v41, v34);
          v38 = 0;
          if ( v30 )
          {
            do
            {
              *(_QWORD *)&v41[v38] = *(_QWORD *)(v33 + v38);
              v38 += 8;
            }
            while ( v30 != v38 );
          }
          v23[2] += v31;
          v16 = v46.m128_u64[0];
          goto LABEL_21;
        }
        v17 += 56;
        if ( v44 == v17 )
          goto LABEL_5;
      }
    }
    v24 = *((_QWORD *)v17 + 2);
    v25 = nullptr;
    v40 = *(_DWORD *)v17;
    v43 = *((_DWORD *)v17 + 1);
    if ( v24 )
    {
      v25 = (void *)qalloc_or_throw(8 * v24);
      v19 = nullptr;
      memcpy(v25, *((const void **)v17 + 1), 8 * v24);
      v18 = *((_QWORD *)v17 + 5);
      if ( v18 )
      {
LABEL_27:
        v19 = (void *)qalloc_or_throw(4 * v18);
        memcpy(v19, *((const void **)v17 + 4), 4 * v18);
      }
    }
    else
    {
      v18 = *((_QWORD *)v17 + 5);
      v19 = nullptr;
      if ( v18 )
        goto LABEL_27;
    }
    v20 = v46.m128_u64[0];
    v21 = (char *)ptr;
    if ( v46.m128_u64[1] < v46.m128_u64[0] + 1 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v46.m128_u64[0] + 1, 56);
      v20 = v46.m128_u64[0];
      v21 = (char *)ptr;
    }
    v22 = &v21[56 * v20];
    *(_QWORD *)v22 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v40), _mm_cvtsi32_si128(v43)).m128i_u64[0];
    *((_QWORD *)v22 + 1) = v25;
    *((__m128i *)v22 + 1) = _mm_unpacklo_epi64((__m128i)v24, (__m128i)v24);
    *((_QWORD *)v22 + 4) = v19;
    *(__m128i *)(v22 + 40) = _mm_unpacklo_epi64((__m128i)v18, (__m128i)v18);
    v16 = ++v46.m128_u64[0];
LABEL_21:
    v17 += 56;
  }
  while ( v44 != v17 );
  v6 = (char *)ptr;
LABEL_5:
  v7 = *((char **)a1 + 1);
  v8 = v46.m128_u64[1];
  v9 = *(char **)a1;
LABEL_6:
  *(_QWORD *)a1 = v6;
  v3 = v9;
  v10 = _mm_loadh_ps(a1 + 2);
  *((_QWORD *)a1 + 1) = v16;
  *((_QWORD *)a1 + 2) = v8;
  ptr = v9;
  v46 = v10;
  if ( v9 )
  {
    if ( v7 )
    {
      v11 = 0;
      for ( i = nullptr; i != v7; ++i )
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
    v46.m128_u64[0] = 0;
    qfree(v3);
  }
  return v47 - __readfsqword(0x28u);
}
