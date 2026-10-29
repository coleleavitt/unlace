__int64 __fastcall sub_9ABFB0(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // r14
  char v7; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  _BYTE v11[120]; // [rsp+0h] [rbp-78h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 56);
  sub_A1C070(v11, v2);
  sub_A1A5E0(v1, 56);
  v3 = *(_QWORD *)(a1 + 184);
  v4 = sub_A1A5A0(v3, 24);
  v5 = *(_QWORD *)v4;
  v6 = *(_QWORD *)(v4 + 8);
  v7 = *(_BYTE *)(v4 + 16);
  sub_A1A5E0(v3, 24);
  v8 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
  sub_A1BFE0(v8, v11);
  v9 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  *(_QWORD *)v9 = v5;
  *(_QWORD *)(v9 + 8) = v6;
  *(_BYTE *)(v9 + 16) = v7;
  return sub_A1C0C0(v11);
}

