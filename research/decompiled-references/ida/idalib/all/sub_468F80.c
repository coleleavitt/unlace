__int64 __fastcall sub_468F80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v5; // rax
  __int64 v6; // rbx
  _QWORD v8[7]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v8[1] = __readfsqword(0x28u);
  v5 = *(_QWORD *)(v3 + 1672);
  LOBYTE(v8[0]) = 1;
  v6 = v5 + 2400;
  sub_7BE7C0(v5 + 2400, v3, a2, v8, 1, 80);
  v8[0] = a3;
  sub_7BE7C0(v6, v3, a2, v8, 8, 65);
  return 0;
}
