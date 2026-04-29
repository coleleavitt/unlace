__int64 __fastcall sub_40FAA0(
        _QWORD *a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rbp
  unsigned __int64 v10; // r13
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  __int64 v17; // rdx
  int v18; // eax

  v9 = *(_QWORD *)(a1[1] + 920LL);
  if ( (*(_BYTE *)(v9 + 176) & 0x20) == 0 )
  {
    v10 = a1[5];
    if ( *(_QWORD *)(v9 + 112) )
      return sub_3E9AE0((__int64 *)(v9 + 104), v10);
    if ( (unsigned __int8)sub_40F2C0(a1, *(double *)a2.m128_u64, a3, a4, a5, a6, a7, a8, a9) )
    {
      sub_3F5050((__int64)a1);
      v17 = a1[2];
      v18 = *(_DWORD *)(v17 + 24);
      BYTE1(v18) &= ~2u;
      LOBYTE(v18) = v18 | 0x80;
      *(_DWORD *)(v17 + 24) = v18;
      return sub_3E9AE0((__int64 *)(v9 + 104), v10);
    }
    *(_DWORD *)(v9 + 176) |= 0x20u;
    sub_3311F0((_QWORD *)a1[1], v10, 0x12u, v12, v13, v14, a2, a3, a4, a5, v15, v16, a8, a9);
  }
  return 0xFFFFFFFFLL;
}
