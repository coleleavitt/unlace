__int64 __fastcall sub_465900(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  int v6; // edx
  char v7; // cl
  void *v8; // r12
  __int64 v9; // rax
  __int64 v10; // rdx
  char v11; // si
  __int64 v12; // rax
  unsigned __int8 v13; // al
  void *v14; // r12
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // r14
  void *v21; // r15
  int v22; // eax
  __int64 v23; // r15
  int v24; // eax
  int v25; // edx
  void *v26; // rdi
  char v27; // al
  void *v28; // r15
  void *v29; // rdi
  unsigned int v30; // eax
  char v31; // al
  bool v32; // al
  unsigned int v33; // eax
  bool v34; // al
  void *v35; // r14
  void *v36; // rbx
  bool v37; // al
  unsigned int v38; // eax
  unsigned __int8 v39; // [rsp+27h] [rbp-D1h]
  _QWORD v41[2]; // [rsp+40h] [rbp-B8h] BYREF
  _QWORD v42[2]; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD v43[2]; // [rsp+60h] [rbp-98h] BYREF
  _QWORD v44[2]; // [rsp+70h] [rbp-88h] BYREF
  int v45; // [rsp+80h] [rbp-78h] BYREF
  char v46; // [rsp+84h] [rbp-74h]
  __int64 v47; // [rsp+88h] [rbp-70h]
  int v48; // [rsp+90h] [rbp-68h] BYREF
  char v49; // [rsp+94h] [rbp-64h]
  __int64 v50; // [rsp+98h] [rbp-60h]
  __int64 v51; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v52; // [rsp+A8h] [rbp-50h]
  __int64 v53; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v54; // [rsp+B8h] [rbp-40h]

  v51 = 2;
  v52 = 0;
  v53 = 1;
  v54 = 0;
  sub_182CBA0(qword_1C7F2C0, &v53);
  v6 = v51;
  v7 = BYTE4(v51);
  v8 = qword_1C7F2C0;
  LODWORD(v51) = *(_DWORD *)a3;
  v9 = *(_QWORD *)(a3 + 8);
  *(_DWORD *)a3 = v6;
  v10 = v52;
  v52 = v9;
  LOBYTE(v9) = *(_BYTE *)(a3 + 4);
  *(_QWORD *)(a3 + 8) = v10;
  LOBYTE(v10) = v7;
  v7 &= ~2u;
  LOBYTE(v10) = v9 & 0xFC | v10 & 2;
  v11 = *(_BYTE *)(a3 + 20);
  BYTE4(v51) = v9 & 1 | v7 & 0xFE | v9 & 2;
  LODWORD(v9) = *(_DWORD *)(a3 + 16);
  *(_BYTE *)(a3 + 4) = v7 & 1 | v10;
  LODWORD(v53) = v9;
  v12 = *(_QWORD *)(a3 + 24);
  *(_QWORD *)(a3 + 24) = v54;
  v54 = v12;
  LOBYTE(v12) = BYTE4(v53);
  *(_DWORD *)(a3 + 16) = 1;
  *(_BYTE *)(a3 + 20) = v11 & 0xFC | v12 & 2;
  BYTE4(v53) = v11 & 1 | v11 & 2 | v12 & 0xFC;
  sub_182CBA0(v8, &v51);
  sub_182CBA0(v8, &v53);
  v13 = sub_4641B0(a2, a3);
  v14 = qword_1C7F2C0;
  v39 = v13;
  if ( v13 )
  {
    v15 = 0x1FFFFFFFE0LL;
    v16 = *a2;
    if ( *a2 )
      v15 = 32LL * (unsigned int)(*(_DWORD *)(v16 - 4) - 1);
    sub_1832AB0(qword_1C7F2C0, v15 + v16, a3, a4);
    sub_182CBA0(v14, a4 + 16);
    *(_BYTE *)(a4 + 20) &= ~1u;
    *(_DWORD *)(a4 + 16) = 1;
    return v39;
  }
  v41[0] = 101;
  v41[1] = 0;
  v42[0] = 1;
  v42[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v42);
  v18 = *a2;
  BYTE4(v42[0]) &= ~1u;
  v19 = 0x1FFFFFFFE0LL;
  LODWORD(v42[0]) = 1;
  if ( v18 )
    v19 = 32LL * (unsigned int)(*(_DWORD *)(v18 - 4) - 1);
  v43[0] = 0;
  v20 = v19 + v18;
  v21 = qword_1C7F2C0;
  v43[1] = 0;
  v44[0] = 1;
  v44[1] = 0;
  if ( (*(_BYTE *)(v20 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v43, v20);
  else
    LODWORD(v43[0]) = *(_DWORD *)v20;
  if ( (*(_BYTE *)(v20 + 20) & 1) != 0 )
  {
    sub_182C690(v21, v44, v20 + 16);
  }
  else
  {
    v22 = *(_DWORD *)(v20 + 16);
    BYTE4(v44[0]) &= ~1u;
    LODWORD(v44[0]) = v22;
  }
  while ( 1 )
  {
    v29 = qword_1C7F2C0;
    if ( (*(_BYTE *)(a3 + 20) & 1) != 0
      || *(_DWORD *)(a3 + 16) != 1
      || (v44[0] & 0x100000000LL) != 0
      || LODWORD(v44[0]) != 1 )
    {
      if ( !(unsigned __int8)sub_1848D40(qword_1C7F2C0, a3, v43) )
        goto LABEL_37;
    }
    else
    {
      if ( (*(_BYTE *)(a3 + 4) & 1) == 0 && (v43[0] & 0x100000000LL) == 0 )
      {
        if ( *(_DWORD *)a3 >= SLODWORD(v43[0]) )
          goto LABEL_39;
        goto LABEL_48;
      }
      if ( (int)sub_182C7B0(qword_1C7F2C0, a3, v43) >= 0 )
      {
LABEL_37:
        v29 = qword_1C7F2C0;
        v32 = (*(_BYTE *)(a3 + 20) & 1) == 0;
        goto LABEL_38;
      }
    }
    v29 = qword_1C7F2C0;
    if ( (*(_BYTE *)(a3 + 20) & 1) != 0 || *(_DWORD *)(a3 + 16) != 1 )
    {
LABEL_24:
      LOBYTE(v30) = sub_1848D40(v29, a3, v41);
      goto LABEL_25;
    }
LABEL_48:
    if ( (v42[0] & 0x100000000LL) != 0 || LODWORD(v42[0]) != 1 )
      goto LABEL_24;
    if ( (*(_BYTE *)(a3 + 4) & 1) != 0 || (v41[0] & 0x100000000LL) != 0 )
      v30 = (unsigned int)sub_182C7B0(v29, a3, v41) >> 31;
    else
      LOBYTE(v30) = *(_DWORD *)a3 < SLODWORD(v41[0]);
LABEL_25:
    if ( !(_BYTE)v30 )
      goto LABEL_37;
    v31 = sub_4641B0(a2, a3);
    v29 = qword_1C7F2C0;
    if ( v31 )
      break;
    v46 &= 0xFCu;
    v49 &= 0xFCu;
    v45 = 0;
    v47 = 0;
    v48 = 1;
    v50 = 0;
    if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, &v45, a3);
      v23 = a3 + 16;
      if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
      {
LABEL_13:
        v24 = *(_DWORD *)(a3 + 16);
        v49 &= ~1u;
        v48 = v24;
        goto LABEL_14;
      }
    }
    else
    {
      v23 = a3 + 16;
      v45 = *(_DWORD *)a3;
      if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
        goto LABEL_13;
    }
    sub_182C690(v29, &v48, v23);
LABEL_14:
    v25 = *(_DWORD *)a3;
    LODWORD(v51) = 1;
    v52 = 0;
    v26 = qword_1C7F2C0;
    LODWORD(v53) = 1;
    BYTE4(v51) &= 0xFCu;
    v54 = 0;
    v27 = BYTE4(v53) & 0xFC;
    BYTE4(v53) &= 0xFCu;
    if ( v25 )
    {
      if ( (*(_BYTE *)(a3 + 20) & 1) == 0 && *(_DWORD *)(a3 + 16) == 1 )
      {
        sub_1831A80(qword_1C7F2C0, a3, &v51, a3);
        sub_182CBA0(v26, v23);
        *(_BYTE *)(a3 + 20) &= ~1u;
        *(_DWORD *)(a3 + 16) = 1;
      }
      else
      {
        sub_1851D20(qword_1C7F2C0, a3, &v51, a3);
      }
    }
    else
    {
      *(_BYTE *)(a3 + 4) &= ~1u;
      *(_DWORD *)a3 = 1;
      if ( (v27 & 1) != 0 )
      {
        sub_182C690(v26, v23, &v53);
      }
      else
      {
        *(_BYTE *)(a3 + 20) &= ~1u;
        *(_DWORD *)(a3 + 16) = 1;
      }
    }
    v28 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v45);
    sub_182CBA0(v28, &v48);
  }
  v32 = (*(_BYTE *)(a3 + 20) & 1) == 0;
