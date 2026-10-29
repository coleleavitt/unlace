void *__fastcall sub_A1FE50(_QWORD *a1, _BYTE *a2, _BYTE *a3)
{
  size_t v5; // rbp
  __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  void *result; // rax

  v5 = a3 - a2;
  v6 = a1[1];
  v7 = a3 - a2 + v6;
  if ( v7 > a1[2] )
  {
    result = (void *)sub_2236E10(a1, a1 + 3, v7, 1);
    v6 = a1[1];
  }
  if ( a2 != a3 )
  {
    result = memcpy((void *)(*a1 + v6), a2, v5);
    v6 = a1[1];
  }
  a1[1] = v6 + v5;
  return result;
}
