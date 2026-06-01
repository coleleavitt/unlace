__int64 __fastcall sub_71EF70(
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
  __int64 *v11; // rax
  __int64 v12; // r8
  double v13; // xmm4_8
  double v14; // xmm5_8
  double v15; // xmm4_8
  double v16; // xmm5_8
  __int64 v17; // rsi
  unsigned int v18; // r12d
  __int64 *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  double v24; // xmm4_8
  double v25; // xmm5_8
  __int64 v26; // rdx
  __int64 v27; // r13

  if ( *(_DWORD *)(a2 + 96) )
  {
    v11 = (__int64 *)sub_6F3640(a2);
    if ( !(unsigned __int8)sub_717AC0(a1, *v11, (__int64)(v11 + 1), *v11, v12, a3, a4, a5, a6, v13, v14, a9, a10) )
      return 0;
  }
  v17 = 0;
  if ( (unsigned __int8)sub_B8E0B0(a2) )
    v17 = sub_B8D340(a2, 0);
  v18 = sub_70A970(a1, v17, a3, a4, a5, a6, v15, v16, a9, a10);
  if ( (_BYTE)v18 )
  {
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    {
      v20 = nullptr;
      v21 = sub_B8C3D0(a2);
      v26 = *(unsigned int *)(v21 + 8);
      v27 = *(_QWORD *)v21 + 8 * v26;
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
        v20 = *(__int64 **)sub_B8C3D0(a2);
      while ( (__int64 *)v27 != v20 )
      {
        if ( !(unsigned __int8)sub_71D160(a1, *v20, a3, a4, a5, a6, v24, v25, a9, a10, v26, v22, v23) )
          return 0;
        ++v20;
      }
    }
  }
  else
  {
    return 0;
  }
  return v18;
}
