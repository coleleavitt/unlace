__int64 __fastcall sub_D93890(_QWORD *a1)
{
  __int64 v1; // r13
  __int64 v2; // r12
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 v5; // r13
  __int64 v6; // rdi
  __int64 v7; // rbx
  _BYTE v9[48]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v10; // [rsp+30h] [rbp-78h]
  int v11; // [rsp+38h] [rbp-70h]
  _BYTE v12[48]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v13; // [rsp+70h] [rbp-38h]
  int v14; // [rsp+78h] [rbp-30h]

  v1 = *a1;
  v2 = sub_DFDA20(*a1, 64);
  sub_DFF520(v12);
  v13 = *(_QWORD *)(v2 + 48);
  v14 = *(_DWORD *)(v2 + 56);
  sub_DFDA50(v1, 64);
  v3 = *a1;
  v4 = sub_DFDA20(*a1, 64);
  sub_DFF520(v9);
  v10 = *(_QWORD *)(v4 + 48);
  v11 = *(_DWORD *)(v4 + 56);
  sub_DFDA50(v3, 64);
  v5 = sub_DFD980(*a1, 64);
  sub_DFF4A0(v5, v12);
  v6 = *a1;
  *(_QWORD *)(v5 + 48) = v13;
  *(_DWORD *)(v5 + 56) = v14;
  v7 = sub_DFD980(v6, 64);
  sub_DFF4A0(v7, v9);
  *(_QWORD *)(v7 + 48) = v10;
  *(_DWORD *)(v7 + 56) = v11;
  sub_DFF560(v9);
  sub_DFF560(v12);
  return 1;
}

