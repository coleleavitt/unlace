__m128i *__fastcall sub_AD3CE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx

  v3 = sub_ACDB80(
         a3,
         a3 + 88,
         a2,
         *(_DWORD *)(a1 + 16),
         *(_QWORD *)(a2 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 20) + ~*(_DWORD *)(a1 + 16)) + 80));
  do
  {
    v4 = v3;
    v3 = *(_QWORD *)(v3 + 8);
  }
  while ( v3 );
  return sub_AC8A00(*(_QWORD *)(v4 + 56), *(__m128i **)(a1 + 24));
}

