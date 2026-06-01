__int64 __fastcall sub_8CDC70(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rbx
  _BYTE v9[64]; // [rsp+0h] [rbp-B8h] BYREF
  _BYTE v10[56]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v11; // [rsp+78h] [rbp-40h]
  int v12; // [rsp+80h] [rbp-38h]

  *(_QWORD *)(a1 + 800) = a2;
  v2 = *(_QWORD *)(a1 + 568);
  v3 = sub_A1A5A0(v2, 56);
  sub_A1C070(v9, v3);
  sub_A1A5E0(v2, 56);
  v4 = *(_QWORD *)(a1 + 568);
  v5 = sub_A1A5A0(v4, 72);
  sub_A1C070(v10, v5);
  v11 = *(_QWORD *)(v5 + 56);
  v12 = *(_DWORD *)(v5 + 64);
  sub_A1A5E0(v4, 72);
  v6 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 56);
  sub_A1BFE0(v6, v9);
  v7 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 72);
  sub_A1BFE0(v7, v10);
  *(_QWORD *)(v7 + 56) = v11;
  *(_DWORD *)(v7 + 64) = v12;
  sub_A1C0C0(v10);
  return sub_A1C0C0(v9);
}

