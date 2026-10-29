__int64 (__fastcall **__fastcall sub_4B50A0(__int64 a1, __int64 a2, __int64 a3))()
{
  __int64 v4; // r13
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 *v12; // rbx
  unsigned __int64 v13; // rbp
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v17; // [rsp+10h] [rbp-388h] BYREF
  _BYTE v18[16]; // [rsp+18h] [rbp-380h] BYREF
  __int64 (__fastcall **v19)(); // [rsp+28h] [rbp-370h]
  __int64 v20; // [rsp+38h] [rbp-360h]
  void *v21; // [rsp+40h] [rbp-358h]
  __int64 v22; // [rsp+50h] [rbp-348h]
  void *v23; // [rsp+58h] [rbp-340h]
  __int64 (__fastcall **v24)(); // [rsp+60h] [rbp-338h]
  __int64 v25; // [rsp+70h] [rbp-328h]
  void *v26; // [rsp+78h] [rbp-320h]
  __int64 v27; // [rsp+88h] [rbp-310h]
  void *v28; // [rsp+90h] [rbp-308h]
  __int64 v29; // [rsp+98h] [rbp-300h]
  __int64 *v30; // [rsp+A0h] [rbp-2F8h]
  __int64 v31; // [rsp+A8h] [rbp-2F0h]
  void *v32; // [rsp+B0h] [rbp-2E8h]
  __int64 v33; // [rsp+B8h] [rbp-2E0h]
  _BYTE v34[128]; // [rsp+C0h] [rbp-2D8h] BYREF
  _QWORD v35[19]; // [rsp+140h] [rbp-258h] BYREF
  int v36; // [rsp+1D8h] [rbp-1C0h]
  __int64 v37; // [rsp+1E0h] [rbp-1B8h]
  _QWORD v38[19]; // [rsp+1E8h] [rbp-1B0h] BYREF
  int v39; // [rsp+280h] [rbp-118h]
  _QWORD v40[18]; // [rsp+288h] [rbp-110h] BYREF
  int v41; // [rsp+318h] [rbp-80h]
  __int64 v42; // [rsp+320h] [rbp-78h]
  __int64 v43; // [rsp+328h] [rbp-70h]
  __int64 v44; // [rsp+330h] [rbp-68h] BYREF
  __int64 v45; // [rsp+338h] [rbp-60h]
  __int64 v46; // [rsp+340h] [rbp-58h]
  __int64 v47; // [rsp+348h] [rbp-50h]
  __int64 v48; // [rsp+350h] [rbp-48h]

  v17 = *(_QWORD *)(a2 + 8);
  sub_16669D0(v18, v17);
  v4 = *(_QWORD *)(a2 + 8);
  v31 = a3;
  v20 = 0;
  v19 = &off_1C62200;
  v24 = &off_1C62200;
  v21 = nullptr;
  v29 = v17;
  v22 = 0;
  v23 = nullptr;
  v25 = 0;
  v26 = nullptr;
  v27 = 0;
  v28 = nullptr;
  v30 = nullptr;
  v32 = v34;
  v33 = 0x1000000000LL;
  sub_1584DD0(v35, v4, 0);
  v36 = 0;
  v35[18] = &v17;
  v35[0] = &off_1C4ECD0;
  v37 = 0;
  sub_1584DD0(v38, v4, 0);
  v38[18] = 0;
  v39 = 0;
  v38[0] = &off_1C61DB8;
  sub_1584DD0(v40, v4, 0);
  v41 = 0;
  v42 = 0;
  v40[0] = &off_1C61DE0;
  v43 = v4;
  v44 = 0;
  v45 = v4;
  v46 = 0;
  v47 = v4;
  v48 = 0;
  sub_4BFFC0(v35, a1, a2, &v44);
  v35[0] = &off_1C4ECD0;
  if ( v48 )
    sub_186B220((void *)(v48 - 8));
  v5 = v46;
  if ( v46 )
  {
    v6 = v47;
    v7 = (*(_DWORD *)(v46 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v6, v5);
  }
  v8 = v44;
  if ( v44 )
  {
    v9 = v45;
    v7 = (*(_DWORD *)(v44 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v9, v8);
  }
  v10 = v42;
  if ( v42 )
  {
    v11 = v43;
    v7 = (*(_DWORD *)(v42 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v11, v10);
  }
  v40[0] = &qword_1C637E8;
  sub_15841B0(v40);
  v38[0] = &qword_1C637E8;
  sub_15841B0(v38);
  if ( v37 )
    sub_186B220((void *)(v37 - 8));
  sub_15841B0(v35);
  if ( v32 && v32 != v34 )
    sub_186B220(v32);
  v12 = v30;
  if ( v30 )
  {
    v13 = (unsigned __int64)&v30[*((unsigned int *)v30 - 1)];
    if ( (unsigned __int64)v30 >= v13 )
      goto LABEL_25;
    do
    {
      while ( 1 )
      {
        v14 = *v12;
        if ( *v12 )
        {
          v15 = v29;
          v7 = (*(_DWORD *)(v14 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( (unsigned __int64)++v12 >= v13 )
          goto LABEL_24;
      }
      sub_15D7BC0(v15, v14);
      ++v12;
    }
    while ( (unsigned __int64)v12 < v13 );
LABEL_24:
    v12 = v30;
    if ( v30 )
LABEL_25:
      sub_186B220(v12 - 1);
  }
  v24 = &off_1C62200;
  if ( v28 )
    sub_186B220(v28);
  if ( v26 )
    sub_186B220(v26);
  result = &off_1C62200;
  v19 = &off_1C62200;
  if ( v23 )
    result = (__int64 (__fastcall **)())sub_186B220(v23);
  if ( v21 )
    return (__int64 (__fastcall **)())sub_186B220(v21);
  return result;
}

