bool __fastcall sub_1A0B100(__int64 a1)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  result = 0;
  if ( *(_BYTE *)(v1 + 16) == 13 )
    return (((*(_WORD *)(v1 + 18) >> 3) + 476) & 0x1FFu) <= 0xB;
  return result;
}
