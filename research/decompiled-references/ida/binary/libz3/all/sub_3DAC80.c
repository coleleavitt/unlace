__int64 __fastcall sub_3DAC80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v13; // [rsp+10h] [rbp-278h] BYREF
  _BYTE v14[24]; // [rsp+18h] [rbp-270h] BYREF
  _QWORD v15[19]; // [rsp+30h] [rbp-258h] BYREF
  int v16; // [rsp+C8h] [rbp-1C0h]
  __int64 v17; // [rsp+D0h] [rbp-1B8h]
  _QWORD v18[19]; // [rsp+D8h] [rbp-1B0h] BYREF
  int v19; // [rsp+170h] [rbp-118h]
  _QWORD v20[18]; // [rsp+178h] [rbp-110h] BYREF
  int v21; // [rsp+208h] [rbp-80h]
  __int64 v22; // [rsp+210h] [rbp-78h]
  __int64 v23; // [rsp+218h] [rbp-70h]
  __int64 v24; // [rsp+220h] [rbp-68h] BYREF
  __int64 v25; // [rsp+228h] [rbp-60h]
  __int64 v26; // [rsp+230h] [rbp-58h]
  __int64 v27; // [rsp+238h] [rbp-50h]
  __int64 v28; // [rsp+240h] [rbp-48h]

  v13 = *(_QWORD *)(a3 + 8);
  sub_16669D0(v14, v13);
  v4 = *(_QWORD *)(a3 + 8);
  sub_1584DD0(v15, v4, 0);
  v15[0] = &off_1C4E718;
  v15[18] = &v13;
  v16 = 0;
  v17 = 0;
  sub_1584DD0(v18, v4, 0);
  v18[18] = 0;
  v19 = 0;
  v18[0] = &off_1C61DB8;
  sub_1584DD0(v20, v4, 0);
  v21 = 0;
  v22 = 0;
  v20[0] = &off_1C61DE0;
  v23 = v4;
  v24 = 0;
  v25 = v4;
  v26 = 0;
  v27 = v4;
  v28 = 0;
  sub_3E5740(v15, a2, a3, &v24);
  v15[0] = &off_1C4E718;
  if ( v28 )
    sub_186B220((void *)(v28 - 8));
  v5 = v26;
  if ( v26 )
  {
    v6 = v27;
    v7 = (*(_DWORD *)(v26 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v6, v5);
  }
  v8 = v24;
  if ( v24 )
  {
    v9 = v25;
    v7 = (*(_DWORD *)(v24 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v9, v8);
  }
  v10 = v22;
  if ( v22 )
  {
    v11 = v23;
    v7 = (*(_DWORD *)(v22 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v11, v10);
  }
  v20[0] = &qword_1C637E8;
  sub_15841B0(v20);
  v18[0] = &qword_1C637E8;
  sub_15841B0(v18);
  if ( v17 )
    sub_186B220((void *)(v17 - 8));
  return sub_15841B0(v15);
}

