unsigned __int64 __fastcall sub_EC08C0(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v8; // rsi
  unsigned __int64 result; // rax

  v6 = a1[294];
  v8 = 8LL * (unsigned int)(6 * a2 + 3) + 64;
  a1[304] += v8;
  result = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v8 + result && v6 )
    a1[294] = v8 + result;
  else
    result = sub_986170((__int64)(a1 + 294), v8, v8, 3, a5, a6);
  *(_QWORD *)result = 0;
  *(_QWORD *)(result + 8) = 53;
  *(_DWORD *)(result + 16) = a2;
  *(_QWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 32) = 103;
  *(_QWORD *)(result + 40) = 0;
  *(_OWORD *)(result + 48) = 0;
  return result;
}
