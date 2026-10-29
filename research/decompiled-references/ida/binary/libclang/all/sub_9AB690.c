__int64 __fastcall sub_9AB690(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rbp
  __int64 v3; // rbp
  __int64 v4; // r13
  __int64 v5; // rbp
  _BYTE v7[56]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v8; // [rsp+38h] [rbp-40h]
  int v9; // [rsp+40h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 72);
  sub_A1C070(v7, v2);
  v8 = *(_QWORD *)(v2 + 56);
  v9 = *(_DWORD *)(v2 + 64);
  sub_A1A5E0(v1, 72);
  v3 = *(_QWORD *)(a1 + 184);
  v4 = *(_QWORD *)sub_A1A5A0(v3, 8);
  sub_A1A5E0(v3, 8);
  v5 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 72);
  sub_A1BFE0(v5, v7);
  *(_QWORD *)(v5 + 56) = v8;
  *(_DWORD *)(v5 + 64) = v9;
  *(_QWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v4;
  return sub_A1C0C0(v7);
}

