unsigned __int64 __fastcall navstack_t_stack_jump(__int64 a1, char a2, __int64 a3)
{
  unsigned __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 8) & 1) == 0 )
    return sub_4BA750(*(__int64 **)(qword_2CCB598 + 1672), a1, a2, a3);
  return result;
}
