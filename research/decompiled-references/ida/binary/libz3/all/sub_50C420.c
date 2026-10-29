__int64 __fastcall sub_50C420(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v6; // r13
  int v7; // eax
  void *v8; // rbx
  int v9; // eax
  int v10; // eax
  void *v11; // r15
  int v12; // eax
  void *v13; // rdi
  int v14; // eax
  int v15; // eax
  unsigned __int64 v16; // rax
  void *v17; // r13
  void *v18; // rbx
  void *v20; // r13
  int v21; // eax
  int v22; // eax
  unsigned __int8 v23; // [rsp+Fh] [rbp-B1h]
  void *v24; // [rsp+10h] [rbp-B0h]
  int v26; // [rsp+30h] [rbp-90h] BYREF
  _QWORD v27[2]; // [rsp+38h] [rbp-88h] BYREF
  _QWORD v28[3]; // [rsp+48h] [rbp-78h] BYREF
  int v29; // [rsp+60h] [rbp-60h] BYREF
  _QWORD v30[2]; // [rsp+68h] [rbp-58h] BYREF
  _QWORD v31[9]; // [rsp+78h] [rbp-48h] BYREF

  v6 = *(_BYTE *)(a3 + 88);
  v23 = *(_BYTE *)(a3 + 89);
  v7 = *(_DWORD *)(a3 + 8);
  v27[0] = 0;
  v26 = v7;
  v27[1] = 0;
  v28[0] = 1;
  v8 = qword_1C7F2C0;
  v28[1] = 0;
  if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, v27, a3 + 16);
    if ( (*(_BYTE *)(a3 + 36) & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    LODWORD(v27[0]) = *(_DWORD *)(a3 + 16);
    if ( (*(_BYTE *)(a3 + 36) & 1) == 0 )
    {
LABEL_3:
      v9 = *(_DWORD *)(a3 + 32);
      BYTE4(v28[0]) &= ~1u;
      LODWORD(v28[0]) = v9;
      goto LABEL_4;
    }
  }
  sub_182C690(v8, v28, a3 + 32);
LABEL_4:
  v10 = *(_DWORD *)(a3 + 48);
  v30[0] = 0;
  v30[1] = 0;
  v29 = v10;
  v31[0] = 1;
  v31[1] = 0;
  v11 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a3 + 60) & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, v30, a3 + 56);
    if ( (*(_BYTE *)(a3 + 76) & 1) == 0 )
      goto LABEL_6;
LABEL_30:
    sub_182C690(v11, v31, a3 + 72);
    goto LABEL_7;
  }
  LODWORD(v30[0]) = *(_DWORD *)(a3 + 56);
  if ( (*(_BYTE *)(a3 + 76) & 1) != 0 )
    goto LABEL_30;
LABEL_6:
  v12 = *(_DWORD *)(a3 + 72);
  BYTE4(v31[0]) &= ~1u;
  LODWORD(v31[0]) = v12;
LABEL_7:
  if ( (unsigned __int8)sub_B286B0(a4 + 8, &v26) || (unsigned __int8)sub_B28610(a4 + 8, &v26) && v6 )
  {
    v26 = *(_DWORD *)(a4 + 8);
    v20 = qword_1C7F2C0;
    if ( (*(_BYTE *)(a4 + 20) & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, v27, a4 + 16);
      if ( (*(_BYTE *)(a4 + 36) & 1) == 0 )
        goto LABEL_20;
    }
    else
    {
      v21 = *(_DWORD *)(a4 + 16);
      BYTE4(v27[0]) &= ~1u;
      LODWORD(v27[0]) = v21;
      if ( (*(_BYTE *)(a4 + 36) & 1) == 0 )
      {
LABEL_20:
        v22 = *(_DWORD *)(a4 + 32);
        BYTE4(v28[0]) &= ~1u;
        LODWORD(v28[0]) = v22;
LABEL_21:
        v6 = *(_BYTE *)(a4 + 88);
        goto LABEL_9;
      }
    }
    sub_182C690(v20, v28, a4 + 32);
    goto LABEL_21;
  }
LABEL_9:
  if ( !(unsigned __int8)sub_B286B0(&v29, a4 + 48) )
  {
    if ( !(unsigned __int8)sub_B28610(a4 + 48, &v29) )
    {
      v16 = v23;
      goto LABEL_16;
    }
    if ( !v23 )
    {
      v16 = 0;
      goto LABEL_16;
    }
  }
  v29 = *(_DWORD *)(a4 + 48);
  v13 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a4 + 60) & 1) != 0 )
  {
    v24 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, v30, a4 + 56);
    v13 = v24;
    if ( (*(_BYTE *)(a4 + 76) & 1) == 0 )
      goto LABEL_14;
LABEL_26:
    sub_182C690(v13, v31, a4 + 72);
    goto LABEL_15;
  }
  v14 = *(_DWORD *)(a4 + 56);
  BYTE4(v30[0]) &= ~1u;
  LODWORD(v30[0]) = v14;
  if ( (*(_BYTE *)(a4 + 76) & 1) != 0 )
    goto LABEL_26;
LABEL_14:
  v15 = *(_DWORD *)(a4 + 72);
  BYTE4(v31[0]) &= ~1u;
  LODWORD(v31[0]) = v15;
LABEL_15:
  v16 = *(unsigned __int8 *)(a4 + 89);
LABEL_16:
  sub_B28930(a1, a2 + 40, (int)&v26, v6, 0, (int)&v29, (void *)v16, 0);
  v17 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v30);
  sub_182CBA0(v17, v31);
  v18 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v27);
  sub_182CBA0(v18, v28);
  return a1;
}

