__int64 __fastcall sub_ACE060(__int64 a1, __int64 a2, __int64 a3)
{
  return sub_ACDB80(
           a3,
           a3 + 88,
           a2,
           *(_DWORD *)(a1 + 16),
           *(_QWORD *)(a2 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 20) + ~*(_DWORD *)(a1 + 16)) + 80));
}

