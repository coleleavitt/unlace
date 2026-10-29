unsigned __int64 __fastcall sub_4DB6D0(_QWORD *a1, unsigned __int8 a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 result; // rax

  result = *(unsigned int *)&debug;
  if ( (debug & 0x800) != 0 )
  {
    if ( (unsigned __int8)(a2 - 1) <= 0xFu )
      sub_383DA0();
    sub_383DA0();
  }
  if ( a2 != 6 )
    return sub_4DA9D0(a1, a2, a3, a4);
  return result;
}

