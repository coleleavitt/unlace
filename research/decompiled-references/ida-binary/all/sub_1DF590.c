__int64 __fastcall sub_1DF590(unsigned int *a1, signed int *a2, __int64 a3)
{
  __int64 result; // rax
  signed int *i; // r13
  __int64 v7; // rbx
  __int64 v8; // rax
  signed int v9; // ecx
  signed int *v10; // rbx
  unsigned int *v11; // rax
  signed int v12; // edx
  signed int v13; // esi
  signed int v14; // esi
  signed int v15; // edi
  __m128i v16; // xmm2
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  signed int *v19; // rsi
  signed int v20; // edi
  __m128i v21; // xmm3
  signed int v22; // ecx
  signed int v23; // edx
  signed int v24; // ecx
  signed int v25; // edx
  signed int v26; // eax
  signed int *j; // rax
  signed int v28; // esi
  __int64 v29; // rax
  unsigned int v30; // edx
  signed int v31; // esi
  signed int v32; // edi
  signed int v33; // eax
  __m128i v34; // xmm0
  __int64 v35; // rdx
  unsigned int v36; // ecx
  __int64 k; // rbp
  signed int *v38; // rax
  signed int *v39; // r13
  unsigned __int64 v40; // rcx
  __int64 v41; // rbx
  int v42; // r8d

  result = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 <= 192 )
    return result;
  for ( i = a2; ; i = v10 )
  {
    v7 = 0xAAAAAAAAAAAAAAABLL * (result >> 2);
    v8 = v7 >> 1;
    if ( !a3 )
      break;
    v9 = a1[3];
    --a3;
    v10 = (signed int *)(a1 + 3);
    v11 = &a1[3 * v8];
    v12 = *v11;
    if ( v9 < (int)*v11
      || v9 <= v12 && ((v13 = v11[1], (int)a1[4] < v13) || (int)a1[4] <= v13 && (int)a1[5] < (int)v11[2]) )
    {
      v31 = *(i - 3);
      if ( v12 < v31
        || v12 <= v31 && ((v32 = *(i - 2), (int)v11[1] < v32) || (int)v11[1] <= v32 && (int)v11[2] < *(i - 1)) )
      {
LABEL_51:
        v35 = *(_QWORD *)a1;
        *(_QWORD *)a1 = *(_QWORD *)v11;
        v36 = v11[2];
        *(_QWORD *)v11 = v35;
        LODWORD(v35) = a1[2];
        a1[2] = v36;
        v11[2] = v35;
        goto LABEL_15;
      }
      if ( v9 >= v31 )
      {
        if ( v9 > v31 || (v33 = *(i - 2), (int)a1[4] >= v33) && ((int)a1[4] > v33 || (int)a1[5] >= *(i - 1)) )
        {
          v34 = _mm_unpacklo_epi64(
                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(a1[5]), _mm_cvtsi32_si128(*a1)),
                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(a1[1]), _mm_cvtsi32_si128(a1[2])));
          *(_QWORD *)a1 = *(_QWORD *)(a1 + 3);
          *(__m128i *)(a1 + 2) = v34;
          goto LABEL_15;
        }
      }
      goto LABEL_36;
    }
    v14 = *(i - 3);
    if ( v9 >= v14 )
    {
      if ( v9 > v14 || (v15 = *(i - 2), (int)a1[4] >= v15) && ((int)a1[4] > v15 || (int)a1[5] >= *(i - 1)) )
      {
        if ( v12 >= v14 )
        {
          if ( v12 > v14 )
            goto LABEL_51;
          v28 = v11[1];
          if ( *(i - 2) <= v28 && (*(i - 2) < v28 || (int)v11[2] >= *(i - 1)) )
            goto LABEL_51;
        }
LABEL_36:
        v29 = *(_QWORD *)a1;
        *(_QWORD *)a1 = *(_QWORD *)(i - 3);
        v30 = *(i - 1);
        *(_QWORD *)(i - 3) = v29;
        LODWORD(v29) = a1[2];
        a1[2] = v30;
        *(i - 1) = v29;
        goto LABEL_15;
      }
    }
    v16 = _mm_cvtsi32_si128(*a1);
    v17 = _mm_cvtsi32_si128(a1[5]);
    v18 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a1[1]), _mm_cvtsi32_si128(a1[2]));
    *(_QWORD *)a1 = *(_QWORD *)(a1 + 3);
    *(__m128i *)(a1 + 2) = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v17, v16), v18);
LABEL_15:
    v19 = i;
    while ( 1 )
    {
      v24 = *a1;
      while ( 1 )
      {
        v25 = *v10;
        if ( *v10 >= v24 )
        {
          if ( v25 > v24 )
            break;
          v26 = a1[1];
          if ( v10[1] >= v26 && (v10[1] > v26 || v10[2] >= (int)a1[2]) )
            break;
        }
        v10 += 3;
      }
      for ( j = v19 - 3; ; j -= 3 )
      {
        v19 = j;
        if ( v24 >= *j )
        {
          if ( v24 > *j )
            break;
          v20 = a1[1];
          if ( j[1] <= v20 && (j[1] < v20 || (int)a1[2] >= j[2]) )
            break;
        }
      }
      if ( v10 >= j )
        break;
      v21 = _mm_cvtsi32_si128(v10[1]);
      v10 += 3;
      *(_QWORD *)(v10 - 3) = *(_QWORD *)j;
      v22 = j[2];
      *(_QWORD *)j = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v25), v21).m128i_u64[0];
      v23 = *(v10 - 1);
      *(v10 - 1) = v22;
      j[2] = v23;
    }
    sub_1DF590(v10, i, a3);
    result = (char *)v10 - (char *)a1;
    if ( (char *)v10 - (char *)a1 <= 192 )
      return result;
  }
  for ( k = v8 - 1; ; --k )
  {
    sub_1DF3E0((__int64)a1, k, v7, *(_QWORD *)&a1[3 * k], a1[3 * k + 2]);
    if ( !k )
      break;
  }
  v38 = i;
  v39 = i - 3;
  result = (char *)v38 - (char *)a1;
  if ( result > 12 )
  {
    do
    {
      v40 = *(_QWORD *)v39;
      v41 = (char *)v39 - (char *)a1;
      v42 = v39[2];
      v39 -= 3;
      *(_QWORD *)(v39 + 3) = *(_QWORD *)a1;
      v39[5] = a1[2];
      result = (__int64)sub_1DF3E0((__int64)a1, 0, 0xAAAAAAAAAAAAAAABLL * (v41 >> 2), v40, v42);
    }
    while ( v41 > 12 );
  }
  return result;
}
