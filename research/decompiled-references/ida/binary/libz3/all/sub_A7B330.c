__int64 __fastcall sub_A7B330(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // r12
  __int64 v5; // rbp
  unsigned __int64 v6; // r12
  void *v7; // r13
  int v8; // eax
  void *v9; // r13
  int v10; // eax
  void *v11; // r12
  void *v12; // r12
  void *v13; // r13
  int v14; // eax
  void *v15; // r13
  int v16; // eax
  void *v17; // rdi
  int v18; // eax
  void *v19; // r12
  void *v20; // r12
  void *v21; // r12
  void *v22; // rbp
  void *v24; // [rsp+8h] [rbp-F0h]
  _QWORD v25[2]; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD v26[2]; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v27[2]; // [rsp+40h] [rbp-B8h] BYREF
  _QWORD v28[2]; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD v29[2]; // [rsp+60h] [rbp-98h] BYREF
  _QWORD v30[2]; // [rsp+70h] [rbp-88h] BYREF
  _QWORD v31[2]; // [rsp+80h] [rbp-78h] BYREF
  _QWORD v32[2]; // [rsp+90h] [rbp-68h] BYREF
  _QWORD v33[2]; // [rsp+A0h] [rbp-58h] BYREF
  _QWORD v34[9]; // [rsp+B0h] [rbp-48h] BYREF

  v3 = 0x3FFFFFFFC0LL;
  v5 = *(_QWORD *)(a2 + 504);
  if ( a3 != -1 )
    v3 = (unsigned __int64)(unsigned int)sub_FF9FB0(v5, a3) << 6;
  v27[0] = 0;
  v27[1] = 0;
  v6 = *(_QWORD *)(sub_FF9B20(v5) + 48) + v3;
  v28[0] = 1;
  v7 = qword_1C7F2C0;
  v28[1] = 0;
  if ( (*(_BYTE *)(v6 + 4) & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, v27, v6);
    if ( (*(_BYTE *)(v6 + 20) & 1) == 0 )
      goto LABEL_5;
  }
  else
  {
    LODWORD(v27[0]) = *(_DWORD *)v6;
    if ( (*(_BYTE *)(v6 + 20) & 1) == 0 )
    {
LABEL_5:
      v8 = *(_DWORD *)(v6 + 16);
      BYTE4(v28[0]) &= ~1u;
      LODWORD(v28[0]) = v8;
      goto LABEL_6;
    }
  }
  sub_182C690(v7, v28, v6 + 16);
LABEL_6:
  v29[0] = 0;
  v9 = qword_1C7F2C0;
  v29[1] = 0;
  v30[0] = 1;
  v30[1] = 0;
  if ( (*(_BYTE *)(v6 + 36) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v29, v6 + 32);
  else
    LODWORD(v29[0]) = *(_DWORD *)(v6 + 32);
  if ( (*(_BYTE *)(v6 + 52) & 1) != 0 )
  {
    sub_182C690(v9, v30, v6 + 48);
  }
  else
  {
    v10 = *(_DWORD *)(v6 + 48);
    BYTE4(v30[0]) &= ~1u;
    LODWORD(v30[0]) = v10;
  }
  v31[0] = 0;
  v11 = qword_1C7F2C0;
  v31[1] = 0;
  v32[0] = 1;
  v32[1] = 0;
  if ( (v27[0] & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, v31, v27);
  else
    LODWORD(v31[0]) = v27[0];
  if ( (v28[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v11, v32, v28);
  }
  else
  {
    BYTE4(v32[0]) &= ~1u;
    LODWORD(v32[0]) = v28[0];
  }
  v33[0] = 0;
  v12 = qword_1C7F2C0;
  v33[1] = 0;
  v34[0] = 1;
  v34[1] = 0;
  if ( (v29[0] & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, v33, v29);
  else
    LODWORD(v33[0]) = v29[0];
  if ( (v30[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v12, v34, v30);
  }
  else
  {
    BYTE4(v34[0]) &= ~1u;
    LODWORD(v34[0]) = v30[0];
  }
  v25[0] = 0;
  v25[1] = 0;
  v26[0] = 1;
  v26[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v26);
  BYTE4(v26[0]) &= ~1u;
  v13 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 4) &= 0xFCu;
  *(_BYTE *)(a1 + 20) &= 0xFCu;
  LODWORD(v26[0]) = 1;
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  if ( (v25[0] & 0x100000000LL) != 0 )
    sub_182C690(v13, a1, v25);
  else
    *(_DWORD *)a1 = v25[0];
  if ( (v26[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v13, a1 + 16, v26);
  }
  else
  {
    v14 = v26[0];
    *(_BYTE *)(a1 + 20) &= ~1u;
    *(_DWORD *)(a1 + 16) = v14;
  }
  *(_BYTE *)(a1 + 36) &= 0xFCu;
  v15 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 52) &= 0xFCu;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 1;
  *(_QWORD *)(a1 + 56) = 0;
  if ( (v31[0] & 0x100000000LL) != 0 )
    sub_182C690(v15, a1 + 32, v31);
  else
    *(_DWORD *)(a1 + 32) = v31[0];
  if ( (v32[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v15, a1 + 48, v32);
  }
  else
  {
    v16 = v32[0];
    *(_BYTE *)(a1 + 52) &= ~1u;
    *(_DWORD *)(a1 + 48) = v16;
  }
  *(_BYTE *)(a1 + 68) &= 0xFCu;
  v17 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 84) &= 0xFCu;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 88) = 0;
  if ( (v33[0] & 0x100000000LL) != 0 )
    sub_182C690(v17, a1 + 64, v33);
  else
    *(_DWORD *)(a1 + 64) = v33[0];
  if ( (v34[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v17, a1 + 80, v34);
  }
  else
  {
    v18 = v34[0];
    *(_BYTE *)(a1 + 84) &= ~1u;
    *(_DWORD *)(a1 + 80) = v18;
  }
  v24 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v25);
  sub_182CBA0(v24, v26);
  v19 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v33);
  sub_182CBA0(v19, v34);
  v20 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v31);
  sub_182CBA0(v20, v32);
  v21 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v29);
  sub_182CBA0(v21, v30);
  v22 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v27);
  sub_182CBA0(v22, v28);
  return a1;
}

