void __noreturn sub_10E1A0()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  char v4[4104]; // [rsp+0h] [rbp-1018h] BYREF
  unsigned __int64 v5; // [rsp+1008h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  qvsnprintf();
  strrpl();
  sub_17C3C0(0, 0, v4);
  sub_91F70((__int64)"No memory for module %s", (__int64)v4, v0, v1, v2, v3, v4[0]);
}

