__int64 __fastcall sub_9AB0E0(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rbp
  __int64 v3; // rbp
  __int64 v4; // rbp
  _BYTE v6[56]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v7; // [rsp+38h] [rbp-40h]
  int v8; // [rsp+40h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 72);
  sub_A1C070(v6, v2);
  v7 = *(_QWORD *)(v2 + 56);
  v8 = *(_DWORD *)(v2 + 64);
  sub_A1A5E0(v1, 72);
  v3 = *(_QWORD *)(a1 + 184);
  LODWORD(v1) = *(_DWORD *)sub_A1A5A0(v3, 8);
  sub_A1A5E0(v3, 8);
  v4 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 72);
  sub_A1BFE0(v4, v6);
  *(_QWORD *)(v4 + 56) = v7;
  *(_DWORD *)(v4 + 64) = v8;
  *(_DWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v1;
  return sub_A1C0C0(v6);
}

