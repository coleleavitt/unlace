__int64 __fastcall sub_7A0500(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 176);
  *(_QWORD *)(a1 + 176) = a2;
  return result;
}
