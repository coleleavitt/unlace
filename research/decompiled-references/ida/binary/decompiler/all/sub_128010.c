__int64 __fastcall sub_128010(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v6; // rsi
  unsigned int v7; // ebx
  _QWORD vars0[7]; // [rsp+0h] [rbp+0h] BYREF

  vars0[3] = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 8);
  vars0[0] = 0xFFFFFFFF00000000LL;
  vars0[1] = 0;
  sub_123F20((__int64)vars0, v6, a2, a4);
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(
         *(_QWORD *)(a1 + 16),
         vars0,
         a3);
  sub_11A960((__int64)vars0);
  return v7;
}
