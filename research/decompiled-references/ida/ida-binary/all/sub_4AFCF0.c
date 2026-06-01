__int64 __fastcall sub_4AFCF0(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // r14
  unsigned __int16 *i; // r12
  __m128i v9; // xmm0
  unsigned __int16 *v10; // r9
  unsigned __int16 *v11; // rbx
  unsigned __int16 v12; // di
  unsigned __int16 v13; // r8
  unsigned __int16 epi16; // ax
  unsigned __int16 v15; // dx
  __m128i v16; // xmm1
  unsigned __int16 v17; // cx
  unsigned __int16 v18; // si
  unsigned __int16 *v19; // rax
  __int64 j; // rbx
  unsigned __int16 v21; // cx

  result = (__int64)a2 - a1;
  if ( (__int64)a2 - a1 > 32 )
  {
    v4 = result >> 2;
    v5 = a3;
    v6 = ((__int64)a2 - a1) >> 1;
    for ( i = a2; v5; v6 = ((__int64)v11 - a1) >> 1 )
    {
      v9 = _mm_cvtsi32_si128(*(_DWORD *)a1);
      v10 = (unsigned __int16 *)(a1 + 2 * v4);
      --v5;
      v11 = (unsigned __int16 *)(a1 + 2);
      v12 = *v10;
      v13 = *(i - 1);
      epi16 = _mm_extract_epi16(v9, 1);
      v15 = _mm_extract_epi16(v9, 0);
      v16 = _mm_shufflelo_epi16(v9, 225);
      v17 = epi16;
      v18 = v15;
      if ( epi16 >= *v10 )
      {
        if ( epi16 >= v13 )
        {
          if ( v12 >= v13 )
          {
LABEL_25:
            *(_WORD *)a1 = v12;
            *v10 = v15;
            v18 = *(_WORD *)(a1 + 2);
            v17 = *(_WORD *)a1;
            v15 = *(i - 1);
            goto LABEL_7;
          }
LABEL_16:
          *(_WORD *)a1 = v13;
          *(i - 1) = v15;
          v17 = *(_WORD *)a1;
          v18 = *(_WORD *)(a1 + 2);
          goto LABEL_7;
        }
      }
      else
      {
        if ( v12 < v13 )
          goto LABEL_25;
        if ( epi16 < v13 )
          goto LABEL_16;
      }
      *(_DWORD *)a1 = _mm_cvtsi128_si32(v16);
      v15 = *(i - 1);
LABEL_7:
      v19 = i;
      while ( 1 )
      {
        while ( v18 < v17 )
        {
          v18 = v11[1];
          ++v11;
        }
        for ( --v19; v17 < v15; --v19 )
          v15 = *(v19 - 1);
        if ( v11 >= v19 )
          break;
        *v11++ = v15;
        v15 = *(v19 - 1);
        *v19 = v18;
        v18 = *v11;
        v17 = *(_WORD *)a1;
      }
      sub_4AFCF0(v11, i, v5);
      result = (__int64)v11 - a1;
      if ( (__int64)v11 - a1 <= 32 )
        return result;
      i = v11;
      v4 = result >> 2;
    }
    for ( j = v4 - 1; ; --j )
    {
      sub_4AFA00(a1, j, v6, *(_WORD *)(a1 + 2 * j));
      if ( !j )
        break;
    }
    for ( result = (__int64)i - a1; (__int64)i - a1 > 2; result = sub_4AFA00(a1, 0, ((__int64)i - a1) >> 1, v21) )
    {
      v21 = *--i;
      *i = *(_WORD *)a1;
    }
  }
  return result;
}
