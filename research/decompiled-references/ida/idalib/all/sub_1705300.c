__int64 __fastcall sub_1705300(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  sub_168B6B0(a1, a2);
  a1[1] = a3;
  result = *(_QWORD *)(a2 + 248);
  a1[2] = result;
  return result;
}
