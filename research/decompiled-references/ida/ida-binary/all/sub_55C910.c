void *__fastcall sub_55C910(__int64 a1, unsigned int a2, __int64 a3, unsigned int *a4)
{
  unsigned int v4; // r8d
  unsigned int v5; // edx
  void *result; // rax

  v4 = *(_DWORD *)(a1 + 8);
  v5 = 0;
  result = &unk_5C2F25;
  if ( a2 < v4 )
  {
    result = (void *)(*(_QWORD *)a1 + a2);
    v5 = v4 - a2;
  }
  *a4 = v5;
  return result;
}
