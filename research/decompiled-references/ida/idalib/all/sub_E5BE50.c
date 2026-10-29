__int64 __fastcall sub_E5BE50(__int64 a1, __int64 a2)
{
  char *v2; // rax
  __int64 v3; // rdx
  _QWORD savedregs[9]; // [rsp+0h] [rbp+0h] BYREF

  v2 = sub_BFA720((*(_WORD *)(a2 + 2) >> 3) & 0x3F);
  sub_E59830((__int64)savedregs, (__int64)v2, v3);
  sub_222AB70(a1 + 1048, "opcode", 6);
  sub_222CAC0(a1 + 1048, savedregs);
  sub_2229BF0(a1 + 1048);
  return sub_222B2A0(savedregs);
}
