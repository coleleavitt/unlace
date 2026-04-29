__int64 __fastcall sub_687B0(_QWORD *a1)
{
  unsigned __int64 *v2; // rax
  unsigned __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 *v6; // r12
  __int64 v7; // rdx
  __int64 *v8; // rdi
  __int64 *v9; // rdi

  *a1 = off_4C8DD0;
  v2 = (unsigned __int64 *)a1[1];
  if ( !v2 )
    return j__qfree(a1);
  v3 = *v2;
  if ( !a1[2] )
  {
    *v2 = *v2 & 3 | (unsigned __int64)v2 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(a1[1] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[1], (__m128i)(unsigned __int64)a1[1]);
    *(_QWORD *)a1[1] &= ~1uLL;
    *(_QWORD *)a1[1] |= 2uLL;
    goto LABEL_4;
  }
  v6 = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
  v7 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v7 & 2) == 0 )
  {
    v8 = (__int64 *)v6[1];
    if ( (*(_BYTE *)v8 & 2) != 0 )
    {
      v9 = (__int64 *)v6[2];
      if ( (*(_BYTE *)v9 & 2) != 0 )
        goto LABEL_17;
    }
    else
    {
      sub_68550(v8);
      v9 = (__int64 *)v6[2];
      if ( (*(_BYTE *)v9 & 2) != 0 )
        goto LABEL_10;
    }
    sub_68550(v9);
LABEL_10:
    v7 = *v6;
    if ( (*v6 & 2) != 0 )
    {
LABEL_11:
      if ( v3 > 3 )
        qfree(v3 & 0xFFFFFFFFFFFFFFFCLL);
      v2 = (unsigned __int64 *)a1[1];
      v3 = *v2;
      goto LABEL_14;
    }
LABEL_17:
    *v6 = v7 | 2;
    goto LABEL_11;
  }
LABEL_14:
  *v2 = v3 & 3 | (unsigned __int64)v2 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[1] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[1], (__m128i)(unsigned __int64)a1[1]);
  *(_QWORD *)a1[1] &= ~1uLL;
  *(_QWORD *)a1[1] |= 2uLL;
  a1[2] = 0;
LABEL_4:
  v4 = a1[1];
  if ( v4 )
    qfree(v4);
  return j__qfree(a1);
}
