unsigned __int64 __fastcall get_db_byte(unsigned __int64 a1)
{
  unsigned __int64 result; // rax

  result = sub_3BE900(*(_QWORD **)(qword_2CCB598 + 1672), a1, 2);
  if ( (result & 0x100) == 0 )
    return 255;
  return result;
}
