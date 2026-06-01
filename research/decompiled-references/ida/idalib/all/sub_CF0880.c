void *__fastcall sub_CF0880(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // rdx
  void *v4; // rdi
  void *result; // rax

  if ( a1[2] < a2 )
    sub_2236E10(a1, a1 + 3, a2, 1);
  v3 = a1[1];
  v4 = (void *)(*a1 + v3);
  result = (void *)(a2 + *a1);
  if ( v4 != result )
    result = memset(v4, 0, a2 - v3);
  a1[1] = a2;
  return result;
}
