__int64 __fastcall sub_1CE540(__int64 a1, char a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 784);
  *(_BYTE *)(result + 105) = a2;
  return result;
}
