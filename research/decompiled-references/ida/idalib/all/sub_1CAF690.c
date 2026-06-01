char __fastcall sub_1CAF690(__int64 a1, __int64 a2)
{
  char result; // al

  result = *(_BYTE *)(a1 + 16) & (a2 != 0);
  if ( !result || (*(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
    return sub_BC8430(a1, a2);
  return result;
}
