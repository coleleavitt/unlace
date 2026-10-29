__int64 __fastcall sub_DC0480(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // r14
  unsigned __int64 v8; // r15
  unsigned int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // r9
  _DWORD *v12; // rax
  _DWORD *v13; // r12
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // rax
  unsigned __int64 v17; // [rsp+8h] [rbp-A0h] BYREF
  _BYTE v18[48]; // [rsp+10h] [rbp-98h] BYREF
  _BYTE v19[104]; // [rsp+40h] [rbp-68h] BYREF

  if ( !(unsigned __int8)sub_DA7230((__int64)a1, a2) )
    return 0;
  v7 = a1[22];
  v8 = *(_QWORD *)sub_DFDA20(v7, 8);
  sub_DFDA50(v7, 8);
  v9 = *(_DWORD *)(a3 + 20);
  v17 = v8;
  if ( !(unsigned __int8)sub_D0B490((__int64)a1, a2, &v17, v9, (unsigned __int8)a4) )
  {
    if ( (_BYTE)a4 )
    {
      v10 = sub_DFD980(a1[22], 48);
      *(_QWORD *)v10 = 0;
      *(_OWORD *)(v10 + 8) = 0;
      *(_DWORD *)(v10 + 24) = 1;
      *(_QWORD *)(v10 + 40) = 0;
      *(_QWORD *)(v10 + 32) = a3;
      return a4;
    }
    return 0;
  }
  a4 = sub_CDB1A0((__int64)a1, a2, v17);
  if ( !(_BYTE)a4 )
    return 0;
  v12 = sub_D8C6F0(a1 + 6, (_QWORD *)a3, v17, *(_DWORD *)(a1[23] + 32LL), 1, v11);
  v13 = v12;
  if ( v17 )
  {
    v15 = a1[22];
    sub_DFF430(v18, v12);
    sub_CDA6F0((__int64)v19, (__int64)v18, 0);
    v16 = sub_DFD980(v15, 48);
    sub_DFF520(v16);
    sub_DFF560(v19);
    sub_DFF560(v18);
  }
  else
  {
    v14 = sub_DFD980(a1[22], 48);
    sub_DFF430(v14, v13);
  }
  return a4;
}

