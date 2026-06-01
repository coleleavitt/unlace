__int64 __fastcall struc_operand_info_t__::vfunc_3(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 flags; // rax

  v1 = *(_DWORD *)(a1 + 24);
  flags = get_flags_ex(*(_QWORD *)(a1 + 16), 0);
  return (unsigned int)is_defarg(flags, v1) ^ 1;
}
