_QWORD *__fastcall sub_BE0020(_QWORD *a1, __int64 a2, int a3)
{
  _QWORD *result; // rax
  unsigned int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rdx

  result = a1;
  v4 = 3 * a3;
  v5 = 8LL * *(unsigned int *)(a2 + 28) + 32;
  *a1 = *(_QWORD *)(a2 + 8LL * v4 + v5);
  v6 = *(_QWORD *)(a2 + 8LL * (v4 + 1) + v5);
  v7 = *(_QWORD *)(a2 + 8LL * (v4 + 2) + v5);
  result[1] = v6;
  result[2] = v7;
  return result;
}

