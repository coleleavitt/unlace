unsigned __int64 *__fastcall sub_3CC750(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdi
  unsigned __int64 *result; // rax
  unsigned __int64 v9; // rbx
  __int64 *v10; // r12
  __int64 v11; // rdx
  __int64 *v12; // rdi
  __int64 *v13; // rdi

  v2 = a1[14];
  if ( v2 )
  {
    v3 = a1[15];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (__int64 *)(v2 + 24 * i);
        v6 = *v5;
        if ( *v5 )
        {
          v5[1] = 0;
          qfree(v6);
          v2 = a1[14];
        }
      }
    }
    a1[15] = 0;
    qfree(v2);
    a1[14] = 0;
    a1[16] = 0;
  }
  v7 = a1[17];
  if ( v7 )
  {
    a1[18] = 0;
    qfree(v7);
    a1[17] = 0;
    a1[19] = 0;
  }
  result = (unsigned __int64 *)a1[20];
  if ( !result )
    goto LABEL_22;
  v9 = *result;
  if ( !a1[21] )
  {
    *result = *result & 3 | (unsigned __int64)result & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(a1[20] + 8LL) = _mm_unpacklo_epi64(
                                   (__m128i)(unsigned __int64)a1[20],
                                   (__m128i)(unsigned __int64)a1[20]);
    *(_QWORD *)a1[20] &= ~1uLL;
    result = (unsigned __int64 *)a1[20];
    *result |= 2u;
    return result;
  }
  v10 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
  v11 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v11 & 2) == 0 )
  {
    v12 = (__int64 *)v10[1];
    if ( (*(_BYTE *)v12 & 2) != 0 )
    {
      v13 = (__int64 *)v10[2];
      if ( (*(_BYTE *)v13 & 2) != 0 )
        goto LABEL_24;
    }
    else
    {
      sub_3C9680(v12);
      v13 = (__int64 *)v10[2];
      if ( (*(_BYTE *)v13 & 2) != 0 )
        goto LABEL_17;
    }
    sub_3C9680(v13);
LABEL_17:
    v11 = *v10;
    if ( (*v10 & 2) != 0 )
    {
LABEL_18:
      if ( v9 > 3 )
        qfree(v9 & 0xFFFFFFFFFFFFFFFCLL);
      result = (unsigned __int64 *)a1[20];
      v9 = *result;
      goto LABEL_21;
    }
LABEL_24:
    *v10 = v11 | 2;
    goto LABEL_18;
  }
LABEL_21:
  *result = v9 & 3 | (unsigned __int64)result & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[20] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[20], (__m128i)(unsigned __int64)a1[20]);
  *(_QWORD *)a1[20] &= ~1uLL;
  result = (unsigned __int64 *)a1[20];
  *result |= 2u;
LABEL_22:
  a1[21] = 0;
  return result;
}
