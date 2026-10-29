__int64 __fastcall sub_9BC90(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rsi
  unsigned __int64 *v4; // rcx
  unsigned __int64 v5; // rcx

  result = a2 + ((__int64)(*a1 - a1[1]) >> 5);
  if ( result < 0 )
  {
    v3 = ~((unsigned __int64)~result >> 4);
    goto LABEL_4;
  }
  if ( result > 15 )
  {
    v3 = result >> 4;
LABEL_4:
    v4 = (unsigned __int64 *)(a1[3] + 8 * v3);
    a1[3] = v4;
    v5 = *v4;
    result = 32 * (result - 16 * v3);
    *a1 = result + v5;
    *(__m128i *)(a1 + 1) = _mm_unpacklo_epi64((__m128i)v5, (__m128i)(v5 + 512));
    return result;
  }
  *a1 += 32 * a2;
  return result;
}

