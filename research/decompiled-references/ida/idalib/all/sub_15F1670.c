unsigned __int64 __fastcall sub_15F1670(__int64 a1)
{
  unsigned __int64 v1; // rdi
  char i; // al
  unsigned __int8 v3; // al
  __int64 v4; // rdi
  unsigned __int64 v5; // rdi
  bool v6; // zf
  unsigned __int64 result; // rax

  v1 = sub_15F1540(a1, 0);
  for ( i = *(_BYTE *)(v1 + 8); ; i = *(_BYTE *)(v1 + 8) )
  {
    v3 = i & 0x7F;
    if ( (unsigned int)v3 - 58 > 3 )
      break;
    while ( 1 )
    {
      v4 = *(_QWORD *)(sub_B8C1B0(v1) + 16);
      if ( (v4 & 4) != 0 )
        break;
      v1 = v4 & 0xFFFFFFFFFFFFFFF8LL;
      v3 = *(_BYTE *)(v1 + 8) & 0x7F;
      if ( (unsigned int)v3 - 58 > 3 )
        goto LABEL_5;
    }
    v1 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
  }
LABEL_5:
  v5 = v1 - 48;
  v6 = v3 == 18;
  result = 0;
  if ( v6 )
    return v5;
  return result;
}
