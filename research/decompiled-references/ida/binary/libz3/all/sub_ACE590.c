void __fastcall sub_ACE590(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 v5; // rax

  v4 = sub_ACDB80(
         a3,
         a3 + 120,
         *(_QWORD *)(a1 + 16),
         *(_DWORD *)(a1 + 24),
         *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(unsigned int *)(a1 + 24) + 48));
  v5 = sub_ACDB80(
         a3,
         a3 + 88,
         a2,
         *(_DWORD *)(a1 + 28),
         *(_QWORD *)(a2 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 20) + ~*(_DWORD *)(a1 + 28)) + 80));
  sub_ACE1D0(v4, v5);
}

