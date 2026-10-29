__int64 __fastcall sub_6FE1B0(
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
  double v12; // xmm4_8
  double v13; // xmm5_8
  __int64 v14; // rsi
  unsigned int v15; // r13d
  double v16; // xmm4_8
  double v17; // xmm5_8
  __int64 *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // r14
  _QWORD *v25; // rdi
  int v26; // eax

  if ( !(unsigned __int8)sub_6FCA70(a1, (__int64)a2, a3, a4, a5, a6, a7, a8, a9, a10) )
    return 0;
  v14 = (__int64)(a2 + 64);
  if ( !a2 )
    v14 = 0;
  v15 = sub_6EA390(a1, v14, a3, a4, a5, a6, v12, v13, a9, a10);
  if ( !(_BYTE)v15 )
    return 0;
  if ( (a2[29] & 1) != 0 )
  {
    v19 = nullptr;
    v20 = sub_B68690(a2);
    v23 = *(unsigned int *)(v20 + 8);
    v24 = *(_QWORD *)v20 + 8 * v23;
    if ( (a2[29] & 1) != 0 )
      v19 = *(__int64 **)sub_B68690(a2);
    if ( (__int64 *)v24 != v19 )
    {
      while ( (unsigned __int8)sub_6FCB80(a1, *v19, a3, a4, a5, a6, v16, v17, a9, a10, v23, v21, v22) )
      {
        if ( (__int64 *)v24 == ++v19 )
          goto LABEL_15;
      }
      return 0;
    }
  }
LABEL_15:
  v25 = (_QWORD *)*a1;
  v26 = a2[28] & 0x7F;
  if ( (unsigned int)(v26 - 59) > 2 )
  {
    if ( !(unsigned __int8)sub_6CB220(v25, nullptr, a2, a3, a4, a5, a6, v16, v17, a9, a10) )
      return 0;
    v25 = (_QWORD *)*a1;
    v26 = a2[28] & 0x7F;
  }
  if ( (unsigned int)(v26 - 60) <= 1 )
    return v15;
  return sub_6C3AC0(v25, nullptr, (__int64)a2, a3, a4, a5, *(double *)a6.m128_u64, v16, v17, a9, a10);
}

