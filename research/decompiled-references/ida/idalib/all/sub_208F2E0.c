bool __fastcall sub_208F2E0(__int64 a1)
{
  bool result; // al

  if ( *(_BYTE *)a1 == 16 )
    return (*(_DWORD *)(a1 + 4) & 0x7FFFFFF) == 0;
  result = 0;
  if ( *(_BYTE *)a1 == 13 && *(_QWORD *)(a1 + 72) == a1 + 72 )
    return ((*(_WORD *)(a1 + 34) >> 1) & 0x400) == 0;
  return result;
}
