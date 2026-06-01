__int64 __fastcall sub_9ACE50(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // r15
  char v4; // r14
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v10; // [rsp+8h] [rbp-90h]
  _BYTE v11[56]; // [rsp+10h] [rbp-88h] BYREF
  __int64 v12; // [rsp+48h] [rbp-50h]
  int v13; // [rsp+50h] [rbp-48h]

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 24);
  v3 = *(_QWORD *)(v2 + 8);
  v4 = *(_BYTE *)(v2 + 16);
  v10 = *(_QWORD *)v2;
  sub_A1A5E0(v1, 24);
  v5 = *(_QWORD *)(a1 + 184);
  v6 = sub_A1A5A0(v5, 72);
  sub_A1C070(v11, v6);
  v12 = *(_QWORD *)(v6 + 56);
  v13 = *(_DWORD *)(v6 + 64);
  sub_A1A5E0(v5, 72);
  v7 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  *(_QWORD *)(v7 + 8) = v3;
  *(_QWORD *)v7 = v10;
  *(_BYTE *)(v7 + 16) = v4;
  v8 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 72);
  sub_A1BFE0(v8, v11);
  *(_QWORD *)(v8 + 56) = v12;
  *(_DWORD *)(v8 + 64) = v13;
  return sub_A1C0C0(v11);
}

