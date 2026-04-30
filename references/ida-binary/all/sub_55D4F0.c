void *__fastcall sub_55D4F0(__int64 a1, unsigned int a2)
{
  unsigned int v2; // eax
  void *result; // rax

  v2 = *(_DWORD *)(a1 + 8);
  if ( a2 >= v2 )
    sub_55D280();
  result = memmove(
             (void *)(16LL * a2 + *(_QWORD *)a1),
             (const void *)(*(_QWORD *)a1 + 16LL * (a2 + 1)),
             16LL * (v2 - a2 - 1));
  --*(_DWORD *)(a1 + 8);
  return result;
}
