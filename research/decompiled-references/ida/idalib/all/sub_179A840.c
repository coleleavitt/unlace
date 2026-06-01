bool __fastcall sub_179A840(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdi
  bool result; // al
  unsigned __int8 v4; // cl

  v1 = *(_QWORD *)(a1 + 16);
  v2 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v1 & 4) != 0 )
    v2 = *(_QWORD *)(v2 + 8);
  result = 0;
  if ( v2 )
  {
    v4 = *(_BYTE *)(sub_B8EAA0(v2) + 8) & 0x7F;
    if ( v4 > 0x12u )
      return ((v4 + 94) & 0x7Fu) <= 5;
    else
      return ((1LL << v4) & 0x40182) != 0;
  }
  return result;
}
