void *__fastcall sub_2222F90(__int64 a1)
{
  void *result; // rax

  memset(*(void **)a1, 0, 8LL * *(unsigned int *)(a1 + 8));
  result = *(void **)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8)) = -1;
  *(_DWORD *)(a1 + 12) = 0;
  return result;
}
