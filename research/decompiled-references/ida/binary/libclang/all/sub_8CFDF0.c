__int64 __fastcall sub_8CFDF0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rbp
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // rbp
  __int64 v9; // rax
  _BYTE v11[56]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v12; // [rsp+38h] [rbp-50h]
  int v13; // [rsp+40h] [rbp-48h]

  *(_QWORD *)(a1 + 800) = a2;
  v2 = *(_QWORD *)(a1 + 568);
  v3 = sub_A1A5A0(v2, 72);
  sub_A1C070(v11, v3);
  v12 = *(_QWORD *)(v3 + 56);
  v13 = *(_DWORD *)(v3 + 64);
  sub_A1A5E0(v2, 72);
  v4 = *(_QWORD *)(a1 + 568);
  v5 = sub_A1A5A0(v4, 24);
  v6 = *(_QWORD *)v5;
  v7 = *(_QWORD *)(v5 + 8);
  LOBYTE(v2) = *(_BYTE *)(v5 + 16);
  sub_A1A5E0(v4, 24);
  v8 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 72);
  sub_A1BFE0(v8, v11);
  *(_QWORD *)(v8 + 56) = v12;
  *(_DWORD *)(v8 + 64) = v13;
  v9 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  *(_QWORD *)v9 = v6;
  *(_QWORD *)(v9 + 8) = v7;
  *(_BYTE *)(v9 + 16) = v2;
  return sub_A1C0C0(v11);
}

