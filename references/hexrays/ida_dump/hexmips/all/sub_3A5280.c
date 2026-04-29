__int64 __fastcall sub_3A5280(__int64 *a1, double a2, double a3, double a4, double a5, double a6, double a7, __m128 a8)
{
  __int64 *v8; // rbx
  __m128 v9; // xmm2
  __m128i v10; // xmm3
  __int64 v11; // r12
  unsigned __int64 v12; // xmm6_8
  __int128 v13; // xmm1
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rbp
  __m128i v17; // xmm0
  __int64 v18; // rax
  __int64 result; // rax
  __int64 v20; // rdi
  __m128i v21; // xmm4
  __m128i v22; // [rsp+0h] [rbp-58h] BYREF
  __m128i v23; // [rsp+10h] [rbp-48h] BYREF
  __m128i v24[3]; // [rsp+20h] [rbp-38h] BYREF

  v8 = a1;
  v9 = (__m128)_mm_loadu_si128((const __m128i *)a1);
  v10 = _mm_loadu_si128((const __m128i *)(a1 + 3));
  *(_OWORD *)(a1 + 3) = 0;
  v11 = a1[2];
  a1[2] = 0;
  v12 = _mm_movehl_ps(a8, v9).m128_u64[0];
  v24[0] = (__m128i)v9;
  v23 = v10;
  if ( v12 < *(a1 - 4) )
  {
    v8 = a1 - 5;
    v13 = 0;
    while ( 1 )
    {
      v14 = *v8;
      v15 = v8[7];
      v16 = v8[2];
      v17 = _mm_loadu_si128((const __m128i *)(v8 + 3));
      *(_OWORD *)(v8 + 3) = v13;
      v8[5] = v14;
      v18 = v8[1];
      v8[2] = 0;
      v8[6] = v18;
      if ( v15 )
      {
        v8[8] = 0;
        v22 = v17;
        qfree(v15);
        v17 = _mm_load_si128(&v22);
        v13 = 0;
      }
      v8[7] = v16;
      result = (__int64)(v8 - 5);
      *((__m128i *)v8 + 4) = v17;
      if ( v12 >= *(v8 - 4) )
        break;
      v8 -= 5;
    }
    v20 = v8[2];
    *(__m128i *)v8 = _mm_load_si128(v24);
    if ( v20 )
    {
      v8[3] = 0;
      result = qfree(v20);
    }
  }
  v21 = _mm_load_si128(&v23);
  v8[2] = v11;
  *(__m128i *)(v8 + 3) = v21;
  return result;
}
