__int64 __fastcall sub_7A04F0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 168);
  *(_QWORD *)(a1 + 168) = a2;
  return result;
}
