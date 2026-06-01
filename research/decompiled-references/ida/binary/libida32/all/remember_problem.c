unsigned __int64 __fastcall remember_problem(unsigned __int8 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 result; // rax

  result = *(unsigned int *)&debug;
  if ( (debug & 0x800) != 0 )
  {
    if ( (unsigned __int8)(a1 - 1) <= 0xFu )
      sub_383DA0();
    sub_383DA0();
  }
  if ( a1 != 6 )
    return sub_4DA9D0(*(_QWORD **)(qword_2CA1698 + 1480), a1, a2, a3);
  return result;
}

