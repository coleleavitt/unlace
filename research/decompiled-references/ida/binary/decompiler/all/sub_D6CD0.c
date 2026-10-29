unsigned __int64 *__fastcall sub_D6CD0(_QWORD *a1)
{
  unsigned __int64 *result; // rax
  unsigned __int64 v3; // rbp
  __int64 *v4; // r12
  __int64 v5; // rdx
  __int64 *v6; // rdi
  __int64 *v7; // rdi

  a1[1] = 0;
  a1[3] = 0;
  a1[5] = 0;
  if ( a1[6] )
  {
    a1[7] = 0;
    qfree();
    a1[6] = 0;
    a1[8] = 0;
  }
  if ( a1[9] )
  {
    a1[10] = 0;
    qfree();
    a1[9] = 0;
    a1[11] = 0;
  }
  result = (unsigned __int64 *)a1[15];
  if ( !result )
    goto LABEL_17;
  v3 = *result;
  if ( !a1[16] )
  {
    *result = *result & 3 | (unsigned __int64)result & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(a1[15] + 8LL) = _mm_unpacklo_epi64(
                                   (__m128i)(unsigned __int64)a1[15],
                                   (__m128i)(unsigned __int64)a1[15]);
    *(_QWORD *)a1[15] &= ~1uLL;
    result = (unsigned __int64 *)a1[15];
    *result |= 2u;
    a1[17] = 0;
    return result;
  }
  v4 = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
  v5 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v5 & 2) == 0 )
  {
    v6 = (__int64 *)v4[1];
    if ( (*(_BYTE *)v6 & 2) != 0 )
    {
      v7 = (__int64 *)v4[2];
      if ( (*(_BYTE *)v7 & 2) != 0 )
        goto LABEL_19;
    }
    else
    {
      sub_CF630(v6);
      v7 = (__int64 *)v4[2];
      if ( (*(_BYTE *)v7 & 2) != 0 )
        goto LABEL_12;
    }
    sub_CF630(v7);
LABEL_12:
    v5 = *v4;
    if ( (*v4 & 2) != 0 )
    {
LABEL_13:
      if ( v3 > 3 )
        qfree();
      result = (unsigned __int64 *)a1[15];
      v3 = *result;
      goto LABEL_16;
    }
LABEL_19:
    *v4 = v5 | 2;
    goto LABEL_13;
  }
LABEL_16:
  *result = v3 & 3 | (unsigned __int64)result & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[15] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[15], (__m128i)(unsigned __int64)a1[15]);
  *(_QWORD *)a1[15] &= ~1uLL;
  result = (unsigned __int64 *)a1[15];
  *result |= 2u;
LABEL_17:
  a1[16] = 0;
  a1[17] = 0;
  return result;
}
