__int64 __fastcall sub_DC0610(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v9; // r15
  unsigned int v10; // eax
  __int64 v11; // rax
  _DWORD *v12; // rax
  _DWORD *v13; // r12
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // rax
  unsigned __int64 v17; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v18; // [rsp+18h] [rbp-A0h] BYREF
  _BYTE v19[48]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v20[104]; // [rsp+50h] [rbp-68h] BYREF

  if ( !(unsigned __int8)sub_DA7230((__int64)a1, a2) )
    return 0;
  v9 = a1[22];
  v17 = *(_QWORD *)sub_DFDA20(v9, 8);
  sub_DFDA50(v9, 8);
  v18 = v17;
  v10 = sub_E05440(a3);
  if ( !(unsigned __int8)sub_D0B490((__int64)a1, a2, &v18, v10, (unsigned __int8)a5) )
  {
    if ( (_BYTE)a5 )
    {
      v11 = sub_DFD980(a1[22], 48);
      *(_QWORD *)v11 = 0;
      *(_OWORD *)(v11 + 8) = 0;
      *(_DWORD *)(v11 + 24) = 1;
      *(_QWORD *)(v11 + 40) = 0;
      *(_QWORD *)(v11 + 32) = 0;
      return a5;
    }
    return 0;
  }
  a5 = sub_CDB1A0((__int64)a1, a2, v18);
  if ( !(_BYTE)a5 )
    return 0;
  v12 = sub_D8C630(a1 + 6, a4, a3, v18, *(unsigned int *)(a1[23] + 32LL), 1);
  v13 = v12;
  if ( v18 )
  {
    v15 = a1[22];
    sub_DFF430(v19, v12);
    sub_CDA6F0((__int64)v20, (__int64)v19, 0);
    v16 = sub_DFD980(v15, 48);
    sub_DFF520(v16);
    sub_DFF560(v20);
    sub_DFF560(v19);
  }
  else
  {
    v14 = sub_DFD980(a1[22], 48);
    sub_DFF430(v14, v13);
  }
  return a5;
}

