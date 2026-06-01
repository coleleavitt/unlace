__int64 __fastcall sub_6FEC70(
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
  __int64 v11; // rax
  __int64 *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r13
  __int64 v16; // rsi
  double v17; // xmm4_8
  double v18; // xmm5_8
  __int64 *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // r13

  v11 = *(_QWORD *)(a2 + 96);
  if ( v11 )
  {
    v12 = (__int64 *)(v11 + 16);
    v13 = 8LL * *(unsigned int *)(v11 + 8);
    v14 = v11 + v13 + 16;
    if ( v13 )
    {
      while ( (unsigned __int8)sub_6FE990(a1, *v12, a3, a4, a5, a6, a7, a8, a9, a10) )
      {
        if ( (__int64 *)v14 == ++v12 )
          goto LABEL_7;
      }
      return 0;
    }
  }
LABEL_7:
  v16 = a2 + 48;
  if ( !a2 )
    v16 = 0;
  if ( !(unsigned __int8)sub_6EA390(a1, v16, a3, a4, a5, a6, a7, a8, a9, a10) )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v19 = nullptr;
    v20 = sub_B68690(a2);
    v23 = *(unsigned int *)(v20 + 8);
    v24 = *(_QWORD *)v20 + 8 * v23;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v19 = *(__int64 **)sub_B68690(a2);
    if ( (__int64 *)v24 != v19 )
    {
      while ( (unsigned __int8)sub_6FCB80(a1, *v19, a3, a4, a5, a6, v17, v18, a9, a10, v23, v21, v22) )
      {
        if ( (__int64 *)v24 == ++v19 )
          return sub_6CCC80((_QWORD *)*a1, a3, *(double *)a4.m128i_i64, a5, a6, v17, v18, a9, a10, 0, a2);
      }
      return 0;
    }
  }
  return sub_6CCC80((_QWORD *)*a1, a3, *(double *)a4.m128i_i64, a5, a6, v17, v18, a9, a10, 0, a2);
}

