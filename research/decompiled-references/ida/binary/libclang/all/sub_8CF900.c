__int64 __fastcall sub_8CF900(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rbp
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v6; // rbp
  __int64 v7; // rbx
  _BYTE v9[56]; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v10; // [rsp+38h] [rbp-90h]
  int v11; // [rsp+40h] [rbp-88h]
  _BYTE v12[56]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v13; // [rsp+88h] [rbp-40h]
  int v14; // [rsp+90h] [rbp-38h]

  *(_QWORD *)(a1 + 800) = a2;
  v2 = *(_QWORD *)(a1 + 568);
  v3 = sub_A1A5A0(v2, 72);
  sub_A1C070(v9, v3);
  v10 = *(_QWORD *)(v3 + 56);
  v11 = *(_DWORD *)(v3 + 64);
  sub_A1A5E0(v2, 72);
  v4 = *(_QWORD *)(a1 + 568);
  v5 = sub_A1A5A0(v4, 72);
  sub_A1C070(v12, v5);
  v13 = *(_QWORD *)(v5 + 56);
  v14 = *(_DWORD *)(v5 + 64);
  sub_A1A5E0(v4, 72);
  v6 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 72);
  sub_A1BFE0(v6, v9);
  *(_QWORD *)(v6 + 56) = v10;
  *(_DWORD *)(v6 + 64) = v11;
  v7 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 72);
  sub_A1BFE0(v7, v12);
  *(_QWORD *)(v7 + 56) = v13;
  *(_DWORD *)(v7 + 64) = v14;
  sub_A1C0C0(v12);
  return sub_A1C0C0(v9);
}

