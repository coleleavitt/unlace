__int64 __fastcall sub_9ABD10(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rbp
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v5; // rbp
  __int64 v6; // rbx
  _BYTE v8[56]; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v9; // [rsp+38h] [rbp-90h]
  int v10; // [rsp+40h] [rbp-88h]
  _BYTE v11[56]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v12; // [rsp+88h] [rbp-40h]
  int v13; // [rsp+90h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 72);
  sub_A1C070(v11, v2);
  v12 = *(_QWORD *)(v2 + 56);
  v13 = *(_DWORD *)(v2 + 64);
  sub_A1A5E0(v1, 72);
  v3 = *(_QWORD *)(a1 + 184);
  v4 = sub_A1A5A0(v3, 72);
  sub_A1C070(v8, v4);
  v9 = *(_QWORD *)(v4 + 56);
  v10 = *(_DWORD *)(v4 + 64);
  sub_A1A5E0(v3, 72);
  v5 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 72);
  sub_A1BFE0(v5, v11);
  *(_QWORD *)(v5 + 56) = v12;
  *(_DWORD *)(v5 + 64) = v13;
  v6 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 72);
  sub_A1BFE0(v6, v8);
  *(_QWORD *)(v6 + 56) = v9;
  *(_DWORD *)(v6 + 64) = v10;
  sub_A1C0C0(v8);
  return sub_A1C0C0(v11);
}

