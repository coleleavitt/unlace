__int64 __fastcall sub_4B4B90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 result; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // [rsp+10h] [rbp-278h] BYREF
  __int64 v16; // [rsp+18h] [rbp-270h]
  __int64 v17; // [rsp+20h] [rbp-268h]
  _QWORD v18[19]; // [rsp+30h] [rbp-258h] BYREF
  int v19; // [rsp+C8h] [rbp-1C0h]
  __int64 v20; // [rsp+D0h] [rbp-1B8h]
  _QWORD v21[19]; // [rsp+D8h] [rbp-1B0h] BYREF
  int v22; // [rsp+170h] [rbp-118h]
  _QWORD v23[18]; // [rsp+178h] [rbp-110h] BYREF
  int v24; // [rsp+208h] [rbp-80h]
  __int64 v25; // [rsp+210h] [rbp-78h]
  __int64 v26; // [rsp+218h] [rbp-70h]
  __int64 v27; // [rsp+220h] [rbp-68h] BYREF
  __int64 v28; // [rsp+228h] [rbp-60h]
  __int64 v29; // [rsp+230h] [rbp-58h]
  __int64 v30; // [rsp+238h] [rbp-50h]
  __int64 v31; // [rsp+240h] [rbp-48h]

  v15 = a1;
  v16 = a3;
  v17 = a1;
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  sub_1584DD0(v18, a1, 0);
  v19 = 0;
  v18[18] = &v15;
  v18[0] = &off_1C4ECB0;
  v20 = 0;
  sub_1584DD0(v21, a1, 0);
  v21[18] = 0;
  v22 = 0;
  v21[0] = &off_1C61DB8;
  sub_1584DD0(v23, a1, 0);
  v24 = 0;
  v25 = 0;
  v23[0] = &off_1C61DE0;
  v26 = a1;
  v27 = 0;
  v28 = a1;
  v29 = 0;
  v30 = a1;
  v31 = 0;
  sub_4BDFE0(v18, a2, a4, &v27);
  v18[0] = &off_1C4ECB0;
  if ( v31 )
    sub_186B220((void *)(v31 - 8));
  v5 = v29;
  if ( v29 )
  {
    v6 = v30;
    v7 = (*(_DWORD *)(v29 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v6, v5);
  }
  v8 = v27;
  if ( v27 )
  {
    v9 = v28;
    v7 = (*(_DWORD *)(v27 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v9, v8);
  }
  v10 = v25;
  if ( v25 )
  {
    v11 = v26;
    v7 = (*(_DWORD *)(v25 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v11, v10);
  }
  v23[0] = &qword_1C637E8;
  sub_15841B0(v23);
  v21[0] = &qword_1C637E8;
  sub_15841B0(v21);
  if ( v20 )
    sub_186B220((void *)(v20 - 8));
  result = sub_15841B0(v18);
  v13 = v16;
  if ( v16 )
  {
    v14 = v17;
    v7 = (*(_DWORD *)(v16 + 8))-- == 1;
    if ( v7 )
      return sub_15D7BC0(v14, v13);
  }
  return result;
}

