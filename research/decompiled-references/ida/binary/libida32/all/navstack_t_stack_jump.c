__int64 __fastcall navstack_t_stack_jump(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 4) & 1) == 0 )
    return sub_4A4F10(*(__int64 **)(qword_2CA1698 + 1480), a1, a2, a3);
  return result;
}

