_QWORD *__fastcall sub_849FD0(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rbx
  int v6; // r9d
  __int64 v7; // r8
  int v8; // ecx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdi
  bool v12; // zf
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rsi
  __int64 v23; // rdi
  int v24; // [rsp+0h] [rbp-288h]
  __int64 *v25; // [rsp+8h] [rbp-280h]
  int v26[2]; // [rsp+10h] [rbp-278h] BYREF
  __int64 v27; // [rsp+18h] [rbp-270h]
  int v28[2]; // [rsp+20h] [rbp-268h] BYREF
  int v29; // [rsp+28h] [rbp-260h]
  __int64 v30; // [rsp+30h] [rbp-258h]
  void *v31; // [rsp+38h] [rbp-250h]
  _BYTE *v32; // [rsp+B0h] [rbp-1D8h]
  int v33; // [rsp+B8h] [rbp-1D0h]
  __int64 v34; // [rsp+C0h] [rbp-1C8h]
  _QWORD v35[19]; // [rsp+C8h] [rbp-1C0h] BYREF
  int v36; // [rsp+160h] [rbp-128h]
  __int64 v37[18]; // [rsp+168h] [rbp-120h] BYREF
  int v38; // [rsp+1F8h] [rbp-90h]
  __int64 v39; // [rsp+200h] [rbp-88h]
  __int64 v40; // [rsp+208h] [rbp-80h]
  __int64 v41; // [rsp+210h] [rbp-78h]
  __int64 v42; // [rsp+218h] [rbp-70h]
  __int64 v43; // [rsp+220h] [rbp-68h]
  __int64 v44; // [rsp+228h] [rbp-60h]
  __int64 v45; // [rsp+230h] [rbp-58h]
  _BYTE v46[80]; // [rsp+238h] [rbp-50h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  sub_1584DD0(v28, v4, 0);
  *(_QWORD *)v28 = &off_1C4CA60;
  v32 = v46;
  v33 = 0;
  v34 = 0;
  sub_1584DD0(v35, v4, 0);
  v35[18] = 0;
  v36 = 0;
  v35[0] = &off_1C61DB8;
  v25 = v37;
  sub_1584DD0(v37, v4, 0);
  v38 = 0;
  v39 = 0;
  v40 = v4;
  v37[0] = (__int64)&off_1C61DE0;
  v41 = 0;
  v42 = v4;
  v43 = 0;
  v44 = v4;
  v45 = 0;
  *(_QWORD *)v28 = &off_1C4CA80;
  v46[8] = 1;
  v5 = sub_8493F0(a1, a2);
  if ( (unsigned __int8)sub_1373520(*(_QWORD *)(a1 + 176), *(_QWORD *)(a2 + 24), v5 + 3, 1) )
  {
    v7 = v5[1];
    if ( v7 )
      v8 = *(_DWORD *)(v7 - 4);
    else
      v8 = 0;
    sub_157BE40((int)v26, (int)v28, v5[3], v8, v7, v6, v24, (__int64)v37, v26[0], v27, v28[0], v29, v30, v31);
    v10 = *(_QWORD *)v26;
    *(_QWORD *)v26 = v5[3];
    v9 = *(_QWORD *)v26;
    v5[3] = v10;
    if ( v9 )
    {
      v11 = v27;
      v12 = (*(_DWORD *)(v9 + 8))-- == 1;
      if ( v12 )
        sub_15D7BC0(v11, v9);
    }
    if ( *(_WORD *)(a2 + 4) == 2 && !*(_DWORD *)(a2 + 16) )
    {
      v20 = sub_15EC2C0(*(_QWORD *)(a1 + 16), v5[3]);
      v21 = v20;
      if ( v20 )
        ++*(_DWORD *)(v20 + 8);
      v22 = v5[3];
      if ( v22 )
      {
        v23 = v5[4];
        v12 = (*(_DWORD *)(v22 + 8))-- == 1;
        if ( v12 )
          sub_15D7BC0(v23, v22);
      }
      v5[3] = v21;
    }
  }
  else
  {
    v5 = nullptr;
  }
  *(_QWORD *)v28 = &off_1C4CA60;
  if ( v45 )
    sub_186B220((void *)(v45 - 8));
  v13 = v43;
  if ( v43 )
  {
    v14 = v44;
    v12 = (*(_DWORD *)(v43 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v14, v13);
  }
  v15 = v41;
  if ( v41 )
  {
    v16 = v42;
    v12 = (*(_DWORD *)(v41 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v16, v15);
  }
  v17 = v39;
  if ( v39 )
  {
    v18 = v40;
    v12 = (*(_DWORD *)(v39 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v18, v17);
  }
  v37[0] = (__int64)&qword_1C637E8;
  sub_15841B0(v25);
  v35[0] = &qword_1C637E8;
  sub_15841B0(v35);
  if ( v34 )
    sub_186B220((void *)(v34 - 8));
  sub_15841B0(v28);
  return v5;
}

