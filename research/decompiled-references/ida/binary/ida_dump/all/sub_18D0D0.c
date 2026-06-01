__int64 __fastcall sub_18D0D0(_QWORD *a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r12
  __int64 *v5; // rdi
  __int64 *v6; // rdi

  if ( a1[16] )
  {
    a1[17] = 0;
    qfree();
  }
  if ( a1[13] )
  {
    a1[14] = 0;
    qfree();
  }
  qfree();
  if ( a1[8] )
  {
    a1[9] = 0;
    qfree();
  }
  qfree();
  if ( a1[3] )
  {
    a1[4] = 0;
    qfree();
  }
  result = a1[1];
  if ( result )
  {
    v3 = *(_QWORD *)result;
    if ( !a1[2] )
    {
      *(_QWORD *)result = *(_QWORD *)result & 3LL | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[1] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[1], (__m128i)(unsigned __int64)a1[1]);
      *(_QWORD *)a1[1] &= ~1uLL;
      result = a1[1];
      *(_QWORD *)result |= 2uLL;
      goto LABEL_12;
    }
    v4 = v3 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_22:
      *(_QWORD *)result = v3 & 3 | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[1] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[1], (__m128i)(unsigned __int64)a1[1]);
      *(_QWORD *)a1[1] &= ~1uLL;
      result = a1[1];
      *(_QWORD *)result |= 2uLL;
      a1[2] = 0;
LABEL_12:
      if ( a1[1] )
        return qfree();
      return result;
    }
    v5 = *(__int64 **)(v4 + 8);
    if ( (*(_BYTE *)v5 & 2) != 0 )
    {
      v6 = *(__int64 **)(v4 + 16);
      if ( (*(_BYTE *)v6 & 2) != 0 )
        goto LABEL_25;
    }
    else
    {
      sub_18BD50(v5);
      v6 = *(__int64 **)(v4 + 16);
      if ( (*(_BYTE *)v6 & 2) != 0 )
        goto LABEL_18;
    }
    sub_18BD50(v6);
LABEL_18:
    if ( (*(_BYTE *)v4 & 2) != 0 )
    {
LABEL_19:
      if ( v3 > 3 )
        qfree();
      result = a1[1];
      v3 = *(_QWORD *)result;
      goto LABEL_22;
    }
LABEL_25:
    if ( *(_QWORD *)(v4 + 32) )
    {
      *(_QWORD *)(v4 + 40) = 0;
      qfree();
    }
    *(_QWORD *)v4 |= 2uLL;
    goto LABEL_19;
  }
  return result;
}
