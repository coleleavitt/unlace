__int64 __fastcall sub_9AB350(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // r14
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // rbx
  _BYTE v7[56]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v8; // [rsp+38h] [rbp-40h]
  int v9; // [rsp+40h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 184);
  v2 = *(_QWORD *)sub_A1A5A0(v1, 8);
  sub_A1A5E0(v1, 8);
  v3 = *(_QWORD *)(a1 + 184);
  v4 = sub_A1A5A0(v3, 72);
  sub_A1C070(v7, v4);
  v8 = *(_QWORD *)(v4 + 56);
  v9 = *(_DWORD *)(v4 + 64);
  sub_A1A5E0(v3, 72);
  *(_QWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v2;
  v5 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 72);
  sub_A1BFE0(v5, v7);
  *(_QWORD *)(v5 + 56) = v8;
  *(_DWORD *)(v5 + 64) = v9;
  return sub_A1C0C0(v7);
}

