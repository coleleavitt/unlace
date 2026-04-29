__int64 __fastcall sub_1C1A70(__int64 *a1, __int64 a2, _QWORD *a3, int a4)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  _DWORD _0[6]; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  v6 = sub_3338F0();
  sub_1C0C70((__int64)_0, v6, a2, a4, 0);
  v7 = sub_1BF7D0(a1, _0, a3, a4);
  cleanup_argloc(_0);
  return v7;
}
