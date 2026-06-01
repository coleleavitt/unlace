unsigned __int64 __fastcall sub_1E78E0(__int64 *a1, unsigned __int64 *a2, __int64 *a3, __m128i *a4, __int64 a5)
{
  bool v8; // al
  _OWORD *v9; // rdx
  __int64 v10; // rsi
  __m128i v11; // xmm0
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r9
  __m128i *v16; // rsi
  __int8 v17; // al
  __int64 v18; // rax
  const __m128i *v19; // rbx
  __int64 v20; // r12
  __m128i *v21; // rdi
  __m128i *v22; // rcx
  __m128i v24; // xmm0
  unsigned __int64 v25; // rdx
  __m128i *v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rdx
  __m128i v29; // xmm0
  __m128i *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // r8
  __m128i *v34; // rsi
  __m128i *v35; // rdx
  __m128i v36; // xmm0
  __m128i *v37; // rsi
  __int64 v38; // rax
  __m128i v39; // [rsp+0h] [rbp-78h] BYREF
  __m128i v40; // [rsp+10h] [rbp-68h] BYREF
  bool v41; // [rsp+20h] [rbp-58h]
  __m128i v42; // [rsp+30h] [rbp-48h] BYREF
  bool v43; // [rsp+40h] [rbp-38h]
  unsigned __int64 v44; // [rsp+48h] [rbp-30h]

  v44 = __readfsqword(0x28u);
  v8 = 0;
  if ( a5 )
  {
    v9 = *(_OWORD **)a5;
    v10 = *(_QWORD *)a5 + 16LL * *(_QWORD *)(a5 + 8);
    if ( *(_QWORD *)a5 != v10 )
    {
      do
      {
        if ( *v9 - *a4 == 0 )
        {
          v8 = v10 != (_QWORD)v9;
          goto LABEL_7;
        }
        ++v9;
      }
      while ( (_OWORD *)v10 != v9 );
      v8 = 0;
    }
  }
LABEL_7:
  v11 = _mm_loadu_si128(a4);
  v12 = a2[1];
  v41 = v8;
  v13 = *a2;
  v14 = a2[2];
  v40 = v11;
  v15 = v12 + 1;
  if ( (unsigned __int64)&v40 >= v13 && (unsigned __int64)&v40 < v13 + 17 * v14 )
  {
    v43 = v8;
    v42 = v11;
    if ( v14 < v15 )
    {
      v32 = qvector_reserve(a2, v13, v12 + 1, 17);
      v12 = a2[1];
      *a2 = v32;
      v13 = v32;
    }
    v29 = _mm_load_si128(&v42);
    v30 = (__m128i *)(v13 + 17 * v12);
    v30[1].m128i_i8[0] = v43;
    *v30 = v29;
  }
  else
  {
    if ( v14 < v15 )
    {
      v31 = qvector_reserve(a2, v13, v12 + 1, 17);
      v12 = a2[1];
      *a2 = v31;
      v13 = v31;
    }
    v16 = (__m128i *)(17 * v12 + v13);
    v17 = v41;
    *v16 = _mm_load_si128(&v40);
    v16[1].m128i_i8[0] = v17;
  }
  ++a2[1];
  v18 = sub_1E7840(a1, a4);
  if ( v18 )
  {
    v19 = *(const __m128i **)v18;
    v20 = *(_QWORD *)v18 + 16LL * *(_QWORD *)(v18 + 8);
    if ( v20 != *(_QWORD *)v18 )
    {
      do
      {
        v21 = (__m128i *)(*a3 + 16 * a3[1]);
        if ( (__m128i *)*a3 == v21 )
          goto LABEL_21;
        v22 = (__m128i *)*a3;
        while ( *v22 - *(_OWORD *)v19 != 0 )
        {
          if ( v21 == ++v22 )
            goto LABEL_21;
        }
        if ( v21 == v22 )
        {
LABEL_21:
          v24 = _mm_loadu_si128(v19);
          v25 = a3[1] + 1;
          if ( a3[2] < v25 )
          {
            v26 = (__m128i *)*a3;
            v39 = v24;
            v27 = qvector_reserve(a3, v26, v25, 16);
            v28 = a3[1];
            v24 = _mm_load_si128(&v39);
            *a3 = v27;
            v21 = (__m128i *)(v27 + 16 * v28);
          }
          *v21 = v24;
          ++a3[1];
        }
        ++v19;
      }
      while ( (const __m128i *)v20 != v19 );
    }
  }
  else
  {
    v33 = a3[1];
    v34 = (__m128i *)(*a3 + 16 * v33);
    if ( (__m128i *)*a3 == v34 )
      goto LABEL_33;
    v35 = (__m128i *)*a3;
    while ( *v35 - *a4 != 0 )
    {
      if ( v34 == ++v35 )
        goto LABEL_33;
    }
    if ( v34 == v35 )
    {
LABEL_33:
      v36 = _mm_loadu_si128(a4);
      if ( a3[2] < (unsigned __int64)(v33 + 1) )
      {
        v37 = (__m128i *)*a3;
        v39 = v36;
        v38 = qvector_reserve(a3, v37, v33 + 1, 16);
        v36 = _mm_load_si128(&v39);
        *a3 = v38;
        v34 = (__m128i *)(16 * a3[1] + v38);
      }
      *v34 = v36;
      ++a3[1];
    }
  }
  return v44 - __readfsqword(0x28u);
}
