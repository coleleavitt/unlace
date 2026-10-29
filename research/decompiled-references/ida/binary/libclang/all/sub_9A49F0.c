__int64 __fastcall sub_9A49F0(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  _BYTE v8[64]; // [rsp+0h] [rbp-A8h] BYREF
  _BYTE v9[104]; // [rsp+40h] [rbp-68h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 56);
  sub_A1C070(v9, v2);
  sub_A1A5E0(v1, 56);
  v3 = *(_QWORD *)(a1 + 184);
  v4 = sub_A1A5A0(v3, 56);
  sub_A1C070(v8, v4);
  sub_A1A5E0(v3, 56);
  v5 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
  sub_A1BFE0(v5, v9);
  v6 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
  sub_A1BFE0(v6, v8);
  sub_A1C0C0(v8);
  return sub_A1C0C0(v9);
}

