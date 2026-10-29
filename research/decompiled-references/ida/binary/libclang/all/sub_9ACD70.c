__int64 __fastcall sub_9ACD70(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rbp
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // rbp
  __int64 v8; // rax
  _BYTE v10[56]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v11; // [rsp+38h] [rbp-50h]
  int v12; // [rsp+40h] [rbp-48h]

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 72);
  sub_A1C070(v10, v2);
  v11 = *(_QWORD *)(v2 + 56);
  v12 = *(_DWORD *)(v2 + 64);
  sub_A1A5E0(v1, 72);
  v3 = *(_QWORD *)(a1 + 184);
  v4 = sub_A1A5A0(v3, 24);
  v5 = *(_QWORD *)v4;
  v6 = *(_QWORD *)(v4 + 8);
  LOBYTE(v1) = *(_BYTE *)(v4 + 16);
  sub_A1A5E0(v3, 24);
  v7 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 72);
  sub_A1BFE0(v7, v10);
  *(_QWORD *)(v7 + 56) = v11;
  *(_DWORD *)(v7 + 64) = v12;
  v8 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  *(_QWORD *)v8 = v5;
  *(_QWORD *)(v8 + 8) = v6;
  *(_BYTE *)(v8 + 16) = v1;
  return sub_A1C0C0(v10);
}

