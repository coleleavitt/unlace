__int64 __fastcall sub_CDBE40(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r12
  __int64 v4; // r14
  __int64 v5; // rbx
  unsigned __int8 v6; // al
  unsigned __int8 v7; // [rsp+1h] [rbp-59h]
  _BYTE v8[88]; // [rsp+2h] [rbp-58h] BYREF

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  v3 = *(_QWORD *)(a1 + 560);
  v4 = *(_QWORD *)(a1 + 1232);
  *(_QWORD *)(a1 + 1240) = *a2;
  sub_DFDA20(v3, 48);
  sub_DFF520(v8);
  sub_DFDA50(v3, 48);
  v5 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
  v6 = sub_DA8420(a1 + 384, v4, v8, 0);
  if ( v6 )
    v6 = sub_D85DD0(a1 + 384, v4, v8, v5);
  v7 = v6;
  sub_DFF560(v8);
  return v7;
}

