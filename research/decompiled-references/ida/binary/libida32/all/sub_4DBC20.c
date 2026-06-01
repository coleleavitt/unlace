__int64 __fastcall sub_4DBC20(unsigned int a1)
{
  unsigned int i; // ebx
  __int64 v3; // rdi
  __int64 result; // rax

  for ( i = 1; i != 17; ++i )
  {
    if ( i == 14 )
      i = 15;
    v3 = i;
    result = forget_problem(v3, a1);
  }
  return result;
}

