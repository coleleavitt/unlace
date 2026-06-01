__int64 __fastcall sub_D44AA0(_QWORD *a1)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v14[4]; // [rsp+40h] [rbp-1E8h] BYREF
  _QWORD v15[4]; // [rsp+60h] [rbp-1C8h] BYREF
  _QWORD v16[4]; // [rsp+80h] [rbp-1A8h] BYREF
  _QWORD v17[4]; // [rsp+A0h] [rbp-188h] BYREF
  __int64 v18[4]; // [rsp+C0h] [rbp-168h] BYREF
  _QWORD v19[4]; // [rsp+E0h] [rbp-148h] BYREF
  __int64 v20[4]; // [rsp+100h] [rbp-128h] BYREF
  unsigned __int64 v21; // [rsp+120h] [rbp-108h] BYREF
  __int64 v22; // [rsp+128h] [rbp-100h]
  unsigned __int64 v23; // [rsp+140h] [rbp-E8h] BYREF
  __int64 v24; // [rsp+148h] [rbp-E0h]
  _BYTE v25[48]; // [rsp+160h] [rbp-C8h] BYREF
  _BYTE v26[48]; // [rsp+190h] [rbp-98h] BYREF
  __int64 v27[13]; // [rsp+1C0h] [rbp-68h] BYREF

  sub_D09010((__int64)v26, a1[22]);
  sub_D09010((__int64)v25, a1[22]);
  v1 = sub_E21760(a1[22], 48);
  sub_CFE430((__int64)v27, (__int64)v25, 0);
  v2 = sub_D0E280((__int64)v27);
  sub_CFEAE0((__int64)v14, v2);
  sub_E232A0(v27);
  sub_CFE430((__int64)v27, (__int64)v25, 1);
  v3 = sub_D0E280((__int64)v27);
  sub_CFEAE0((__int64)v15, v3);
  sub_E232A0(v27);
  sub_CFE430((__int64)v27, (__int64)v26, 0);
  v4 = sub_D0E280((__int64)v27);
  sub_CFEAE0((__int64)v16, v4);
  sub_E232A0(v27);
  sub_CFE430((__int64)v27, (__int64)v26, 1);
  v5 = sub_D0E280((__int64)v27);
  sub_CFEAE0((__int64)v17, v5);
  sub_E232A0(v27);
  v6 = v14[0];
  v8 = sub_21F90D0(v27, v5, v7);
  if ( v6 == v8 )
    sub_21FFBD0(v18, v8);
  else
    sub_21FBA00(v18, v6);
  if ( v14[0] == v8 )
    sub_21FFBD0(v19, v8);
  else
    sub_21FBA00(v19, v14[0]);
  if ( v17[0] == v8 )
    sub_21FFE60(v27, v17);
  else
    sub_21F97A0(v27, v17);
  if ( v16[0] == v8 )
    sub_21FFE60(&v23, v16);
  else
    sub_21F97A0(&v23, v16);
  if ( v15[0] == v8 )
    sub_21FFE60(&v21, v15);
  else
    sub_21F97A0(&v21, v15);
  if ( v14[0] == v8 )
    sub_21FFE60(v20, v14);
  else
    sub_21F97A0(v20, v14);
  sub_C22060(v20, (__int64 *)&v21, (__int64 *)&v23, v27, v18, (__int64)v19);
  sub_9955A0(v20);
  sub_9955A0(&v21);
  sub_9955A0(&v23);
  sub_9955A0(v27);
  v21 = sub_D421E0(a1, v14[0]);
  v22 = v9;
  sub_CFED10((__int64)&v21, v18);
  sub_CFE430((__int64)v27, v1, 0);
  v10 = sub_D0E280((__int64)v27);
  *(_QWORD *)v10 = v21;
  *(_DWORD *)(v10 + 8) = v22;
  sub_E232A0(v27);
  sub_CFE430((__int64)v27, v1, 0);
  sub_E24D00(v27);
  sub_E232A0(v27);
  v23 = sub_D421E0(a1, v14[0]);
  v24 = v11;
  sub_CFED10((__int64)&v23, v19);
  sub_CFE430((__int64)v27, v1, 1);
  v12 = sub_D0E280((__int64)v27);
  *(_QWORD *)v12 = v23;
  *(_DWORD *)(v12 + 8) = v24;
  sub_E232A0(v27);
  sub_CFE430((__int64)v27, v1, 1);
  sub_E24D00(v27);
  sub_E232A0(v27);
  sub_E24D00(v1);
  sub_9955A0(v19);
  sub_9955A0(v18);
  sub_9955A0(v17);
  sub_9955A0(v16);
  sub_9955A0(v15);
  sub_9955A0(v14);
  sub_E232A0(v25);
  sub_E232A0(v26);
  return 1;
}
