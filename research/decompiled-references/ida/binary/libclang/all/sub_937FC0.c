__int64 __fastcall sub_937FC0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  __int64 v4; // r15
  unsigned __int64 v5; // rbp
  __int64 v6; // r14
  char v7; // r13
  int v8; // r12d
  int v10; // ecx
  int v11; // esi
  char v12; // al
  unsigned int v13; // edx
  char v14; // [rsp+7h] [rbp-41h] BYREF
  void *v15[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = (__int64)(a1 + 48);
  a1[100] = a2;
  v3 = a1[71];
  v4 = a1[99];
  v5 = *(_QWORD *)sub_A1A5A0(v3, 8);
  sub_A1A5E0(v3, 8);
  v6 = a1[71];
  v7 = *(_BYTE *)sub_A1A5A0(v6, 8);
  sub_A1A5E0(v6, 8);
  v14 = v7;
  if ( (*(_BYTE *)(sub_A2CB40(a1 + 48) + 47) & 0x20) == 0 )
  {
    v15[0] = (void *)v5;
    if ( !(unsigned __int8)sub_937D80(v2, v4, &v14, v15, 8u) )
      return 0;
    if ( v5 <= 7 )
      goto LABEL_3;
    if ( v7 < 0 )
      goto LABEL_19;
    LOBYTE(v10) = 8;
    if ( v7 )
    {
      v11 = v7 >> 4;
      if ( !v11 )
      {
        v11 = v7;
        v12 = 4;
        v13 = v7 >> 2;
        if ( v13 )
          goto LABEL_13;
        v12 = 6;
LABEL_12:
        v13 = v11;
LABEL_13:
        LOBYTE(v10) = v12 | 1;
        if ( v13 >> 1 )
          LOBYTE(v10) = v12;
        goto LABEL_15;
      }
      v12 = 2;
      v10 = v7 >> 6;
      if ( !v10 )
        goto LABEL_12;
    }
LABEL_15:
    v8 = v7 << v10;
    goto LABEL_4;
  }
  LODWORD(v5) = v5 & 7;
  v15[0] = (void *)(unsigned int)v5;
  if ( (unsigned __int8)sub_937D80(v2, v4, &v14, v15, 8u) )
  {
LABEL_3:
    v8 = v7 << v5;
    if ( v7 >= 0 )
    {
LABEL_4:
      *(_BYTE *)sub_A1A4E0(a1[71], 8) = v8;
      return 1;
    }
    if ( v7 != (char)0x80 )
    {
      v8 = -(-v7 << v5);
      goto LABEL_4;
    }
LABEL_19:
    LOBYTE(v8) = 0;
    goto LABEL_4;
  }
  return 0;
}

