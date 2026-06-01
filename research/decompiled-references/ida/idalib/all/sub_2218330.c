__int64 __fastcall sub_2218330(char *a1, char *a2)
{
  char v2; // dl
  char v3; // cl
  __int64 result; // rax

  if ( a1 == a2 )
    return 0;
  v2 = *a1;
  if ( (unsigned __int8)(*a1 + 62) <= 0x1Du || a2 == a1 + 1 )
    return 1;
  v3 = a1[1];
  if ( v2 == -32 )
    return (unsigned int)((unsigned __int8)(v3 + 96) < 0x20u) + 1;
  if ( (unsigned __int8)(v2 + 31) <= 0xBu )
    return (unsigned int)((unsigned __int8)(v3 + 0x80) < 0x40u) + 1;
  if ( v2 == -19 )
    return (unsigned int)((unsigned __int8)(v3 + 0x80) < 0x20u) + 1;
  if ( (unsigned __int8)(v2 + 18) <= 1u )
    return (unsigned int)((unsigned __int8)(v3 + 0x80) < 0x40u) + 1;
  if ( v2 == -16 )
  {
    result = 1;
    if ( (unsigned __int8)(v3 + 112) > 0x2Fu )
      return result;
    goto LABEL_11;
  }
  if ( (unsigned __int8)(v2 + 15) <= 2u )
  {
    result = 1;
    if ( (unsigned __int8)(v3 + 0x80) > 0x3Fu )
      return result;
    goto LABEL_11;
  }
  result = 1;
  if ( v2 == -12 && (unsigned __int8)(v3 + 0x80) <= 0xFu )
  {
LABEL_11:
    if ( a2 == a1 + 2 )
      return 2;
    else
      return (unsigned int)((unsigned __int8)(a1[2] + 0x80) < 0x40u) + 2;
  }
  return result;
}
