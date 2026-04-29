__int64 __fastcall sub_6B740(_QWORD *a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbp
  __int64 *v4; // r12
  __int64 v5; // rdx
  __int64 *v6; // rdi
  __int64 *v7; // rdi

  *a1 = off_4DB470;
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
      goto LABEL_4;
    }
    v4 = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
    v5 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v5 & 2) != 0 )
    {
LABEL_14:
      *(_QWORD *)result = v3 & 3 | result & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[1] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[1], (__m128i)(unsigned __int64)a1[1]);
      *(_QWORD *)a1[1] &= ~1uLL;
      result = a1[1];
      *(_QWORD *)result |= 2uLL;
      a1[2] = 0;
LABEL_4:
      if ( a1[1] )
        return qfree();
      return result;
    }
    v6 = (__int64 *)v4[1];
    if ( (*(_BYTE *)v6 & 2) != 0 )
    {
      v7 = (__int64 *)v4[2];
      if ( (*(_BYTE *)v7 & 2) != 0 )
        goto LABEL_18;
    }
    else
    {
      sub_6B610(v6);
      v7 = (__int64 *)v4[2];
      if ( (*(_BYTE *)v7 & 2) != 0 )
        goto LABEL_10;
    }
    sub_6B610(v7);
LABEL_10:
    v5 = *v4;
    if ( (*v4 & 2) != 0 )
    {
LABEL_11:
      if ( v3 > 3 )
        qfree();
      result = a1[1];
      v3 = *(_QWORD *)result;
      goto LABEL_14;
    }
LABEL_18:
    *v4 = v5 | 2;
    goto LABEL_11;
  }
  return result;
}
