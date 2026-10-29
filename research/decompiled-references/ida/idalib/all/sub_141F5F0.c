unsigned __int64 __fastcall sub_141F5F0(_QWORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  unsigned __int64 result; // rax
  char v9; // dl

  v7 = a1[16];
  a1[26] += 24LL;
  result = (v7 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( a1[17] >= result + 24 && v7 )
    a1[16] = result + 24;
  else
    result = sub_986170((__int64)(a1 + 16), 24, 24, 4, a5, a6);
  v9 = *(_BYTE *)(result + 12);
  *(_QWORD *)result = 0;
  *(_DWORD *)(result + 8) = a3;
  *(_QWORD *)(result + 16) = a2;
  *(_BYTE *)(result + 12) = v9 & 0xF0 | 8;
  return result;
}
