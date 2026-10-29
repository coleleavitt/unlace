__int64 __fastcall sub_7542A0(__int64 a1, __int64 a2, unsigned int a3)
{
  void *v4; // r15
  int v5; // eax
  void *v6; // rdi
  void *v7; // rdi
  int v8; // eax
  void *v9; // rbp
  void *v11; // [rsp+8h] [rbp-80h]
  _QWORD v12[2]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v13[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v15[9]; // [rsp+40h] [rbp-48h] BYREF

  v12[0] = a3;
  v12[1] = 0;
  v13[0] = 1;
  v13[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v13);
  BYTE4(v13[0]) &= ~1u;
  v4 = qword_1C7F2C0;
  LODWORD(v13[0]) = 1;
  v14[0] = 0;
  v14[1] = 0;
  v15[0] = 1;
  v15[1] = 0;
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v14, a2);
  else
    LODWORD(v14[0]) = *(_DWORD *)a2;
  if ( (*(_BYTE *)(a2 + 20) & 1) != 0 )
  {
    sub_182C690(v4, v15, a2 + 16);
  }
  else
  {
    v5 = *(_DWORD *)(a2 + 16);
    BYTE4(v15[0]) &= ~1u;
    LODWORD(v15[0]) = v5;
  }
  v6 = qword_1C7F2C0;
  if ( (v15[0] & 0x100000000LL) != 0 || LODWORD(v15[0]) != 1 || (v13[0] & 0x100000000LL) != 0 || LODWORD(v13[0]) != 1 )
  {
    sub_1852000(qword_1C7F2C0, v14, v12);
  }
  else
  {
    sub_1832A70(qword_1C7F2C0, v14, v12);
    sub_182CBA0(v6, v15);
    BYTE4(v15[0]) &= ~1u;
    LODWORD(v15[0]) = 1;
  }
  *(_BYTE *)(a1 + 4) &= 0xFCu;
  v7 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 20) &= 0xFCu;
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  if ( (v14[0] & 0x100000000LL) != 0 )
    sub_182C690(v7, a1, v14);
  else
    *(_DWORD *)a1 = v14[0];
  if ( (v15[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v7, a1 + 16, v15);
  }
  else
  {
    v8 = v15[0];
    *(_BYTE *)(a1 + 20) &= ~1u;
    *(_DWORD *)(a1 + 16) = v8;
  }
  v11 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v14);
  sub_182CBA0(v11, v15);
  v9 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v12);
  sub_182CBA0(v9, v13);
  return a1;
}

