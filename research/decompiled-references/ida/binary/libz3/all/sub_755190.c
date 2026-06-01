__int64 __fastcall sub_755190(__int64 a1)
{
  void *v1; // r14
  _QWORD *v2; // r12
  void *v3; // rbx
  void *v5; // r14
  void *v6; // r15
  void *v7; // r15
  int v8; // eax
  void *v9; // rbx
  int v10; // [rsp+0h] [rbp-78h] BYREF
  char v11; // [rsp+4h] [rbp-74h]
  int v12; // [rsp+10h] [rbp-68h] BYREF
  char v13; // [rsp+14h] [rbp-64h]
  _QWORD v14[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v15[9]; // [rsp+30h] [rbp-48h] BYREF

  v14[0] = 0;
  v14[1] = 0;
  v15[0] = 1;
  v15[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v15);
  BYTE4(v15[0]) &= ~1u;
  v1 = qword_1C7F2C0;
  LODWORD(v15[0]) = 1;
  if ( (*(_BYTE *)(a1 + 4) & 1) == 0 )
  {
    v2 = v14;
    if ( *(_DWORD *)a1 != LODWORD(v14[0]) )
      goto LABEL_3;
LABEL_6:
    if ( (*(_BYTE *)(a1 + 20) & 1) != 0 || (v15[0] & 0x100000000LL) != 0 )
    {
      if ( (unsigned int)sub_182C7B0(v1, a1 + 16, v15) )
        goto LABEL_3;
    }
    else if ( *(_DWORD *)(a1 + 16) != LODWORD(v15[0]) )
    {
      goto LABEL_3;
    }
    v5 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v14);
    sub_182CBA0(v5, v15);
    sub_17F6290(v14, *(unsigned int *)(a1 + 64));
    sub_7542A0((__int64)&v10, (__int64)v14, 1u);
    v6 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v14);
    sub_182CBA0(v6, v15);
    v7 = qword_1C7F2C0;
    if ( (*(_BYTE *)(a1 + 36) & 1) != 0 || (v11 & 1) != 0 )
    {
      v8 = sub_182C7B0(qword_1C7F2C0, a1 + 32, &v10);
      LOBYTE(v2) = v8 == 0;
      if ( v8 )
      {
LABEL_12:
        v9 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v10);
        sub_182CBA0(v9, &v12);
        return (unsigned int)v2;
      }
    }
    else
    {
      LOBYTE(v2) = *(_DWORD *)(a1 + 32) == v10;
      if ( *(_DWORD *)(a1 + 32) != v10 )
        goto LABEL_12;
    }
    if ( (*(_BYTE *)(a1 + 52) & 1) != 0 || (v13 & 1) != 0 )
      LOBYTE(v2) = (unsigned int)sub_182C7B0(v7, a1 + 48, &v12) == 0;
    else
      LOBYTE(v2) = *(_DWORD *)(a1 + 48) == v12;
    goto LABEL_12;
  }
  v2 = v14;
  if ( !(unsigned int)sub_182C7B0(qword_1C7F2C0, a1, v14) )
    goto LABEL_6;
LABEL_3:
  v3 = qword_1C7F2C0;
  LODWORD(v2) = 0;
  sub_182CBA0(qword_1C7F2C0, v14);
  sub_182CBA0(v3, v15);
  return (unsigned int)v2;
}

