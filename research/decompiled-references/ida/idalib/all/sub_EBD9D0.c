unsigned __int64 __fastcall sub_EBD9D0(__int64 *a1, char a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 result; // rax
  __int64 v7; // rdx

  if ( a2 )
  {
    v7 = a1[294];
    a1[304] += 28;
    result = (v7 + 3) & 0xFFFFFFFFFFFFFFFCLL;
    if ( a1[295] >= result + 28 && v7 )
      a1[294] = result + 28;
    else
      result = sub_986170((__int64)(a1 + 294), 28, 28, 2, (__int64)(a1 + 294), a6);
    *(_QWORD *)result = 0;
    *(_DWORD *)(result + 8) = 108;
    *(_BYTE *)(result + 12) = 1;
  }
  else
  {
    result = sub_EBD890(a1 + 294, 16, 3u);
    *(_QWORD *)result = 0;
    *(_DWORD *)(result + 8) = 108;
    *(_BYTE *)(result + 12) = 0;
  }
  return result;
}
