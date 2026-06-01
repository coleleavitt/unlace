__int64 (*sub_2296520())(void)
{
  int *v0; // rax
  int v1; // ebp
  int *v2; // rbx
  __int64 (*result)(void); // rax

  v0 = __errno_location();
  v1 = *v0;
  v2 = v0;
  result = qword_2D0B870;
  if ( qword_2D0B870 )
    result = (__int64 (*)(void))qword_2D0B870();
  *v2 = v1;
  return result;
}
