__int64 __fastcall sub_756370(__int64 a1, __int64 a2)
{
  void *v3; // r15
  void *v4; // r15
  bool v6; // al
  void *v7; // r13
  void *v8; // r13
  __int64 v9; // rsi
  int v10; // eax
  bool v11; // al
  void *v12; // r13
  int v13; // eax
  void *v14; // [rsp+8h] [rbp-80h]
  int v15; // [rsp+10h] [rbp-78h] BYREF
  char v16; // [rsp+14h] [rbp-74h]
  int v17; // [rsp+20h] [rbp-68h] BYREF
  char v18; // [rsp+24h] [rbp-64h]
  _QWORD v19[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v20[9]; // [rsp+40h] [rbp-48h] BYREF

  v19[0] = 0;
  v19[1] = 0;
  v20[0] = 1;
  v20[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v20);
  BYTE4(v20[0]) &= ~1u;
  v3 = qword_1C7F2C0;
  LODWORD(v20[0]) = 1;
  if ( (*(_BYTE *)(a2 + 4) & 1) == 0 )
  {
    if ( *(_DWORD *)a2 != LODWORD(v19[0]) )
      goto LABEL_3;
LABEL_8:
    if ( (*(_BYTE *)(a2 + 20) & 1) != 0 || (v20[0] & 0x100000000LL) != 0 )
      v6 = (unsigned int)sub_182C7B0(v3, a2 + 16, v20) == 0;
    else
      v6 = *(_DWORD *)(a2 + 16) == LODWORD(v20[0]);
    v4 = qword_1C7F2C0;
    if ( !v6 )
      goto LABEL_4;
    sub_182CBA0(qword_1C7F2C0, v19);
    sub_182CBA0(v4, v20);
    sub_17F6290(v19, *(unsigned int *)(a2 + 64));
    sub_7542A0((__int64)&v15, (__int64)v19, 1u);
    v14 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v19);
    sub_182CBA0(v14, v20);
    v7 = qword_1C7F2C0;
    if ( (*(_BYTE *)(a2 + 36) & 1) != 0 || (v16 & 1) != 0 )
    {
      if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, a2 + 32, &v15) )
        goto LABEL_15;
    }
    else if ( *(_DWORD *)(a2 + 32) != v15 )
    {
LABEL_15:
      v8 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v15);
      sub_182CBA0(v8, &v17);
      if ( (unsigned __int8)sub_755190(a1) )
        return 0;
      goto LABEL_16;
    }
    if ( (*(_BYTE *)(a2 + 52) & 1) != 0 || (v18 & 1) != 0 )
      v11 = (unsigned int)sub_182C7B0(v7, a2 + 48, &v17) == 0;
    else
      v11 = *(_DWORD *)(a2 + 48) == v17;
    v12 = qword_1C7F2C0;
    if ( v11 )
    {
      sub_182CBA0(qword_1C7F2C0, &v15);
      sub_182CBA0(v12, &v17);
      return 1;
    }
    sub_182CBA0(qword_1C7F2C0, &v15);
    sub_182CBA0(v12, &v17);
    goto LABEL_5;
  }
  if ( !(unsigned int)sub_182C7B0(qword_1C7F2C0, a2, v19) )
    goto LABEL_8;
LABEL_3:
  v4 = qword_1C7F2C0;
LABEL_4:
  sub_182CBA0(v4, v19);
  sub_182CBA0(v4, v20);
LABEL_5:
  if ( (unsigned __int8)sub_755190(a1) )
    return 0;
LABEL_16:
  v9 = a2 + 32;
  if ( sub_3ED700((__int64)qword_1C7F2C0, a1 + 32, a1) )
  {
    if ( !sub_3ED700((__int64)qword_1C7F2C0, v9, a2) || sub_3ED700((__int64)qword_1C7F2C0, a2 + 32, a1 + 32) )
      return 0;
    goto LABEL_22;
  }
  if ( sub_3ED700((__int64)qword_1C7F2C0, v9, a2) )
  {
    if ( sub_3ED700((__int64)qword_1C7F2C0, a2 + 32, a1 + 32) )
    {
LABEL_22:
      LOBYTE(v10) = sub_3ED700((__int64)qword_1C7F2C0, a1, a2);
      return v10 ^ 1u;
    }
    return 1;
  }
  if ( sub_3ED700((__int64)qword_1C7F2C0, a1, a2) )
    return 0;
  LOBYTE(v13) = sub_3ED700((__int64)qword_1C7F2C0, a2 + 32, a1 + 32);
  return v13 ^ 1u;
}

