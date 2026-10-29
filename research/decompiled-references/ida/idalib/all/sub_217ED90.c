_QWORD *__fastcall sub_217ED90(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rcx
  __int64 v4; // rax
  _QWORD *v5; // rdi
  _QWORD *result; // rax

  v3 = (unsigned int *)a1[1];
  v4 = *a1;
  v5 = (_QWORD *)a1[2];
  result = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 144) + 16LL * *v3) + 16LL * (*v5)++);
  *result = a2;
  result[1] = a3;
  return result;
}
