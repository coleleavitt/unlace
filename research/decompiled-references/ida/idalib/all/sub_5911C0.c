const char *__fastcall sub_5911C0(_QWORD *a1, int a2)
{
  const char *result; // rax

  if ( a2 == 1 )
  {
    a1 += 3;
  }
  else if ( a2 == 2 )
  {
    a1 += 6;
  }
  else if ( a2 )
  {
    sub_590030(a1);
  }
  result = haystack;
  if ( a1[1] )
    return (const char *)*a1;
  return result;
}
