__int64 __fastcall sub_F2AEB0(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  if ( a2 == 2 )
    return sub_995540(*(_QWORD *)(a1 + 1096), " explicit_specialization");
  if ( a2 <= 2 )
  {
    if ( a2 == 1 )
      return sub_995540(*(_QWORD *)(a1 + 1096), " implicit_instantiation");
  }
  else if ( a2 == 3 )
  {
    return sub_995540(*(_QWORD *)(a1 + 1096), " explicit_instantiation_declaration");
  }
  else if ( a2 == 4 )
  {
    return sub_995540(*(_QWORD *)(a1 + 1096), " explicit_instantiation_definition");
  }
  return result;
}
