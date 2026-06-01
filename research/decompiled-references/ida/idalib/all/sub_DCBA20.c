__int64 __fastcall sub_DCBA20(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v6; // ebp
  __int64 v8; // r15
  int v9; // r14d
  _DWORD *v10; // rax
  _DWORD *v11; // r12
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rax
  _BYTE v15[48]; // [rsp+0h] [rbp-98h] BYREF
  _BYTE v16[104]; // [rsp+30h] [rbp-68h] BYREF

  if ( (unsigned __int8)sub_DCAF70((__int64)a1, a2)
    && (v8 = a1[22],
        v9 = *(_DWORD *)sub_E21760(v8, 8),
        sub_E21790(v8, 8),
        sub_E29180(a3),
        v6 = sub_CFEEE0((__int64)a1, a2, v9),
        (_BYTE)v6) )
  {
    v10 = sub_DB0370(a1 + 6, a4, a3, v9, *(unsigned int *)(a1[23] + 32LL), 1);
    v11 = v10;
    if ( v9 )
    {
      v13 = a1[22];
      sub_E23170(v15, v10);
      sub_CFE430((__int64)v16, (__int64)v15, 0);
      v14 = sub_E216C0(v13, 48);
      sub_E23260(v14);
      sub_E232A0(v16);
      sub_E232A0(v15);
    }
    else
    {
      v12 = sub_E216C0(a1[22], 48);
      sub_E23170(v12, v11);
    }
  }
  else
  {
    return 0;
  }
  return v6;
}
