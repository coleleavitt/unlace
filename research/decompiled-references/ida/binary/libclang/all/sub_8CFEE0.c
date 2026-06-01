__int64 __fastcall sub_8CFEE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // r15
  char v5; // r14
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v11; // [rsp+8h] [rbp-90h]
  _BYTE v12[56]; // [rsp+10h] [rbp-88h] BYREF
  __int64 v13; // [rsp+48h] [rbp-50h]
  int v14; // [rsp+50h] [rbp-48h]

  *(_QWORD *)(a1 + 800) = a2;
  v2 = *(_QWORD *)(a1 + 568);
  v3 = sub_A1A5A0(v2, 24);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = *(_BYTE *)(v3 + 16);
  v11 = *(_QWORD *)v3;
  sub_A1A5E0(v2, 24);
  v6 = *(_QWORD *)(a1 + 568);
  v7 = sub_A1A5A0(v6, 72);
  sub_A1C070(v12, v7);
  v13 = *(_QWORD *)(v7 + 56);
  v14 = *(_DWORD *)(v7 + 64);
  sub_A1A5E0(v6, 72);
  v8 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  *(_QWORD *)(v8 + 8) = v4;
  *(_QWORD *)v8 = v11;
  *(_BYTE *)(v8 + 16) = v5;
  v9 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 72);
  sub_A1BFE0(v9, v12);
  *(_QWORD *)(v9 + 56) = v13;
  *(_DWORD *)(v9 + 64) = v14;
  return sub_A1C0C0(v12);
}

