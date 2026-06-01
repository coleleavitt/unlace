__int64 __fastcall sub_9F65B0(__int64 a1, __int64 a2, unsigned int a3, _BYTE *a4)
{
  int *v6; // rbx
  void *v7; // r15
  int v8; // eax
  void *v9; // r15
  int v10; // eax
  void *v11; // rdi
  int v12; // eax
  void *v13; // rbx
  void *v14; // rbx
  void *v15; // rbx
  void *v17; // [rsp+8h] [rbp-C0h]
  int v18; // [rsp+10h] [rbp-B8h] BYREF
  char v19; // [rsp+14h] [rbp-B4h]
  __int64 v20; // [rsp+18h] [rbp-B0h]
  int v21; // [rsp+20h] [rbp-A8h] BYREF
  char v22; // [rsp+24h] [rbp-A4h]
  __int64 v23; // [rsp+28h] [rbp-A0h]
  int v24; // [rsp+30h] [rbp-98h] BYREF
  char v25; // [rsp+34h] [rbp-94h]
  __int64 v26; // [rsp+38h] [rbp-90h]
  int v27; // [rsp+40h] [rbp-88h] BYREF
  char v28; // [rsp+44h] [rbp-84h]
  __int64 v29; // [rsp+48h] [rbp-80h]
  int v30; // [rsp+50h] [rbp-78h] BYREF
  char v31; // [rsp+54h] [rbp-74h]
  __int64 v32; // [rsp+58h] [rbp-70h]
  int v33; // [rsp+60h] [rbp-68h] BYREF
  char v34; // [rsp+64h] [rbp-64h]
  __int64 v35; // [rsp+68h] [rbp-60h]
  int v36[4]; // [rsp+70h] [rbp-58h] BYREF
  _BYTE v37[72]; // [rsp+80h] [rbp-48h] BYREF

  v6 = sub_9AD4F0(a2, a3);
  if ( v6[16] && !*a4 )
  {
    sub_9B83E0(a2);
    sub_9F5AB0(a2);
    *a4 = 1;
    *(_BYTE *)(a2 + 1536) = 1;
  }
  v31 &= 0xFCu;
  v34 &= 0xFCu;
  v30 = 0;
  v7 = qword_1C7F2C0;
  v32 = 0;
  v33 = 1;
  v35 = 0;
  if ( (v6[17] & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v30, v6 + 16);
  else
    v30 = v6[16];
  if ( (v6[21] & 1) != 0 )
  {
    sub_182C690(v7, &v33, v6 + 20);
  }
  else
  {
    v8 = v6[20];
    v34 &= ~1u;
    v33 = v8;
  }
  v25 &= 0xFCu;
  v9 = qword_1C7F2C0;
  v28 &= 0xFCu;
  v24 = 0;
  v26 = 0;
  v27 = 1;
  v29 = 0;
  if ( (*(_BYTE *)(a2 + 1604) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v24, a2 + 1600);
  else
    v24 = *(_DWORD *)(a2 + 1600);
  if ( (*(_BYTE *)(a2 + 1620) & 1) != 0 )
  {
    sub_182C690(v9, &v27, a2 + 1616);
  }
  else
  {
    v10 = *(_DWORD *)(a2 + 1616);
    v28 &= ~1u;
    v27 = v10;
  }
  sub_3EBE30((__int64)v36, (__int64)&v24, (__int64)&v30);
  v19 &= 0xFCu;
  v11 = qword_1C7F2C0;
  v22 &= 0xFCu;
  v18 = 0;
  v20 = 0;
  v21 = 1;
  v23 = 0;
  if ( (v6[9] & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v18, v6 + 8);
  else
    v18 = v6[8];
  if ( (v6[13] & 1) != 0 )
  {
    sub_182C690(v11, &v21, v6 + 12);
  }
  else
  {
    v12 = v6[12];
    v22 &= ~1u;
    v21 = v12;
  }
  sub_27B340(a1, (__int64)&v18, v36);
  v17 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v18);
  sub_182CBA0(v17, &v21);
  v13 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v36);
  sub_182CBA0(v13, v37);
  v14 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v24);
  sub_182CBA0(v14, &v27);
  v15 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v30);
  sub_182CBA0(v15, &v33);
  return a1;
}

