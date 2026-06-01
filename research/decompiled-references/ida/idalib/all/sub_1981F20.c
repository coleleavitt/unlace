__int64 __fastcall sub_1981F20(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  unsigned __int64 v4; // rax

  v4 = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 64), a3, a4);
  if ( v4 == 1 )
    return 0;
  else
    return sub_1B1B1D0(
             *(_QWORD *)(*a1 + 760),
             *(_DWORD *)(a2 + 36),
             *(_DWORD *)(a2 + 40),
             *(_DWORD *)(a2 + 32),
             (unsigned int)v4 & 0xFFFFFFFE,
             *(_DWORD *)a2,
             *(_DWORD *)(a2 + 28),
             *(_DWORD *)(a2 + 44),
             *(_DWORD *)(a2 + 48),
             *(_DWORD *)(a2 + 52),
             *(_DWORD *)(a2 + 56),
             *(_DWORD *)(a2 + 4));
}
