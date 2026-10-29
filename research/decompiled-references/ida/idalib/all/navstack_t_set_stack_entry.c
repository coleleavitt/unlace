unsigned __int64 __fastcall navstack_t_set_stack_entry(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 8) & 1) == 0 )
    return sub_4B6E60(qword_2CCB598, *(_QWORD *)a1, a2, a3, 0);
  return result;
}
