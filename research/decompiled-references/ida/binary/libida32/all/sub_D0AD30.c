__int64 __fastcall sub_D0AD30(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned int v3; // r13d
  __int64 v5; // rax
  void *v6; // [rsp+0h] [rbp-B8h] BYREF
  unsigned int v7; // [rsp+8h] [rbp-B0h]
  _BYTE v8[24]; // [rsp+20h] [rbp-98h] BYREF
  int v9; // [rsp+38h] [rbp-80h]
  _BYTE v10[48]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int8 v11; // [rsp+80h] [rbp-38h]

  sub_CE7240((__int64)&v6, *(_QWORD *)(a1 + 176));
  v2 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v2, 48);
  sub_DFF520(v8);
  sub_DFDA50(v2, 48);
  if ( !v9 )
  {
    sub_CDA420((__int64)v10, (__int64)v8);
    sub_DFF6C0(v8, v10);
    sub_DFF560(v10);
  }
  sub_D0A840((__int64)v10, a1, a2, (__int64)&v6, (__int64)v8, 1);
  v3 = v11;
  if ( v11 )
  {
    v5 = sub_DFD980(*(_QWORD *)(a1 + 176), 48);
    sub_DFF4A0(v5, v10);
    if ( v11 )
      sub_DFF560(v10);
  }
  sub_DFF560(v8);
  if ( v7 > 0x40 && v6 )
    operator delete[](v6);
  return v3;
}

