__int64 __fastcall sub_27B340(__int64 a1, __int64 a2, int *a3)
{
  void *v4; // r15
  int v5; // eax
  int v6; // eax
  void *v7; // r15
  void *v8; // r12
  int v9; // eax
  void *v10; // r12
  int v12; // eax
  _QWORD v13[2]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v14[9]; // [rsp+10h] [rbp-48h] BYREF

  v13[0] = 0;
  v13[1] = 0;
  v4 = qword_1C7F2C0;
  v14[0] = 1;
  v14[1] = 0;
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v13, a2);
  else
    LODWORD(v13[0]) = *(_DWORD *)a2;
  if ( (*(_BYTE *)(a2 + 20) & 1) != 0 )
  {
    sub_182C690(v4, v14, a2 + 16);
  }
  else
  {
    v5 = *(_DWORD *)(a2 + 16);
    BYTE4(v14[0]) &= ~1u;
    LODWORD(v14[0]) = v5;
  }
  v6 = *a3;
  v7 = qword_1C7F2C0;
  if ( *a3 )
  {
    if ( LODWORD(v13[0]) )
    {
      if ( (v14[0] & 0x100000000LL) != 0 || LODWORD(v14[0]) != 1 || (a3[5] & 1) != 0 || a3[4] != 1 )
      {
        sub_1851D20(qword_1C7F2C0, v13, a3, v13);
      }
      else
      {
        sub_1831A80(qword_1C7F2C0, v13, a3, v13);
        sub_182CBA0(v7, v14);
        BYTE4(v14[0]) &= ~1u;
        LODWORD(v14[0]) = 1;
      }
    }
    else
    {
      if ( (a3[1] & 1) != 0 )
      {
        sub_182C690(qword_1C7F2C0, v13, a3);
      }
      else
      {
        BYTE4(v13[0]) &= ~1u;
        LODWORD(v13[0]) = v6;
      }
      if ( (a3[5] & 1) != 0 )
      {
        sub_182C690(v7, v14, a3 + 4);
      }
      else
      {
        v12 = a3[4];
        BYTE4(v14[0]) &= ~1u;
        LODWORD(v14[0]) = v12;
      }
    }
  }
  else
  {
    if ( (v13[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, v13, v13);
    else
      BYTE4(v13[0]) &= ~1u;
    if ( (v14[0] & 0x100000000LL) != 0 )
      sub_182C690(v7, v14, v14);
    else
      BYTE4(v14[0]) &= ~1u;
  }
  *(_BYTE *)(a1 + 4) &= 0xFCu;
  v8 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 20) &= 0xFCu;
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  if ( (v13[0] & 0x100000000LL) != 0 )
    sub_182C690(v8, a1, v13);
  else
    *(_DWORD *)a1 = v13[0];
  if ( (v14[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v8, a1 + 16, v14);
  }
  else
  {
    v9 = v14[0];
    *(_BYTE *)(a1 + 20) &= ~1u;
    *(_DWORD *)(a1 + 16) = v9;
  }
  v10 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v13);
  sub_182CBA0(v10, v14);
  return a1;
}

