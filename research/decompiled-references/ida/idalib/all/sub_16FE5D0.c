bool __fastcall sub_16FE5D0(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  unsigned int v3; // edx
  bool result; // al

  v2 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v2 == 72 )
  {
    a2 = *(_QWORD *)(a2 + 48);
    v2 = *(_BYTE *)(a2 + 28) & 0x7F;
  }
  v3 = v2 - 58;
  result = 0;
  if ( v3 <= 3 )
    return *(_BYTE *)(a2 + 73) >> 5 == 2;
  return result;
}
