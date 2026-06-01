char __fastcall sub_16B5D00(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int16 v2; // ax
  int v3; // eax
  char result; // al

  while ( 1 )
  {
    v1 = sub_BFBAE0(a1);
    v2 = *(_WORD *)v1 & 0x1FF;
    if ( v2 <= 0x75u )
      break;
    if ( v2 > 0x77u )
      return 0;
    v3 = (*(_WORD *)(v1 + 2) >> 3) & 0x3F;
    if ( v3 != 5 && v3 != 2 )
      return 0;
    result = sub_16B5D00(*(_QWORD *)(v1 + 16));
    if ( result )
      return result;
    a1 = *(_QWORD *)(v1 + 24);
  }
  if ( v2 == 5 )
    return (*(_BYTE *)(v1 + 2) & 0x78) == 0;
  return 0;
}
