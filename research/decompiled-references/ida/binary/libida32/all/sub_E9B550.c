unsigned __int64 __fastcall sub_E9B550(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  unsigned __int64 result; // rax

  v6 = a1[294];
  a1[304] += 12LL;
  result = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= result + 12 && v6 )
  {
    a1[294] = result + 12;
    *(_QWORD *)result = 0;
    *(_DWORD *)(result + 8) = 39;
  }
  else
  {
    result = sub_962430((__int64)(a1 + 294), 12, 12, 3, a5, a6);
    *(_QWORD *)result = 0;
    *(_DWORD *)(result + 8) = 39;
  }
  return result;
}

