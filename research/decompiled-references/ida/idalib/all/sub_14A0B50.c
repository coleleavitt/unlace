__int64 __fastcall sub_14A0B50(__int64 a1, _DWORD *a2)
{
  int v3; // ecx
  __int64 *v4; // rdi
  __int64 result; // rax
  unsigned __int8 *savedregs[13]; // [rsp+0h] [rbp+0h] BYREF

  v3 = -((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 2LL) & 2) == 0);
  LOBYTE(v3) = v3 & 0x31;
  sub_1564820(savedregs, a1, *(unsigned int *)(a1 + 16), (unsigned int)(v3 + 2223));
  sub_AE9DF0(savedregs, 0, 2u);
  sub_AEA040((__int64)savedregs);
  v4 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v4, (int *)(a1 + 16));
  result = *(unsigned int *)(a1 + 40);
  *a2 = result;
  return result;
}
