bool __fastcall sub_19F5560(__int64 a1, __int64 a2)
{
  bool result; // al

  result = 1;
  if ( *(_BYTE *)(a2 + 48) == 1 && (*(_BYTE *)(a2 + 49) & 2) != 0 )
    return (*(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF0LL) == 0;
  return result;
}
