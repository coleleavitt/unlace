unsigned __int64 __fastcall sub_EC0560(_QWORD *a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned __int64 result; // rax

  v8 = 8LL * (unsigned int)(a2 + a3 + 1) + 40;
  v9 = a1[294];
  a1[304] += v8;
  result = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v8 + result && v9 )
    a1[294] = v8 + result;
  else
    result = sub_986170((__int64)(a1 + 294), v8, v8, 3, a5, a6);
  *(_QWORD *)result = 0;
  *(_QWORD *)(result + 8) = 22;
  *(_DWORD *)(result + 16) = a2;
  *(_QWORD *)(result + 20) = 10;
  *(_QWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 36) = a3;
  return result;
}
