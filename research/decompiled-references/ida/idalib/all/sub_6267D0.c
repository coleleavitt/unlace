__int64 __fastcall sub_6267D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  _QWORD v7[7]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *(int *)(a1 + 64);
  v7[1] = __readfsqword(0x28u);
  v7[0] = a4;
  sub_7BE7C0(a1, a2, v4, v7, 8, 65);
  sub_7BE7C0(a1, a2, v4, a3, 0, 83);
  LODWORD(v7[0]) = *(_DWORD *)(a1 + 64) + 1;
  sub_626510((_DWORD *)(a1 + 64), v7, 165);
  v7[0] = *(unsigned int *)(a1 + 64);
  sub_7BE7C0(a1, a2, -1, v7, 8, 65);
  return v4;
}
