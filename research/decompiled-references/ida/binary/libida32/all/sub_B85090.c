__int64 __fastcall sub_B85090(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a1 + 104) = result;
  return result;
}

