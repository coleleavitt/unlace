__int64 __fastcall sub_1956A0(_QWORD *a1)
{
  unsigned __int64 *v1; // rax
  unsigned __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 *v9; // r12
  __int64 v10; // rdx
  __int64 *v11; // rdi
  __int64 *v12; // rdi

  v1 = (unsigned __int64 *)a1[15];
  if ( !v1 )
    goto LABEL_6;
  v3 = *v1;
  if ( !a1[16] )
  {
    *v1 = *v1 & 3 | (unsigned __int64)v1 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(a1[15] + 8LL) = _mm_unpacklo_epi64(
                                   (__m128i)(unsigned __int64)a1[15],
                                   (__m128i)(unsigned __int64)a1[15]);
    *(_QWORD *)a1[15] &= ~1uLL;
    *(_QWORD *)a1[15] |= 2uLL;
    goto LABEL_4;
  }
  v9 = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
  v10 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v10 & 2) == 0 )
  {
    v11 = (__int64 *)v9[1];
    if ( (*(_BYTE *)v11 & 2) != 0 )
    {
      v12 = (__int64 *)v9[2];
      if ( (*(_BYTE *)v12 & 2) != 0 )
        goto LABEL_23;
    }
    else
    {
      sub_192B40(v11);
      v12 = (__int64 *)v9[2];
      if ( (*(_BYTE *)v12 & 2) != 0 )
        goto LABEL_16;
    }
    sub_192B40(v12);
LABEL_16:
    v10 = *v9;
    if ( (*v9 & 2) != 0 )
    {
LABEL_17:
      if ( v3 > 3 )
        qfree(v3 & 0xFFFFFFFFFFFFFFFCLL);
      v1 = (unsigned __int64 *)a1[15];
      v3 = *v1;
      goto LABEL_20;
    }
LABEL_23:
    *v9 = v10 | 2;
    goto LABEL_17;
  }
LABEL_20:
  *v1 = v3 & 3 | (unsigned __int64)v1 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[15] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[15], (__m128i)(unsigned __int64)a1[15]);
  *(_QWORD *)a1[15] &= ~1uLL;
  *(_QWORD *)a1[15] |= 2uLL;
  a1[16] = 0;
LABEL_4:
  v4 = a1[15];
  if ( v4 )
    qfree(v4);
LABEL_6:
  v5 = a1[12];
  if ( v5 )
  {
    a1[13] = 0;
    qfree(v5);
  }
  v6 = a1[9];
  if ( v6 )
  {
    a1[10] = 0;
    qfree(v6);
  }
  v7 = a1[6];
  if ( v7 )
  {
    a1[7] = 0;
    qfree(v7);
  }
  qfree(a1[4]);
  qfree(a1[2]);
  return qfree(*a1);
}
