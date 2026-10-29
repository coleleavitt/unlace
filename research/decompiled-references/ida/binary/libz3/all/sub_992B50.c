__int64 __fastcall sub_992B50(__int64 a1)
{
  void *v1; // rbp
  __int64 result; // rax

  v1 = qword_1C7F2C0;
  sub_182CEF0(qword_1C7F2C0, a1);
  result = sub_182CBA0(v1, a1 + 16);
  *(_BYTE *)(a1 + 20) &= ~1u;
  *(_DWORD *)(a1 + 16) = 1;
  return result;
}

