__int64 __fastcall sub_21B6F20(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int32 a5)
{
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 *v10; // r14
  __int64 v11; // rbp
  __m128 v12; // xmm0
  __int64 v13; // r15
  __m128 *v14; // r13
  __int64 v15; // rsi
  __m128i v16; // xmm0
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  signed __int64 v20; // r13
  const void *v21; // r9
  __int64 v22; // r15
  __int64 *v23; // r14
  __int64 v24; // r13
  __m128 *v25; // r15
  __int64 v26; // rsi
  __m128i v27; // [rsp+8h] [rbp-70h] BYREF
  unsigned int v28; // [rsp+18h] [rbp-60h]
  unsigned int v29; // [rsp+1Ch] [rbp-5Ch]
  __m128 v30; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v31; // [rsp+30h] [rbp-48h]
  unsigned int v32; // [rsp+34h] [rbp-44h]
  __int32 v33; // [rsp+38h] [rbp-40h]

  v28 = a3;
  v30.m128_u64[0] = __PAIR64__(a4, a3);
  v29 = a4;
  v27.m128i_i32[2] = a5;
  v30.m128_i32[2] = a5;
  v8 = sub_21B6DA0(a1, (int *)&v30, 3);
  v9 = *(_QWORD *)(a1 + 8);
  v31 = a3;
  v32 = a4;
  v10 = (__int64 *)(v9 + 8LL * (unsigned int)v8);
  v11 = v9 + 8 * HIDWORD(v8);
  v33 = v27.m128i_i32[2];
  v27.m128i_i64[0] = v11;
  v12 = _mm_loadh_ps((const double *)v27.m128i_i64);
  v30 = v12;
  if ( v10 != (__int64 *)v11 )
  {
    v27.m128i_i64[0] = (__int64)&v30.m128_i64[1] + 4;
    do
    {
      v13 = *v10;
      v14 = &v30;
      if ( *v10 )
      {
        do
        {
          v15 = v14[1].m128_u32[0];
          if ( !(_DWORD)v15 )
            break;
          if ( (unsigned __int8)sub_21B9810(v13, v15) )
          {
            v27.m128i_i64[0] = v11;
            v12 = _mm_loadh_ps((const double *)v27.m128i_i64);
            goto LABEL_9;
          }
          v14 = (__m128 *)((char *)v14 + 4);
        }
        while ( v14 != (__m128 *)v27.m128i_i64[0] );
      }
      v30.m128_u64[0] = (unsigned __int64)++v10;
    }
    while ( (__int64 *)v11 != v10 );
    v27.m128i_i64[0] = v11;
    v16 = _mm_loadl_epi64(&v27);
    v12 = (__m128)_mm_unpacklo_epi64(v16, v16);
  }
LABEL_9:
  v30 = v12;
  v31 = v28;
  v32 = v29;
  v33 = v27.m128i_i32[2];
  result = a2 + 16;
  v27.m128i_i64[1] = a2 + 16;
LABEL_10:
  if ( (__int64 *)v11 != v10 )
  {
    v18 = *v10;
    v19 = *(_QWORD *)(*v10 + 16);
    if ( !v19 )
      v19 = *v10;
    *(_BYTE *)(v19 + 44) |= 1u;
    result = *(unsigned int *)(a2 + 8);
    v20 = 8LL * *(unsigned int *)(v18 + 56);
    v21 = *(const void **)(v18 + 48);
    v22 = v20 >> 3;
    if ( (v20 >> 3) + result > (unsigned __int64)*(unsigned int *)(a2 + 12) )
    {
      v27.m128i_i64[0] = *(_QWORD *)(v18 + 48);
      sub_2237220(a2, v27.m128i_i64[1], v22 + result, 8);
      result = *(unsigned int *)(a2 + 8);
      v21 = (const void *)v27.m128i_i64[0];
    }
    if ( v20 )
    {
      memcpy((void *)(*(_QWORD *)a2 + 8 * result), v21, v20);
      result = *(unsigned int *)(a2 + 8);
    }
    v23 = v10 + 1;
    *(_DWORD *)(a2 + 8) = result + v22;
    v30.m128_u64[0] = (unsigned __int64)v23;
    if ( v23 != (__int64 *)v11 )
    {
      result = (__int64)&v30.m128_i64[1] + 4;
      v27.m128i_i64[0] = (__int64)&v30.m128_i64[1] + 4;
      do
      {
        v24 = *v23;
        v25 = &v30;
        if ( *v23 )
        {
          do
          {
            v26 = v25[1].m128_u32[0];
            if ( !(_DWORD)v26 )
              break;
            result = sub_21B9810(v24, v26);
            if ( (_BYTE)result )
            {
              v10 = (__int64 *)v30.m128_u64[0];
              goto LABEL_10;
            }
            v25 = (__m128 *)((char *)v25 + 4);
          }
          while ( v25 != (__m128 *)v27.m128i_i64[0] );
        }
        v30.m128_u64[0] = (unsigned __int64)++v23;
      }
      while ( (__int64 *)v11 != v23 );
    }
  }
  return result;
}
