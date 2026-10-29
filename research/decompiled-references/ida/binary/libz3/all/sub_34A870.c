__int64 __fastcall sub_34A870(__int64 *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v6; // rax
  int v7; // edi
  char *v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // esi
  __int64 v11; // r11
  char *v12; // rsi
  __int64 v13; // r11
  char *v14; // r10
  char *i; // rbx
  _DWORD *v16; // rax
  void *v17; // rbx
  _DWORD *v18; // rax
  void *v19; // r14
  void *v20; // r14
  int v21; // eax
  __int64 v22; // rax
  int v23; // edi
  char *v24; // rdx
  __int64 v25; // rax
  unsigned int v26; // esi
  __int64 v27; // r10
  char *v28; // rsi
  __int64 v29; // r10
  char *v30; // r9
  char *j; // rbx
  _DWORD *v32; // rax
  void *v33; // rbx
  _DWORD *v34; // rax
  void *v35; // r13
  void *v36; // r13
  int v37; // eax
  void *v38; // r13
  int v39; // eax
  void *v40; // rbp
  char v42; // al
  _BOOL4 v43; // ebx
  int v44; // eax
  int v45; // [rsp+20h] [rbp-88h] BYREF
  char v46; // [rsp+24h] [rbp-84h]
  __int64 v47; // [rsp+28h] [rbp-80h]
  int v48; // [rsp+30h] [rbp-78h] BYREF
  char v49; // [rsp+34h] [rbp-74h]
  __int64 v50; // [rsp+38h] [rbp-70h]
  _DWORD *v51; // [rsp+40h] [rbp-68h] BYREF
  __int64 v52; // [rsp+48h] [rbp-60h] BYREF
  __int64 v53; // [rsp+50h] [rbp-58h] BYREF
  __int64 v54; // [rsp+58h] [rbp-50h] BYREF
  __int64 v55; // [rsp+60h] [rbp-48h]

  v6 = *a1;
  v7 = a2[3];
  v52 = 0;
  v54 = 1;
  v8 = *(char **)(v6 + 216);
  v9 = *(unsigned int *)(v6 + 224);
  v51 = a2;
  v53 = 0;
  v55 = 0;
  v10 = v9 - 1;
  v9 *= 40;
  v11 = 5LL * (v7 & v10);
  v12 = &v8[v9];
  v13 = 8 * v11;
  v14 = &v8[v13];
  if ( v13 != v9 )
  {
    for ( i = &v8[v13]; v12 != i; i += 40 )
    {
      v16 = *(_DWORD **)i;
      if ( *(_QWORD *)i > 1u )
      {
        if ( v16[3] == v7 && a2 == v16 )
          goto LABEL_18;
      }
      else if ( !v16 )
      {
        goto LABEL_8;
      }
    }
  }
  if ( v8 == v14 )
  {
LABEL_8:
    v17 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v52);
    sub_182CBA0(v17, &v54);
    v46 &= 0xFCu;
    v49 &= 0xFCu;
    v45 = 0;
    v47 = 0;
    v48 = 1;
    v50 = 0;
    BUG();
  }
  while ( 1 )
  {
    v18 = *(_DWORD **)v8;
    if ( *(_QWORD *)v8 > 1u )
      break;
    if ( !v18 )
      goto LABEL_8;
LABEL_13:
    v8 += 40;
    if ( v14 == v8 )
      goto LABEL_8;
  }
  if ( v18[3] != v7 || a2 != v18 )
    goto LABEL_13;
  i = v8;
