__int64 __fastcall sub_B562A0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 80) & 7LL;
  *(_QWORD *)(a1 + 80) = result | a2;
  return result;
}

