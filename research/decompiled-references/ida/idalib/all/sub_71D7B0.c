__int64 __fastcall sub_71D7B0(
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
  double v13; // xmm4_8
  double v14; // xmm5_8
  __int64 v15; // rsi
  __int64 *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  double v20; // xmm4_8
  double v21; // xmm5_8
  __int64 v22; // rdx
  __int64 v23; // r14

  if ( !(unsigned __int8)sub_70DBE0(a1, *(_QWORD *)(a2 + 40), 0, a3, a4, a5, a6, a7, a8, a9, a10) )
    return 0;
  v15 = 0;
  if ( (unsigned __int8)sub_B8E0B0(a2) )
    v15 = sub_B8D340(a2, 0);
  v11 = sub_70A970(a1, v15, a3, a4, a5, a6, v13, v14, a9, a10);
  if ( (_BYTE)v11 )
  {
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    {
      v16 = nullptr;
      v17 = sub_B8C3D0(a2);
      v22 = *(unsigned int *)(v17 + 8);
      v23 = *(_QWORD *)v17 + 8 * v22;
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
        v16 = *(__int64 **)sub_B8C3D0(a2);
      while ( (__int64 *)v23 != v16 )
      {
        if ( !(unsigned __int8)sub_71D160(a1, *v16, a3, a4, a5, a6, v20, v21, a9, a10, v22, v18, v19) )
          return 0;
        ++v16;
      }
    }
  }
  else
  {
    return 0;
  }
  return v11;
}
