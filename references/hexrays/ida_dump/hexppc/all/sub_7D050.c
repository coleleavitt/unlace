__int64 __fastcall sub_7D050(__int64 *a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // rdi
  unsigned __int64 v6; // r12
  __int64 v7; // r13
  __int64 *v8; // rdi
  __int64 *v9; // rdi
  __int64 *v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi

  result = a1[3];
  if ( !result )
    goto LABEL_6;
  v3 = *(_QWORD *)result;
  if ( !a1[4] )
  {
    *(_QWORD *)result = *(_QWORD *)result & 3LL | result & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(a1[3] + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[3], (__m128i)(unsigned __int64)a1[3]);
    *(_QWORD *)a1[3] &= ~1uLL;
    result = a1[3];
    *(_QWORD *)result |= 2uLL;
    goto LABEL_4;
  }
  v6 = v3 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
  {
    v7 = *(_QWORD *)(v6 + 8);
    if ( (*(_BYTE *)v7 & 2) != 0 )
    {
      v10 = *(__int64 **)(v6 + 16);
      if ( (*(_BYTE *)v10 & 2) != 0 )
        goto LABEL_25;
      goto LABEL_18;
    }
    v8 = *(__int64 **)(v7 + 8);
    if ( (*(_BYTE *)v8 & 2) != 0 )
    {
      v9 = *(__int64 **)(v7 + 16);
      if ( (*(_BYTE *)v9 & 2) != 0 )
      {
LABEL_29:
        v12 = *(_QWORD *)(v7 + 32);
        if ( v12 )
        {
          *(_QWORD *)(v7 + 40) = 0;
          qfree(v12);
        }
        *(_QWORD *)v7 |= 2uLL;
LABEL_15:
        if ( v7 )
          qfree(v7);
        v10 = *(__int64 **)(v6 + 16);
        if ( (*(_BYTE *)v10 & 2) != 0 )
        {
LABEL_19:
          if ( (*(_BYTE *)v6 & 2) != 0 )
          {
LABEL_20:
            if ( v3 > 3 )
              qfree(v3 & 0xFFFFFFFFFFFFFFFCLL);
            result = a1[3];
            v3 = *(_QWORD *)result;
            goto LABEL_23;
          }
LABEL_25:
          v11 = *(_QWORD *)(v6 + 32);
          if ( v11 )
          {
            *(_QWORD *)(v6 + 40) = 0;
            qfree(v11);
          }
          *(_QWORD *)v6 |= 2uLL;
          goto LABEL_20;
        }
LABEL_18:
        sub_77A70(v10);
        goto LABEL_19;
      }
    }
    else
    {
      sub_77A70(v8);
      v9 = *(__int64 **)(v7 + 16);
      if ( (*(_BYTE *)v9 & 2) != 0 )
        goto LABEL_14;
    }
    sub_77A70(v9);
LABEL_14:
    if ( (*(_BYTE *)v7 & 2) != 0 )
      goto LABEL_15;
    goto LABEL_29;
  }
LABEL_23:
  *(_QWORD *)result = v3 & 3 | result & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[3] + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[3], (__m128i)(unsigned __int64)a1[3]);
  *(_QWORD *)a1[3] &= ~1uLL;
  result = a1[3];
  *(_QWORD *)result |= 2uLL;
  a1[4] = 0;
LABEL_4:
  v4 = a1[3];
  if ( v4 )
    result = qfree(v4);
LABEL_6:
  v5 = *a1;
  if ( *a1 )
  {
    a1[1] = 0;
    return qfree(v5);
  }
  return result;
}
