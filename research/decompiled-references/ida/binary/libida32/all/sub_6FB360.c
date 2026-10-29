__int64 __fastcall sub_6FB360(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __m128i a5,
        double a6,
        __m128 a7,
        double a8,
        double a9,
        double a10,
        __m128 a11,
        __int64 a12,
        __int64 a13)
{
  __int64 v13; // r8
  double v14; // xmm4_8
  double v15; // xmm5_8
  __int64 v16; // rcx
  __int64 **v17; // rbx
  __int64 *v18; // r14
  __int64 v19; // r15
  __int64 *v21; // rcx
  __int64 *v23; // [rsp+8h] [rbp-40h]

  if ( (*(_BYTE *)(a2 + 19) & 0x40) != 0 )
  {
    if ( (unsigned __int8)sub_6ED600(a1, *(_QWORD *)(a2 + 32), 0, a4, a5, a6, a7, a8, a9, a10, a11) )
      goto LABEL_3;
    return 0;
  }
  v21 = *(__int64 **)(a2 + 8LL * (*(_WORD *)(a2 + 16) & 0x7FFF) + 32);
  if ( !(unsigned __int8)sub_6F74E0(
                           a1,
                           *v21,
                           (__int64)(v21 + 1),
                           (__int64)(v21 + 1),
                           a13,
                           a4,
                           a5,
                           a6,
                           a7,
                           a8,
                           a9,
                           a10,
                           a11) )
    return 0;
LABEL_3:
  v16 = a2 + 8LL * ((unsigned __int8)(*(_BYTE *)(a2 + 19) & 0x40) >> 6) + 32;
  v17 = (__int64 **)(8LL * ((*(_WORD *)(a2 + 16) & 0x7FFF) - ((unsigned int)((*(_BYTE *)(a2 + 19) & 0x40) == 0) - 1))
                   + 8LL * ((*(_BYTE *)(a2 + 19) & 0x40) == 0)
                   + 32
                   + a2);
  v18 = (__int64 *)v16;
  v23 = (__int64 *)(v16 + 8LL * (*(_WORD *)(a2 + 16) & 0x7FFF));
  if ( (__int64 *)v16 != v23 )
  {
    while ( 1 )
    {
      v19 = *v18;
      if ( *v17 )
      {
        if ( !(unsigned __int8)sub_6F74E0(a1, **v17, (__int64)(*v17 + 1), v16, v13, a4, a5, a6, a7, v14, v15, a10, a11) )
          break;
      }
      if ( !(unsigned __int8)sub_6ED600(a1, v19, a3, a4, a5, a6, a7, v14, v15, a10, a11) )
        break;
      ++v17;
      if ( v23 == ++v18 )
        return 1;
    }
    return 0;
  }
  return 1;
}

