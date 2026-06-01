__int64 __fastcall sub_8CDAC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  char v3; // r13
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rax
  _BYTE v8[104]; // [rsp+0h] [rbp-68h] BYREF

  *(_QWORD *)(a1 + 800) = a2;
  v2 = *(_QWORD *)(a1 + 568);
  v3 = *(_BYTE *)sub_A1A5A0(v2, 8);
  sub_A1A5E0(v2, 8);
  v4 = *(_QWORD *)(a1 + 568);
  v5 = sub_A1A5A0(v4, 56);
  sub_A1C070(v8, v5);
  sub_A1A5E0(v4, 56);
  *(_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v3;
  v6 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 56);
  sub_A1BFE0(v6, v8);
  return sub_A1C0C0(v8);
}

