__int64 __fastcall sub_E1EB20(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = a1 + 40;
  *(_QWORD *)(v2 - 16) = 0;
  result = sub_1858C20(v2);
  *(_QWORD *)(a1 + 56) = 0;
  return result;
}

