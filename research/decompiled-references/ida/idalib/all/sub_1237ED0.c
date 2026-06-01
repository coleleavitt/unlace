__int64 __fastcall sub_1237ED0(__m128 *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rcx
  __int64 *v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rdx
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rcx
  _QWORD *v10; // r8
  _QWORD *v11; // rsi
  __int64 v12; // r13
  _QWORD *v13; // r9
  __int64 *v14; // rdi
  __int64 v15; // rcx
  __m128 v16; // xmm0
  __int64 v17; // rcx
  _QWORD *v18; // rsi
  unsigned __int64 v19; // rax
  __int64 v20; // rdi
  _QWORD *v21; // r8
  __int64 v22; // rax
  __int64 v23; // xmm0_8
  __int64 *v24; // rbp
  _QWORD *v25; // r9
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rdx
  _QWORD *v29; // [rsp+0h] [rbp-38h] BYREF
  __int64 v30; // [rsp+8h] [rbp-30h]

  result = a1[3].m128_i64[0];
  v4 = a1[1].m128_u64[0];
  v5 = *(__int64 **)a2;
  v6 = 8LL * *(unsigned int *)(a2 + 8);
  v7 = a1[4].m128_i64[0];
  v8 = v6 >> 3;
  if ( result != v4 )
  {
    v9 = ((v7 - result) >> 3) - 1;
    if ( v8 > v9 )
    {
      sub_1237DF0(a1, v8 - v9);
      result = a1[3].m128_i64[0];
      v7 = a1[4].m128_i64[0];
    }
    v10 = (_QWORD *)a1[3].m128_u64[1];
    v11 = (_QWORD *)a1[4].m128_u64[1];
    v12 = ((result - (__int64)v10) >> 3) + v8;
    if ( v12 < 0 )
    {
      v17 = ~((unsigned __int64)~v12 >> 6);
    }
    else
    {
      if ( v12 <= 63 )
      {
        v30 = v7;
        v13 = v11;
        v29 = (_QWORD *)(result + v6);
LABEL_7:
        v14 = &v5[(unsigned __int64)v6 / 8];
        if ( v6 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v15 = *v5;
              result += 8;
              ++v5;
              *(_QWORD *)(result - 8) = v15;
              if ( v7 == result )
                break;
              if ( v5 == v14 )
                goto LABEL_10;
            }
            result = v11[1];
            v7 = result + 512;
            if ( v5 == v14 )
              break;
            ++v11;
          }
        }
LABEL_10:
        v29 = v10;
        v16 = _mm_loadh_ps((const double *)&v29);
        v29 = v13;
        a1[3] = v16;
        a1[4] = _mm_loadh_ps((const double *)&v29);
        return result;
      }
      v17 = v12 >> 6;
    }
    v13 = &v11[v17];
    v10 = (_QWORD *)*v13;
    v30 = *v13 + 512LL;
    v29 = &v10[v12 - (v17 << 6)];
    goto LABEL_7;
  }
  v18 = (_QWORD *)a1[1].m128_u64[1];
  v19 = (__int64)(v4 - (_QWORD)v18) >> 3;
  if ( v8 > v19 )
  {
    sub_1237D10(a1, v8 - v19);
    v4 = a1[1].m128_u64[0];
    v18 = (_QWORD *)a1[1].m128_u64[1];
    v19 = (__int64)(v4 - (_QWORD)v18) >> 3;
  }
  v20 = a1[2].m128_i64[0];
  v21 = (_QWORD *)a1[2].m128_u64[1];
  v22 = v19 - v8;
  if ( v22 < 0 )
  {
    v28 = ~((unsigned __int64)~v22 >> 6);
    goto LABEL_29;
  }
  if ( v22 > 63 )
  {
    v28 = v22 >> 6;
LABEL_29:
    v21 += v28;
    v18 = (_QWORD *)*v21;
    result = *v21 + 8 * (v22 - (v28 << 6));
    v20 = *v21 + 512LL;
    v29 = (_QWORD *)result;
    v23 = result;
    goto LABEL_20;
  }
  result = v4 - 8 * v8;
  v29 = (_QWORD *)result;
  v23 = result;
LABEL_20:
  if ( v6 )
  {
    v24 = &v5[(unsigned __int64)v6 / 8];
    v25 = v21;
    result = v23;
    v26 = v20;
    while ( 1 )
    {
      while ( 1 )
      {
        v27 = *v5;
        result += 8;
        ++v5;
        *(_QWORD *)(result - 8) = v27;
        if ( result == v26 )
          break;
        if ( v5 == v24 )
          goto LABEL_24;
      }
      result = v25[1];
      v26 = result + 512;
      if ( v5 == v24 )
        break;
      ++v25;
    }
  }
LABEL_24:
  v29 = v18;
  a1[1] = _mm_loadh_ps((const double *)&v29);
  v29 = v21;
  a1[2] = _mm_loadh_ps((const double *)&v29);
  return result;
}
