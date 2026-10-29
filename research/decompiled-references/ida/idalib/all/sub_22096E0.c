void *__fastcall sub_22096E0(_QWORD *a1, __int64 a2, unsigned int a3)
{
  void *result; // rax

  *a1 = a2;
  if ( a3 > 1 )
    return memset(a1 + 1, 0, 8LL * (a3 - 2) + 8);
  return result;
}
