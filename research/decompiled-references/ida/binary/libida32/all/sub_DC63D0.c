__int64 __fastcall sub_DC63D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int16 v3; // r12
  __int64 v4; // r12
  unsigned int v5; // r12d
  __int64 v7; // rax
  __int16 v8; // [rsp+Eh] [rbp-9Ah] BYREF
  _BYTE v9[48]; // [rsp+10h] [rbp-98h] BYREF
  _BYTE v10[48]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int8 v11; // [rsp+70h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_WORD *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v8 = v3;
  v4 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v4, 48);
  sub_DFF520(v9);
  sub_DFDA50(v4, 48);
  sub_D1B670((__int64)v10, a1, a2, &v8, (__int64)v9, 1);
  v5 = v11;
  if ( v11 )
  {
    v7 = sub_DFD980(*(_QWORD *)(a1 + 176), 48);
    sub_DFF4A0(v7, v10);
    if ( v11 )
      sub_DFF560(v10);
  }
  sub_DFF560(v9);
  return v5;
}

