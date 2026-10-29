__int64 __fastcall sub_B50F10(__int64 a1, __int64 a2, char a3, unsigned __int64 *a4)
{
  char v5; // r13
  __int64 result; // rax

  v5 = *(_BYTE *)(a1 + 16);
  *(_BYTE *)(a1 + 16) = a3;
  sub_B50780(a1, a2);
  sub_B4CD20(a1, *(_QWORD *)(a2 + 24), nullptr, 0);
  result = sub_B503B0(a1, a4);
  *(_BYTE *)(a1 + 16) = v5;
  return result;
}

