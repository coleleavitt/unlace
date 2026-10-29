_DWORD *__fastcall sub_10221A0(_QWORD *a1, const void *a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6)
{
  int v6; // ebp
  __int64 v7; // rbx
  __int64 v8; // rdx
  _DWORD *result; // rax

  v6 = a3;
  v7 = 4 * a3 + 4;
  v8 = *a4;
  a4[10] += v7;
  result = (_DWORD *)((v8 + 3) & 0xFFFFFFFFFFFFFFFCLL);
  if ( a4[1] >= (unsigned __int64)result + v7 && v8 )
    *a4 = (__int64)result + v7;
  else
    result = (_DWORD *)sub_986170((__int64)a4, v7, v7, 2, a5, a6);
  *a1 = result;
  *result = v6;
  if ( v7 != 4 )
    return memmove(result + 1, a2, v7 - 4);
  return result;
}
