__int64 __fastcall sub_9E1590(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r14
  __int64 v5; // rax
  unsigned int v6; // ebx
  _BYTE v8[104]; // [rsp+0h] [rbp-68h] BYREF

  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 56);
  sub_A1C070(v8, v5);
  sub_A1A5E0(v4, 56);
  v6 = sub_9E1330(a1, a2, (__int64)v8, a3);
  sub_A1C0C0(v8);
  return v6;
}

