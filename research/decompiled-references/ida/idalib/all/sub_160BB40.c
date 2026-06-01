__int64 __fastcall sub_160BB40(__m128 *a1, unsigned __int64 *a2, __int64 a3, __int64 *a4)
{
  char *v5; // rbp
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rax
  __int64 result; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r10
  unsigned __int64 *v13; // r9
  __int64 v14; // r8
  unsigned __int64 *v15; // r11
  __int64 v16; // r8
  int v17; // esi
  __int64 v18; // rsi
  __int64 v19; // rsi
  __int64 v20; // rdi
  unsigned __int64 v21; // rsi
  __int64 v22; // r9
  __int64 *v23; // r10
  __int64 v24; // rsi
  __int64 v25; // xmm0_8
  __int64 *v26; // rbp
  __int64 v27; // r11
  __int64 v28; // r8
  int v29; // esi
  __int64 v30; // rax
  __int64 v31; // [rsp+8h] [rbp-50h] BYREF
  __int64 v32; // [rsp+10h] [rbp-48h] BYREF
  __int64 *v33; // [rsp+18h] [rbp-40h]
  __m128 v34; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v35; // [rsp+30h] [rbp-28h]
  unsigned __int64 v36; // [rsp+38h] [rbp-20h]

  v5 = (char *)a4 - a3;
  v6 = ((__int64)a4 - a3) >> 4;
  v7 = a1[1].m128_u64[0];
  if ( *a2 != v7 )
  {
    result = a1[3].m128_i64[0];
    if ( *a2 != result )
    {
      v9 = a2[1];
      v34.m128_u64[0] = *a2;
      v34.m128_u64[1] = v9;
      v35 = a2[2];
      v36 = a2[3];
      return sub_160AD30(a1, &v34, (__int64 *)a3, a4, v6);
    }
    v10 = a1[4].m128_i64[0];
    v11 = ((signed __int64)(a1[4].m128_u64[0] - result) >> 4) - 1;
    if ( v6 > v11 )
    {
      v33 = a4;
      v32 = a3;
      v31 = ((__int64)a4 - a3) >> 4;
      sub_160AC50(a1, v6 - v11);
      result = a1[3].m128_i64[0];
      v10 = a1[4].m128_i64[0];
      a4 = v33;
      a3 = v32;
      v6 = v31;
    }
    v12 = a1[3].m128_u64[1];
    v13 = (unsigned __int64 *)a1[4].m128_u64[1];
    v14 = ((__int64)(result - v12) >> 4) + v6;
    if ( v14 < 0 )
    {
      v18 = ~((unsigned __int64)~v14 >> 5);
    }
    else
    {
      if ( v14 <= 31 )
      {
        v31 = v10;
        v15 = v13;
        v32 = (__int64)&v5[result];
        goto LABEL_9;
      }
      v18 = v14 >> 5;
    }
    v15 = &v13[v18];
    v12 = *v15;
    v19 = *v15 + 16 * (v14 - 32 * v18);
    v31 = *v15 + 512;
    v32 = v19;
    if ( a4 == (__int64 *)a3 )
    {
LABEL_15:
      v32 = v12;
      a1[3] = _mm_loadh_ps((const double *)&v32);
      v31 = (__int64)v15;
      a1[4] = _mm_loadh_ps((const double *)&v31);
      return result;
    }
    while ( 2 )
    {
      while ( 1 )
      {
        v16 = *(_QWORD *)a3;
        v17 = *(_DWORD *)(a3 + 8);
        result += 16;
        a3 += 16;
        *(_QWORD *)(result - 16) = v16;
        *(_DWORD *)(result - 8) = v17;
        if ( result != v10 )
          break;
        result = v13[1];
        v10 = result + 512;
        if ( a4 == (__int64 *)a3 )
          goto LABEL_15;
        ++v13;
      }
LABEL_9:
      if ( a4 != (__int64 *)a3 )
        continue;
      goto LABEL_15;
    }
  }
  v20 = a1[1].m128_i64[1];
  v21 = (__int64)(v7 - v20) >> 4;
  if ( v6 > v21 )
  {
    v33 = a4;
    v32 = a3;
    v31 = ((__int64)a4 - a3) >> 4;
    sub_160AB70(a1, v6 - v21);
    v7 = a1[1].m128_u64[0];
    v20 = a1[1].m128_i64[1];
    a4 = v33;
    a3 = v32;
    v6 = v31;
    v21 = (__int64)(v7 - v20) >> 4;
  }
  v22 = a1[2].m128_i64[0];
  v23 = (__int64 *)a1[2].m128_u64[1];
  v24 = v21 - v6;
  if ( v24 < 0 )
  {
    v30 = ~((unsigned __int64)~v24 >> 5);
    goto LABEL_30;
  }
  if ( v24 > 31 )
  {
    v30 = v24 >> 5;
LABEL_30:
    v23 += v30;
    v20 = *v23;
    result = *v23 + 16 * (v24 - 32 * v30);
    v22 = *v23 + 512;
    v31 = result;
    v25 = result;
    goto LABEL_21;
  }
  result = v7 - 16 * v6;
  v31 = result;
  v25 = result;
LABEL_21:
  if ( a4 != (__int64 *)a3 )
  {
    v26 = v23;
    v27 = v22;
    result = v25;
    while ( 1 )
    {
      while ( 1 )
      {
        v28 = *(_QWORD *)a3;
        v29 = *(_DWORD *)(a3 + 8);
        result += 16;
        a3 += 16;
        *(_QWORD *)(result - 16) = v28;
        *(_DWORD *)(result - 8) = v29;
        if ( v27 == result )
          break;
        if ( a4 == (__int64 *)a3 )
          goto LABEL_25;
      }
      result = v26[1];
      v27 = result + 512;
      if ( a4 == (__int64 *)a3 )
        break;
      ++v26;
    }
  }
LABEL_25:
  v31 = v20;
  a1[1] = _mm_loadh_ps((const double *)&v31);
  v31 = (__int64)v23;
  a1[2] = _mm_loadh_ps((const double *)&v31);
  return result;
}
