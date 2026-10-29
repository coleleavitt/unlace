unsigned __int64 __fastcall sub_E9C100(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v8; // rsi
  unsigned int v9; // ebx
  unsigned __int64 result; // rax

  v6 = a1[294];
  v8 = 8LL * a2 + 32;
  v9 = a2;
  a1[304] += v8;
  result = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v8 + result && v6 )
    a1[294] = v8 + result;
  else
    result = sub_962430((__int64)(a1 + 294), v8, v8, 3, a5, a6);
  *(_QWORD *)result = 0;
  *(_QWORD *)(result + 8) = 49;
  *(_DWORD *)(result + 16) = v9;
  *(_DWORD *)(result + 20) = 0;
  *(_WORD *)(result + 24) = 0;
  return result;
}

