__int64 __fastcall sub_284C0(__int64 a1, __int64 a2, char a3)
{
  char v3; // bp
  __int64 v4; // rdi
  __int64 result; // rax

  v3 = *(_BYTE *)(a2 + 33);
  v4 = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(a2 + 33) = v3 | 1;
  result = sub_279C0(v4, a2, a3);
  *(_BYTE *)(a2 + 33) = v3;
  return result;
}
