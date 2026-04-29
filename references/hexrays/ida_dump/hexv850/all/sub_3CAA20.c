__int64 __fastcall sub_3CAA20(_QWORD *a1)
{
  _QWORD *v1; // r12
  unsigned __int64 *v2; // rax
  unsigned __int64 v3; // rbp
  __int64 v5; // rdi
  __int64 *v7; // r13
  __int64 v8; // rdx
  __int64 *v9; // rdi
  __int64 *v10; // rdi

  v1 = a1 - 5;
  *(a1 - 5) = &off_4BC7F8;
  *a1 = off_4BC828;
  v2 = (unsigned __int64 *)a1[6];
  if ( !v2 )
    return j__qfree(v1);
  v3 = *v2;
  if ( !a1[7] )
  {
    *v2 = *v2 & 3 | (unsigned __int64)v2 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(a1[6] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[6], (__m128i)(unsigned __int64)a1[6]);
    *(_QWORD *)a1[6] &= ~1uLL;
    *(_QWORD *)a1[6] |= 2uLL;
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
        goto LABEL_17;
    }
    else
    {
      sub_3C9680(v9);
      v10 = (__int64 *)v7[2];
      if ( (*(_BYTE *)v10 & 2) != 0 )
        goto LABEL_10;
    }
    sub_3C9680(v10);
LABEL_10:
    v8 = *v7;
    if ( (*v7 & 2) != 0 )
    {
LABEL_11:
      if ( v3 > 3 )
        qfree(v3 & 0xFFFFFFFFFFFFFFFCLL);
      v2 = (unsigned __int64 *)a1[6];
      v3 = *v2;
      goto LABEL_14;
    }
LABEL_17:
    *v7 = v8 | 2;
    goto LABEL_11;
  }
LABEL_14:
  *v2 = v3 & 3 | (unsigned __int64)v2 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[6] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[6], (__m128i)(unsigned __int64)a1[6]);
  *(_QWORD *)a1[6] &= ~1uLL;
  *(_QWORD *)a1[6] |= 2uLL;
  a1[7] = 0;
LABEL_4:
  v5 = a1[6];
  if ( v5 )
    qfree(v5);
  return j__qfree(v1);
}
