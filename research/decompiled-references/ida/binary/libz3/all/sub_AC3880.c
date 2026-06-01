__int64 __fastcall sub_AC3880(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char v3; // bp
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_BYTE *)(v2 + 4);
  *(_BYTE *)(v2 + 4) = 1;
  result = sub_AC35B0(a1, a2);
  *(_BYTE *)(v2 + 4) = v3;
  return result;
}

