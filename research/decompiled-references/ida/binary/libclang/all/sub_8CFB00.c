__int64 __fastcall sub_8CFB00(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 v5; // r14
  char v6; // r13
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  _BYTE v12[120]; // [rsp+0h] [rbp-78h] BYREF

  *(_QWORD *)(a1 + 800) = a2;
  v2 = *(_QWORD *)(a1 + 568);
  v3 = sub_A1A5A0(v2, 24);
  v4 = *(_QWORD *)v3;
  v5 = *(_QWORD *)(v3 + 8);
  v6 = *(_BYTE *)(v3 + 16);
  sub_A1A5E0(v2, 24);
  v7 = *(_QWORD *)(a1 + 568);
  v8 = sub_A1A5A0(v7, 56);
  sub_A1C070(v12, v8);
  sub_A1A5E0(v7, 56);
  v9 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  *(_QWORD *)v9 = v4;
  *(_QWORD *)(v9 + 8) = v5;
  *(_BYTE *)(v9 + 16) = v6;
  v10 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 56);
  sub_A1BFE0(v10, v12);
  return sub_A1C0C0(v12);
}

