__int64 __fastcall sub_8CFBC0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // r14
  char v8; // r13
  __int64 v9; // rax
  __int64 v10; // rax
  _BYTE v12[120]; // [rsp+0h] [rbp-78h] BYREF

  *(_QWORD *)(a1 + 800) = a2;
  v2 = *(_QWORD *)(a1 + 568);
  v3 = sub_A1A5A0(v2, 56);
  sub_A1C070(v12, v3);
  sub_A1A5E0(v2, 56);
  v4 = *(_QWORD *)(a1 + 568);
  v5 = sub_A1A5A0(v4, 24);
  v6 = *(_QWORD *)v5;
  v7 = *(_QWORD *)(v5 + 8);
  v8 = *(_BYTE *)(v5 + 16);
  sub_A1A5E0(v4, 24);
  v9 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 56);
  sub_A1BFE0(v9, v12);
  v10 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  *(_QWORD *)v10 = v6;
  *(_QWORD *)(v10 + 8) = v7;
  *(_BYTE *)(v10 + 16) = v8;
  return sub_A1C0C0(v12);
}

