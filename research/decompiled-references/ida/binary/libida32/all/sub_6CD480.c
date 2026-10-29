__int64 __fastcall sub_6CD480(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 *a4,
        double a5,
        __m128i a6,
        double a7,
        __m128 a8,
        double a9,
        double a10,
        double a11,
        __m128 a12)
{
  unsigned __int64 v14; // rbx
  double v15; // xmm4_8
  double v16; // xmm5_8
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 v20; // rax

  v14 = sub_B6AC30(a3 + 48);
  if ( !v14 )
    return 1;
  while ( (*(_BYTE *)(v14 + 28) & 0x7F) != 0x4B || sub_6B3E30 && (*(_BYTE *)(v14 + 73) & 0x40) != 0 )
  {
    v17 = *(_QWORD *)(v14 + 8);
    v14 = v17 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v17 <= 7 )
      return 1;
  }
LABEL_7:
  v18 = *(_QWORD *)(v14 + 104);
  if ( !v18 || (unsigned __int8)sub_6CC3E0(a1, a3, a4, v18, a5, a6, a7, a8, v15, v16, a11, a12) )
  {
    v19 = *(_QWORD *)(v14 + 112);
    if ( !v19 || (unsigned __int8)sub_6CC3E0(a1, a3, a4, v19, a5, a6, a7, a8, v15, v16, a11, a12) )
    {
      if ( (unsigned __int8)sub_6CD020(a1, a2, v14, a5, a6, a7, a8, v15, v16, a11, a12) )
      {
        while ( 1 )
        {
          v20 = *(_QWORD *)(v14 + 8);
          v14 = v20 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v20 <= 7 )
            return 1;
          if ( (*(_BYTE *)(v14 + 28) & 0x7F) == 0x4B && (!sub_6B3E30 || (*(_BYTE *)(v14 + 73) & 0x40) == 0) )
            goto LABEL_7;
        }
      }
    }
  }
  return 0;
}

