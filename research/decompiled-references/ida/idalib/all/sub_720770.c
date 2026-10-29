__int64 __fastcall sub_720770(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  double v11; // xmm4_8
  double v12; // xmm5_8
  char v13; // al
  double v14; // xmm4_8
  double v15; // xmm5_8
  __int64 v16; // rsi
  unsigned int v17; // r13d
  __int64 *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  double v23; // xmm4_8
  double v24; // xmm5_8
  __int64 v25; // rdx
  __int64 v26; // r14
  __int64 v27; // rsi
  __int64 v28; // rax
  double v29; // xmm4_8
  double v30; // xmm5_8

  if ( !(unsigned __int8)sub_71BA80(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10) )
    return 0;
  v13 = *(_BYTE *)(a2 + 68);
  if ( (v13 & 1) != 0 )
  {
    v27 = *(_QWORD *)(a2 + 72);
    if ( (~v13 & 0xC) != 0 && (v13 & 0xC) != 0 )
      v27 = *(_QWORD *)(v27 + 8);
    if ( !(unsigned __int8)sub_70DBE0(a1, v27, 0, a3, a4, a5, a6, v11, v12, a9, a10) )
      return 0;
    v13 = *(_BYTE *)(a2 + 68);
    if ( (~v13 & 0xC) == 0 )
      goto LABEL_5;
  }
  else if ( (~v13 & 0xC) == 0 )
  {
    goto LABEL_5;
  }
  if ( (v13 & 0xC) != 0 )
  {
    v28 = sub_B780B0(a2);
    if ( !(unsigned __int8)sub_70DBE0(a1, v28, 0, a3, a4, a5, a6, v29, v30, a9, a10) )
      return 0;
  }
LABEL_5:
  v16 = 0;
  if ( (unsigned __int8)sub_B8E0B0(a2) )
    v16 = sub_B8D340(a2, 0);
  v17 = sub_70A970(a1, v16, a3, a4, a5, a6, v14, v15, a9, a10);
  if ( !(_BYTE)v17 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v19 = nullptr;
    v20 = sub_B8C3D0(a2);
    v25 = *(unsigned int *)(v20 + 8);
    v26 = *(_QWORD *)v20 + 8 * v25;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v19 = *(__int64 **)sub_B8C3D0(a2);
    while ( (__int64 *)v26 != v19 )
    {
      if ( !(unsigned __int8)sub_71D160(a1, *v19, a3, a4, a5, a6, v23, v24, a9, a10, v25, v21, v22) )
        return 0;
      ++v19;
    }
  }
  return v17;
}
