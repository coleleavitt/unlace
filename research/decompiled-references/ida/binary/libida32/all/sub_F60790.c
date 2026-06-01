_QWORD *__fastcall sub_F60790(__int64 *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  _QWORD *result; // rax
  int v6; // edx
  __int64 v7[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( sub_F5ABA0(a1, (__int64 *)a2, v7) )
    return (_QWORD *)(v7[0] + 16);
  result = (_QWORD *)(sub_F60700((__int64)a1, (__int64 *)a2, v7[0], v2, v3, v4) + 16);
  *(result - 2) = *(_QWORD *)a2;
  v6 = *(_DWORD *)(a2 + 8);
  *result = 0;
  *((_DWORD *)result - 2) = v6;
  return result;
}

