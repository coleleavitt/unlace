unsigned __int64 __fastcall get_db_byte(unsigned int a1)
{
  unsigned __int64 result; // rax

  result = sub_3B9AA0(*(_QWORD *)(qword_2CA1698 + 1480), a1, 2);
  if ( (result & 0x100) == 0 )
    return 255;
  return result;
}

