__int64 __fastcall sub_71E2E0(
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
  unsigned int v11; // r13d
  char v13; // al
  double v14; // xmm4_8
  double v15; // xmm5_8
  __int64 v16; // rsi
  __int64 *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  double v21; // xmm4_8
  double v22; // xmm5_8
  __int64 v23; // rdx
  __int64 v24; // r14

  if ( !(unsigned __int8)sub_71BA80(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10) )
    return 0;
  v13 = sub_B8E0B0(a2);
  v16 = 0;
  if ( v13 )
    v16 = sub_B8D340(a2, 0);
  v11 = sub_70A970(a1, v16, a3, a4, a5, a6, v14, v15, a9, a10);
  if ( (_BYTE)v11 )
  {
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    {
      v17 = nullptr;
      v18 = sub_B8C3D0(a2);
      v23 = *(unsigned int *)(v18 + 8);
      v24 = *(_QWORD *)v18 + 8 * v23;
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
        v17 = *(__int64 **)sub_B8C3D0(a2);
      while ( (__int64 *)v24 != v17 )
      {
        if ( !(unsigned __int8)sub_71D160(a1, *v17, a3, a4, a5, a6, v21, v22, a9, a10, v23, v19, v20) )
          return 0;
        ++v17;
      }
    }
  }
  else
  {
    return 0;
  }
  return v11;
}
