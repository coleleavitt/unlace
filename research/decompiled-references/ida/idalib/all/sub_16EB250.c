__int64 __fastcall sub_16EB250(__int64 a1, __int64 a2, __int64 a3, __m128i a4)
{
  unsigned int v5; // eax
  unsigned int v6; // r13d
  __int64 v7; // rax

  *(double *)a4.m128i_i64 = sub_18C2050(a1, 0, a3, *(_QWORD *)(a2 + 32));
  v6 = v5;
  v7 = sub_EEC8C0(*(_QWORD *)(a2 + 32), 0, *(double *)a4.m128i_i64);
  sub_16E9510(
    a1,
    0,
    a3,
    0,
    a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32,
    *(unsigned int *)(a2 + 16),
    a4,
    0,
    *(_DWORD *)(a2 + 20),
    v7,
    v6);
  return 0;
}
