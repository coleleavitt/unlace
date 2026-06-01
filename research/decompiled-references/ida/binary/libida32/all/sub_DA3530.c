__int64 __fastcall sub_DA3530(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v5; // rax
  _DWORD v6[12]; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v7[72]; // [rsp+30h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v1, 48);
  sub_DFF520(v6);
  sub_DFDA50(v1, 48);
  if ( v6[6] )
  {
    v5 = sub_DFD980(*(_QWORD *)(a1 + 176), 48);
    sub_DFF4A0(v5, v6);
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 176);
    sub_CDA420((__int64)v7, (__int64)v6);
    v3 = sub_DFD980(v2, 48);
    sub_DFF520(v3);
    sub_DFF560(v7);
  }
  sub_DFF560(v6);
  return 1;
}

