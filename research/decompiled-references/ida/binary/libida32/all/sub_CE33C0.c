__int64 __fastcall sub_CE33C0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r12
  __int64 v4; // r12
  __int64 v5; // rax
  _BYTE v6[48]; // [rsp-30h] [rbp-78h] BYREF
  _QWORD v7[9]; // [rsp+0h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    v3 = *(_QWORD *)(a1 + 560);
    *(_QWORD *)(a1 + 1240) = *a2;
    sub_DFDA20(v3, 48);
    sub_DFF520(v7);
    sub_DFDA50(v3, 48);
    v4 = *(_QWORD *)(a1 + 560);
    sub_CDAA60((__int64)v6, v7);
    v5 = sub_DFD980(v4, 48);
    sub_DFF520(v5);
    sub_DFF560(v6);
    sub_DFF560(v7);
  }
  return 1;
}

