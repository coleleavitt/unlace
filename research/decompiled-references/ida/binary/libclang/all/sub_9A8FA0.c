__int64 __fastcall sub_9A8FA0(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // rax
  _BYTE v7[104]; // [rsp+0h] [rbp-68h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 56);
  sub_A1C070(v7, v2);
  sub_A1A5E0(v1, 56);
  v3 = *(_QWORD *)(a1 + 184);
  v4 = *(_QWORD *)sub_A1A5A0(v3, 8);
  sub_A1A5E0(v3, 8);
  v5 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
  sub_A1BFE0(v5, v7);
  *(_QWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v4;
  return sub_A1C0C0(v7);
}

