void __fastcall __noreturn sub_717E70(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  const char *v6; // rax
  _QWORD v7[131]; // [rsp+0h] [rbp-418h] BYREF

  v7[129] = __readfsqword(0x28u);
  v6 = (const char *)sub_717D30((__int64)v7, 1024, a1, a2, a5, a6);
  sub_713900((__int64)"class bTree: %s\n", v6);
  exit(1);
}

