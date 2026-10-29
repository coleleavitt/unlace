_QWORD *__fastcall sub_9B9A50(__int64 **a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rdi
  __int64 v7; // rdx
  _QWORD *result; // rax

  v6 = *a1;
  v7 = *v6;
  v6[10] += 24;
  result = (_QWORD *)((v7 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  if ( v6[1] >= (unsigned __int64)(result + 3) && v7 )
    *v6 = (__int64)(result + 3);
  else
    result = (_QWORD *)sub_962430((__int64)v6, 24, 24, 4, a5, a6);
  *result = 4;
  result[1] = 0;
  result[2] = a2;
  return result;
}

