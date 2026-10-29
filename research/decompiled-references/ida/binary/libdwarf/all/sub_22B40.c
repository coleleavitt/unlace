void __fastcall sub_22B40(Dwarf_Debug *a1, Dwarf_Debug *a2)
{
  Dwarf_Debug *v2; // rbp
  Dwarf_Debug *v4; // rsi
  Dwarf_Debug v5; // rsi
  Dwarf_Debug *v6; // rbp

  v2 = a1;
  if ( !a1 )
    goto LABEL_7;
  do
  {
    v4 = v2;
    v2 = (Dwarf_Debug *)v2[12];
    dwarf_dealloc(v4[10], v4, 0x15u);
  }
  while ( v2 );
  while ( a2 )
  {
    v5 = a2[9];
    v6 = a2;
    a2 = (Dwarf_Debug *)a2[10];
    if ( v5 )
      dwarf_dealloc(v6[8], v5, 0x21u);
    dwarf_dealloc(v6[8], v6, 0x14u);
LABEL_7:
    ;
  }
}

