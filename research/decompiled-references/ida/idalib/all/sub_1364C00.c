unsigned int *__fastcall sub_1364C00(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  __int64 v5; // rbp
  __int64 v6; // r10
  __int64 v7; // r9
  unsigned int *v8; // r11
  unsigned int *result; // rax
  unsigned int v10; // r12d
  unsigned int v11; // r13d
  unsigned int v12; // r12d
  unsigned int v13; // r13d
  _QWORD *v14; // r10
  unsigned int v15; // r10d
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int v18; // edx
  _QWORD *v19; // r9
  unsigned int *v20; // rdx
  unsigned int v21; // [rsp+0h] [rbp-34h]
  unsigned __int64 v22; // [rsp+4h] [rbp-30h]

  v5 = (a3 - 1) / 2;
  if ( a2 < v5 )
  {
    v6 = a2;
    while ( 1 )
    {
      v7 = 2 * (v6 + 1) - 1;
      v8 = (unsigned int *)(a1 + 32 * (v6 + 1));
      result = (unsigned int *)(a1 + 16 * v7);
      v10 = *result;
      if ( *v8 >= *result )
      {
        if ( *v8 != v10 )
        {
          if ( *v8 <= v10 )
          {
            v11 = v8[1];
            v12 = result[1];
LABEL_6:
            if ( v11 <= v12 )
            {
              v13 = result[2];
              if ( v8[2] < v13 || v8[2] == v13 && v8[3] < result[3] )
                goto LABEL_8;
            }
          }
          result = (unsigned int *)(a1 + 32 * (v6 + 1));
          v7 = 2 * (v6 + 1);
          goto LABEL_8;
        }
        v11 = v8[1];
        v12 = result[1];
        if ( v11 >= v12 )
          goto LABEL_6;
      }
LABEL_8:
      v14 = (_QWORD *)(a1 + 16 * v6);
      *v14 = *(_QWORD *)result;
      v14[1] = *((_QWORD *)result + 1);
      v6 = v7;
      if ( v7 >= v5 )
      {
        if ( (a3 & 1) != 0 )
          goto LABEL_10;
        goto LABEL_20;
      }
    }
  }
  result = (unsigned int *)(a1 + 16 * a2);
  if ( (a3 & 1) != 0 )
  {
    v21 = a5;
    v15 = a4;
    v16 = HIDWORD(a4);
    v22 = HIDWORD(a5);
    goto LABEL_24;
  }
  v7 = a2;
LABEL_20:
  if ( (a3 - 2) / 2 == v7 )
  {
    v7 = 2 * v7 + 1;
    v20 = (unsigned int *)(a1 + 16 * v7);
    *(_QWORD *)result = *(_QWORD *)v20;
    *((_QWORD *)result + 1) = *((_QWORD *)v20 + 1);
    result = v20;
  }
LABEL_10:
  v21 = a5;
  v15 = a4;
  v22 = HIDWORD(a5);
  v16 = HIDWORD(a4);
  v17 = (v7 - 1) / 2;
  if ( v7 > a2 )
  {
    while ( 1 )
    {
      result = (unsigned int *)(a1 + 16 * v17);
      if ( v15 > *result )
        goto LABEL_16;
      if ( v15 == *result )
      {
        v18 = result[1];
        if ( (unsigned int)v16 > v18 )
          goto LABEL_16;
      }
      else
      {
        if ( v15 < *result )
          goto LABEL_23;
        v18 = result[1];
      }
      if ( (unsigned int)v16 < v18 || v21 <= result[2] && (v21 != result[2] || result[3] >= (unsigned int)v22) )
      {
LABEL_23:
        result = (unsigned int *)(a1 + 16 * v7);
        break;
      }
LABEL_16:
      v19 = (_QWORD *)(a1 + 16 * v7);
      *v19 = *(_QWORD *)result;
      v19[1] = *((_QWORD *)result + 1);
      v7 = v17;
      if ( a2 >= v17 )
        break;
      v17 = (v17 - 1) / 2;
    }
  }
LABEL_24:
  *(__m128i *)result = _mm_unpacklo_epi64(
                         _mm_unpacklo_epi32(_mm_cvtsi32_si128(v15), _mm_cvtsi32_si128(v16)),
                         _mm_unpacklo_epi32(_mm_cvtsi32_si128(v21), _mm_cvtsi32_si128(v22)));
  return result;
}
