__int64 __fastcall Z3_substitute_vars(__int64 a1, __int64 a2, int a3, int a4)
{
  char v6; // bp
  __int64 v7; // rsi
  int v8; // r9d
  __int64 v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdi
  int v20; // [rsp+0h] [rbp-288h]
  int v22[2]; // [rsp+10h] [rbp-278h] BYREF
  __int64 v23; // [rsp+18h] [rbp-270h]
  int v24[2]; // [rsp+20h] [rbp-268h] BYREF
  int v25; // [rsp+28h] [rbp-260h]
  __int64 v26; // [rsp+30h] [rbp-258h]
  void *v27; // [rsp+38h] [rbp-250h]
  __int64 v28; // [rsp+C0h] [rbp-1C8h]
  int *v29; // [rsp+C8h] [rbp-1C0h] BYREF
  int *v30; // [rsp+168h] [rbp-120h] BYREF
  __int64 v31; // [rsp+200h] [rbp-88h]
  __int64 v32; // [rsp+208h] [rbp-80h]
  __int64 v33; // [rsp+210h] [rbp-78h]
  __int64 v34; // [rsp+218h] [rbp-70h]
  __int64 v35; // [rsp+220h] [rbp-68h]
  __int64 v36; // [rsp+228h] [rbp-60h]
  __int64 v37; // [rsp+230h] [rbp-58h]
  _BYTE v38[80]; // [rsp+238h] [rbp-50h] BYREF

  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v6 )
    sub_29B260(a1, a2);
  v7 = *(_QWORD *)(a1 + 232);
  *(_DWORD *)(a1 + 1520) = 0;
  sub_633760(v24, v7, 0, v38);
  v38[8] = 0;
  sub_157BE40((int)v22, (int)v24, a2, a3, a4, v8, v20, a2, v22[0], v23, (int)&off_1C4CA80, v25, v26, v27);
  sub_251FD0(a1, *(__int64 *)v22);
  v9 = *(_QWORD *)v22;
  v10 = *(_QWORD *)v22;
  if ( v6 )
  {
    sub_2BB620(*(_QWORD *)v22);
    v10 = *(_QWORD *)v22;
  }
  if ( v10 )
  {
    v11 = v23;
    v12 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v11, v10);
  }
  *(_QWORD *)v24 = &off_1C4CA60;
  if ( v37 )
    sub_186B220((void *)(v37 - 8));
  v13 = v35;
  if ( v35 )
  {
    v14 = v36;
    v12 = (*(_DWORD *)(v35 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v14, v13);
  }
  v15 = v33;
  if ( v33 )
  {
    v16 = v34;
    v12 = (*(_DWORD *)(v33 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v16, v15);
  }
  v17 = v31;
  if ( v31 )
  {
    v18 = v32;
    v12 = (*(_DWORD *)(v31 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v18, v17);
  }
  v30 = &qword_1C637E8;
  sub_15841B0(&v30);
  v29 = &qword_1C637E8;
  sub_15841B0(&v29);
  if ( v28 )
    sub_186B220((void *)(v28 - 8));
  sub_15841B0(v24);
  if ( v6 )
    byte_1C7EBA0 = 1;
  return v9;
}

