_DWORD **__fastcall sub_B25750(_DWORD **a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v7; // r14
  int v8; // r9d
  __int64 v9; // r8
  int v10; // ecx
  _DWORD *v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdi
  bool v14; // zf
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdi
  int v20; // [rsp+0h] [rbp-2B8h]
  int v21; // [rsp+4h] [rbp-2B4h]
  void *v24; // [rsp+18h] [rbp-2A0h]
  int v25[2]; // [rsp+20h] [rbp-298h] BYREF
  int v26; // [rsp+28h] [rbp-290h]
  __int64 v27; // [rsp+30h] [rbp-288h] BYREF
  void *v28; // [rsp+38h] [rbp-280h]
  void *v29; // [rsp+40h] [rbp-278h]
  int v30[2]; // [rsp+50h] [rbp-268h] BYREF
  _BYTE *v31; // [rsp+E0h] [rbp-1D8h]
  int v32; // [rsp+E8h] [rbp-1D0h]
  __int64 v33; // [rsp+F0h] [rbp-1C8h]
  _QWORD v34[19]; // [rsp+F8h] [rbp-1C0h] BYREF
  int v35; // [rsp+190h] [rbp-128h]
  int v36[2]; // [rsp+198h] [rbp-120h] BYREF
  int v37; // [rsp+228h] [rbp-90h]
  __int64 v38; // [rsp+230h] [rbp-88h]
  __int64 v39; // [rsp+238h] [rbp-80h]
  __int64 v40; // [rsp+240h] [rbp-78h]
  __int64 v41; // [rsp+248h] [rbp-70h]
  __int64 v42; // [rsp+250h] [rbp-68h]
  __int64 v43; // [rsp+258h] [rbp-60h]
  __int64 v44; // [rsp+260h] [rbp-58h]
  _BYTE v45[80]; // [rsp+268h] [rbp-50h] BYREF

  v7 = *(_QWORD *)(a2 + 24);
  sub_1584DD0(v30, v7, 0);
  *(_QWORD *)v30 = &off_1C4CA60;
  v32 = 0;
  v31 = v45;
  v33 = 0;
  sub_1584DD0(v34, v7, 0);
  v34[18] = 0;
  v35 = 0;
  v34[0] = &off_1C61DB8;
  sub_1584DD0(v36, v7, 0);
  v37 = 0;
  *(_QWORD *)v30 = &off_1C4CA80;
  v38 = 0;
  v9 = *(_QWORD *)(a5 + 8);
  *(_QWORD *)v36 = &off_1C61DE0;
  v39 = v7;
  v40 = 0;
  v41 = v7;
  v42 = 0;
  v43 = v7;
  v44 = 0;
  v45[8] = 1;
  if ( v9 )
    v10 = *(_DWORD *)(v9 - 4);
  else
    v10 = 0;
  sub_157BE40((int)a1, (int)v30, a6, v10, v9, v8, v20, a5, a6, (int)v36, v25[0], v26, v27, v28);
  sub_14B9B80(*(_QWORD *)(a2 + 16) + 7456LL, a1);
  v11 = *a1;
  *(_QWORD *)v25 = a2;
  v28 = nullptr;
  v26 = v21 + 1;
  v29 = nullptr;
  sub_B246F0((__int64)v25, (__int64)&v27, v11);
  if ( v29 )
    sub_186B220(v29);
  *(_QWORD *)v30 = &off_1C4CA60;
  if ( v44 )
    sub_186B220((void *)(v44 - 8));
  v12 = v42;
  if ( v42 )
  {
    v13 = v43;
    v14 = (*(_DWORD *)(v42 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v13, v12);
  }
  v15 = v40;
  if ( v40 )
  {
    v16 = v41;
    v14 = (*(_DWORD *)(v40 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v16, v15);
  }
  v17 = v38;
  if ( v38 )
  {
    v18 = v39;
    v14 = (*(_DWORD *)(v38 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v18, v17);
  }
  *(_QWORD *)v36 = &qword_1C637E8;
  sub_15841B0(v24);
  v34[0] = &qword_1C637E8;
  sub_15841B0(v34);
  if ( v33 )
    sub_186B220((void *)(v33 - 8));
  sub_15841B0(v30);
  return a1;
}

