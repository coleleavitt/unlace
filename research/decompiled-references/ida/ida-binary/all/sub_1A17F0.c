void __fastcall __noreturn sub_1A17F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6[4104]; // [rsp+0h] [rbp-1018h] BYREF
  unsigned __int64 v7; // [rsp+1008h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  ((void (__fastcall *)(char *, __int64, __int64, __int64, __int64, __int64))qvsnprintf)(v6, 4096, a1, a2, a5, a6);
  strrpl(v6, 3, 32);
  sub_4BEF60(0, 0, v6);
  sub_16B930((__int64)"No memory for module %s", v6);
}
