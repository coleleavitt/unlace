unsigned __int64 *__fastcall sub_3B1730(unsigned __int64 **a1, __int64 a2)
{
  unsigned __int64 *result; // rax
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r12
  _BYTE *v6; // rdi
  _BYTE *v7; // rdi
  unsigned __int64 *v8; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r14
  _QWORD *v12; // rdi
  _QWORD *v13; // rdi

  result = *a1;
  if ( !*a1 )
    goto LABEL_13;
  v4 = *result;
  if ( !a1[1] )
  {
    *result = (unsigned __int64)result & 0xFFFFFFFFFFFFFFFCLL | *result & 3;
    *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
    **a1 &= ~1uLL;
    result = *a1;
    **a1 |= 2u;
    return result;
  }
  v5 = v4 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
  {
    v6 = *(_BYTE **)(v5 + 8);
    if ( (*v6 & 2) != 0 )
    {
      v7 = *(_BYTE **)(v5 + 16);
      if ( (*v7 & 2) != 0 )
        goto LABEL_15;
    }
    else
    {
      sub_3B1390((__int64)v6, a2);
      v7 = *(_BYTE **)(v5 + 16);
      if ( (*v7 & 2) != 0 )
        goto LABEL_8;
    }
    sub_3B1390((__int64)v7, a2);
LABEL_8:
    if ( (*(_BYTE *)v5 & 2) != 0 )
    {
LABEL_9:
      if ( v4 > 3 )
        qfree(v4 & 0xFFFFFFFFFFFFFFFCLL);
      result = *a1;
      v4 = **a1;
      goto LABEL_12;
    }
LABEL_15:
    v8 = *(unsigned __int64 **)(v5 + 48);
    if ( !v8 )
    {
LABEL_20:
      clear_tinfo_t(v5 + 32);
      *(_QWORD *)v5 |= 2uLL;
      goto LABEL_9;
    }
    if ( !*(_QWORD *)(v5 + 56) )
    {
      sub_3B1030((unsigned __int64 *)(v5 + 48));
      goto LABEL_18;
    }
    v10 = *v8;
    v11 = *v8 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v11 & 2) != 0 )
    {
LABEL_28:
      sub_3B1030((unsigned __int64 *)(v5 + 48));
      *(_QWORD *)(v5 + 56) = 0;
LABEL_18:
      v9 = *(_QWORD *)(v5 + 48);
      if ( v9 )
        qfree(v9);
      goto LABEL_20;
    }
    v12 = *(_QWORD **)(v11 + 8);
    if ( (*(_BYTE *)v12 & 2) != 0 )
    {
      v13 = *(_QWORD **)(v11 + 16);
      if ( (*(_BYTE *)v13 & 2) != 0 )
      {
LABEL_30:
        sub_3ACFF0((__int64 *)(v11 + 32));
        *(_QWORD *)v11 |= 2uLL;
LABEL_26:
        if ( v10 > 3 )
          qfree(v11);
        goto LABEL_28;
      }
    }
    else
    {
      sub_3B0DE0(v12, a2);
      v13 = *(_QWORD **)(v11 + 16);
      if ( (*(_BYTE *)v13 & 2) != 0 )
        goto LABEL_25;
    }
    sub_3B0DE0(v13, a2);
LABEL_25:
    if ( (*(_BYTE *)v11 & 2) != 0 )
      goto LABEL_26;
    goto LABEL_30;
  }
LABEL_12:
  *result = (unsigned __int64)result & 0xFFFFFFFFFFFFFFFCLL | v4 & 3;
  *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
  **a1 &= ~1uLL;
  result = *a1;
  **a1 |= 2u;
LABEL_13:
  a1[1] = nullptr;
  return result;
}
