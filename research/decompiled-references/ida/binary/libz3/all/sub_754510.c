__int64 __fastcall sub_754510(__int64 a1, __int64 a2)
{
  void *v3; // rbp
  void *v4; // rdi
  void *v5; // rdi
  int v6; // edx
  void *v7; // rbp
  void *v8; // rbx
  void *v10; // [rsp+8h] [rbp-A0h]
  int v11; // [rsp+10h] [rbp-98h] BYREF
  char v12; // [rsp+14h] [rbp-94h]
  int v13; // [rsp+20h] [rbp-88h] BYREF
  char v14; // [rsp+24h] [rbp-84h]
  _QWORD v15[2]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v17[2]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v18[9]; // [rsp+60h] [rbp-48h] BYREF

  sub_17F6290(&v11, a2);
  v15[0] = 1;
  v15[1] = 0;
  v16[0] = 1;
  v16[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v16);
  BYTE4(v16[0]) &= ~1u;
  v3 = qword_1C7F2C0;
  LODWORD(v16[0]) = 1;
  v17[0] = 0;
  v17[1] = 0;
  v18[0] = 1;
  v18[1] = 0;
  if ( (v12 & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v17, &v11);
  else
    LODWORD(v17[0]) = v11;
  if ( (v14 & 1) != 0 )
  {
    sub_182C690(v3, v18, &v13);
  }
  else
  {
    BYTE4(v18[0]) &= ~1u;
    LODWORD(v18[0]) = v13;
  }
  v4 = qword_1C7F2C0;
  if ( (v18[0] & 0x100000000LL) != 0 || LODWORD(v18[0]) != 1 || (v16[0] & 0x100000000LL) != 0 || LODWORD(v16[0]) != 1 )
  {
    sub_1852000(qword_1C7F2C0, v17, v15);
  }
  else
  {
    sub_1832A70(qword_1C7F2C0, v17, v15);
    sub_182CBA0(v4, v18);
    BYTE4(v18[0]) &= ~1u;
    LODWORD(v18[0]) = 1;
  }
  *(_BYTE *)(a1 + 4) &= 0xFCu;
  v5 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 20) &= 0xFCu;
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  if ( (v17[0] & 0x100000000LL) != 0 )
    sub_182C690(v5, a1, v17);
  else
    *(_DWORD *)a1 = v17[0];
  if ( (v18[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v5, a1 + 16, v18);
  }
  else
  {
    v6 = v18[0];
    *(_BYTE *)(a1 + 20) &= ~1u;
    *(_DWORD *)(a1 + 16) = v6;
  }
  v10 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v17);
  sub_182CBA0(v10, v18);
  v7 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v15);
  sub_182CBA0(v7, v16);
  v8 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v11);
  sub_182CBA0(v8, &v13);
  return a1;
}

