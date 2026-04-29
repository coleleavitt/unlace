__int64 __fastcall sub_5710(unsigned int a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  result = a1;
  switch ( (_BYTE)a1 )
  {
    case 1:
      return add_word(a2, (unsigned __int16)a3);
    case 2:
      return add_dword(a2, a3);
    case 0:
      return add_byte(a2, (unsigned __int8)a3);
  }
  if ( byte_143A1 )
  {
    byte_143A1 = 1;
  }
  else
  {
    result = sub_5150(
               0xFFFFFFFF,
               (__int64)"HIDECANCEL\nIllegal BAKPAT record type %d at file position %08llX, continue?",
               (unsigned __int8)a1,
               qword_145E0);
    if ( (int)result <= 0 )
      sub_5230(0);
    byte_143A1 = 1;
  }
  return result;
}
