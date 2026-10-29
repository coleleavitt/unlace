bool __fastcall sub_F58030(__int64 a1)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  result = 0;
  if ( *(_BYTE *)(v1 + 16) == 13 )
    return ((*(_WORD *)(v1 + 18) >> 3) & 0x1FFu) - 440 <= 2;
  return result;
}
