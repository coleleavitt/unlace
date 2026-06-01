__int64 __fastcall sub_2CADD0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rbx
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 40);
  result = sub_2CABB0(a1, nullptr, v3, *(__int16 *)(a2 + 28), 1, 1, a3);
  *(_QWORD *)(v3 + 16) = result;
  return result;
}
