__int64 __fastcall sub_7DBAC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v8; // r9d
  __int64 v9; // r8
  int v10; // ecx
  __int64 v11; // rsi
  __int64 v12; // rdi
  bool v13; // zf
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  int v19[2]; // [rsp+0h] [rbp-268h] BYREF
  __int64 v20; // [rsp+8h] [rbp-260h]
  int v21; // [rsp+10h] [rbp-258h]
  int v22; // [rsp+18h] [rbp-250h]
  int v23; // [rsp+20h] [rbp-248h]
  int v24; // [rsp+28h] [rbp-240h]
  __int64 v25; // [rsp+30h] [rbp-238h]
  void *v26; // [rsp+38h] [rbp-230h]
  __int64 v27; // [rsp+A0h] [rbp-1C8h]
  int *v28; // [rsp+A8h] [rbp-1C0h] BYREF
  int *v29; // [rsp+148h] [rbp-120h] BYREF
  __int64 v30; // [rsp+1E0h] [rbp-88h]
  __int64 v31; // [rsp+1E8h] [rbp-80h]
  __int64 v32; // [rsp+1F0h] [rbp-78h]
  __int64 v33; // [rsp+1F8h] [rbp-70h]
  __int64 v34; // [rsp+200h] [rbp-68h]
  __int64 v35; // [rsp+208h] [rbp-60h]
  __int64 v36; // [rsp+210h] [rbp-58h]
  _BYTE v37[80]; // [rsp+218h] [rbp-50h] BYREF

  sub_633760((__int64)v19, *(_QWORD *)(a2 + 72), 0, (__int64)v37);
  v9 = *(_QWORD *)(a4 + 8);
  *(_QWORD *)v19 = &off_1C4CA80;
  v37[8] = 1;
  if ( v9 )
    v10 = *(_DWORD *)(v9 - 4);
  else
    v10 = 0;
  sub_157BE40(a1, (int)v19, a5, v10, v9, v8, v19[0], v20, v21, v22, v23, v24, v25, v26);
  sub_14B9B80(*(_QWORD *)(a2 + 80) + 2192LL, a1);
  *(_QWORD *)v19 = &off_1C4CA60;
  if ( v36 )
    sub_186B220((void *)(v36 - 8));
  v11 = v34;
  if ( v34 )
  {
    v12 = v35;
    v13 = (*(_DWORD *)(v34 + 8))-- == 1;
    if ( v13 )
      sub_15D7BC0(v12, v11);
  }
  v14 = v32;
  if ( v32 )
  {
    v15 = v33;
    v13 = (*(_DWORD *)(v32 + 8))-- == 1;
    if ( v13 )
      sub_15D7BC0(v15, v14);
  }
  v16 = v30;
  if ( v30 )
  {
    v17 = v31;
    v13 = (*(_DWORD *)(v30 + 8))-- == 1;
    if ( v13 )
      sub_15D7BC0(v17, v16);
  }
  v29 = &qword_1C637E8;
  sub_15841B0(&v29);
  v28 = &qword_1C637E8;
  sub_15841B0(&v28);
  if ( v27 )
    sub_186B220((void *)(v27 - 8));
  sub_15841B0(v19);
  return a1;
}

