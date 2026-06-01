__int64 __fastcall sub_CFE900(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  unsigned __int8 v5; // r12
  __int64 v6; // rbp
  unsigned int v7; // ebp
  __int64 v8; // rax
  unsigned __int8 v9; // [rsp+Fh] [rbp-99h] BYREF
  _BYTE v10[48]; // [rsp+10h] [rbp-98h] BYREF
  _BYTE v11[48]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int8 v12; // [rsp+70h] [rbp-38h]

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  v3 = *(_QWORD *)(a1 + 560);
  v4 = *(_QWORD *)(a1 + 1232);
  *(_QWORD *)(a1 + 1240) = *a2;
  v5 = *(_BYTE *)sub_DFDA20(v3, 8);
  sub_DFDA50(v3, 8);
  v6 = *(_QWORD *)(a1 + 560);
  v9 = v5;
  sub_DFDA20(v6, 48);
  sub_DFF520(v10);
  sub_DFDA50(v6, 48);
  sub_CFE420((__int64)v11, a1 + 384, v4, &v9, (__int64)v10, 1);
  v7 = v12;
  if ( v12 )
  {
    v8 = sub_DFD980(*(_QWORD *)(a1 + 560), 48);
    sub_DFF4A0(v8, v11);
    if ( v12 )
      sub_DFF560(v11);
  }
  sub_DFF560(v10);
  return v7;
}

