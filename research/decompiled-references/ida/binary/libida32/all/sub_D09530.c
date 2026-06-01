__int64 __fastcall sub_D09530(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // r12
  __int64 v4; // r12
  unsigned int v5; // r13d
  __int64 v7; // rax
  unsigned __int64 v8; // [rsp+8h] [rbp-A0h] BYREF
  _BYTE v9[24]; // [rsp+10h] [rbp-98h] BYREF
  int v10; // [rsp+28h] [rbp-80h]
  _BYTE v11[48]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int8 v12; // [rsp+70h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_QWORD *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v8 = v3;
  v4 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v4, 48);
  sub_DFF520(v9);
  sub_DFDA50(v4, 48);
  if ( !v10 )
  {
    sub_CDA420((__int64)v11, (__int64)v9);
    sub_DFF6C0(v9, v11);
    sub_DFF560(v11);
  }
  sub_D091F0((__int64)v11, a1, a2, &v8, (__int64)v9, 1);
  v5 = v12;
  if ( v12 )
  {
    v7 = sub_DFD980(*(_QWORD *)(a1 + 176), 48);
    sub_DFF4A0(v7, v11);
    if ( v12 )
      sub_DFF560(v11);
  }
  sub_DFF560(v9);
  return v5;
}

