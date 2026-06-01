__int64 __fastcall sub_27B620(__int64 a1, __int64 a2, __int64 a3)
{
  void *v4; // r15
  int v5; // eax
  void *v6; // r15
  void *v7; // r14
  int v8; // eax
  void *v9; // r13
  _QWORD v11[2]; // [rsp+0h] [rbp-68h] BYREF
  _QWORD v12[2]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v13[9]; // [rsp+20h] [rbp-48h] BYREF

  v12[0] = 0;
  v12[1] = 0;
  v4 = qword_1C7F2C0;
  v13[0] = 1;
  v13[1] = 0;
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v12, a2);
  else
    LODWORD(v12[0]) = *(_DWORD *)a2;
  if ( (*(_BYTE *)(a2 + 20) & 1) != 0 )
  {
    sub_182C690(v4, v13, a2 + 16);
  }
  else
  {
    v5 = *(_DWORD *)(a2 + 16);
    BYTE4(v13[0]) &= ~1u;
    LODWORD(v13[0]) = v5;
  }
  v6 = qword_1C7F2C0;
  if ( LODWORD(v12[0])
    && ((*(_BYTE *)(a3 + 4) & 1) != 0
     || *(_DWORD *)a3 != 1
     || (*(_BYTE *)(a3 + 20) & 1) != 0
     || *(_DWORD *)(a3 + 16) != 1) )
  {
    sub_1831650(qword_1C7F2C0, v12, a3 + 16);
    sub_1831650(v6, v13, a3);
    if ( SLODWORD(v13[0]) < 0 )
    {
      sub_1831620(v6, v12);
      sub_1831620(v6, v13);
    }
    v11[0] = 0;
    v11[1] = 0;
    sub_1832C70(v6, v12, v13, v11);
    if ( (v11[0] & 0x100000000LL) != 0 || LODWORD(v11[0]) != 1 )
    {
      sub_1833EB0(v6, v12, v11, v12);
      sub_1833EB0(v6, v13, v11, v13);
    }
    sub_182CBA0(v6, v11);
  }
  else
  {
    if ( (v12[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, v12, v12);
    else
      BYTE4(v12[0]) &= ~1u;
    if ( (v13[0] & 0x100000000LL) != 0 )
      sub_182C690(v6, v13, v13);
    else
      BYTE4(v13[0]) &= ~1u;
  }
  *(_BYTE *)(a1 + 4) &= 0xFCu;
  v7 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 20) &= 0xFCu;
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  if ( (v12[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v7, a1, v12);
    if ( (v13[0] & 0x100000000LL) == 0 )
      goto LABEL_14;
LABEL_26:
    sub_182C690(v7, a1 + 16, v13);
    goto LABEL_15;
  }
  *(_DWORD *)a1 = v12[0];
  if ( (v13[0] & 0x100000000LL) != 0 )
    goto LABEL_26;
LABEL_14:
  v8 = v13[0];
  *(_BYTE *)(a1 + 20) &= ~1u;
  *(_DWORD *)(a1 + 16) = v8;
LABEL_15:
  v9 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v12);
  sub_182CBA0(v9, v13);
  return a1;
}

