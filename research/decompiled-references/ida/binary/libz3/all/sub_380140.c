__int64 __fastcall sub_380140(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  sub_1863170(a1 + 24, a2);
  v2 = *(_QWORD *)(a1 + 16);
  result = sub_1859610(a1 + 24, "elim_and", 0);
  *(_BYTE *)(v2 + 8) = result;
  return result;
}

