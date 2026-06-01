__int64 __fastcall sub_B83E10(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a2 + 120);
  *(_QWORD *)(a1 + 120) = result;
  return result;
}

