__int64 __fastcall sub_71F700(
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
  char v11; // al
  double v12; // xmm4_8
  double v13; // xmm5_8
  __int64 v14; // rsi
  unsigned int v15; // r12d
  __int64 *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  double v21; // xmm4_8
  double v22; // xmm5_8
  __int64 v23; // rdx
  __int64 v24; // r13

  v11 = sub_B8E0B0(a2);
  v14 = 0;
  if ( v11 )
    v14 = sub_B8D340(a2, 0);
  v15 = sub_70A970(a1, v14, a3, a4, a5, a6, v12, v13, a9, a10);
  if ( (_BYTE)v15 )
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
  return v15;
}
