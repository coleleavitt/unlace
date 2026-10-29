__int64 __fastcall sub_4D7FB0(__int64 a1, __int64 *a2, __m128 a3)
{
  char *v3; // rdx
  __int64 *v4; // r14
  char v5; // al
  __int64 result; // rax
  __int64 v7; // rdx
  __m128i *v8; // rbx
  __int64 v9; // rbp
  __m128i *v10; // rcx
  unsigned __int64 v11; // rdx
  __m128i *v12; // r12
  __m128i v13; // xmm1
  const __m128i *v14; // rbx
  __int64 v15; // rax
  __m128i *v16; // rbp
  __m128i v17; // [rsp+0h] [rbp-58h] BYREF
  __m128i *v18; // [rsp+18h] [rbp-40h]

  v3 = &byte_2CA2050;
  v4 = &qword_2CA2060;
  v5 = byte_2CA2050;
  if ( a1 )
  {
    v5 = *(_BYTE *)(a1 + 40);
    v3 = (char *)(a1 + 40);
    v4 = (__int64 *)(a1 + 16);
  }
  if ( v5 )
    goto LABEL_4;
  *v3 = 1;
  sub_4D5C60(a1, nullptr, 1, a3);
  result = v4[1];
  v8 = (__m128i *)*v4;
  v9 = 16 * result;
  v10 = (__m128i *)(*v4 + 16 * result);
  v18 = v10;
  if ( v10 != v8 )
  {
    if ( v9 >> 4 )
    {
      _BitScanReverse64(&v11, v9 >> 4);
      sub_4D7D40(v8, v18, 2LL * (int)v11);
      if ( v9 > 256 )
      {
        v12 = v8 + 16;
        sub_4CDD30(v8, v8 + 16);
        do
        {
          v13 = _mm_loadu_si128(v12);
          v14 = v12;
          v17 = v13;
          while ( 1 )
          {
            v15 = v14[-1].m128i_i64[0];
            v16 = (__m128i *)v14--;
            if ( strcmp(*(const char **)(v13.m128i_i64[0] + 24), *(const char **)(v15 + 24)) >= 0 )
              break;
            v14[1] = _mm_loadu_si128(v14);
          }
          ++v12;
          *v16 = _mm_load_si128(&v17);
        }
        while ( v18 != v12 );
        goto LABEL_4;
      }
    }
    else
    {
      sub_4D7D40(v8, v10, -2);
    }
    sub_4CDD30(v8, v18);
LABEL_4:
    result = v4[1];
  }
  if ( a2 )
  {
    v7 = 0;
    if ( result )
      v7 = *v4;
    *a2 = v7;
    return v4[1];
  }
  return result;
}

