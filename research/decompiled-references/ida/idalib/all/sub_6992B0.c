unsigned __int64 __fastcall sub_6992B0(__int64 a1, __int64 *a2, char a3)
{
  void *v5; // r12
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  __m128i v10; // xmm0
  __int64 v11; // rax
  _BYTE *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  void *v17; // rbp
  __m128i v18; // xmm0
  __m128i v19; // xmm1
  __int64 v20; // rax
  void *v21; // rdi
  __m128i v22; // xmm0
  __m128i v23; // xmm1
  __int64 v24; // rax
  void *v25; // rdi
  __m128i v26; // xmm0
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __m128i v32; // [rsp+0h] [rbp-48h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __m128i v34; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v35; // [rsp+28h] [rbp-20h]

  v35 = __readfsqword(0x28u);
  if ( a3 == 84 )
  {
    ptr = nullptr;
    v34 = 0;
    ptr = (void *)qvector_reserve(&ptr, 0, 13, 1);
    v34.m128i_i64[0] = 13;
    strcpy((char *)ptr, "Base address");
    v5 = ptr;
    v6 = a2[1];
    v7 = *a2;
    v8 = a2[2];
    v9 = v6 + 1;
    if ( (unsigned __int64)&ptr < *a2 || (unsigned __int64)&ptr >= v7 + 24 * v8 )
    {
      if ( v8 < v9 )
      {
        v28 = qvector_reserve(a2, v7, v6 + 1, 24);
        *a2 = v28;
        v7 = v28;
        v5 = ptr;
        v6 = a2[1];
      }
      v10 = _mm_loadu_si128(&v34);
      v11 = v7 + 24 * v6;
      *(_QWORD *)v11 = v5;
      *(__m128i *)(v11 + 8) = v10;
      ++a2[1];
    }
    else
    {
      v22 = _mm_loadl_epi64(&v34);
      v23 = _mm_loadl_epi64((const __m128i *)&v34.m128i_u64[1]);
      ptr = nullptr;
      v34 = 0;
      if ( v8 < v9 )
      {
        v32.m128i_i64[1] = v23.m128i_i64[0];
        v32.m128i_i64[0] = v22.m128i_i64[0];
        v30 = qvector_reserve(a2, v7, v6 + 1, 24);
        *a2 = v30;
        v7 = v30;
        v6 = a2[1];
        v23 = _mm_loadl_epi64((const __m128i *)&v32.m128i_u64[1]);
        v22 = _mm_loadl_epi64(&v32);
      }
      v24 = v7 + 24 * v6;
      *(_QWORD *)v24 = v5;
      *(__m128i *)(v24 + 8) = _mm_unpacklo_epi64(v22, v23);
      v25 = ptr;
      ++a2[1];
      if ( v25 )
      {
        v34.m128i_i64[0] = 0;
        qfree(v25);
      }
    }
    v34 = 0;
    ptr = nullptr;
    v12 = (_BYTE *)qvector_reserve(&ptr, 0, 4, 1);
    ptr = v12;
    v34.m128i_i64[0] = 4;
    *(_WORD *)v12 = 29777;
    v12[2] = 121;
    *((_BYTE *)ptr + 3) = 0;
    v13 = a2[1];
    v14 = *a2;
    v15 = a2[2];
    v16 = v13 + 1;
    if ( (unsigned __int64)&ptr < *a2 || (unsigned __int64)&ptr >= v14 + 24 * v15 )
    {
      if ( v15 < v16 )
      {
        v29 = qvector_reserve(a2, v14, v13 + 1, 24);
        *a2 = v29;
        v14 = v29;
        v13 = a2[1];
      }
      v26 = _mm_loadu_si128(&v34);
      v27 = v14 + 24 * v13;
      *(_QWORD *)v27 = ptr;
      *(__m128i *)(v27 + 8) = v26;
      ++a2[1];
    }
    else
    {
      v17 = ptr;
      v18 = _mm_loadl_epi64(&v34);
      ptr = nullptr;
      v19 = _mm_loadl_epi64((const __m128i *)&v34.m128i_u64[1]);
      v34 = 0;
      if ( v15 < v16 )
      {
        v32.m128i_i64[1] = v19.m128i_i64[0];
        v32.m128i_i64[0] = v18.m128i_i64[0];
        v31 = qvector_reserve(a2, v14, v13 + 1, 24);
        *a2 = v31;
        v14 = v31;
        v13 = a2[1];
        v19 = _mm_loadl_epi64((const __m128i *)&v32.m128i_u64[1]);
        v18 = _mm_loadl_epi64(&v32);
      }
      v20 = v14 + 24 * v13;
      *(_QWORD *)v20 = v17;
      *(__m128i *)(v20 + 8) = _mm_unpacklo_epi64(v18, v19);
      v21 = ptr;
      ++a2[1];
      if ( v21 )
      {
        v34.m128i_i64[0] = 0;
        qfree(v21);
      }
    }
  }
  return v35 - __readfsqword(0x28u);
}
