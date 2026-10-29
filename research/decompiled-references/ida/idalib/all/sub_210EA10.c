unsigned __int64 __fastcall sub_210EA10(int a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rcx
  unsigned __int64 result; // rax

  v7 = a3[24];
  a3[34] += 24LL;
  result = (v7 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a3[25] >= result + 24 && v7 )
    a3[24] = result + 24;
  else
    result = sub_986170((__int64)(a3 + 24), 24, 24, 3, a5, a6);
  *(_WORD *)(result + 1) = a1;
  *(_BYTE *)result = 3;
  *(_BYTE *)(result + 3) = BYTE2(a1);
  *(_QWORD *)(result + 8) = a4;
  *(_QWORD *)(result + 16) = a2;
  return result;
}
