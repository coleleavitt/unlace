__int64 __fastcall dwarf_loc_block_sanity_check(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  unsigned int v5; // edx
  const char *v7; // rsi
  __int64 v8; // rax
  _QWORD v9[9]; // [rsp+0h] [rbp-48h] BYREF

  v3 = *(unsigned __int16 *)(a2 + 16);
  v9[5] = __readfsqword(0x28u);
  if ( v3 == 1 )
  {
    v5 = 0;
    if ( a1[190] + a1[191] < *(_QWORD *)(a2 + 8) + *(_QWORD *)a2 )
    {
      dwarfstring_constructor(v9);
      dwarfstring_append();
      v7 = "DW_LKIND_loclist";
      goto LABEL_8;
    }
  }
  else
  {
    v5 = 0;
    if ( v3 == 5 && a1[422] + a1[423] < *(_QWORD *)(a2 + 8) + *(_QWORD *)a2 )
    {
      dwarfstring_constructor(v9);
      dwarfstring_append();
      v7 = "DW_LKIND_loclists";
LABEL_8:
      dwarfstring_append();
      v8 = dwarfstring_string(v9, v7);
      _dwarf_error_string(a1, a3, 194, v8);
      dwarfstring_destructor(v9);
      return 1;
    }
  }
  return v5;
}

