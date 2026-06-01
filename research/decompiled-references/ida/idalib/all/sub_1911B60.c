void __fastcall sub_1911B60(__m128 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // r12
  _BOOL4 v6; // r13d
  unsigned int v7; // esi

  v5 = *(_QWORD *)(a2 + 24);
  v6 = (*(_BYTE *)(a1[14].m128_u64[1] + 12) & 0x10) == 0 && (*(_QWORD *)a2 & 0x100000LL) != 0
    || (*(_BYTE *)(v5 + 28) & 0x7Fu) - 35 > 3
    || (*(_BYTE *)(v5 + 82) & 8) == 0;
  v7 = *(_DWORD *)(a2 + 40);
  if ( !v7 )
    v7 = sub_BFE3C0(a2);
  sub_19116F0(a1, v7, v5, (_QWORD *)a2, v6, (__int64)&a1[280].m128_i64[1], a3, a4);
}
