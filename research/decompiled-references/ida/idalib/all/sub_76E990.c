__int64 sub_76E990()
{
  char *v0; // rdx
  int v1; // ecx

  v0 = qword_2CD44C0;
  v1 = 0;
  while ( (unsigned __int8)(*v0 - 48) <= 9u )
  {
    qword_2CD44C0 = ++v0;
    v1 = *(v0 - 1) + 10 * v1 - 48;
    if ( v1 < 0 )
      sub_76E6C0();
  }
  return (unsigned int)v1;
}
