unsigned __int64 *__fastcall sub_29EEF0(unsigned __int64 **a1)
{
  unsigned __int64 *result; // rax
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // r12

  result = *a1;
  if ( !*a1 )
    goto LABEL_13;
  v2 = *result;
  if ( !a1[1] )
  {
    *result = *result & 3 | (unsigned __int64)result & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
    **a1 &= ~1uLL;
    result = *a1;
    **a1 |= 2u;
    return result;
  }
  v3 = v2 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)(v2 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
  {
    if ( (**(_BYTE **)(v3 + 8) & 2) != 0 )
    {
      if ( (**(_BYTE **)(v3 + 16) & 2) != 0 )
        goto LABEL_15;
    }
    else
    {
      sub_29F320();
      if ( (**(_BYTE **)(v3 + 16) & 2) != 0 )
        goto LABEL_8;
    }
    sub_29F320();
LABEL_8:
    if ( (*(_BYTE *)v3 & 2) != 0 )
    {
LABEL_9:
      if ( v2 > 3 )
        qfree(v2 & 0xFFFFFFFFFFFFFFFCLL);
      result = *a1;
      v2 = **a1;
      goto LABEL_12;
    }
LABEL_15:
    sub_29EFF0(v3 + 32);
    *(_QWORD *)v3 |= 2uLL;
    goto LABEL_9;
  }
LABEL_12:
  *result = v2 & 3 | (unsigned __int64)result & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
  **a1 &= ~1uLL;
  result = *a1;
  **a1 |= 2u;
LABEL_13:
  a1[1] = nullptr;
  return result;
}
