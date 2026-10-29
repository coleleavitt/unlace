__int64 __fastcall insn_add_cref(__int64 a1, int a2, int a3)
{
  int name_base_ea; // eax

  if ( a3 )
  {
    name_base_ea = get_name_base_ea((unsigned int)(a3 + *(_DWORD *)(a1 + 8)));
    if ( a2 != name_base_ea )
      a2 = name_base_ea;
  }
  return add_cref(*(_DWORD *)(a1 + 8), a2);
}

