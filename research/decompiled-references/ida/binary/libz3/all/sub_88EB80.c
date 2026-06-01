__int64 __fastcall sub_88EB80(__int64 a1, __int64 a2, unsigned int a3)
{
  void *v3; // r14
  int v4; // eax
  void *v5; // r14
  void *v6; // r14
  int v7; // eax
  void *v8; // r14
  void *v9; // rbp
  _QWORD v11[2]; // [rsp+10h] [rbp-88h] BYREF
  _QWORD v12[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v13[2]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v15[9]; // [rsp+50h] [rbp-48h] BYREF

  v12[1] = 0;
  v13[0] = 1;
  v13[1] = 0;
  v12[0] = a3;
  sub_182CBA0(qword_1C7F2C0, v13);
  BYTE4(v13[0]) &= ~1u;
  v3 = qword_1C7F2C0;
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
    sub_182C690(v3, v15, a2 + 16);
  }
  else
  {
    v4 = *(_DWORD *)(a2 + 16);
    BYTE4(v15[0]) &= ~1u;
    LODWORD(v15[0]) = v4;
  }
  v5 = qword_1C7F2C0;
  if ( LODWORD(v14[0]) && (LODWORD(v12[0]) != 1 || (v13[0] & 0x100000000LL) != 0 || LODWORD(v13[0]) != 1) )
  {
    sub_1831650(qword_1C7F2C0, v14, v13);
    sub_1831650(v5, v15, v12);
    if ( SLODWORD(v15[0]) < 0 )
    {
      sub_1831620(v5, v14);
      sub_1831620(v5, v15);
    }
    v11[0] = 0;
    v11[1] = 0;
    sub_1832C70(v5, v14, v15, v11);
    if ( (v11[0] & 0x100000000LL) != 0 || LODWORD(v11[0]) != 1 )
    {
      sub_1833EB0(v5, v14, v11, v14);
      sub_1833EB0(v5, v15, v11, v15);
    }
    sub_182CBA0(v5, v11);
  }
  else
  {
    if ( (v14[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, v14, v14);
    else
      BYTE4(v14[0]) &= ~1u;
    if ( (v15[0] & 0x100000000LL) != 0 )
      sub_182C690(v5, v15, v15);
    else
      BYTE4(v15[0]) &= ~1u;
  }
  *(_BYTE *)(a1 + 4) &= 0xFCu;
  v6 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 20) &= 0xFCu;
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  if ( (v14[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v6, a1, v14);
    if ( (v15[0] & 0x100000000LL) == 0 )
      goto LABEL_14;
LABEL_26:
    sub_182C690(v6, a1 + 16, v15);
    goto LABEL_15;
  }
  *(_DWORD *)a1 = v14[0];
  if ( (v15[0] & 0x100000000LL) != 0 )
    goto LABEL_26;
LABEL_14:
  v7 = v15[0];
  *(_BYTE *)(a1 + 20) &= ~1u;
  *(_DWORD *)(a1 + 16) = v7;
LABEL_15:
  v8 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v14);
  sub_182CBA0(v8, v15);
  v9 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v12);
  sub_182CBA0(v9, v13);
  return a1;
}

