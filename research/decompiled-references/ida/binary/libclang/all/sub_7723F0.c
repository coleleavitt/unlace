__m128i *__fastcall sub_7723F0(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __m128i *v11; // rbx
  __int64 v12; // rbp
  __m128i *v13; // rdi
  signed __int64 v14; // rcx
  __m128i *result; // rax
  unsigned __int64 v16; // rdx
  const __m128i *v17; // r12
  __int64 v18; // rcx
  __int64 v19; // rsi
  bool v20; // cf
  __int64 v21; // rdi
  int v22[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v22[0] = a2;
  v9 = sub_771CC0(a1, v22);
  v10 = *(unsigned int *)(v9 + 8);
  v11 = *(__m128i **)v9;
  v12 = v9;
  v13 = (__m128i *)(*(_QWORD *)v9 + 24 * v10);
  v14 = 0xAAAAAAAAAAAAAAABLL * ((24 * v10) >> 3);
  if ( !(v14 >> 2) )
  {
    result = *(__m128i **)v9;
LABEL_22:
    switch ( v14 )
    {
      case 2LL:
        v18 = a7;
        break;
      case 3LL:
        v18 = a7;
        if ( result->m128i_i64[0] == a7 && result->m128i_i32[2] == a8 && result[1].m128i_i64[0] == a9 )
          goto LABEL_10;
        result = (__m128i *)((char *)result + 24);
        break;
      case 1LL:
        v18 = a7;
LABEL_28:
        if ( result->m128i_i64[0] == v18 && result->m128i_i32[2] == a8 && result[1].m128i_i64[0] == a9 )
          goto LABEL_10;
LABEL_25:
        v16 = v10 + 1;
        v17 = (const __m128i *)&a7;
        if ( *(unsigned int *)(v12 + 12) >= v16 )
        {
LABEL_26:
          *v13 = _mm_loadu_si128(v17);
          result = (__m128i *)v17[1].m128i_i64[0];
          v13[1].m128i_i64[0] = (__int64)result;
          ++*(_DWORD *)(v12 + 8);
          return result;
        }
        v19 = v12 + 16;
        if ( &a7 < (__int64 *)v11 )
        {
          v21 = v12;
        }
        else
        {
          v20 = &a7 < (__int64 *)v13;
          v21 = v12;
          if ( v20 )
          {
            sub_25D6060(v12, v19, v16, 24);
            v17 = (const __m128i *)(*(_QWORD *)v12 + (char *)&a7 - (char *)v11);
            v13 = (__m128i *)(*(_QWORD *)v12 + 24LL * *(unsigned int *)(v12 + 8));
            goto LABEL_26;
          }
        }
        sub_25D6060(v21, v19, v16, 24);
        v13 = (__m128i *)(*(_QWORD *)v12 + 24LL * *(unsigned int *)(v12 + 8));
        goto LABEL_26;
      default:
        goto LABEL_25;
    }
    if ( v18 == result->m128i_i64[0] && result->m128i_i32[2] == a8 && result[1].m128i_i64[0] == a9 )
      goto LABEL_10;
    result = (__m128i *)((char *)result + 24);
    goto LABEL_28;
  }
  result = *(__m128i **)v9;
  while ( result->m128i_i64[0] != a7 || result->m128i_i32[2] != a8 || result[1].m128i_i64[0] != a9 )
  {
    if ( a7 == result[1].m128i_i64[1] && a8 == result[2].m128i_i32[0] && result[2].m128i_i64[1] == a9 )
    {
      result = (__m128i *)((char *)result + 24);
      break;
    }
    if ( a7 == result[3].m128i_i64[0] && a8 == result[3].m128i_i32[2] && result[4].m128i_i64[0] == a9 )
    {
      result += 3;
      break;
    }
    if ( a7 == result[4].m128i_i64[1] && a8 == result[5].m128i_i32[0] && result[5].m128i_i64[1] == a9 )
    {
      result = (__m128i *)((char *)result + 72);
      break;
    }
    result += 6;
    if ( result == &v11[6 * (v14 >> 2)] )
    {
      v14 = 0xAAAAAAAAAAAAAAABLL * (((char *)v13 - (char *)result) >> 3);
      goto LABEL_22;
    }
  }
LABEL_10:
  if ( v13 == result )
    goto LABEL_25;
  return result;
}

