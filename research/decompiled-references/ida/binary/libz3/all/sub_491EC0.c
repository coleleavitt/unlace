void __fastcall sub_491EC0(__int64 a1, __int64 *a2)
{
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdi
  void *v15; // [rsp+0h] [rbp-2B8h]
  int v16[2]; // [rsp+18h] [rbp-2A0h] BYREF
  int v17[4]; // [rsp+20h] [rbp-298h] BYREF
  __int64 v18; // [rsp+30h] [rbp-288h] BYREF
  _BYTE v19[16]; // [rsp+38h] [rbp-280h] BYREF
  _BYTE *v20; // [rsp+48h] [rbp-270h]
  __int64 v21; // [rsp+50h] [rbp-268h]
  _BYTE *v22; // [rsp+58h] [rbp-260h]
  _QWORD v23[19]; // [rsp+60h] [rbp-258h] BYREF
  int v24; // [rsp+F8h] [rbp-1C0h]
  __int64 v25; // [rsp+100h] [rbp-1B8h]
  _QWORD v26[19]; // [rsp+108h] [rbp-1B0h] BYREF
  int v27; // [rsp+1A0h] [rbp-118h]
  _QWORD v28[18]; // [rsp+1A8h] [rbp-110h] BYREF
  int v29; // [rsp+238h] [rbp-80h]
  __int64 v30; // [rsp+240h] [rbp-78h]
  __int64 v31; // [rsp+248h] [rbp-70h]
  __int64 v32; // [rsp+250h] [rbp-68h] BYREF
  __int64 v33; // [rsp+258h] [rbp-60h]
  __int64 v34; // [rsp+260h] [rbp-58h]
  __int64 v35; // [rsp+268h] [rbp-50h]
  __int64 v36; // [rsp+270h] [rbp-48h]

  *(_QWORD *)v16 = 0;
  sub_1862300(v16, "sort_sums", 1);
  sub_14B7810((int)v17, a2[1], (int)v16, v3, v4, v5, v15);
  sub_14B9BF0(v17, a1, a2);
  v18 = a2[1];
  sub_16669D0(v19, v18);
  v6 = a2[1];
  v20 = v19;
  v22 = v19;
  v21 = v18;
  sub_1584DD0(v23, v6, 0);
  v24 = 0;
  v23[18] = &v18;
  v23[0] = &off_1C4EC90;
  v25 = 0;
  sub_1584DD0(v26, v6, 0);
  v26[18] = 0;
  v27 = 0;
  v26[0] = &off_1C61DB8;
  sub_1584DD0(v28, v6, 0);
  v7 = *a2;
  v29 = 0;
  v30 = 0;
  v28[0] = &off_1C61DE0;
  v31 = v6;
  v32 = 0;
  v33 = v6;
  v34 = 0;
  v35 = v6;
  v36 = 0;
  sub_49ECE0(v23, v7, a2, &v32);
  v23[0] = &off_1C4EC90;
  if ( v36 )
    sub_186B220((void *)(v36 - 8));
  v8 = v34;
  if ( v34 )
  {
    v9 = v35;
    v10 = (*(_DWORD *)(v34 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v9, v8);
  }
  v11 = v32;
  if ( v32 )
  {
    v12 = v33;
    v10 = (*(_DWORD *)(v32 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v12, v11);
  }
  v13 = v30;
  if ( v30 )
  {
    v14 = v31;
    v10 = (*(_DWORD *)(v30 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v14, v13);
  }
  v28[0] = &qword_1C637E8;
  sub_15841B0(v28);
  v26[0] = &qword_1C637E8;
  sub_15841B0(v26);
  if ( v25 )
    sub_186B220((void *)(v25 - 8));
  sub_15841B0(v23);
  sub_14B63F0(v17);
  sub_18572D0(v16);
}

