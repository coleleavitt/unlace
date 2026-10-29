__int64 __fastcall dwarf_file_name_is_full_path(char *a1)
{
  char v1; // al
  unsigned int v2; // edx

  v1 = *a1;
  v2 = 0;
  if ( !*a1 )
    return v2;
  if ( v1 != 92 && v1 != 47 )
  {
    if ( (unsigned __int8)((v1 & 0xDF) - 65) <= 0x19u && a1[1] == 58 )
      return (a1[2] == 47) | (unsigned __int8)(a1[2] == 92);
    return v2;
  }
  return 1;
}

