char __fastcall sub_B64080(__int64 a1)
{
  unsigned __int8 v1; // al
  __int16 v2; // cx
  unsigned __int8 v3; // dl
  char result; // al
  int v5; // ecx

  if ( !*(_QWORD *)(a1 + 40) )
    return 1;
  v1 = *(_BYTE *)(a1 + 28);
  v2 = *(_WORD *)(a1 + 30);
  v3 = v1 & 0x7F;
  if ( (v2 & 0x3FFF) != 0 )
  {
    if ( ((v3 + 61) & 0x7Fu) <= 1 || v3 == 47 )
      return 1;
    if ( (v2 & 0x980) != 0 )
    {
      if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1) != a1 )
        return 1;
      v1 = *(_BYTE *)(a1 + 28);
      v3 = v1 & 0x7F;
    }
    v5 = v3;
    if ( (unsigned int)v3 - 60 <= 1 )
      return 1;
  }
  else
  {
    v5 = 56;
    if ( v3 != 56 )
      return 1;
  }
  if ( (unsigned int)(v5 - 34) > 5 )
    goto LABEL_10;
  if ( (unsigned __int8)sub_B53D40(a1) )
    return 1;
  v1 = *(_BYTE *)(a1 + 28);
  v3 = v1 & 0x7F;
LABEL_10:
  result = v1 >> 7;
  if ( v3 != 36 )
    return 0;
  return result;
}

