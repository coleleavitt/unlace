_QWORD *__fastcall sub_870ED0(unsigned int *a1)
{
  _QWORD *v1; // rbp
  _QWORD *result; // rax

  sub_86D900(a1, 0x42u, 1, 0, 2, 0, 0x7Fu, 1);
  v1 = sub_86E080(a1, 5, 1, 0, 4, 0);
  sub_86B8E0(a1, 33, 15, 0, 130, -2);
  sub_86B8E0(a1, 33, 1, 0, 130, -1);
  if ( !*a1 )
  {
    a1[36] = 0;
    sub_86D720(a1, 32, 0, 15, 0, 15, 0, 127, 8);
    if ( !*a1 )
    {
      a1[36] = 0;
      sub_86D220(a1, 0xD0B0908u, 1, 0, 1, 0, 15, 0);
      if ( !*a1 )
      {
        a1[36] = 0;
        sub_868840(a1, 1, 0, 127, 3338);
      }
    }
  }
  sub_870770((__int64)a1, 32, 1, 0);
  sub_86D900(a1, 0x42u, 2, 0, 2, 0, 1u, 0);
  result = sub_868BC0((__int64)a1);
  if ( v1 )
  {
    if ( result )
    {
      v1[2] &= ~1uLL;
      v1[3] = result;
    }
  }
  return result;
}
