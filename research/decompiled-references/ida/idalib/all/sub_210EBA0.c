unsigned __int64 __fastcall sub_210EBA0(__int64 a1, _QWORD *a2, char a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  unsigned __int64 result; // rax
  int v10; // edx

  v7 = a2[24];
  a2[34] += 24LL;
  result = (v7 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[25] >= result + 24 && v7 )
    a2[24] = result + 24;
  else
    result = sub_986170((__int64)(a2 + 24), 24, 24, 3, a5, a6);
  v10 = a4;
  *(_BYTE *)result = 1;
  *(_QWORD *)(result + 8) = 0;
  if ( a3 )
  {
    BYTE1(v10) = BYTE1(a4) | 1;
    a4 = v10;
  }
  *(_QWORD *)(result + 16) = a1;
  *(_WORD *)(result + 1) = a4;
  *(_BYTE *)(result + 3) = BYTE2(a4);
  return result;
}
