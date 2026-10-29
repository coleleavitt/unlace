__int64 __fastcall sub_9A9B60(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rbx
  _BYTE v8[64]; // [rsp+0h] [rbp-B8h] BYREF
  _BYTE v9[56]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v10; // [rsp+78h] [rbp-40h]
  int v11; // [rsp+80h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 56);
  sub_A1C070(v8, v2);
  sub_A1A5E0(v1, 56);
  v3 = *(_QWORD *)(a1 + 184);
  v4 = sub_A1A5A0(v3, 72);
  sub_A1C070(v9, v4);
  v10 = *(_QWORD *)(v4 + 56);
  v11 = *(_DWORD *)(v4 + 64);
  sub_A1A5E0(v3, 72);
  v5 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
  sub_A1BFE0(v5, v8);
  v6 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 72);
  sub_A1BFE0(v6, v9);
  *(_QWORD *)(v6 + 56) = v10;
  *(_DWORD *)(v6 + 64) = v11;
  sub_A1C0C0(v9);
  return sub_A1C0C0(v8);
}

