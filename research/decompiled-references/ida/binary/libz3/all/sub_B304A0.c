__int64 __fastcall sub_B304A0(__int64 a1, __int64 a2, int *a3)
{
  int v4; // eax
  void *v5; // r15
  int v6; // eax
  int v7; // eax
  void *v8; // r15
  int v9; // edx
  _BOOL4 v10; // eax
  int v11; // eax
  void *v12; // r14
  int v13; // eax
  void *v14; // r12
  unsigned int v16; // edx
  int v17; // eax
  _BOOL4 v18; // eax
  int *v19; // rdx
  int v20; // [rsp+0h] [rbp-68h]
  _QWORD v21[2]; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v22[10]; // [rsp+18h] [rbp-50h] BYREF

  v4 = *(_DWORD *)a2;
  v21[0] = 0;
  v20 = v4;
  v5 = qword_1C7F2C0;
  v21[1] = 0;
  v22[0] = 1;
  v22[1] = 0;
  if ( (*(_BYTE *)(a2 + 12) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v21, a2 + 8);
  else
    LODWORD(v21[0]) = *(_DWORD *)(a2 + 8);
  if ( (*(_BYTE *)(a2 + 28) & 1) != 0 )
  {
    sub_182C690(v5, v22, a2 + 24);
  }
  else
  {
    v6 = *(_DWORD *)(a2 + 24);
    BYTE4(v22[0]) &= ~1u;
    LODWORD(v22[0]) = v6;
  }
  v7 = v20;
  v8 = qword_1C7F2C0;
  if ( v20 != 1 )
  {
    v9 = *a3;
    if ( *a3 != 1 )
    {
      if ( v20 )
        v10 = v9 != 0;
      else
        v10 = v9 == 0;
      v11 = 2 * v10;
LABEL_10:
      v20 = v11;
      sub_182CEF0(qword_1C7F2C0, v21);
      goto LABEL_11;
    }
    v16 = a3[2];
    if ( v16 )
    {
      if ( v20 )
        v16 = ~v16;
      v11 = 2 * (v16 >> 31);
      goto LABEL_10;
    }
    goto LABEL_19;
  }
  if ( LODWORD(v21[0]) )
  {
    v17 = *a3;
    if ( *a3 != 1 )
    {
      if ( SLODWORD(v21[0]) < 0 )
        v18 = v17 == 0;
      else
        v18 = v17 != 0;
      v11 = 2 * v18;
      goto LABEL_10;
    }
    if ( a3[2] )
    {
      v19 = a3 + 2;
      if ( (v22[0] & 0x100000000LL) != 0 || LODWORD(v22[0]) != 1 || (a3[7] & 1) != 0 || a3[6] != 1 )
      {
        sub_1848FF0(qword_1C7F2C0, v21, v19);
        goto LABEL_12;
      }
      sub_1831650(qword_1C7F2C0, v21, v19);
LABEL_11:
      sub_182CBA0(v8, v22);
      BYTE4(v22[0]) &= ~1u;
      LODWORD(v22[0]) = 1;
LABEL_12:
      v7 = v20;
      goto LABEL_13;
    }
LABEL_19:
    v20 = 1;
    sub_182CEF0(qword_1C7F2C0, v21);
    goto LABEL_11;
  }
LABEL_13:
  *(_BYTE *)(a1 + 12) &= 0xFCu;
  v12 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 28) &= 0xFCu;
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = 1;
  *(_QWORD *)(a1 + 32) = 0;
  if ( (v21[0] & 0x100000000LL) != 0 )
    sub_182C690(v12, a1 + 8, v21);
  else
    *(_DWORD *)(a1 + 8) = v21[0];
  if ( (v22[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v12, a1 + 24, v22);
  }
  else
  {
    v13 = v22[0];
    *(_BYTE *)(a1 + 28) &= ~1u;
    *(_DWORD *)(a1 + 24) = v13;
  }
  v14 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v21);
  sub_182CBA0(v14, v22);
  return a1;
}

