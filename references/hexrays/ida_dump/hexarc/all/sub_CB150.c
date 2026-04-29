unsigned __int64 *__fastcall sub_CB150(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  unsigned __int64 *result; // rax
  unsigned __int64 v5; // rbp
  __int64 *v6; // r12
  __int64 v7; // rdx
  __int64 *v8; // rdi
  __int64 *v9; // rdi

  a1[1] = 0;
  a1[3] = 0;
  a1[5] = 0;
  v2 = a1[6];
  if ( v2 )
  {
    a1[7] = 0;
    qfree(v2);
    a1[6] = 0;
    a1[8] = 0;
  }
  v3 = a1[9];
  if ( v3 )
  {
    a1[10] = 0;
    qfree(v3);
    a1[9] = 0;
    a1[11] = 0;
  }
  result = (unsigned __int64 *)a1[15];
  if ( !result )
    goto LABEL_17;
  v5 = *result;
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
  v6 = (__int64 *)(v5 & 0xFFFFFFFFFFFFFFFCLL);
  v7 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v7 & 2) == 0 )
  {
    v8 = (__int64 *)v6[1];
    if ( (*(_BYTE *)v8 & 2) != 0 )
    {
      v9 = (__int64 *)v6[2];
      if ( (*(_BYTE *)v9 & 2) != 0 )
        goto LABEL_19;
    }
    else
    {
      sub_C9130(v8);
      v9 = (__int64 *)v6[2];
      if ( (*(_BYTE *)v9 & 2) != 0 )
        goto LABEL_12;
    }
    sub_C9130(v9);
LABEL_12:
    v7 = *v6;
    if ( (*v6 & 2) != 0 )
    {
LABEL_13:
      if ( v5 > 3 )
        qfree(v5 & 0xFFFFFFFFFFFFFFFCLL);
      result = (unsigned __int64 *)a1[15];
      v5 = *result;
      goto LABEL_16;
    }
LABEL_19:
    *v6 = v7 | 2;
    goto LABEL_13;
  }
LABEL_16:
  *result = v5 & 3 | (unsigned __int64)result & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[15] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[15], (__m128i)(unsigned __int64)a1[15]);
  *(_QWORD *)a1[15] &= ~1uLL;
  result = (unsigned __int64 *)a1[15];
  *result |= 2u;
LABEL_17:
  a1[16] = 0;
  a1[17] = 0;
  return result;
}
