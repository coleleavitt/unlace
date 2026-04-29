const __m128i *__fastcall sub_3A45F0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const __m128i *a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  __int64 v12; // r14
  __int64 v13; // rdx
  __int128 v14; // xmm1
  __int64 v15; // rbp
  __int64 v16; // rbx
  _QWORD *v17; // r12
  __int64 v18; // r15
  __m128i v19; // xmm0
  __int64 v20; // rdi
  const __m128i *v21; // rax
  const __m128i *v22; // roff
  __m128 v23; // xmm2
  const __m128i *v24; // rcx
  __m128i v25; // xmm3
  unsigned __int64 v26; // xmm6_8
  __int64 v27; // r15
  __int128 v28; // xmm1
  __int64 v29; // rbp
  __m128i v30; // xmm0
  __int64 v31; // rdi
  __int64 v32; // r12
  __int64 v33; // rdi
  const __m128i *result; // rax
  __m128i si128; // xmm5
  __int64 v36; // rbp
  __int64 v37; // rax
  _QWORD *v38; // rax
  __m128i v39; // [rsp+0h] [rbp-78h] BYREF
  __m128i v40; // [rsp+10h] [rbp-68h] BYREF
  __int64 v41; // [rsp+20h] [rbp-58h]
  const __m128i *v42; // [rsp+28h] [rbp-50h]
  __m128i v43[4]; // [rsp+30h] [rbp-48h] BYREF

  v42 = a4;
  v41 = a2;
  v40.m128i_i64[0] = a3;
  if ( a2 >= (a3 - 1) / 2 )
  {
    v15 = v41;
    v16 = a1 + 40 * v41;
  }
  else
  {
    v12 = (a3 - 1) / 2;
    v13 = a2;
    v14 = 0;
    while ( 1 )
    {
      v15 = 2 * (v13 + 1);
      v16 = a1 + 80 * (v13 + 1);
      if ( *(_QWORD *)(v16 + 8) < *(_QWORD *)(v16 - 32) )
      {
        --v15;
        v16 = a1 + 40 * v15;
      }
      v17 = (_QWORD *)(a1 + 40 * v13);
      *v17 = *(_QWORD *)v16;
      v17[1] = *(_QWORD *)(v16 + 8);
      v18 = *(_QWORD *)(v16 + 16);
      v19 = _mm_loadu_si128((const __m128i *)(v16 + 24));
      *(_QWORD *)(v16 + 16) = 0;
      *(_OWORD *)(v16 + 24) = v14;
      v20 = v17[2];
      if ( v20 )
      {
        v17[3] = 0;
        v39 = v19;
        qfree(v20);
        v19 = _mm_load_si128(&v39);
        v14 = 0;
      }
      v17[2] = v18;
      *(__m128i *)(v17 + 3) = v19;
      if ( v15 >= v12 )
        break;
      v13 = v15;
    }
  }
  if ( (v40.m128i_i8[0] & 1) == 0 && (v40.m128i_i64[0] - 2) / 2 == v15 )
  {
    v36 = v15 + 1;
    v37 = 10 * v36;
    v15 = 2 * v36 - 1;
    v38 = (_QWORD *)(a1 + 8 * v37 - 40);
    *(_QWORD *)v16 = *v38;
    *(_QWORD *)(v16 + 8) = v38[1];
    sub_3A33D0((_QWORD *)(v16 + 16), v38 + 2);
    v16 = a1 + 40 * v15;
  }
  v21 = v42;
  v22 = v42;
  v23 = (__m128)_mm_loadu_si128(v42);
  v24 = (const __m128i *)v42[1].m128i_i64[0];
  v42[1].m128i_i64[0] = 0;
  v25 = _mm_loadu_si128((const __m128i *)((char *)v22 + 24));
  *(const __m128i *)((char *)&v21[1] + 8) = 0;
  v26 = _mm_movehl_ps(a11, v23).m128_u64[0];
  v42 = v24;
  v40 = (__m128i)v23;
  v43[0] = v25;
  v27 = (v15 - 1) / 2;
  if ( v15 > v41 )
  {
    v28 = 0;
    while ( 1 )
    {
      v32 = a1 + 40 * v27;
      v16 = a1 + 40 * v15;
      if ( *(_QWORD *)(v32 + 8) >= v26 )
        break;
      *(_QWORD *)v16 = *(_QWORD *)v32;
      *(_QWORD *)(v16 + 8) = *(_QWORD *)(v32 + 8);
      v29 = *(_QWORD *)(v32 + 16);
      *(_QWORD *)(v32 + 16) = 0;
      v30 = _mm_loadu_si128((const __m128i *)(v32 + 24));
      *(_OWORD *)(v32 + 24) = v28;
      v31 = *(_QWORD *)(v16 + 16);
      if ( v31 )
      {
        *(_QWORD *)(v16 + 24) = 0;
        v39 = v30;
        qfree(v31);
        v30 = _mm_load_si128(&v39);
        v28 = 0;
      }
      *(_QWORD *)(v16 + 16) = v29;
      v15 = v27;
      *(__m128i *)(v16 + 24) = v30;
      if ( v41 >= v27 )
      {
        v16 = a1 + 40 * v27;
        break;
      }
      v27 = (v27 - 1) / 2;
    }
  }
  v33 = *(_QWORD *)(v16 + 16);
  *(__m128i *)v16 = _mm_load_si128(&v40);
  if ( v33 )
  {
    *(_QWORD *)(v16 + 24) = 0;
    qfree(v33);
  }
  result = v42;
  si128 = _mm_load_si128(v43);
  *(_QWORD *)(v16 + 16) = v42;
  *(__m128i *)(v16 + 24) = si128;
  return result;
}
