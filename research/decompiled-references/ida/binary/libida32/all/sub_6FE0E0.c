__int64 __fastcall sub_6FE0E0(
        __int64 *a1,
        char *a2,
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
  __int64 v13; // rsi
  unsigned int v14; // r13d
  double v15; // xmm4_8
  double v16; // xmm5_8
  __int64 *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r14

  if ( !(unsigned __int8)sub_6F7DE0(a1, (__int64)a2, a3, a4, a5, a6, a7, a8, a9, a10) )
    return 0;
  v13 = (__int64)(a2 + 64);
  if ( !a2 )
    v13 = 0;
  v14 = sub_6EA390(a1, v13, a3, a4, a5, a6, v11, v12, a9, a10);
  if ( !(_BYTE)v14 )
    return 0;
  if ( (a2[29] & 1) != 0 )
  {
    v18 = nullptr;
    v19 = sub_B68690(a2);
    v22 = *(unsigned int *)(v19 + 8);
    v23 = *(_QWORD *)v19 + 8 * v22;
    if ( (a2[29] & 1) != 0 )
      v18 = *(__int64 **)sub_B68690(a2);
    if ( (__int64 *)v23 != v18 )
    {
      while ( (unsigned __int8)sub_6FCB80(a1, *v18, a3, a4, a5, a6, v15, v16, a9, a10, v22, v20, v21) )
      {
        if ( (__int64 *)v23 == ++v18 )
          goto LABEL_15;
      }
      return 0;
    }
  }
LABEL_15:
  if ( (a2[28] & 0x7Fu) - 59 <= 2 )
    return v14;
  return sub_6CB220((_QWORD *)*a1, nullptr, a2, a3, a4, a5, a6, v15, v16, a9, a10);
}

