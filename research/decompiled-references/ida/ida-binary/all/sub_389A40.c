__int64 __fastcall struc_operand_info_t__::vfunc_2(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  print_operand(a1, *(_QWORD *)(a2 + 16), *(unsigned int *)(a2 + 24), 0, 0);
  if ( *(_QWORD *)(a1 + 8) > 1u )
    tag_remove(a1, *(_QWORD *)a1, 0);
  return a1;
}
