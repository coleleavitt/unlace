__int64 __fastcall sub_BF2EB0(
        _QWORD *a1,
        unsigned int a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14)
{
  unsigned int *v15; // rax
  unsigned int *v16; // rsi
  unsigned int v17; // r12d
  __int64 v18; // rcx
  __int64 v19; // rdx

  v15 = *(unsigned int **)(a1[40] + 56LL * *(unsigned int *)(a1[42] + 4LL * a2) + 40);
  if ( !v15 || (v16 = &v15[*(v15 - 1)], v15 == v16) )
  {
    if ( !(unsigned __int8)sub_BF0D70(a1, a2, a3) )
    {
LABEL_9:
      if ( !(unsigned __int8)sub_BF07C0((__int64)a1, a2) )
        return sub_BF1000((__int64)a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, v19, v18, a13, a14);
    }
  }
  else
  {
    v17 = 0;
    v18 = *(_QWORD *)(a1[2] + 8848LL);
    while ( 1 )
    {
      v19 = *(unsigned __int8 *)(v18 + *v15);
      if ( (_BYTE)v19 == 0xFF )
        break;
      v17 += (_BYTE)v19 == 0;
      if ( v16 == ++v15 )
      {
        if ( v17 > 1 )
          return sub_BF1000((__int64)a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, v19, v18, a13, a14);
        if ( (unsigned __int8)sub_BF0D70(a1, a2, a3) )
          return 1;
        if ( !v17 )
          goto LABEL_9;
        return sub_BF1000((__int64)a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, v19, v18, a13, a14);
      }
    }
  }
  return 1;
}

