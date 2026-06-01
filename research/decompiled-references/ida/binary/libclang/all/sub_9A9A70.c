__int64 __fastcall sub_9A9A70(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rbp
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rax
  _BYTE v8[64]; // [rsp+0h] [rbp-B8h] BYREF
  _BYTE v9[56]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v10; // [rsp+78h] [rbp-40h]
  int v11; // [rsp+80h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 72);
  sub_A1C070(v9, v2);
  v10 = *(_QWORD *)(v2 + 56);
  v11 = *(_DWORD *)(v2 + 64);
  sub_A1A5E0(v1, 72);
  v3 = *(_QWORD *)(a1 + 184);
  v4 = sub_A1A5A0(v3, 56);
  sub_A1C070(v8, v4);
  sub_A1A5E0(v3, 56);
  v5 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 72);
  sub_A1BFE0(v5, v9);
  *(_QWORD *)(v5 + 56) = v10;
  *(_DWORD *)(v5 + 64) = v11;
  v6 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
  sub_A1BFE0(v6, v8);
  sub_A1C0C0(v8);
  return sub_A1C0C0(v9);
}

