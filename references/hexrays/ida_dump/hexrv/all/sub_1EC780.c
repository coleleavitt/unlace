__int64 __fastcall sub_1EC780(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  unsigned __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 *v6; // r12
  __int64 v7; // rdx
  __int64 *v8; // rdi
  __int64 *v9; // rdi

  *a1 = off_4B17F8;
  v2 = a1[9];
  if ( v2 )
  {
    a1[10] = 0;
    qfree(v2);
  }
  result = a1[7];
  if ( result )
  {
    v4 = *(_QWORD *)result;
    if ( !a1[8] )
    {
      *(_QWORD *)result = *(_QWORD *)result & 3LL | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[7] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[7], (__m128i)(unsigned __int64)a1[7]);
      *(_QWORD *)a1[7] &= ~1uLL;
      result = a1[7];
      *(_QWORD *)result |= 2uLL;
      goto LABEL_6;
    }
    v6 = (__int64 *)(v4 & 0xFFFFFFFFFFFFFFFCLL);
    v7 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v7 & 2) != 0 )
    {
LABEL_16:
      *(_QWORD *)result = v4 & 3 | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[7] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[7], (__m128i)(unsigned __int64)a1[7]);
      *(_QWORD *)a1[7] &= ~1uLL;
      result = a1[7];
      *(_QWORD *)result |= 2uLL;
      a1[8] = 0;
LABEL_6:
      v5 = a1[7];
      if ( v5 )
        return qfree(v5);
      return result;
    }
    v8 = (__int64 *)v6[1];
    if ( (*(_BYTE *)v8 & 2) != 0 )
    {
      v9 = (__int64 *)v6[2];
      if ( (*(_BYTE *)v9 & 2) != 0 )
        goto LABEL_19;
    }
    else
    {
      sub_1E81F0(v8);
      v9 = (__int64 *)v6[2];
      if ( (*(_BYTE *)v9 & 2) != 0 )
        goto LABEL_12;
    }
    sub_1E81F0(v9);
LABEL_12:
    v7 = *v6;
    if ( (*v6 & 2) != 0 )
    {
LABEL_13:
      if ( v4 > 3 )
        qfree(v4 & 0xFFFFFFFFFFFFFFFCLL);
      result = a1[7];
      v4 = *(_QWORD *)result;
      goto LABEL_16;
    }
LABEL_19:
    *v6 = v7 | 2;
    goto LABEL_13;
  }
  return result;
}
