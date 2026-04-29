void __fastcall __noreturn sub_BC10(int a1, int a2, __int64 a3, int a4)
{
  int v5; // ebx
  _QWORD v6[8]; // [rsp+0h] [rbp-40h] BYREF

  v5 = a3;
  v6[1] = __readfsqword(0x28u);
  sub_31210(v6, a3);
  sub_32760(0, (unsigned int)"%s:%u: assertion failed for Node %p: %s\n%s:%u: Node %p is:\n%s\n", a1, a2, v5, a4, a1);
}
