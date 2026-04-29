char __fastcall sub_23730(__int64 a1)
{
  unsigned __int16 v2; // cx
  unsigned __int16 v3; // cx
  char result; // al

  while ( 1 )
  {
    v2 = *(_WORD *)(a1 + 16);
    if ( v2 != 221 )
      break;
    if ( sub_BFF0(a1) )
      a1 = *(_QWORD *)sub_C020((_BYTE *)a1);
    else
      a1 = 0;
  }
  if ( v2 > 0xDDu )
    return v2 != 234;
  v3 = v2 - 41;
  result = 1;
  if ( v3 <= 0x26u )
    return !((0x4000200001uLL >> v3) & 1);
  return result;
}
