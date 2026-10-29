__int64 __fastcall sub_E5BCC0(__int64 a1, __int64 a2)
{
  const char *v2; // rax
  __int64 v3; // rdx
  _QWORD savedregs[9]; // [rsp+0h] [rbp+0h] BYREF

  v2 = sub_BF81C0((*(_BYTE *)(a2 + 2) >> 3) & 0xF);
  sub_E59830((__int64)savedregs, (__int64)v2, v3);
  sub_222AB70(a1 + 1048, "name", 4);
  sub_222CAC0(a1 + 1048, savedregs);
  sub_2229BF0(a1 + 1048);
  return sub_222B2A0(savedregs);
}
