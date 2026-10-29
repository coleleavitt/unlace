__int64 *__fastcall sub_BE7720(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  __int64 v6; // rdx
  int v7; // r9d
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  bool v11; // zf
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  int v19; // [rsp+0h] [rbp-298h]
  int v21; // [rsp+10h] [rbp-288h]
  int v22[2]; // [rsp+18h] [rbp-280h] BYREF
  int v23[2]; // [rsp+20h] [rbp-278h] BYREF
  __int64 v24; // [rsp+28h] [rbp-270h]
  __int64 v25[19]; // [rsp+30h] [rbp-268h] BYREF
  int v26; // [rsp+C8h] [rbp-1D0h]
  __int64 v27; // [rsp+D0h] [rbp-1C8h]
  _QWORD v28[19]; // [rsp+D8h] [rbp-1C0h] BYREF
  int v29; // [rsp+170h] [rbp-128h]
  _QWORD v30[18]; // [rsp+178h] [rbp-120h] BYREF
  int v31; // [rsp+208h] [rbp-90h]
  __int64 v32; // [rsp+210h] [rbp-88h]
  __int64 v33; // [rsp+218h] [rbp-80h]
  __int64 v34; // [rsp+220h] [rbp-78h]
  __int64 v35; // [rsp+228h] [rbp-70h]
  __int64 v36; // [rsp+230h] [rbp-68h]
  __int64 v37; // [rsp+238h] [rbp-60h]
  __int64 v38; // [rsp+240h] [rbp-58h]
  _BYTE v39[80]; // [rsp+248h] [rbp-50h] BYREF

  sub_1568C00(a1, *a2 + 1224LL, a4);
  v5 = a2[2];
  sub_1584DD0(v25, v5, 0);
  v25[0] = (__int64)&off_1C4CA60;
  v25[18] = (__int64)v39;
  v26 = 0;
  v27 = 0;
  sub_1584DD0(v28, v5, 0);
  v28[18] = 0;
  v29 = 0;
  v28[0] = &off_1C61DB8;
  sub_1584DD0(v30, v5, 0);
  v6 = *a1;
  v33 = v5;
  v35 = v5;
  v37 = v5;
  v30[0] = &off_1C61DE0;
  v31 = 0;
  v32 = 0;
  v34 = 0;
  v36 = 0;
  v38 = 0;
  v39[8] = 1;
  sub_157BE40(
    (int)v23,
    (int)v25,
    v6,
    1,
    (int)v22,
    v7,
    v19,
    a3,
    v21,
    a3,
    v23[0],
    v24,
    (__int64)&off_1C4CA80,
    (void *)v25[1]);
  v9 = *(_QWORD *)v23;
  *(_QWORD *)v23 = *a1;
  v8 = *(_QWORD *)v23;
  *a1 = v9;
  if ( v8 )
  {
    v10 = v24;
    v11 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v10, v8);
  }
  v25[0] = (__int64)&off_1C4CA60;
  if ( v38 )
    sub_186B220((void *)(v38 - 8));
  v12 = v36;
  if ( v36 )
  {
    v13 = v37;
    v11 = (*(_DWORD *)(v36 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v13, v12);
  }
  v14 = v34;
  if ( v34 )
  {
    v15 = v35;
    v11 = (*(_DWORD *)(v34 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v15, v14);
  }
  v16 = v32;
  if ( v32 )
  {
    v17 = v33;
    v11 = (*(_DWORD *)(v32 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v17, v16);
  }
  v30[0] = &qword_1C637E8;
  sub_15841B0(v30);
  v28[0] = &qword_1C637E8;
  sub_15841B0(v28);
  if ( v27 )
    sub_186B220((void *)(v27 - 8));
  sub_15841B0(v25);
  return a1;
}

