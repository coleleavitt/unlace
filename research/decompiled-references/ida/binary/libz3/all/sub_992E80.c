__int64 __fastcall sub_992E80(__int64 a1, __int64 a2, __int64 a3)
{
  void *v5; // r15
  int v6; // eax
  void *v7; // rdi
  int v8; // eax
  __int64 v9; // rdx
  void *v10; // rbx
  void *v11; // rbx
  void *v13; // [rsp+8h] [rbp-80h]
  void *v14; // [rsp+8h] [rbp-80h]
  _QWORD v15[2]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v16[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v17[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v18[9]; // [rsp+40h] [rbp-48h] BYREF

  v15[0] = 0;
  v15[1] = 0;
  v5 = qword_1C7F2C0;
  v16[0] = 1;
  v16[1] = 0;
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v15, a2);
  else
    LODWORD(v15[0]) = *(_DWORD *)a2;
  if ( (*(_BYTE *)(a2 + 20) & 1) != 0 )
  {
    sub_182C690(v5, v16, a2 + 16);
  }
  else
  {
    v6 = *(_DWORD *)(a2 + 16);
    BYTE4(v16[0]) &= ~1u;
    LODWORD(v16[0]) = v6;
  }
  v17[0] = 0;
  v7 = qword_1C7F2C0;
  v17[1] = 0;
  v18[0] = 1;
  v18[1] = 0;
  if ( (*(_BYTE *)(a2 + 36) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v17, a2 + 32);
  else
    LODWORD(v17[0]) = *(_DWORD *)(a2 + 32);
  if ( (*(_BYTE *)(a2 + 52) & 1) != 0 )
  {
    sub_182C690(v7, v18, a2 + 48);
  }
  else
  {
    v8 = *(_DWORD *)(a2 + 48);
    BYTE4(v18[0]) &= ~1u;
    LODWORD(v18[0]) = v8;
  }
  if ( (v16[0] & 0x100000000LL) != 0
    || LODWORD(v16[0]) != 1
    || (*(_BYTE *)(a3 + 20) & 1) != 0
    || *(_DWORD *)(a3 + 16) != 1 )
  {
    sub_1852000(qword_1C7F2C0, v15, a3);
  }
  else
  {
    v14 = qword_1C7F2C0;
    sub_1832A70(qword_1C7F2C0, v15, a3);
    sub_182CBA0(v14, v16);
    BYTE4(v16[0]) &= ~1u;
    LODWORD(v16[0]) = 1;
  }
  v9 = a3 + 32;
  if ( (v18[0] & 0x100000000LL) != 0
    || LODWORD(v18[0]) != 1
    || (*(_BYTE *)(a3 + 52) & 1) != 0
    || *(_DWORD *)(a3 + 48) != 1 )
  {
    sub_1852000(qword_1C7F2C0, v17, v9);
  }
  else
  {
    v13 = qword_1C7F2C0;
    sub_1832A70(qword_1C7F2C0, v17, v9);
    sub_182CBA0(v13, v18);
    BYTE4(v18[0]) &= ~1u;
    LODWORD(v18[0]) = 1;
  }
  sub_91F480(a1, (__int64)v15);
  v10 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v17);
  sub_182CBA0(v10, v18);
  v11 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v15);
  sub_182CBA0(v11, v16);
  return a1;
}

