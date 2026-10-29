__int64 __fastcall sub_CDD040(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rax
  _BYTE v7[48]; // [rsp-30h] [rbp-78h] BYREF
  _BYTE v8[24]; // [rsp+0h] [rbp-48h] BYREF
  int v9; // [rsp+18h] [rbp-30h]

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  v3 = *(_QWORD *)(a1 + 560);
  *(_QWORD *)(a1 + 1240) = *a2;
  sub_DFDA20(v3, 48);
  sub_DFF520(v8);
  sub_DFDA50(v3, 48);
  if ( v9 )
  {
    v4 = sub_DFD980(*(_QWORD *)(a1 + 560), 48);
    sub_DFF4A0(v4, v8);
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 560);
    sub_CDA420((__int64)v7, (__int64)v8);
    v6 = sub_DFD980(v5, 48);
    sub_DFF520(v6);
    sub_DFF560(v7);
  }
  sub_DFF560(v8);
  return 1;
}

