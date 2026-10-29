__int64 __fastcall sub_8CDB70(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rbp
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rax
  _BYTE v9[64]; // [rsp+0h] [rbp-B8h] BYREF
  _BYTE v10[56]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v11; // [rsp+78h] [rbp-40h]
  int v12; // [rsp+80h] [rbp-38h]

  *(_QWORD *)(a1 + 800) = a2;
  v2 = *(_QWORD *)(a1 + 568);
  v3 = sub_A1A5A0(v2, 72);
  sub_A1C070(v10, v3);
  v11 = *(_QWORD *)(v3 + 56);
  v12 = *(_DWORD *)(v3 + 64);
  sub_A1A5E0(v2, 72);
  v4 = *(_QWORD *)(a1 + 568);
  v5 = sub_A1A5A0(v4, 56);
  sub_A1C070(v9, v5);
  sub_A1A5E0(v4, 56);
  v6 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 72);
  sub_A1BFE0(v6, v10);
  *(_QWORD *)(v6 + 56) = v11;
  *(_DWORD *)(v6 + 64) = v12;
  v7 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 56);
  sub_A1BFE0(v7, v9);
  sub_A1C0C0(v9);
  return sub_A1C0C0(v10);
}

