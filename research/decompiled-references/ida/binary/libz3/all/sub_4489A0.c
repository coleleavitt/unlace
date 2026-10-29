__int64 __fastcall sub_4489A0(_QWORD *a1, int a2, __int64 *a3)
{
  int v4; // r9d
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdi
  bool v10; // zf
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v18; // [rsp+0h] [rbp-268h] BYREF
  __int64 v19; // [rsp+8h] [rbp-260h]
  int v20[2]; // [rsp+10h] [rbp-258h] BYREF
  int v21; // [rsp+18h] [rbp-250h]
  int v22; // [rsp+20h] [rbp-248h]
  int v23; // [rsp+28h] [rbp-240h]
  __int64 v24; // [rsp+30h] [rbp-238h]
  void *v25; // [rsp+38h] [rbp-230h]
  __int64 v26; // [rsp+B0h] [rbp-1B8h]
  int *v27; // [rsp+B8h] [rbp-1B0h] BYREF
  int *v28; // [rsp+158h] [rbp-110h] BYREF
  __int64 v29; // [rsp+1F0h] [rbp-78h]
  __int64 v30; // [rsp+1F8h] [rbp-70h]
  __int64 v31; // [rsp+200h] [rbp-68h]
  __int64 v32; // [rsp+208h] [rbp-60h]
  __int64 v33; // [rsp+210h] [rbp-58h]
  __int64 v34; // [rsp+218h] [rbp-50h]
  __int64 v35; // [rsp+220h] [rbp-48h]
  _BYTE v36[64]; // [rsp+228h] [rbp-40h] BYREF

  sub_633760(v20, a1[5], 0, v36);
  v5 = a1[16];
  *(_QWORD *)v20 = &off_1C4CA80;
  v36[8] = 0;
  if ( v5 )
    v6 = *(_DWORD *)(v5 - 4);
  else
    v6 = 0;
  sub_157BE40((int)&v18, (int)v20, a2, v6, a1[15], v4, v18, v19, v20[0], v21, v22, v23, v24, v25);
  v8 = v18;
  v18 = *a3;
  v7 = v18;
  *a3 = v8;
  if ( v7 )
  {
    v9 = v19;
    v10 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v9, v7);
  }
  *(_QWORD *)v20 = &off_1C4CA60;
  if ( v35 )
    sub_186B220((void *)(v35 - 8));
  v11 = v33;
  if ( v33 )
  {
    v12 = v34;
    v10 = (*(_DWORD *)(v33 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v12, v11);
  }
  v13 = v31;
  if ( v31 )
  {
    v14 = v32;
    v10 = (*(_DWORD *)(v31 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v14, v13);
  }
  v15 = v29;
  if ( v29 )
  {
    v16 = v30;
    v10 = (*(_DWORD *)(v29 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v16, v15);
  }
  v28 = &qword_1C637E8;
  sub_15841B0(&v28);
  v27 = &qword_1C637E8;
  sub_15841B0(&v27);
  if ( v26 )
    sub_186B220((void *)(v26 - 8));
  return sub_15841B0(v20);
}

