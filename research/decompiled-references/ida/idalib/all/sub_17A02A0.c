char __fastcall sub_17A02A0(__int64 a1)
{
  char v1; // al
  unsigned __int64 v2; // rdx
  unsigned __int8 v3; // cl
  char result; // al

  v1 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( v1 != 40 && v1 != 46 )
    return v1 == 43;
  v2 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) == 0 )
  {
    if ( v2 )
      goto LABEL_5;
    return v1 == 43;
  }
  v2 = *(_QWORD *)(v2 + 8);
  if ( !v2 )
    return v1 == 43;
LABEL_5:
  v3 = *(_BYTE *)(sub_B8EAA0(v2) + 8) & 0x7F;
  if ( v3 <= 0x12u )
  {
    result = 1;
    if ( ((1LL << v3) & 0x40182) != 0 )
      return result;
  }
  else
  {
    result = 1;
    if ( ((v3 + 94) & 0x7Fu) <= 5 )
      return result;
  }
  return (*(_BYTE *)(a1 + 28) & 0x7F) == 43;
}
