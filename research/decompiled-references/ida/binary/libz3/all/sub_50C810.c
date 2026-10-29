__int64 __fastcall sub_50C810(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v5; // r13
  int v6; // eax
  void *v7; // r15
  int v8; // eax
  int v9; // eax
  void *v10; // r15
  int v11; // eax
  __int64 v12; // rax
  void *v13; // r15
  void *v14; // rbx
  void *v16; // r13
  char v17; // al
  unsigned __int8 v18; // [rsp+Fh] [rbp-E1h]
  void *v20; // [rsp+28h] [rbp-C8h]
  int v21; // [rsp+30h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+40h] [rbp-B0h]
  __int64 v24; // [rsp+48h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+50h] [rbp-A0h]
  int v26; // [rsp+60h] [rbp-90h] BYREF
  __int64 v27; // [rsp+68h] [rbp-88h] BYREF
  __int64 v28; // [rsp+70h] [rbp-80h]
  __int64 v29; // [rsp+78h] [rbp-78h] BYREF
  __int64 v30; // [rsp+80h] [rbp-70h]
  int v31; // [rsp+90h] [rbp-60h]
  int v32; // [rsp+98h] [rbp-58h] BYREF
  char v33; // [rsp+9Ch] [rbp-54h]
  __int64 v34; // [rsp+A0h] [rbp-50h]
  int v35; // [rsp+A8h] [rbp-48h] BYREF
  char v36; // [rsp+ACh] [rbp-44h]
  __int64 v37; // [rsp+B0h] [rbp-40h]

  v5 = *(_BYTE *)(a3 + 88);
  v18 = *(_BYTE *)(a3 + 89);
  v6 = *(_DWORD *)(a3 + 8);
  v22 = 0;
  v7 = qword_1C7F2C0;
  v21 = v6;
  v23 = 0;
  v24 = 1;
  v25 = 0;
  if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v22, a3 + 16);
  else
    LODWORD(v22) = *(_DWORD *)(a3 + 16);
  if ( (*(_BYTE *)(a3 + 36) & 1) != 0 )
  {
    sub_182C690(v7, &v24, a3 + 32);
  }
  else
  {
    v8 = *(_DWORD *)(a3 + 32);
    BYTE4(v24) &= ~1u;
    LODWORD(v24) = v8;
  }
  v9 = *(_DWORD *)(a3 + 48);
  v28 = 0;
  v27 = 0;
  v10 = qword_1C7F2C0;
  v26 = v9;
  v29 = 1;
  v30 = 0;
  if ( (*(_BYTE *)(a3 + 60) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v27, a3 + 56);
  else
    LODWORD(v27) = *(_DWORD *)(a3 + 56);
  if ( (*(_BYTE *)(a3 + 76) & 1) != 0 )
  {
    sub_182C690(v10, &v29, a3 + 72);
  }
  else
  {
    v11 = *(_DWORD *)(a3 + 72);
    BYTE4(v29) &= ~1u;
    LODWORD(v29) = v11;
  }
  if ( (unsigned __int8)sub_B286B0(a4 + 8, &v21) )
    goto LABEL_19;
  if ( !(unsigned __int8)sub_B28610(&v21, a4 + 8) || !v5 )
    goto LABEL_11;
  if ( !*(_BYTE *)(a4 + 88) )
  {
LABEL_19:
    v31 = 0;
    v21 = 0;
    v16 = qword_1C7F2C0;
    v32 = v22;
    LODWORD(v22) = 0;
    v34 = v23;
    v23 = 0;
    v33 = v33 & 0xFC | BYTE4(v22) & 3;
    BYTE4(v22) &= 0xFCu;
    v35 = v24;
    LODWORD(v24) = 1;
    v37 = v25;
    v25 = 0;
    v17 = v36 & 0xFC | BYTE4(v24) & 3;
    BYTE4(v24) &= 0xFCu;
    v36 = v17;
    sub_182CBA0(qword_1C7F2C0, &v32);
    sub_182CBA0(v16, &v35);
  }
  v5 = 1;
LABEL_11:
  if ( (unsigned __int8)sub_B286B0(&v26, a4 + 48) )
    goto LABEL_21;
  if ( !(unsigned __int8)sub_B28610(a4 + 48, &v26) )
  {
    v12 = v18;
    goto LABEL_16;
  }
  if ( v18 )
    goto LABEL_22;
  if ( *(_BYTE *)(a4 + 89) )
  {
LABEL_21:
    v31 = 2;
    v26 = 2;
    v32 = v27;
    LODWORD(v27) = 0;
    v34 = v28;
    v28 = 0;
    v33 = v33 & 0xFC | BYTE4(v27) & 3;
    BYTE4(v27) &= 0xFCu;
    v35 = v29;
    LODWORD(v29) = 1;
    v37 = v30;
    v30 = 0;
    v36 = v36 & 0xFC | BYTE4(v29) & 3;
    BYTE4(v29) &= 0xFCu;
    v20 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v32);
    sub_182CBA0(v20, &v35);
LABEL_22:
    v12 = 1;
    goto LABEL_16;
  }
  v12 = 0;
LABEL_16:
  sub_B28930(a1, a2 + 40, (int)&v21, v5, 0, (int)&v26, (void *)v12, 0);
  v13 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v27);
  sub_182CBA0(v13, &v29);
  v14 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v22);
  sub_182CBA0(v14, &v24);
  return a1;
}