LABEL_38:
  if ( !v32 )
  {
LABEL_40:
    LOBYTE(v33) = sub_1848D40(v29, a3, v43);
    v29 = qword_1C7F2C0;
    goto LABEL_41;
  }
LABEL_39:
  if ( *(_DWORD *)(a3 + 16) != 1 || (v44[0] & 0x100000000LL) != 0 || LODWORD(v44[0]) != 1 )
    goto LABEL_40;
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 || (v43[0] & 0x100000000LL) != 0 )
  {
    v38 = sub_182C7B0(v29, a3, v43);
    v29 = qword_1C7F2C0;
    v33 = v38 >> 31;
  }
  else
  {
    LOBYTE(v33) = *(_DWORD *)a3 < SLODWORD(v43[0]);
  }
LABEL_41:
  if ( (_BYTE)v33 )
  {
    if ( (*(_BYTE *)(a3 + 4) & 1) != 0 || (v41[0] & 0x100000000LL) != 0 )
      v34 = (unsigned int)sub_182C7B0(v29, a3, v41) == 0;
    else
      v34 = *(_DWORD *)a3 == LODWORD(v41[0]);
    if ( v34
      && ((*(_BYTE *)(a3 + 20) & 1) == 0 && (v42[0] & 0x100000000LL) == 0
        ? (v37 = *(_DWORD *)(a3 + 16) == LODWORD(v42[0]))
        : (v37 = (unsigned int)sub_182C7B0(v29, a3 + 16, v42) == 0),
          v37) )
    {
      v29 = qword_1C7F2C0;
    }
    else
    {
      v35 = qword_1C7F2C0;
      sub_1832AB0(qword_1C7F2C0, *a2, a3, a4);
      sub_182CBA0(v35, a4 + 16);
      *(_BYTE *)(a4 + 20) &= ~1u;
      v29 = qword_1C7F2C0;
      *(_DWORD *)(a4 + 16) = 1;
      v39 = 1;
    }
  }
  else
  {
    v39 = 0;
  }
  sub_182CBA0(v29, v43);
  sub_182CBA0(v29, v44);
  v36 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v41);
  sub_182CBA0(v36, v42);
  return v39;
}

