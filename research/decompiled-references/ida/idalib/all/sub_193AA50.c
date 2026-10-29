__int64 __fastcall sub_193AA50(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v4; // rax

  v4 = sub_1933BC0(a1, *(_QWORD *)(a2 + 40), a3, a4);
  if ( v4 == 1 )
    return 0;
  else
    return sub_1B1BBD0(
             *(_QWORD *)(*a1 + 760),
             *(_DWORD *)(a2 + 32),
             (unsigned int)v4 & 0xFFFFFFFE,
             *(_DWORD *)a2,
             *(_DWORD *)(a2 + 28),
             *(_DWORD *)(a2 + 36),
             *(_DWORD *)(a2 + 4));
}
