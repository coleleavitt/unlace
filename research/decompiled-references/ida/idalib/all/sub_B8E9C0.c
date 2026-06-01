bool __fastcall sub_B8E9C0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  bool result; // al

  v2 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v2 = *(_QWORD *)(v2 + 8);
  result = 0;
  if ( a1 == v2 )
  {
    result = 1;
    if ( (*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      return *(_QWORD *)(a1 + 24) == a2;
  }
  return result;
}
