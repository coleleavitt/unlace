__int64 __fastcall sub_ACE0E0(__int64 a1, __int64 a2, __int64 a3)
{
  sub_ACDB80(
    a3,
    a3 + 120,
    *(_QWORD *)(a1 + 16),
    *(_DWORD *)(a1 + 24),
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(unsigned int *)(a1 + 24) + 48));
  return sub_ACDB80(
           a3,
           a3 + 88,
           a2,
           *(_DWORD *)(a1 + 28),
           *(_QWORD *)(a2 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 20) + ~*(_DWORD *)(a1 + 28)) + 80));
}

