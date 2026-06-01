__int64 __fastcall sub_EEE270(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 16) & 7LL;
  *(_QWORD *)(a1 + 16) = result | a2;
  return result;
}
