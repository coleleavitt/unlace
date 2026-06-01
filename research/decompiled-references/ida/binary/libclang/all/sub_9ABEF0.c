__int64 __fastcall sub_9ABEF0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // r15
  __int64 v4; // r14
  char v5; // r13
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  _BYTE v11[120]; // [rsp+0h] [rbp-78h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 24);
  v3 = *(_QWORD *)v2;
  v4 = *(_QWORD *)(v2 + 8);
  v5 = *(_BYTE *)(v2 + 16);
  sub_A1A5E0(v1, 24);
  v6 = *(_QWORD *)(a1 + 184);
  v7 = sub_A1A5A0(v6, 56);
  sub_A1C070(v11, v7);
  sub_A1A5E0(v6, 56);
  v8 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  *(_QWORD *)v8 = v3;
  *(_QWORD *)(v8 + 8) = v4;
  *(_BYTE *)(v8 + 16) = v5;
  v9 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
  sub_A1BFE0(v9, v11);
  return sub_A1C0C0(v11);
}

