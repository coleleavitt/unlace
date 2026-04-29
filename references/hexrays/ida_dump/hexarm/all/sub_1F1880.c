__int64 __fastcall sub_1F1880(_QWORD *a1)
{
  __int64 v2; // rdi
  unsigned __int64 *v3; // rax
  unsigned __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 *v7; // r12
  __int64 v8; // rdx
  __int64 *v9; // rdi
  __int64 *v10; // rdi

  *a1 = off_4D9478;
  v2 = a1[9];
  if ( v2 )
  {
    a1[10] = 0;
    qfree(v2);
  }
  v3 = (unsigned __int64 *)a1[7];
  if ( v3 )
  {
    v4 = *v3;
    if ( !a1[8] )
    {
      *v3 = *v3 & 3 | (unsigned __int64)v3 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[7] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[7], (__m128i)(unsigned __int64)a1[7]);
      *(_QWORD *)a1[7] &= ~1uLL;
      *(_QWORD *)a1[7] |= 2uLL;
      goto LABEL_6;
    }
    v7 = (__int64 *)(v4 & 0xFFFFFFFFFFFFFFFCLL);
    v8 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v8 & 2) != 0 )
    {
LABEL_16:
      *v3 = v4 & 3 | (unsigned __int64)v3 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[7] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[7], (__m128i)(unsigned __int64)a1[7]);
      *(_QWORD *)a1[7] &= ~1uLL;
      *(_QWORD *)a1[7] |= 2uLL;
      a1[8] = 0;
LABEL_6:
      v5 = a1[7];
      if ( v5 )
        qfree(v5);
      return j__qfree(a1);
    }
    v9 = (__int64 *)v7[1];
    if ( (*(_BYTE *)v9 & 2) != 0 )
    {
      v10 = (__int64 *)v7[2];
      if ( (*(_BYTE *)v10 & 2) != 0 )
        goto LABEL_19;
    }
    else
    {
      sub_1ED1B0(v9);
      v10 = (__int64 *)v7[2];
      if ( (*(_BYTE *)v10 & 2) != 0 )
        goto LABEL_12;
    }
    sub_1ED1B0(v10);
LABEL_12:
    v8 = *v7;
    if ( (*v7 & 2) != 0 )
    {
LABEL_13:
      if ( v4 > 3 )
        qfree(v4 & 0xFFFFFFFFFFFFFFFCLL);
      v3 = (unsigned __int64 *)a1[7];
      v4 = *v3;
      goto LABEL_16;
    }
LABEL_19:
    *v7 = v8 | 2;
    goto LABEL_13;
  }
  return j__qfree(a1);
}
