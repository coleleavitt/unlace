__int64 __fastcall sub_7A0530(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 208) = a2;
  return result;
}
