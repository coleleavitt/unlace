__int64 __fastcall sub_FF670(_QWORD *a1)
{
  unsigned __int64 *v2; // rax
  unsigned __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 *v7; // r12
  __int64 v8; // rdx
  __int64 *v9; // rdi
  __int64 *v10; // rdi

  *a1 = off_4CA520;
  v2 = (unsigned __int64 *)a1[12];
  if ( !v2 )
    goto LABEL_6;
  v3 = *v2;
  if ( !a1[13] )
  {
    *v2 = *v2 & 3 | (unsigned __int64)v2 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(a1[12] + 8LL) = _mm_unpacklo_epi64(
                                   (__m128i)(unsigned __int64)a1[12],
                                   (__m128i)(unsigned __int64)a1[12]);
    *(_QWORD *)a1[12] &= ~1uLL;
    *(_QWORD *)a1[12] |= 2uLL;
    goto LABEL_4;
  }
  v7 = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
  v8 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v8 & 2) == 0 )
  {
    v9 = (__int64 *)v7[1];
    if ( (*(_BYTE *)v9 & 2) != 0 )
    {
      v10 = (__int64 *)v7[2];
      if ( (*(_BYTE *)v10 & 2) != 0 )
        goto LABEL_19;
    }
    else
    {
      sub_FE5C0(v9);
      v10 = (__int64 *)v7[2];
      if ( (*(_BYTE *)v10 & 2) != 0 )
        goto LABEL_12;
    }
    sub_FE5C0(v10);
LABEL_12:
    v8 = *v7;
    if ( (*v7 & 2) != 0 )
    {
LABEL_13:
      if ( v3 > 3 )
        qfree(v3 & 0xFFFFFFFFFFFFFFFCLL);
      v2 = (unsigned __int64 *)a1[12];
      v3 = *v2;
      goto LABEL_16;
    }
LABEL_19:
    *v7 = v8 | 2;
    goto LABEL_13;
  }
LABEL_16:
  *v2 = v3 & 3 | (unsigned __int64)v2 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[12] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[12], (__m128i)(unsigned __int64)a1[12]);
  *(_QWORD *)a1[12] &= ~1uLL;
  *(_QWORD *)a1[12] |= 2uLL;
  a1[13] = 0;
LABEL_4:
  v4 = a1[12];
  if ( v4 )
    qfree(v4);
LABEL_6:
  v5 = a1[9];
  if ( v5 )
  {
    a1[10] = 0;
    qfree(v5);
  }
  qfree(a1[7]);
  return j__qfree(a1);
}
