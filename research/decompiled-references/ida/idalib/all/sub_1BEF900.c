__int64 __fastcall sub_1BEF900(__int64 a1, unsigned __int64 *a2, __int64 a3, char a4, __m128 a5, __m128 a6)
{
  unsigned __int16 v7; // dx

  LOBYTE(v7) = **(_BYTE **)(a1 + 40);
  HIBYTE(v7) = a4;
  return sub_1BEF110(
           *(_QWORD *)a1,
           **(_QWORD **)(a1 + 8),
           a2,
           a3,
           **(__int64 ***)(a1 + 16),
           *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL),
           a5,
           a6,
           *(_QWORD *)(a1 + 24),
           *(__int64 **)(a1 + 32),
           v7,
           0,
           0,
           0,
           **(_BYTE **)(a1 + 48));
}
