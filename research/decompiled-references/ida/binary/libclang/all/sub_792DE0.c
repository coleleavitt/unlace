char __fastcall sub_792DE0(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int8 v2; // al
  __int16 v3; // si
  unsigned __int8 v4; // dl
  char result; // al

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 <= 7 && !(_DWORD)v1 )
    return 1;
  v2 = *(_BYTE *)(a1 + 28);
  v3 = *(_WORD *)(a1 + 30);
  v4 = v2 & 0x7F;
  if ( (v3 & 0x3FFF) == 0 )
    return v4 != 54;
  if ( ((v4 + 63) & 0x7Fu) <= 1 || v4 == 45 )
    return 1;
  if ( (v3 & 0x980) != 0 )
  {
    if ( a1 != (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1) )
      return 1;
    v2 = *(_BYTE *)(a1 + 28);
    v4 = v2 & 0x7F;
  }
  if ( (unsigned int)v4 - 58 <= 1 )
    return 1;
  if ( (unsigned int)v4 - 32 <= 5 )
  {
    if ( sub_780E60(a1) )
      return 1;
    v2 = *(_BYTE *)(a1 + 28);
    v4 = v2 & 0x7F;
  }
  result = v2 >> 7;
  if ( v4 != 34 )
    return 0;
  return result;
}

