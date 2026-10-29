__int64 __fastcall sub_8CCAE0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  _BYTE v9[64]; // [rsp+0h] [rbp-A8h] BYREF
  _BYTE v10[104]; // [rsp+40h] [rbp-68h] BYREF

  *(_QWORD *)(a1 + 800) = a2;
  v2 = *(_QWORD *)(a1 + 568);
  v3 = sub_A1A5A0(v2, 56);
  sub_A1C070(v9, v3);
  sub_A1A5E0(v2, 56);
  v4 = *(_QWORD *)(a1 + 568);
  v5 = sub_A1A5A0(v4, 56);
  sub_A1C070(v10, v5);
  sub_A1A5E0(v4, 56);
  v6 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 56);
  sub_A1BFE0(v6, v9);
  v7 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 56);
  sub_A1BFE0(v7, v10);
  sub_A1C0C0(v10);
  return sub_A1C0C0(v9);
}

