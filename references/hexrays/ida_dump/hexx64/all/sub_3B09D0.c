__int64 __fastcall sub_3B09D0(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r12
  _QWORD *v6; // rdi
  _QWORD *v7; // rdi

  result = *a1;
  if ( *a1 )
  {
    v4 = *(_QWORD *)result;
    if ( !a1[1] )
    {
      *(_QWORD *)result = *(_QWORD *)result & 3LL | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*a1 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
      *(_QWORD *)*a1 &= ~1uLL;
      result = *a1;
      *(_QWORD *)*a1 |= 2uLL;
      goto LABEL_4;
    }
    v5 = v4 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_14:
      *(_QWORD *)result = v4 & 3 | result & 0xFFFFFFFFFFFFFFFCLL;
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
    v6 = *(_QWORD **)(v5 + 8);
    if ( (*(_BYTE *)v6 & 2) != 0 )
    {
      v7 = *(_QWORD **)(v5 + 16);
      if ( (*(_BYTE *)v7 & 2) != 0 )
        goto LABEL_18;
    }
    else
    {
      sub_3B08A0(v6, a2);
      v7 = *(_QWORD **)(v5 + 16);
      if ( (*(_BYTE *)v7 & 2) != 0 )
        goto LABEL_10;
    }
    sub_3B08A0(v7, a2);
LABEL_10:
    if ( (*(_BYTE *)v5 & 2) != 0 )
    {
LABEL_11:
      if ( v4 > 3 )
        qfree(v4 & 0xFFFFFFFFFFFFFFFCLL);
      result = *a1;
      v4 = *(_QWORD *)*a1;
      goto LABEL_14;
    }
LABEL_18:
    sub_3ACAB0((__int64 *)(v5 + 32));
    *(_QWORD *)v5 |= 2uLL;
    goto LABEL_11;
  }
  return result;
}
