__int64 __fastcall sub_6F0450(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v15; // [rsp+10h] [rbp-2A8h] BYREF
  _BYTE v16[16]; // [rsp+18h] [rbp-2A0h] BYREF
  _BYTE v17[24]; // [rsp+28h] [rbp-290h] BYREF
  _BYTE v18[8]; // [rsp+40h] [rbp-278h] BYREF
  __int64 v19; // [rsp+48h] [rbp-270h]
  __int64 v20; // [rsp+50h] [rbp-268h]
  _QWORD v21[19]; // [rsp+60h] [rbp-258h] BYREF
  int v22; // [rsp+F8h] [rbp-1C0h]
  __int64 v23; // [rsp+100h] [rbp-1B8h]
  _QWORD v24[19]; // [rsp+108h] [rbp-1B0h] BYREF
  int v25; // [rsp+1A0h] [rbp-118h]
  _QWORD v26[18]; // [rsp+1A8h] [rbp-110h] BYREF
  int v27; // [rsp+238h] [rbp-80h]
  __int64 v28; // [rsp+240h] [rbp-78h]
  __int64 v29; // [rsp+248h] [rbp-70h]
  __int64 v30; // [rsp+250h] [rbp-68h] BYREF
  __int64 v31; // [rsp+258h] [rbp-60h]
  __int64 v32; // [rsp+260h] [rbp-58h]
  __int64 v33; // [rsp+268h] [rbp-50h]
  __int64 v34; // [rsp+270h] [rbp-48h]

  v15 = *(_QWORD *)(a3 + 8);
  sub_1684300(v16, v15);
  sub_15F01E0(v17, v15);
  v21[0] = 0;
  sub_1360C00(v18, a2, v21);
  sub_18572D0(v21);
  v19 = 0;
  v20 = v15;
  sub_1360B80(v18, 0);
  v4 = *(_QWORD *)(a3 + 8);
  sub_1584DD0(v21, v4, 0);
  v22 = 0;
  v21[18] = &v15;
  v21[0] = &off_1C534C8;
  v23 = 0;
  sub_1584DD0(v24, v4, 0);
  v24[18] = 0;
  v25 = 0;
  v24[0] = &off_1C61DB8;
  sub_1584DD0(v26, v4, 0);
  v27 = 0;
  v28 = 0;
  v26[0] = &off_1C61DE0;
  v29 = v4;
  v30 = 0;
  v31 = v4;
  v32 = 0;
  v33 = v4;
  v34 = 0;
  sub_6F7BE0(v21, a1, a3, &v30);
  v21[0] = &off_1C534C8;
  if ( v34 )
    sub_186B220((void *)(v34 - 8));
  v5 = v32;
  if ( v32 )
  {
    v6 = v33;
    v7 = (*(_DWORD *)(v32 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v6, v5);
  }
  v8 = v30;
  if ( v30 )
  {
    v9 = v31;
    v7 = (*(_DWORD *)(v30 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v9, v8);
  }
  v10 = v28;
  if ( v28 )
  {
    v11 = v29;
    v7 = (*(_DWORD *)(v28 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v11, v10);
  }
  v26[0] = &qword_1C637E8;
  sub_15841B0(v26);
  v24[0] = &qword_1C637E8;
  sub_15841B0(v24);
  if ( v23 )
    sub_186B220((void *)(v23 - 8));
  sub_15841B0(v21);
  v12 = v19;
  if ( v19 )
  {
    v13 = v20;
    v7 = (*(_DWORD *)(v19 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v13, v12);
  }
  return sub_13606C0(v18);
}

