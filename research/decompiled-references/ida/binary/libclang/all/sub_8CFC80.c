__int64 __fastcall sub_8CFC80(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rbp
  __int64 v3; // r12
  __int64 v4; // rax
  int v5; // r15d
  __int64 v6; // rbx
  __int64 v8; // [rsp+0h] [rbp-1A8h]
  __int64 v9; // [rsp+8h] [rbp-1A0h]
  _BYTE v10[64]; // [rsp+10h] [rbp-198h] BYREF
  _BYTE v11[64]; // [rsp+50h] [rbp-158h] BYREF
  _BYTE v12[64]; // [rsp+90h] [rbp-118h] BYREF
  _BYTE v13[56]; // [rsp+D0h] [rbp-D8h] BYREF
  __int64 v14; // [rsp+108h] [rbp-A0h]
  int v15; // [rsp+110h] [rbp-98h]
  _BYTE v16[56]; // [rsp+120h] [rbp-88h] BYREF
  __int64 v17; // [rsp+158h] [rbp-50h]
  int v18; // [rsp+160h] [rbp-48h]

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 72);
  sub_A1C070(v13, v2);
  v14 = *(_QWORD *)(v2 + 56);
  v15 = *(_DWORD *)(v2 + 64);
  sub_A1A5E0(v1, 72);
  v3 = *(_QWORD *)(a1 + 184);
  v4 = sub_A1A5A0(v3, 56);
  sub_A1C070(v11, v4);
  sub_A1A5E0(v3, 56);
  v8 = *(_QWORD *)(a1 + 184);
  sub_A1BFE0(v12, v11);
  v5 = v15;
  v9 = v14;
  sub_A1BFE0(v10, v12);
  sub_A1BFE0(v16, v10);
  v18 = v5;
  v17 = v9;
  sub_A1C0C0(v10);
  v6 = sub_A1A4E0(v8, 72);
  sub_A1C070(v6, v16);
  *(_QWORD *)(v6 + 56) = v17;
  *(_DWORD *)(v6 + 64) = v18;
  sub_A1C0C0(v16);
  sub_A1C0C0(v12);
  sub_A1C0C0(v11);
  return sub_A1C0C0(v13);
}

