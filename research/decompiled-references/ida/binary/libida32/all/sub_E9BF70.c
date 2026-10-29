unsigned __int64 __fastcall sub_E9BF70(_QWORD *a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rdx
  unsigned __int64 result; // rax
  __int64 v10; // [rsp+8h] [rbp-20h]

  v8 = a1[294];
  a1[304] += 24LL;
  result = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= result + 24 && v8 )
  {
    a1[294] = result + 24;
  }
  else
  {
    v10 = a5;
    result = sub_962430((__int64)(a1 + 294), 24, 24, 3, a5, a6);
    a5 = v10;
  }
  *(_DWORD *)(result + 8) = 79;
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 12) = a3;
  *(_DWORD *)(result + 4) = a4;
  *(_QWORD *)(result + 16) = a5;
  return result;
}

