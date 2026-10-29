__int64 __fastcall sub_DE3EA0(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // r14
  unsigned int v8; // r15d
  unsigned int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // r9
  _DWORD *v12; // r12
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  unsigned int v16; // [rsp+Ch] [rbp-9Ch] BYREF
  _BYTE v17[48]; // [rsp+10h] [rbp-98h] BYREF
  _BYTE v18[104]; // [rsp+40h] [rbp-68h] BYREF

  if ( !(unsigned __int8)sub_DCAF70((__int64)a1, a2) )
    return 0;
  v7 = a1[22];
  v8 = *(_DWORD *)sub_E21760(v7, 8);
  sub_E21790(v7, 8);
  v9 = *(_DWORD *)(a3 + 20);
  v16 = v8;
  if ( !(unsigned __int8)sub_D2F040((__int64)a1, a2, &v16, v9, (unsigned __int8)a4) )
  {
    if ( (_BYTE)a4 )
    {
      v10 = sub_E216C0(a1[22], 48);
      *(_QWORD *)v10 = 0;
      *(_OWORD *)(v10 + 8) = 0;
      *(_DWORD *)(v10 + 24) = 1;
      *(_QWORD *)(v10 + 40) = 0;
      *(_QWORD *)(v10 + 32) = a3;
      return a4;
    }
    return 0;
  }
  a4 = sub_CFEEE0((__int64)a1, a2, v16);
  if ( !(_BYTE)a4 )
    return 0;
  v12 = sub_DB0430(a1 + 6, (_QWORD *)a3, v16, *(_DWORD *)(a1[23] + 32LL), 1, v11);
  if ( v16 )
  {
    v14 = a1[22];
    sub_E23170(v17, v12);
    sub_CFE430((__int64)v18, (__int64)v17, 0);
    v15 = sub_E216C0(v14, 48);
    sub_E23260(v15);
    sub_E232A0(v18);
    sub_E232A0(v17);
  }
  else
  {
    v13 = sub_E216C0(a1[22], 48);
    sub_E23170(v13, v12);
  }
  return a4;
}
