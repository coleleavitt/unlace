unsigned __int64 __fastcall sub_EBF470(_QWORD *a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  unsigned __int64 result; // rax

  v7 = a1[294];
  a1[304] += 16LL;
  result = (v7 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= result + 16 && v7 )
    a1[294] = result + 16;
  else
    result = sub_986170((__int64)(a1 + 294), 16, 16, 3, a5, a6);
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = a3;
  *(_DWORD *)(result + 8) = 108;
  *(_BYTE *)(result + 12) = 0;
  return result;
}
