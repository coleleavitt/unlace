__int64 sub_74E4D0()
{
  char *v0; // rdx
  int v1; // ecx

  v0 = qword_2CAA5C0;
  v1 = 0;
  while ( (unsigned __int8)(*v0 - 48) <= 9u )
  {
    qword_2CAA5C0 = ++v0;
    v1 = *(v0 - 1) + 10 * v1 - 48;
    if ( v1 < 0 )
      sub_74E200();
  }
  return (unsigned int)v1;
}

