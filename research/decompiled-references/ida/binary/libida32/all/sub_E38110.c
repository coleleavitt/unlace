__int64 __fastcall sub_E38110(__int64 a1, __int64 a2)
{
  char *v2; // rax
  __int64 v3; // rdx
  _QWORD savedregs[9]; // [rsp+0h] [rbp+0h] BYREF

  v2 = sub_BD69E0((*(_WORD *)(a2 + 2) >> 3) & 0x3F);
  sub_E35AF0((__int64)savedregs, (__int64)v2, v3);
  sub_2206E30(a1 + 1048, "opcode", 6);
  sub_2208D80(a1 + 1048, savedregs);
  sub_2205EB0(a1 + 1048);
  return sub_2207560(savedregs);
}

