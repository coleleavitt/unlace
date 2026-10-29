unsigned __int64 __fastcall sub_EB28F0(_QWORD *a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  unsigned __int64 result; // rax

  v7 = a1[294];
  a1[304] += 24LL;
  result = (v7 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= result + 24 && v7 )
    a1[294] = result + 24;
  else
    result = sub_986170((__int64)(a1 + 294), 24, 24, 3, a5, a6);
  *(_BYTE *)(result + 8) = 36;
  *(_DWORD *)(result + 12) = a2;
  *(_DWORD *)(result + 16) = a3;
  *(_QWORD *)result = off_2B4BC20;
  return result;
}
