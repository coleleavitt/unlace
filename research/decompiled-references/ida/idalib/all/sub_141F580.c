unsigned __int64 __fastcall sub_141F580(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  unsigned __int64 result; // rax
  char v8; // dl

  v6 = a1[16];
  a1[26] += 16LL;
  result = (v6 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( a1[17] >= result + 16 && v6 )
    a1[16] = result + 16;
  else
    result = sub_986170((__int64)(a1 + 16), 16, 16, 4, a5, a6);
  v8 = *(_BYTE *)(result + 12);
  *(_QWORD *)result = 0;
  *(_DWORD *)(result + 8) = a2;
  *(_BYTE *)(result + 12) = v8 & 0xF0 | 9;
  return result;
}
