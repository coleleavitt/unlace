__int64 __fastcall sub_E36550(__int64 a1, __int64 a2)
{
  _QWORD savedregs[9]; // [rsp+0h] [rbp+0h] BYREF

  sub_E35AF0((__int64)savedregs, *(_QWORD *)(a2 + 48), *(unsigned int *)(a2 + 40));
  sub_2206E30(a1 + 1048, "aliasee", 7);
  sub_2208D80(a1 + 1048, savedregs);
  sub_2205EB0(a1 + 1048);
  return sub_2207560(savedregs);
}

