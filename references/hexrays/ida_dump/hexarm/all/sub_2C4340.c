__int64 __fastcall sub_2C4340(__int64 *a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r12
  _QWORD *v5; // rdi
  _QWORD *v6; // rdi

  result = *a1;
  if ( *a1 )
  {
    v3 = *(_QWORD *)result;
    if ( !a1[1] )
    {
      *(_QWORD *)result = *(_QWORD *)result & 3LL | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*a1 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
      *(_QWORD *)*a1 &= ~1uLL;
      result = *a1;
      *(_QWORD *)*a1 |= 2uLL;
      goto LABEL_4;
    }
    v4 = v3 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_14:
      *(_QWORD *)result = v3 & 3 | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*a1 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
      *(_QWORD *)*a1 &= ~1uLL;
      result = *a1;
      *(_QWORD *)*a1 |= 2uLL;
      a1[1] = 0;
LABEL_4:
      if ( *a1 )
        return qfree(*a1);
      return result;
    }
    v5 = *(_QWORD **)(v4 + 8);
    if ( (*(_BYTE *)v5 & 2) != 0 )
    {
      v6 = *(_QWORD **)(v4 + 16);
      if ( (*(_BYTE *)v6 & 2) != 0 )
        goto LABEL_18;
    }
    else
    {
      sub_2BA540(v5);
      v6 = *(_QWORD **)(v4 + 16);
      if ( (*(_BYTE *)v6 & 2) != 0 )
        goto LABEL_10;
    }
    sub_2BA540(v6);
LABEL_10:
    if ( (*(_BYTE *)v4 & 2) != 0 )
    {
LABEL_11:
      if ( v3 > 3 )
        qfree(v3 & 0xFFFFFFFFFFFFFFFCLL);
      result = *a1;
      v3 = *(_QWORD *)*a1;
      goto LABEL_14;
    }
LABEL_18:
    sub_2B9D40((_QWORD *)(v4 + 64));
    cleanup_argloc(v4 + 24);
    *(_QWORD *)v4 |= 2uLL;
    goto LABEL_11;
  }
  return result;
}
