__int64 __fastcall sub_2209820(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = ~(1LL << a2);
  *(_QWORD *)(a1 + 8LL * (a2 >> 6)) &= result;
  return result;
}
