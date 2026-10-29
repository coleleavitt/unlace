__int64 __fastcall dwarf_section_in_group_by_name(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi

  dword_B8D44 = a3;
  v3 = *(_QWORD *)(a1 + 224);
  dword_B8D40 = 0;
  lookfor_name = a2;
  _dwarf_twalk(v3, sub_2F570);
  return (unsigned int)dword_B8D40;
}