LABEL_18:
  v19 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v52);
  sub_182CBA0(v19, &v54);
  v46 &= 0xFCu;
  v20 = qword_1C7F2C0;
  v49 &= 0xFCu;
  v45 = 0;
  v47 = 0;
  v48 = 1;
  v50 = 0;
  if ( (i[12] & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v45, i + 8);
  else
    v45 = *((_DWORD *)i + 2);
  if ( (i[28] & 1) != 0 )
  {
    sub_182C690(v20, &v48, i + 24);
  }
  else
  {
    v21 = *((_DWORD *)i + 6);
    v49 &= ~1u;
    v48 = v21;
  }
  v22 = *a1;
  v23 = a3[3];
  v51 = a3;
  v52 = 0;
  v54 = 1;
  v24 = *(char **)(v22 + 216);
  v53 = 0;
  v25 = *(unsigned int *)(v22 + 224);
  v55 = 0;
  v26 = v25 - 1;
  v25 *= 40;
  v27 = 5LL * (v23 & v26);
  v28 = &v24[v25];
  v29 = 8 * v27;
  v30 = &v24[v29];
  if ( v29 != v25 )
  {
    for ( j = &v24[v29]; v28 != j; j += 40 )
    {
      v32 = *(_DWORD **)j;
      if ( *(_QWORD *)j > 1u )
      {
        if ( v32[3] == v23 && a3 == v32 )
          goto LABEL_41;
      }
      else if ( !v32 )
      {
        goto LABEL_29;
      }
    }
  }
  if ( v24 == v30 )
  {
LABEL_29:
    v33 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v52);
    sub_182CBA0(v33, &v54);
    BYTE4(v51) &= 0xFCu;
    BYTE4(v53) &= 0xFCu;
    LODWORD(v51) = 0;
    v52 = 0;
    LODWORD(v53) = 1;
    v54 = 0;
    BUG();
  }
  while ( 2 )
  {
    v34 = *(_DWORD **)v24;
    if ( *(_QWORD *)v24 <= 1u )
    {
      if ( !v34 )
        goto LABEL_29;
      goto LABEL_34;
    }
    if ( v34[3] != v23 || a3 != v34 )
    {
LABEL_34:
      v24 += 40;
      if ( v30 == v24 )
        goto LABEL_29;
      continue;
    }
    break;
  }
  j = v24;
LABEL_41:
  v35 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v52);
  sub_182CBA0(v35, &v54);
  BYTE4(v51) &= 0xFCu;
  v36 = qword_1C7F2C0;
  BYTE4(v53) &= 0xFCu;
  LODWORD(v51) = 0;
  v52 = 0;
  LODWORD(v53) = 1;
  v54 = 0;
  if ( (j[12] & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v51, j + 8);
  else
    LODWORD(v51) = *((_DWORD *)j + 2);
  if ( (j[28] & 1) != 0 )
  {
    sub_182C690(v36, &v53, j + 24);
  }
  else
  {
    v37 = *((_DWORD *)j + 6);
    BYTE4(v53) &= ~1u;
    LODWORD(v53) = v37;
  }
  v38 = qword_1C7F2C0;
  if ( (v53 & 0x100000000LL) != 0 || (_DWORD)v53 != 1 || (v43 = (v49 & 1) == 0, (v49 & 1) != 0) || v48 != 1 )
  {
    v39 = sub_1848D40(qword_1C7F2C0, &v51, &v45);
    v38 = qword_1C7F2C0;
    LODWORD(v20) = v39;
    if ( (_BYTE)v39 )
      goto LABEL_48;
LABEL_51:
    v42 = v46;
    goto LABEL_52;
  }
  if ( (BYTE4(v51) & 1) != 0 || (v42 = v46, LODWORD(v20) = (v46 & 1) == 0, (v46 & 1) != 0) )
  {
    v44 = sub_182C7B0(qword_1C7F2C0, &v51, &v45);
    v38 = qword_1C7F2C0;
    if ( v44 < 0 )
    {
      LODWORD(v20) = v43;
      goto LABEL_48;
    }
    goto LABEL_51;
  }
  if ( (int)v51 < v45 )
    goto LABEL_48;
LABEL_52:
  if ( (v42 & 1) != 0 || (BYTE4(v51) & 1) != 0 )
  {
    if ( !(unsigned int)sub_182C7B0(v38, &v45, &v51) )
      goto LABEL_55;
    v38 = qword_1C7F2C0;
    goto LABEL_62;
  }
  if ( v45 != (_DWORD)v51 )
  {
LABEL_62:
    LODWORD(v20) = 0;
    goto LABEL_48;
  }
LABEL_55:
  if ( (v49 & 1) != 0 || (v53 & 0x100000000LL) != 0 )
    LOBYTE(v20) = (unsigned int)sub_182C7B0(v38, &v48, &v53) == 0;
  else
    LOBYTE(v20) = v48 == (_DWORD)v53;
  v38 = qword_1C7F2C0;
  if ( (_BYTE)v20 )
    LOBYTE(v20) = *a3 < *a2;
LABEL_48:
  sub_182CBA0(v38, &v51);
  sub_182CBA0(v38, &v53);
  v40 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v45);
  sub_182CBA0(v40, &v48);
  return (unsigned int)v20;
}

