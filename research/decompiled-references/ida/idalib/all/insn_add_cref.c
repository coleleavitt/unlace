__int64 __fastcall insn_add_cref(__int64 a1, __int64 a2, int a3)
{
  __int64 name_base_ea; // rax

  if ( a3 )
  {
    name_base_ea = get_name_base_ea(*(_QWORD *)(a1 + 16) + a3);
    if ( a2 != name_base_ea )
      LODWORD(a2) = name_base_ea;
  }
  return add_cref(*(_QWORD *)(a1 + 16), a2);
}
