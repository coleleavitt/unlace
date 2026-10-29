__int64 __fastcall dwarf_pathjoinl(__int64 a1, const char *a2)
{
  char *v2; // rbp
  __int64 v3; // rax
  char *v4; // rdx
  char v5; // al
  char v6; // al

  v2 = (char *)dwarfstring_string(a2, a2);
  dwarfstring_string(a1, a2);
  v3 = dwarfstring_strlen(a1);
  if ( !v3
    || (v4 = (char *)(v3 + dwarfstring_string(a1, a2) - 1), (v5 = *v4) != 0)
    && (v5 == 47 || (unsigned __int8)((v5 & 0xDF) - 67) <= 0x17u && v4[1] == 58)
    || (v6 = *v2) != 0 && (v6 == 47 || (unsigned __int8)((v6 & 0xDF) - 67) <= 0x17u && v2[1] == 58) )
  {
    dwarfstring_append();
    return 0;
  }
  else
  {
    dwarfstring_append();
    dwarfstring_append();
    return 0;
  }
}

