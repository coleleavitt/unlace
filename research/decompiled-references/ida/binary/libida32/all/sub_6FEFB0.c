__int64 __fastcall sub_6FEFB0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        double a6,
        __m128i a7,
        double a8,
        __m128 a9,
        double a10,
        double a11,
        double a12,
        __m128 a13)
{
  __int64 *v13; // rax
  __int64 *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  double v18; // xmm4_8
  double v19; // xmm5_8
  __int64 v20; // rdx
  __int64 v21; // r12

  v13 = *(__int64 **)(a2 + 64);
  if ( v13 )
  {
    if ( !(unsigned __int8)sub_6F74E0(a1, *v13, (__int64)(v13 + 1), *v13, a5, a6, a7, a8, a9, a10, a11, a12, a13) )
      return 0;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    {
LABEL_4:
      v14 = nullptr;
      v15 = sub_B68690(a2);
      v20 = *(unsigned int *)(v15 + 8);
      v21 = *(_QWORD *)v15 + 8 * v20;
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
        v14 = *(__int64 **)sub_B68690(a2);
      if ( (__int64 *)v21 == v14 )
        return 1;
      while ( (unsigned __int8)sub_6FCB80(a1, *v14, a6, a7, a8, a9, v18, v19, a12, a13, v20, v16, v17) )
      {
        if ( (__int64 *)v21 == ++v14 )
          return 1;
      }
      return 0;
    }
  }
  else
  {
    if ( !(unsigned __int8)sub_6EE600(a1, *(_QWORD *)(a2 + 56), a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13) )
      return 0;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      goto LABEL_4;
  }
  return 1;
}

