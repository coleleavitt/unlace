bool __fastcall sub_14F5220(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 2LL) & 4) != 0 && *(_WORD *)(a1 + 32) == 5 )
    return *(_QWORD *)(a1 + 2080) == *(_QWORD *)(a1 + 24);
  return result;
}
