unsigned __int64 __fastcall sub_3FB5B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 result; // rax

  v2 = xmmword_2CCB5B8 - 1;
  if ( (__int64)xmmword_2CCB5B8 - 1 >= 0 )
  {
    do
      result = sub_3FB430(*(int **)(qword_2CCB5B0 + 8 * v2), a2);
    while ( v2-- != 0 );
  }
  return result;
}
