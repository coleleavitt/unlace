_QWORD *__fastcall sub_217ECB0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  _QWORD *v9; // rcx
  _QWORD *result; // rax

  v9 = *(_QWORD **)(a1 + 16);
  result = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 144LL) + 16LL * **(unsigned int **)(a1 + 8))
                    + 24LL * (*v9)++);
  *result = a7;
  result[1] = a8;
  result[2] = a9;
  return result;
}
