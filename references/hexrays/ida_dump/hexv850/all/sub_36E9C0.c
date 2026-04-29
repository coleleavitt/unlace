unsigned __int64 *__fastcall sub_36E9C0(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 *result; // rax
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r12
  _BYTE *v5; // rdi
  _BYTE *v6; // rdi

  v1 = *(_QWORD *)(a1 + 1128);
  result = *(unsigned __int64 **)(v1 + 8);
  if ( !result )
    goto LABEL_13;
  v3 = *result;
  if ( !*(_QWORD *)(v1 + 16) )
  {
    *result = *result & 3 | (unsigned __int64)result & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(*(_QWORD *)(v1 + 8) + 8LL) = _mm_unpacklo_epi64(
                                                (__m128i)*(unsigned __int64 *)(v1 + 8),
                                                (__m128i)*(unsigned __int64 *)(v1 + 8));
    **(_QWORD **)(v1 + 8) &= ~1uLL;
    result = *(unsigned __int64 **)(v1 + 8);
    *result |= 2u;
    return result;
  }
  v4 = v3 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
  {
    v5 = *(_BYTE **)(v4 + 8);
    if ( (*v5 & 2) != 0 )
    {
      v6 = *(_BYTE **)(v4 + 16);
      if ( (*v6 & 2) != 0 )
        goto LABEL_15;
    }
    else
    {
      sub_366660((__int64)v5);
      v6 = *(_BYTE **)(v4 + 16);
      if ( (*v6 & 2) != 0 )
        goto LABEL_8;
    }
    sub_366660((__int64)v6);
LABEL_8:
    if ( (*(_BYTE *)v4 & 2) != 0 )
    {
LABEL_9:
      if ( v3 > 3 )
        qfree(v3 & 0xFFFFFFFFFFFFFFFCLL);
      result = *(unsigned __int64 **)(v1 + 8);
      v3 = *result;
      goto LABEL_12;
    }
LABEL_15:
    clear_tinfo_t(v4 + 80);
    sub_365B50(*(_QWORD **)(v4 + 48));
    *(_QWORD *)v4 |= 2uLL;
    goto LABEL_9;
  }
LABEL_12:
  *result = v3 & 3 | (unsigned __int64)result & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(*(_QWORD *)(v1 + 8) + 8LL) = _mm_unpacklo_epi64(
                                              (__m128i)*(unsigned __int64 *)(v1 + 8),
                                              (__m128i)*(unsigned __int64 *)(v1 + 8));
  **(_QWORD **)(v1 + 8) &= ~1uLL;
  result = *(unsigned __int64 **)(v1 + 8);
  *result |= 2u;
LABEL_13:
  *(_QWORD *)(v1 + 16) = 0;
  return result;
}
