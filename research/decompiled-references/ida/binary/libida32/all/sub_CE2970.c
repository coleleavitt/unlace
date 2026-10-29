__int64 __fastcall sub_CE2970(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r12
  __int64 v5; // r14
  unsigned __int8 v6; // al
  unsigned __int8 v7; // [rsp+1h] [rbp-59h]
  _BYTE v8[88]; // [rsp+2h] [rbp-58h] BYREF

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  v4 = *(_QWORD *)(a1 + 560);
  v5 = *(_QWORD *)(a1 + 1232);
  *(_QWORD *)(a1 + 1240) = *a3;
  sub_DFDA20(v4, 48);
  sub_DFF520(v8);
  sub_DFDA50(v4, 48);
  v6 = sub_DA4BF0(a1 + 384, v5, v8, 0);
  if ( v6 )
    v6 = sub_CDA290(a1 + 384, a2, (__int64)v8);
  v7 = v6;
  sub_DFF560(v8);
  return v7;
}

