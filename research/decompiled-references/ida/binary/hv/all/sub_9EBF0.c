unsigned __int64 __fastcall sub_9EBF0(
        __int64 a1,
        char *a2,
        char *a3,
        int a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  int v13; // r12d
  __int64 v14; // rbp
  double v16; // xmm4_8
  double v17; // xmm5_8
  __int64 v18; // rdi
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rcx

  LOBYTE(v13) = a4;
  v14 = qword_1671F8;
  *(_QWORD *)a1 = qword_1671F8;
  *(_DWORD *)(a1 + 8) = a4;
  *(_BYTE *)(a1 + 12) = 0;
  if ( !v14 )
  {
    v14 = operator new(0x1668u);
    sub_9C260((char *)v14, nullptr, nullptr);
    qword_1671F8 = v14;
    v13 = *(_DWORD *)(a1 + 8);
    *(_QWORD *)a1 = v14;
  }
  sub_98400(*(pthread_mutex_t **)v14);
  sub_9E790(v14, v13 & 1, a5, a6, a7, a8, v16, v17, a11, a12);
  v18 = *(_QWORD *)a1;
  ++*(_DWORD *)(v14 + 5728);
  sub_9BB00(v18, a2, 0);
  v19 = *(_DWORD *)(a1 + 8);
  if ( (v19 & 4) != 0 )
  {
    if ( !a3 || !*a3 )
    {
      sub_9C180(*(_QWORD *)a1);
      if ( !byte_1671A1 )
        sub_96F80(2716);
      BUG();
    }
    if ( (v19 & 8) != 0 )
    {
      sub_9CFC0((unsigned __int8 *)a1, a3, 1);
      v20 = *(_QWORD *)a1;
      *(_BYTE *)(v20 + 5384) = 0;
      v21 = v20;
      if ( !*a3 )
        return sub_9D7D0(v21, (char *)(a1 + 12), (*(_DWORD *)(a1 + 8) & 3) == 1);
      goto LABEL_14;
    }
    v20 = *(_QWORD *)a1;
    *(_BYTE *)(*(_QWORD *)a1 + 5384LL) = 0;
LABEL_8:
    v21 = v20;
    if ( !*a3 )
      return sub_9D7D0(v21, (char *)(a1 + 12), (*(_DWORD *)(a1 + 8) & 3) == 1);
LABEL_14:
    sub_9BB00(v20, a3, 1u);
    v21 = *(_QWORD *)a1;
    return sub_9D7D0(v21, (char *)(a1 + 12), (*(_DWORD *)(a1 + 8) & 3) == 1);
  }
  if ( (v19 & 8) != 0 )
    sub_9CFC0((unsigned __int8 *)a1, a3, 1);
  v20 = *(_QWORD *)a1;
  *(_BYTE *)(v20 + 5384) = 0;
  v21 = v20;
  if ( a3 )
    goto LABEL_8;
  return sub_9D7D0(v21, (char *)(a1 + 12), (*(_DWORD *)(a1 + 8) & 3) == 1);
}

