__int64 __fastcall sub_9F14D0(__int64 a1, __int64 a2, unsigned int a3, _BYTE *a4)
{
  __int64 v6; // rbp
  void *v7; // rdi
  void *v8; // r15
  int v9; // eax
  void *v10; // rdi
  int v11; // eax
  void *v12; // rbp
  void *v13; // rbx
  void *v14; // rbx
  void *v16; // [rsp+8h] [rbp-C0h]
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

  v6 = sub_999800(a2, a3);
  if ( qword_1C7F2A0 && !*a4 )
  {
    sub_9B8020(a2);
    sub_9F0940(a2);
    *a4 = 1;
    *(_BYTE *)(a2 + 1344) = 1;
  }
  v31 &= 0xFCu;
  v34 &= 0xFCu;
  v30 = 0;
  v7 = qword_1C7F2C0;
  v32 = 0;
  v33 = 1;
  v35 = 0;
  if ( (*(_BYTE *)(&qword_1C7F2A0 + 1) & 1) != 0 )
  {
    v17 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, &v30, &qword_1C7F2A0);
    v7 = v17;
  }
  else
  {
    v30 = qword_1C7F2A0;
  }
  if ( (qword_1C7F2B0 & 0x100000000LL) != 0 )
  {
    sub_182C690(v7, &v33, &qword_1C7F2B0);
  }
  else
  {
    v34 &= ~1u;
    v33 = qword_1C7F2B0;
  }
  v25 &= 0xFCu;
  v8 = qword_1C7F2C0;
  v28 &= 0xFCu;
  v24 = 0;
  v26 = 0;
  v27 = 1;
  v29 = 0;
  if ( (*(_BYTE *)(a2 + 1412) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v24, a2 + 1408);
  else
    v24 = *(_DWORD *)(a2 + 1408);
  if ( (*(_BYTE *)(a2 + 1428) & 1) != 0 )
  {
    sub_182C690(v8, &v27, a2 + 1424);
  }
  else
  {
    v9 = *(_DWORD *)(a2 + 1424);
    v28 &= ~1u;
    v27 = v9;
  }
  sub_3EBE30((__int64)v36, (__int64)&v24, (__int64)&v30);
  v19 &= 0xFCu;
  v10 = qword_1C7F2C0;
  v22 &= 0xFCu;
  v18 = 0;
  v20 = 0;
  v21 = 1;
  v23 = 0;
  if ( (*(_BYTE *)(v6 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v18, v6);
  else
    v18 = *(_DWORD *)v6;
  if ( (*(_BYTE *)(v6 + 20) & 1) != 0 )
  {
    sub_182C690(v10, &v21, v6 + 16);
  }
  else
  {
    v11 = *(_DWORD *)(v6 + 16);
    v22 &= ~1u;
    v21 = v11;
  }
  sub_27B340(a1, (__int64)&v18, v36);
  v16 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v18);
  sub_182CBA0(v16, &v21);
  v12 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v36);
  sub_182CBA0(v12, v37);
  v13 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v24);
  sub_182CBA0(v13, &v27);
  v14 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v30);
  sub_182CBA0(v14, &v33);
  return a1;
}

