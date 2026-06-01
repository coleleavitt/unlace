__int64 __fastcall sub_E373D0(__int64 a1, __int64 a2)
{
  _QWORD savedregs[9]; // [rsp+0h] [rbp+0h] BYREF

  sub_E35AF0(
    (__int64)savedregs,
    *(_QWORD *)(*(_QWORD *)(a2 + 32) + 16LL) + 16LL,
    **(unsigned int **)(*(_QWORD *)(a2 + 32) + 16LL));
  sub_2206E30(a1 + 1048, "macroName", 9);
  sub_2208D80(a1 + 1048, savedregs);
  sub_2205EB0(a1 + 1048);
  return sub_2207560(savedregs);
}

