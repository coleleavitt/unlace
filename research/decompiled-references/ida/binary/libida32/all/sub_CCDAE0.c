__int64 __fastcall sub_CCDAE0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r13
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // r13
  __int64 v6; // rax
  _BYTE v8[48]; // [rsp+0h] [rbp-98h] BYREF
  _BYTE v9[48]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v10; // [rsp+60h] [rbp-38h]
  int v11; // [rsp+68h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 560);
  *(_QWORD *)(a1 + 1240) = *a2;
  v3 = sub_DFDA20(v2, 64);
  sub_DFF520(v9);
  v10 = *(_QWORD *)(v3 + 48);
  v11 = *(_DWORD *)(v3 + 56);
  sub_DFDA50(v2, 64);
  v4 = *(_QWORD *)(a1 + 560);
  sub_DFDA20(v4, 48);
  sub_DFF520(v8);
  sub_DFDA50(v4, 48);
  v5 = sub_DFD980(*(_QWORD *)(a1 + 560), 64);
  sub_DFF4A0(v5, v9);
  *(_QWORD *)(v5 + 48) = v10;
  *(_DWORD *)(v5 + 56) = v11;
  v6 = sub_DFD980(*(_QWORD *)(a1 + 560), 48);
  sub_DFF4A0(v6, v8);
  sub_DFF560(v8);
  sub_DFF560(v9);
  return 1;
}

