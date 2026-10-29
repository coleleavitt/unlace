__int64 __fastcall sub_DA2D20(_QWORD *a1)
{
  __int64 v1; // r12
  __int64 v2; // r12
  __int64 v3; // rax
  _QWORD v5[6]; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v6[72]; // [rsp+30h] [rbp-48h] BYREF

  v1 = *a1;
  sub_DFDA20(*a1, 48);
  sub_DFF520(v5);
  sub_DFDA50(v1, 48);
  v2 = *a1;
  sub_CDAA60((__int64)v6, v5);
  v3 = sub_DFD980(v2, 48);
  sub_DFF520(v3);
  sub_DFF560(v6);
  sub_DFF560(v5);
  return 1;
}

