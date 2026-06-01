unsigned __int64 __fastcall sub_E9C220(_QWORD *a1, unsigned int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned __int64 result; // rax

  v8 = a2 + 8LL * a2 * (3 * (a3 == 1) + 5) + 104;
  v9 = a1[294];
  a1[304] += v8;
  result = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v8 + result && v9 )
    a1[294] = v8 + result;
  else
    result = sub_962430((__int64)(a1 + 294), v8, v8, 3, a5, a6);
  *(_QWORD *)result = 0;
  *(_QWORD *)(result + 8) = 85;
  *(_DWORD *)(result + 16) = a2;
  *(_QWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 32) = 103;
  *(_QWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 52) = 2;
  *(_QWORD *)(result + 56) = 0;
  *(_OWORD *)(result + 64) = 0;
  *(_QWORD *)(result + 80) = 0;
  *(_DWORD *)(result + 88) = 0;
  *(_QWORD *)(result + 96) = 0;
  *(_DWORD *)(result + 48) = a3;
  return result;
}

