__int64 __fastcall sub_3CB5C0(_QWORD *a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 *v5; // r12
  __int64 v6; // rdx
  __int64 *v7; // rdi
  __int64 *v8; // rdi

  *(a1 - 5) = &off_4BB898;
  *a1 = off_4BB8C8;
  result = a1[6];
  if ( result )
  {
    v3 = *(_QWORD *)result;
    if ( !a1[7] )
    {
      *(_QWORD *)result = *(_QWORD *)result & 3LL | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[6] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[6], (__m128i)(unsigned __int64)a1[6]);
      *(_QWORD *)a1[6] &= ~1uLL;
      result = a1[6];
      *(_QWORD *)result |= 2uLL;
      goto LABEL_4;
    }
    v5 = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
    v6 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v6 & 2) != 0 )
    {
LABEL_14:
      *(_QWORD *)result = v3 & 3 | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[6] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[6], (__m128i)(unsigned __int64)a1[6]);
      *(_QWORD *)a1[6] &= ~1uLL;
      result = a1[6];
      *(_QWORD *)result |= 2uLL;
      a1[7] = 0;
LABEL_4:
      v4 = a1[6];
      if ( v4 )
        return qfree(v4);
      return result;
    }
    v7 = (__int64 *)v5[1];
    if ( (*(_BYTE *)v7 & 2) != 0 )
    {
      v8 = (__int64 *)v5[2];
      if ( (*(_BYTE *)v8 & 2) != 0 )
        goto LABEL_18;
    }
    else
    {
      sub_3CA480(v7);
      v8 = (__int64 *)v5[2];
      if ( (*(_BYTE *)v8 & 2) != 0 )
        goto LABEL_10;
    }
    sub_3CA480(v8);
LABEL_10:
    v6 = *v5;
    if ( (*v5 & 2) != 0 )
    {
LABEL_11:
      if ( v3 > 3 )
        qfree(v3 & 0xFFFFFFFFFFFFFFFCLL);
      result = a1[6];
      v3 = *(_QWORD *)result;
      goto LABEL_14;
    }
LABEL_18:
    *v5 = v6 | 2;
    goto LABEL_11;
  }
  return result;
}
