__int64 __fastcall sub_679BC0(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9)
{
  char v10; // al
  __int64 v11; // rsi
  __int64 v12; // rsi
  unsigned int v13; // r13d
  __int64 *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r14

  sub_653CE0(a1, a2, a3, *(double *)a4.m128i_i64, a5, *(double *)a6.m128_u64, a7, a8, a9);
  if ( !(unsigned __int8)sub_674990(a1, a2, a3, a4, a5, a6) )
    return 0;
  v10 = *(_BYTE *)(a2 + 68);
  if ( (v10 & 1) != 0 )
  {
    v11 = *(_QWORD *)(a2 + 72);
    if ( (~v10 & 0xC) != 0 && (v10 & 0xC) != 0 )
      v11 = *(_QWORD *)(v11 + 8);
    if ( !(unsigned __int8)sub_672CC0(a1, v11, a3, a4, a5, a6) )
      return 0;
  }
  v12 = 0;
  if ( (unsigned __int8)sub_79B790(a2) )
    v12 = sub_79AC10(a2);
  v13 = sub_66F3A0(a1, v12, a3, a4, a5, a6);
  if ( (_BYTE)v13 )
  {
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    {
      v15 = nullptr;
      v16 = sub_79A2B0(a2);
      v17 = *(_QWORD *)v16 + 8LL * *(unsigned int *)(v16 + 8);
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
        v15 = *(__int64 **)sub_79A2B0(a2);
      while ( (__int64 *)v17 != v15 )
      {
        if ( !(unsigned __int8)sub_6777E0(a1, *v15, a3, a4, a5, a6) )
          return 0;
        ++v15;
      }
    }
  }
  else
  {
    return 0;
  }
  return v13;
}

