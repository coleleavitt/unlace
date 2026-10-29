__int64 __fastcall sub_97C100(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  char v3; // al
  __int64 v4; // rdx
  int v5; // ecx
  bool v6; // al
  int v7; // eax
  void *v8; // rbp
  int v9; // eax
  int v11; // eax
  _QWORD v12[2]; // [rsp+8h] [rbp-340h] BYREF
  _QWORD v13[3]; // [rsp+18h] [rbp-330h] BYREF
  _BYTE v14[600]; // [rsp+30h] [rbp-318h] BYREF
  _QWORD v15[24]; // [rsp+288h] [rbp-C0h] BYREF

  v2 = a2 + 896;
  sub_1839FF0(v14);
  v3 = *(_BYTE *)(a2 + 812);
  v4 = a2 + 808;
  v5 = *(_DWORD *)(a2 + 896);
  memset(v15, 0, 80);
  v6 = (v3 & 1) == 0;
  v15[10] = 1;
  memset(&v15[11], 0, 24);
  v15[14] = 1;
  v15[15] = 0;
  v12[0] = 0;
  v12[1] = 0;
  v13[0] = 1;
  v13[1] = 0;
  if ( v5 >= 0 )
  {
    if ( v6 )
    {
      LODWORD(v12[0]) = *(_DWORD *)(a2 + 808);
      if ( (*(_BYTE *)(a2 + 900) & 1) == 0 )
      {
LABEL_4:
        v7 = *(_DWORD *)(a2 + 896);
        BYTE4(v13[0]) &= ~1u;
        LODWORD(v13[0]) = v7;
        goto LABEL_5;
      }
    }
    else
    {
      sub_182EA00(v14, v12, v4);
      if ( (*(_BYTE *)(a2 + 900) & 1) == 0 )
        goto LABEL_4;
    }
    sub_182EA00(v14, v13, v2);
    goto LABEL_5;
  }
  if ( v6 )
    LODWORD(v12[0]) = *(_DWORD *)(a2 + 808);
  else
    sub_182EA00(v14, v12, v4);
  if ( (*(_BYTE *)(a2 + 900) & 1) != 0 )
  {
    sub_182EA00(v14, v13, v2);
  }
  else
  {
    v11 = *(_DWORD *)(a2 + 896);
    BYTE4(v13[0]) &= ~1u;
    LODWORD(v13[0]) = v11;
  }
  sub_1839100(v14, v12);
  sub_1839100(v14, v13);
LABEL_5:
  sub_183B0A0(v14, v12, v13, v15);
  if ( (v15[0] & 0x100000000LL) != 0 || LODWORD(v15[0]) != 1 )
  {
    sub_183C300(v14, v12, v15, v12);
    sub_183C300(v14, v13, v15, v13);
  }
  *(_BYTE *)(a1 + 4) &= 0xFCu;
  *(_BYTE *)(a1 + 20) &= 0xFCu;
  *(_DWORD *)a1 = 0;
  v8 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  if ( (v12[0] & 0x100000000LL) != 0 )
    sub_182C690(v8, a1, v12);
  else
    *(_DWORD *)a1 = v12[0];
  if ( (v13[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v8, a1 + 16, v13);
  }
  else
  {
    v9 = v13[0];
    *(_BYTE *)(a1 + 20) &= ~1u;
    *(_DWORD *)(a1 + 16) = v9;
  }
  sub_182EF00(v14, v12);
  sub_182EF00(v14, v13);
  sub_184C8D0(v14);
  return a1;
}

