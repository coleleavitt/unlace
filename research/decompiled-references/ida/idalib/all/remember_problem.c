unsigned __int64 __fastcall remember_problem(unsigned __int8 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax

  result = *(unsigned int *)&debug;
  if ( (debug & 0x800) != 0 )
  {
    if ( (unsigned __int8)(a1 - 1) <= 0xFu )
      sub_3879F0();
    sub_3879F0();
  }
  if ( a1 != 6 )
    return sub_4F21B0(*(_QWORD **)(qword_2CCB598 + 1672), a1, a2, a3);
  return result;
}
