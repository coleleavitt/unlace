__int64 __fastcall sub_7DAE00(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v7; // r9d
  __int64 v8; // r8
  int v9; // ecx
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdi
  int v18[2]; // [rsp+0h] [rbp-268h] BYREF
  __int64 v19; // [rsp+8h] [rbp-260h]
  int v20; // [rsp+10h] [rbp-258h]
  int v21; // [rsp+18h] [rbp-250h]
  int v22; // [rsp+20h] [rbp-248h]
  int v23; // [rsp+28h] [rbp-240h]
  __int64 v24; // [rsp+30h] [rbp-238h]
  void *v25; // [rsp+38h] [rbp-230h]
  __int64 v26; // [rsp+A0h] [rbp-1C8h]
  int *v27; // [rsp+A8h] [rbp-1C0h] BYREF
  int *v28; // [rsp+148h] [rbp-120h] BYREF
  __int64 v29; // [rsp+1E0h] [rbp-88h]
  __int64 v30; // [rsp+1E8h] [rbp-80h]
  __int64 v31; // [rsp+1F0h] [rbp-78h]
  __int64 v32; // [rsp+1F8h] [rbp-70h]
  __int64 v33; // [rsp+200h] [rbp-68h]
  __int64 v34; // [rsp+208h] [rbp-60h]
  __int64 v35; // [rsp+210h] [rbp-58h]
  _BYTE v36[80]; // [rsp+218h] [rbp-50h] BYREF

  sub_633760((__int64)v18, *(_QWORD *)(a2 + 72), 0, (__int64)v36);
  v8 = *(_QWORD *)(a3 + 8);
  *(_QWORD *)v18 = &off_1C4CA80;
  v36[8] = 1;
  if ( v8 )
    v9 = *(_DWORD *)(v8 - 4);
  else
    v9 = 0;
  sub_157BE40(a1, (int)v18, a4, v9, v8, v7, v18[0], v19, v20, v21, v22, v23, v24, v25);
  sub_14B9B80(*(_QWORD *)(a2 + 80) + 2192LL, a1);
  *(_QWORD *)v18 = &off_1C4CA60;
  if ( v35 )
    sub_186B220((void *)(v35 - 8));
  v10 = v33;
  if ( v33 )
  {
    v11 = v34;
    v12 = (*(_DWORD *)(v33 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v11, v10);
  }
  v13 = v31;
  if ( v31 )
  {
    v14 = v32;
    v12 = (*(_DWORD *)(v31 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v14, v13);
  }
  v15 = v29;
  if ( v29 )
  {
    v16 = v30;
    v12 = (*(_DWORD *)(v29 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v16, v15);
  }
  v28 = &qword_1C637E8;
  sub_15841B0(&v28);
  v27 = &qword_1C637E8;
  sub_15841B0(&v27);
  if ( v26 )
    sub_186B220((void *)(v26 - 8));
  sub_15841B0(v18);
  return a1;
}

