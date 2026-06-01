__int64 sub_173E70()
{
  if ( qword_2553F0 )
  {
    *(_QWORD *)&xmmword_2553F8 = 0;
    qfree();
    qword_2553F0 = 0;
    *((_QWORD *)&xmmword_2553F8 + 1) = 0;
  }
  return reg_delete_subkey();
}

