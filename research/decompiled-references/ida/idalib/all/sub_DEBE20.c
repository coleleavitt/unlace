__int64 __fastcall sub_DEBE20(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v16[4]; // [rsp+40h] [rbp-1E8h] BYREF
  _QWORD v17[4]; // [rsp+60h] [rbp-1C8h] BYREF
  _QWORD v18[4]; // [rsp+80h] [rbp-1A8h] BYREF
  _QWORD v19[4]; // [rsp+A0h] [rbp-188h] BYREF
  __int64 v20[4]; // [rsp+C0h] [rbp-168h] BYREF
  _QWORD v21[4]; // [rsp+E0h] [rbp-148h] BYREF
  __int64 v22[4]; // [rsp+100h] [rbp-128h] BYREF
  unsigned __int64 v23; // [rsp+120h] [rbp-108h] BYREF
  __int64 v24; // [rsp+128h] [rbp-100h]
  unsigned __int64 v25; // [rsp+140h] [rbp-E8h] BYREF
  __int64 v26; // [rsp+148h] [rbp-E0h]
  _BYTE v27[48]; // [rsp+160h] [rbp-C8h] BYREF
  _BYTE v28[48]; // [rsp+190h] [rbp-98h] BYREF
  __int64 v29[13]; // [rsp+1C0h] [rbp-68h] BYREF

  v1 = a1[22];
  sub_E21760(v1, 48);
  sub_E23260(v28);
  sub_E21790(v1, 48);
  v2 = a1[22];
  sub_E21760(v2, 48);
  sub_E23260(v27);
  sub_E21790(v2, 48);
  v3 = sub_E21760(a1[22], 48);
  sub_CFE430((__int64)v29, (__int64)v27, 0);
  v4 = sub_D0E280((__int64)v29);
  sub_CFEAE0((__int64)v16, v4);
  sub_E232A0(v29);
  sub_CFE430((__int64)v29, (__int64)v27, 1);
  v5 = sub_D0E280((__int64)v29);
  sub_CFEAE0((__int64)v17, v5);
  sub_E232A0(v29);
  sub_CFE430((__int64)v29, (__int64)v28, 0);
  v6 = sub_D0E280((__int64)v29);
  sub_CFEAE0((__int64)v18, v6);
  sub_E232A0(v29);
  sub_CFE430((__int64)v29, (__int64)v28, 1);
  v7 = sub_D0E280((__int64)v29);
  sub_CFEAE0((__int64)v19, v7);
  sub_E232A0(v29);
  v8 = v16[0];
  v10 = sub_21F90D0(v29, v7, v9);
  if ( v8 == v10 )
    sub_21FFBD0(v20, v10);
  else
    sub_21FBA00(v20, v8);
  if ( v16[0] == v10 )
    sub_21FFBD0(v21, v10);
  else
    sub_21FBA00(v21, v16[0]);
  if ( v19[0] == v10 )
    sub_21FFE60(v29, v19);
  else
    sub_21F97A0(v29, v19);
  if ( v18[0] == v10 )
    sub_21FFE60(&v25, v18);
  else
    sub_21F97A0(&v25, v18);
  if ( v17[0] == v10 )
    sub_21FFE60(&v23, v17);
  else
    sub_21F97A0(&v23, v17);
  if ( v16[0] == v10 )
    sub_21FFE60(v22, v16);
  else
    sub_21F97A0(v22, v16);
  sub_C22060(v22, (__int64 *)&v23, (__int64 *)&v25, v29, v20, (__int64)v21);
  sub_9955A0(v22);
  sub_9955A0(&v23);
  sub_9955A0(&v25);
  sub_9955A0(v29);
  v23 = sub_D421E0(a1, v16[0]);
  v24 = v11;
  sub_CFED10((__int64)&v23, v20);
  sub_CFE430((__int64)v29, v3, 0);
  v12 = sub_D0E280((__int64)v29);
  *(_QWORD *)v12 = v23;
  *(_DWORD *)(v12 + 8) = v24;
  sub_E232A0(v29);
  sub_CFE430((__int64)v29, v3, 0);
  sub_E24D00(v29);
  sub_E232A0(v29);
  v25 = sub_D421E0(a1, v16[0]);
  v26 = v13;
  sub_CFED10((__int64)&v25, v21);
  sub_CFE430((__int64)v29, v3, 1);
  v14 = sub_D0E280((__int64)v29);
  *(_QWORD *)v14 = v25;
  *(_DWORD *)(v14 + 8) = v26;
  sub_E232A0(v29);
  sub_CFE430((__int64)v29, v3, 1);
  sub_E24D00(v29);
  sub_E232A0(v29);
  sub_E24D00(v3);
  sub_9955A0(v21);
  sub_9955A0(v20);
  sub_9955A0(v19);
  sub_9955A0(v18);
  sub_9955A0(v17);
  sub_9955A0(v16);
  sub_E232A0(v27);
  sub_E232A0(v28);
  return 1;
}
