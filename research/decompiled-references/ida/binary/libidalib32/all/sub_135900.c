__int64 sub_135900()
{
  unsigned int v0; // ebx
  unsigned int error; // eax

  v0 = BYTE10(xmmword_244090);
  sub_1344B0();
  BYTE1(v0) |= 8u;
  error = find_error();
  if ( error == -1 )
  {
    sub_108A90(1072, v0);
    return 0;
  }
  else
  {
    sub_108A90(1071, error);
    return (unsigned __int8)sub_120900();
  }
}

