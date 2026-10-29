__int64 sub_174970()
{
  if ( qword_2565B0 )
  {
    *(_QWORD *)&xmmword_2565B8 = 0;
    qfree();
    qword_2565B0 = 0;
    *((_QWORD *)&xmmword_2565B8 + 1) = 0;
  }
  return reg_delete_subkey();
}

