bool __fastcall sub_F342B0(__int64 a1)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  result = 0;
  if ( *(_BYTE *)(v1 + 16) == 13 && (((*(_WORD *)(v1 + 18) >> 3) + 75) & 0x1FFu) <= 0xD )
    return ((1LL << ((unsigned __int8)(*(_WORD *)(v1 + 18) >> 3) + 75)) & 0x383F) != 0;
  return result;
}

