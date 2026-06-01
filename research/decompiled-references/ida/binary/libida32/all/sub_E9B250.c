unsigned __int64 __fastcall sub_E9B250(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v8; // rsi
  unsigned int v9; // ebx
  unsigned __int64 result; // rax

  v6 = a1[294];
  v8 = 4LL * a2 + 20;
  v9 = a2;
  a1[304] += v8;
  result = (v6 + 3) & 0xFFFFFFFFFFFFFFFCLL;
  if ( a1[295] >= v8 + result && v6 )
    a1[294] = v8 + result;
  else
    result = sub_962430((__int64)(a1 + 294), v8, v8, 2, a5, a6);
  *(_QWORD *)result = 0;
  *(_QWORD *)(result + 8) = 17;
  *(_DWORD *)(result + 16) = v9;
  return result;
}

