__int64 __fastcall sub_DC02E0(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v9; // r15
  unsigned int v10; // eax
  __int64 v11; // rax
  _DWORD *v12; // r12
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  unsigned int v16; // [rsp+Ch] [rbp-ACh]
  unsigned int v17; // [rsp+1Ch] [rbp-9Ch] BYREF
  _BYTE v18[48]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v19[104]; // [rsp+50h] [rbp-68h] BYREF

  if ( !(unsigned __int8)sub_DA7230((__int64)a1, a2) )
    return 0;
  v9 = a1[22];
  v16 = *(_DWORD *)sub_DFDA20(v9, 8);
  sub_DFDA50(v9, 8);
  v17 = v16;
  v10 = sub_E05440(a3);
  if ( !(unsigned __int8)sub_D0B300((__int64)a1, a2, &v17, v10, (unsigned __int8)a5) )
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
  a5 = sub_CDB1A0((__int64)a1, a2, v17);
  if ( !(_BYTE)a5 )
    return 0;
  v12 = sub_D8C630(a1 + 6, a4, a3, v17, *(unsigned int *)(a1[23] + 32LL), 1);
  if ( v17 )
  {
    v14 = a1[22];
    sub_DFF430(v18, v12);
    sub_CDA6F0((__int64)v19, (__int64)v18, 0);
    v15 = sub_DFD980(v14, 48);
    sub_DFF520(v15);
    sub_DFF560(v19);
    sub_DFF560(v18);
  }
  else
  {
    v13 = sub_DFD980(a1[22], 48);
    sub_DFF430(v13, v12);
  }
  return a5;
}

