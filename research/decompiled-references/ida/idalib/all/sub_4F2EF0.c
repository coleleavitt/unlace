unsigned __int64 __fastcall sub_4F2EF0(_QWORD *a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 result; // rax

  result = *(unsigned int *)&debug;
  if ( (debug & 0x800) != 0 )
  {
    if ( (unsigned __int8)(a2 - 1) <= 0xFu )
      sub_3879F0();
    sub_3879F0();
  }
  if ( a2 != 6 )
    return sub_4F21B0(a1, a2, a3, a4);
  return result;
}
