__int64 __fastcall sub_1504FB0(__int64 *a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // rbp
  __int64 result; // rax
  int v5; // ebx
  unsigned int v8; // r14d
  __int64 v9; // rdi
  __m128i v10; // xmm0
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __m128i v13; // xmm0
  unsigned __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 *v16; // rcx
  int v17; // ebx
  unsigned __int64 v18; // rdx
  __m128i v19; // xmm0
  __m128i v20; // xmm0
  unsigned __int64 v21; // rsi
  __m128i v22[4]; // [rsp+8h] [rbp-40h] BYREF

  v3 = -(__int64)a3;
  *a1 = 1;
  if ( (unsigned int)a2 <= 0x39 )
  {
    result = 2 * ((a2 << 57) | v3 & ~(-1LL << a2)) + 1;
    *a1 = result;
    return result;
  }
  v5 = a2;
  result = operator new(0x48u);
  v8 = (unsigned int)(a2 + 63) >> 6;
  v9 = result + 16;
  *(_QWORD *)(result + 8) = 0x600000000LL;
  *(_QWORD *)result = result + 16;
  if ( v8 > 6 )
  {
    v22[0].m128i_i64[0] = result;
    sub_2237220(result, result + 16, v8, 8);
    result = v22[0].m128i_i64[0];
    v18 = 0;
    v22[0].m128i_i64[0] = v3;
    v19 = _mm_loadl_epi64(v22);
    v9 = *(_QWORD *)result;
    v12 = (((unsigned __int64)v8 - 2) >> 1) + 1;
    v20 = _mm_unpacklo_epi64(v19, v19);
    do
    {
      v21 = v18++;
      *(__m128i *)(v9 + 16 * v21) = v20;
    }
    while ( v12 > v18 );
  }
  else
  {
    if ( !v8 )
      goto LABEL_10;
    if ( v8 == 1 )
    {
      v16 = (__int64 *)(result + 16);
      goto LABEL_9;
    }
    v22[0].m128i_i64[0] = v3;
    v10 = _mm_loadl_epi64(v22);
    v11 = 0;
    v12 = (((unsigned __int64)v8 - 2) >> 1) + 1;
    v13 = _mm_unpacklo_epi64(v10, v10);
    do
    {
      v14 = v11++;
      *(__m128i *)(result + 16 * v14 + 16) = v13;
    }
    while ( v12 > v11 );
  }
  v15 = 2 * v12;
  v16 = (__int64 *)(v9 + 16 * v12);
  if ( v8 != v15 )
LABEL_9:
    *v16 = v3;
LABEL_10:
  *(_DWORD *)(result + 8) = v8;
  *(_DWORD *)(result + 64) = v5;
  if ( a3 )
  {
    v17 = v5 & 0x3F;
    if ( v17 )
      *(_QWORD *)(v9 + 8LL * v8 - 8) &= ~(-1LL << v17);
  }
  *a1 = result;
  return result;
}
