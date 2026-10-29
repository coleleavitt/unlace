_QWORD *__fastcall sub_9A94C0(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rdi
  __int64 v8; // rdx
  _QWORD *result; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx

  v7 = (__int64 *)(*a1 & 0xFFFFFFFFFFFFFFF8LL);
  v8 = *v7;
  v7[10] += 24;
  result = (_QWORD *)((v8 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v7[1] >= (unsigned __int64)(result + 3) && v8 )
    *v7 = (__int64)(result + 3);
  else
    result = (_QWORD *)sub_986170((__int64)v7, 24, 24, 3, a5, a6);
  v10 = *a2;
  v11 = a2[1];
  *result = a3;
  result[1] = v10;
  result[2] = v11;
  return result;
}
