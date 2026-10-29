void __fastcall dwarf_dealloc_fde_cie_list(Dwarf_Debug a1, _QWORD *a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  __int64 v9; // rbx
  void **v10; // rsi
  __int64 v11; // rbx
  void *v12; // rsi

  v9 = 0;
  if ( a3 > 0 )
  {
    do
    {
      v10 = (void **)a2[v9];
      if ( v10[9] )
      {
        dwarf_dealloc(a1, v10[9], 0x21u);
        v10 = (void **)a2[v9];
      }
      ++v9;
      dwarf_dealloc(a1, v10, 0x14u);
    }
    while ( a3 != v9 );
  }
  v11 = 0;
  if ( a5 > 0 )
  {
    do
    {
      v12 = (void *)a4[v11++];
      dwarf_dealloc(a1, v12, 0x15u);
    }
    while ( a5 != v11 );
  }
  if ( a2 )
    dwarf_dealloc(a1, a2, 0xFu);
  if ( a4 )
    dwarf_dealloc(a1, a4, 0xFu);
}

