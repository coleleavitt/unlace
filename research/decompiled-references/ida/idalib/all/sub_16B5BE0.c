void __fastcall sub_16B5BE0(__int64 a1, int a2)
{
  __int64 *v2; // rbx
  unsigned int v3; // eax
  _QWORD savedregs[21]; // [rsp+0h] [rbp+0h] BYREF

  v2 = (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL);
  v3 = sub_16B5B40(a1, a2);
  sub_168B9F0((__int64)savedregs, v2, v3, 0xFCCu, 0);
  sub_15F7200(savedregs);
}
