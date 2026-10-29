void __fastcall sub_1687EE0(__int64 a1, __int64 a2, __int64 a3, __m128i a4, double a5)
{
  unsigned __int64 v5; // r12
  __int64 v6; // r9
  unsigned int *v7; // r11

  v5 = *(_QWORD *)(a2 + 64);
  v6 = *(_QWORD *)(a2 + 40);
  v7 = *(unsigned int **)(a2 + 56);
  *(_BYTE *)(a2 + 1) = 1;
  sub_1685FE0(
    a1,
    *(unsigned int *)(a2 + 72),
    a3,
    *(_QWORD *)(a2 + 8),
    *(_QWORD *)(a2 + 16),
    *(_QWORD *)(a2 + 24),
    a4,
    a5,
    v6,
    *(_QWORD *)(a2 + 48),
    v7,
    v5,
    *(_QWORD *)(a2 + 32),
    0);
}
