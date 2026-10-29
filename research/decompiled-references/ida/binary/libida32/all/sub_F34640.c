bool __fastcall sub_F34640(__int64 a1)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  result = 0;
  if ( *(_BYTE *)(v1 + 16) == 13 && (((*(_WORD *)(v1 + 18) >> 3) + 464) & 0x1FFu) <= 0x36 )
    return ((1LL << ((unsigned __int8)(*(_WORD *)(v1 + 18) >> 3) - 48)) & 0x70000000001FFFLL) != 0;
  return result;
}

