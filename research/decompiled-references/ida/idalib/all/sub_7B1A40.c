__int64 __fastcall sub_7B1A40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  sub_7AE310(4, 0xFFFFFFFFLL, a3);
  result = *(_QWORD *)(a1 + 5904) - 1LL;
  *(_QWORD *)(a1 + 5904) = result;
  return result;
}
