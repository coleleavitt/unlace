_DWORD **__fastcall sub_B24C20(_DWORD **a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // r14
  int v7; // r9d
  __int64 v8; // r8
  int v9; // ecx
  _DWORD *v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdi
  bool v13; // zf
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  int v19; // [rsp+0h] [rbp-2B8h]
  int v20; // [rsp+4h] [rbp-2B4h]
  void *v23; // [rsp+18h] [rbp-2A0h]
  int v24[2]; // [rsp+20h] [rbp-298h] BYREF
  int v25; // [rsp+28h] [rbp-290h]
  __int64 v26; // [rsp+30h] [rbp-288h] BYREF
  void *v27; // [rsp+38h] [rbp-280h]
  void *v28; // [rsp+40h] [rbp-278h]
  int v29[2]; // [rsp+50h] [rbp-268h] BYREF
  _BYTE *v30; // [rsp+E0h] [rbp-1D8h]
  int v31; // [rsp+E8h] [rbp-1D0h]
  __int64 v32; // [rsp+F0h] [rbp-1C8h]
  _QWORD v33[19]; // [rsp+F8h] [rbp-1C0h] BYREF
  int v34; // [rsp+190h] [rbp-128h]
  int v35[2]; // [rsp+198h] [rbp-120h] BYREF
  int v36; // [rsp+228h] [rbp-90h]
  __int64 v37; // [rsp+230h] [rbp-88h]
  __int64 v38; // [rsp+238h] [rbp-80h]
  __int64 v39; // [rsp+240h] [rbp-78h]
  __int64 v40; // [rsp+248h] [rbp-70h]
  __int64 v41; // [rsp+250h] [rbp-68h]
  __int64 v42; // [rsp+258h] [rbp-60h]
  __int64 v43; // [rsp+260h] [rbp-58h]
  _BYTE v44[80]; // [rsp+268h] [rbp-50h] BYREF

  v6 = *(_QWORD *)(a2 + 24);
  sub_1584DD0(v29, v6, 0);
  *(_QWORD *)v29 = &off_1C4CA60;
  v31 = 0;
  v30 = v44;
  v32 = 0;
  sub_1584DD0(v33, v6, 0);
  v33[18] = 0;
  v34 = 0;
  v33[0] = &off_1C61DB8;
  sub_1584DD0(v35, v6, 0);
  v36 = 0;
  *(_QWORD *)v29 = &off_1C4CA80;
  v37 = 0;
  v8 = *(_QWORD *)(a4 + 8);
  *(_QWORD *)v35 = &off_1C61DE0;
  v38 = v6;
  v39 = 0;
  v40 = v6;
  v41 = 0;
  v42 = v6;
  v43 = 0;
  v44[8] = 1;
  if ( v8 )
    v9 = *(_DWORD *)(v8 - 4);
  else
    v9 = 0;
  sub_157BE40((int)a1, (int)v29, a5, v9, v8, v7, v19, a4, a5, (int)v35, v24[0], v25, v26, v27);
  sub_14B9B80(*(_QWORD *)(a2 + 16) + 7456LL, a1);
  v10 = *a1;
  *(_QWORD *)v24 = a2;
  v27 = nullptr;
  v25 = v20 + 1;
  v28 = nullptr;
  sub_B246F0((__int64)v24, (__int64)&v26, v10);
  if ( v28 )
    sub_186B220(v28);
  *(_QWORD *)v29 = &off_1C4CA60;
  if ( v43 )
    sub_186B220((void *)(v43 - 8));
  v11 = v41;
  if ( v41 )
  {
    v12 = v42;
    v13 = (*(_DWORD *)(v41 + 8))-- == 1;
    if ( v13 )
      sub_15D7BC0(v12, v11);
  }
  v14 = v39;
  if ( v39 )
  {
    v15 = v40;
    v13 = (*(_DWORD *)(v39 + 8))-- == 1;
    if ( v13 )
      sub_15D7BC0(v15, v14);
  }
  v16 = v37;
  if ( v37 )
  {
    v17 = v38;
    v13 = (*(_DWORD *)(v37 + 8))-- == 1;
    if ( v13 )
      sub_15D7BC0(v17, v16);
  }
  *(_QWORD *)v35 = &qword_1C637E8;
  sub_15841B0(v23);
  v33[0] = &qword_1C637E8;
  sub_15841B0(v33);
  if ( v32 )
    sub_186B220((void *)(v32 - 8));
  sub_15841B0(v29);
  return a1;
}

