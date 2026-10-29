__int64 __fastcall sub_94A480(int a1, __int64 *a2)
{
  __int64 v2; // r12
  void *v3; // r13
  int v4; // eax
  int v5; // esi
  unsigned int v6; // ebp
  char v7; // al
  char v8; // cl
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r12
  void *v12; // r13
  int v13; // eax
  void *v14; // r14
  int v15; // edx
  __int64 v16; // rdx
  char v17; // cl
  __int64 v18; // rdx
  char v19; // dl
  char v20; // dl
  void *v21; // rbp
  void *v22; // rbp
  void *v23; // rbp
  void *v24; // rbp
  void *v25; // r12
  void *v26; // r12
  void *v27; // rbx
  int v29; // eax
  void *v30; // r15
  int v31; // eax
  void *v32; // r15
  __int64 v33; // rax
  char v34; // dl
  char v35; // cl
  __int64 v36; // rax
  char v37; // dl
  void *v38; // r12
  __int64 v40; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+28h] [rbp-B0h]
  __int64 v42; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+38h] [rbp-A0h]
  _QWORD v44[2]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v45[2]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v46; // [rsp+60h] [rbp-78h] BYREF
  __int64 v47; // [rsp+68h] [rbp-70h]
  int v48; // [rsp+70h] [rbp-68h] BYREF
  char v49; // [rsp+74h] [rbp-64h]
  __int64 v50; // [rsp+78h] [rbp-60h]
  __int64 v51; // [rsp+80h] [rbp-58h] BYREF
  __int64 v52; // [rsp+88h] [rbp-50h]
  __int64 v53; // [rsp+90h] [rbp-48h] BYREF
  __int64 v54; // [rsp+98h] [rbp-40h]

  v40 = 0;
  v41 = 0;
  v42 = 1;
  v43 = 0;
  sub_182CBA0(qword_1C7F2C0, &v42);
  v2 = *a2;
  BYTE4(v42) &= ~1u;
  LODWORD(v42) = 1;
  v3 = qword_1C7F2C0;
  v44[0] = 0;
  v44[1] = 0;
  v45[0] = 1;
  v45[1] = 0;
  if ( (*(_BYTE *)(v2 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v44, v2);
  else
    LODWORD(v44[0]) = *(_DWORD *)v2;
  if ( (*(_BYTE *)(v2 + 20) & 1) != 0 )
  {
    sub_182C690(v3, v45, v2 + 16);
  }
  else
  {
    v4 = *(_DWORD *)(v2 + 16);
    BYTE4(v45[0]) &= ~1u;
    LODWORD(v45[0]) = v4;
  }
  v5 = v40;
  v6 = 1;
  v7 = ~BYTE4(v40);
  v8 = (v40 & 0x100000000LL) == 0;
  while ( 1 )
  {
    v9 = *a2;
    if ( !*a2 || v6 >= *(_DWORD *)(v9 - 4) )
      break;
    v10 = 32LL * v6;
    v11 = v9 + v10;
    if ( !*(_DWORD *)(v9 + v10) )
      goto LABEL_15;
    v12 = qword_1C7F2C0;
    if ( !v5 )
    {
      BYTE4(v51) &= 0xFCu;
      BYTE4(v53) &= 0xFCu;
      LODWORD(v51) = 0;
      v52 = 0;
      LODWORD(v53) = 1;
      v54 = 0;
      if ( (*(_BYTE *)(v11 + 4) & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v51, v9 + v10);
      else
        LODWORD(v51) = *(_DWORD *)v11;
      if ( (*(_BYTE *)(v11 + 20) & 1) != 0 )
      {
        sub_182C690(v12, &v53, v11 + 16);
      }
      else
      {
        v13 = *(_DWORD *)(v11 + 16);
        BYTE4(v53) &= ~1u;
        LODWORD(v53) = v13;
      }
      sub_1831690(qword_1C7F2C0, &v51);
      v14 = qword_1C7F2C0;
      v15 = v51;
      LODWORD(v51) = v40;
      LODWORD(v40) = v15;
      v16 = v52;
      v52 = v41;
      v41 = v16;
      v17 = BYTE4(v51) & 1;
      LOBYTE(v16) = BYTE4(v40) & 0xFC | BYTE4(v51) & 2;
      BYTE4(v51) = BYTE4(v40) & 1 | BYTE4(v51) & 0xFC | BYTE4(v40) & 2;
      BYTE4(v40) = v17 | v16;
      LODWORD(v16) = v53;
      LODWORD(v53) = v42;
      LODWORD(v42) = v16;
      v18 = v54;
      v54 = v43;
      v43 = v18;
      LOBYTE(v18) = BYTE4(v53) & 1 | BYTE4(v42) & 0xFC | BYTE4(v53) & 2;
      BYTE4(v53) = BYTE4(v42) & 1 | BYTE4(v53) & 0xFC | BYTE4(v42) & 2;
      BYTE4(v42) = v18;
      sub_182CBA0(qword_1C7F2C0, &v51);
      sub_182CBA0(v14, &v53);
      v5 = v40;
      v7 = ~BYTE4(v40);
      goto LABEL_15;
    }
    BYTE4(v46) &= 0xFCu;
    v49 &= 0xFCu;
    LODWORD(v46) = 0;
    v47 = 0;
    v48 = 1;
    v50 = 0;
    if ( (*(_BYTE *)(v11 + 4) & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, &v46, v9 + v10);
      if ( (*(_BYTE *)(v11 + 20) & 1) != 0 )
      {
LABEL_51:
        sub_182C690(v12, &v48, v11 + 16);
        goto LABEL_45;
      }
    }
    else
    {
      LODWORD(v46) = *(_DWORD *)v11;
      if ( (*(_BYTE *)(v11 + 20) & 1) != 0 )
        goto LABEL_51;
    }
    v29 = *(_DWORD *)(v11 + 16);
    v49 &= ~1u;
    v48 = v29;
LABEL_45:
    sub_1831690(qword_1C7F2C0, &v46);
    v30 = qword_1C7F2C0;
    BYTE4(v51) &= 0xFCu;
    BYTE4(v53) &= 0xFCu;
    LODWORD(v51) = 0;
    v52 = 0;
    LODWORD(v53) = 1;
    v54 = 0;
    sub_1832C70(qword_1C7F2C0, &v46, &v40, &v51);
    sub_182CBA0(v30, &v53);
    v31 = v40;
    v32 = qword_1C7F2C0;
    LODWORD(v40) = v51;
    LODWORD(v51) = v31;
    v33 = v41;
    v41 = v52;
    v52 = v33;
    v34 = BYTE4(v51) & 1;
    v35 = BYTE4(v40) & 0xFC | BYTE4(v51) & 2;
    BYTE4(v51) = BYTE4(v40) & 1 | BYTE4(v51) & 0xFC | BYTE4(v40) & 2;
    BYTE4(v40) = v35 | v34;
    LODWORD(v53) = v42;
    v36 = v43;
    v43 = v54;
    v54 = v36;
    LODWORD(v42) = 1;
    v37 = BYTE4(v42) & 0xFC | BYTE4(v53) & 2;
    BYTE4(v53) = BYTE4(v42) & 1 | BYTE4(v42) & 2 | BYTE4(v53) & 0xFC;
    BYTE4(v42) = v37;
    sub_182CBA0(qword_1C7F2C0, &v51);
    sub_182CBA0(v32, &v53);
    v38 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v46);
    sub_182CBA0(v38, &v48);
    v5 = v40;
    v7 = ~BYTE4(v40);
LABEL_15:
    ++v6;
    v8 = v7 & 1;
    if ( (v7 & 1) != 0 && v5 == 1 )
    {
      v19 = BYTE4(v42);
      if ( (v42 & 0x100000000LL) == 0 && (_DWORD)v42 == 1 )
        goto LABEL_19;
    }
  }
  if ( !v8 || v5 != 1 )
  {
    if ( !v5 )
    {
      LOBYTE(v6) = LODWORD(v44[0]) == 0;
      goto LABEL_41;
    }
    goto LABEL_21;
  }
  v19 = BYTE4(v42);
LABEL_19:
  v20 = ~v19;
  v6 = v20 & 1;
  if ( (v20 & 1) != 0 && (_DWORD)v42 == 1 )
    goto LABEL_41;
LABEL_21:
  v51 = 0;
  v21 = qword_1C7F2C0;
  v52 = 0;
  v53 = 1;
  v54 = 0;
  if ( (v44[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(qword_1C7F2C0, &v51, v44);
    if ( (v45[0] & 0x100000000LL) != 0 )
      goto LABEL_64;
LABEL_23:
    BYTE4(v53) &= ~1u;
    LODWORD(v53) = v45[0];
  }
  else
  {
    LODWORD(v51) = v44[0];
    if ( (v45[0] & 0x100000000LL) == 0 )
      goto LABEL_23;
LABEL_64:
    sub_182C690(v21, &v53, v45);
  }
  v22 = qword_1C7F2C0;
  if ( (_DWORD)v51 && ((v40 & 0x100000000LL) != 0 || (_DWORD)v40 != 1 || (v42 & 0x100000000LL) != 0 || (_DWORD)v42 != 1) )
  {
    sub_1831650(qword_1C7F2C0, &v51, &v42);
    sub_1831650(v22, &v53, &v40);
    if ( (int)v53 < 0 )
    {
      sub_1831620(v22, &v51);
      sub_1831620(v22, &v53);
    }
    v46 = 0;
    v47 = 0;
    sub_1832C70(v22, &v51, &v53, &v46);
    if ( (v46 & 0x100000000LL) != 0 || (_DWORD)v46 != 1 )
    {
      sub_1833EB0(v22, &v51, &v46, &v51);
      sub_1833EB0(v22, &v53, &v46, &v53);
    }
    sub_182CBA0(v22, &v46);
  }
  else
  {
    if ( (v51 & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v51, &v51);
    else
      BYTE4(v51) &= ~1u;
    if ( (v53 & 0x100000000LL) != 0 )
      sub_182C690(v22, &v53, &v53);
    else
      BYTE4(v53) &= ~1u;
  }
  BYTE4(v46) &= 0xFCu;
  v23 = qword_1C7F2C0;
  v49 &= 0xFCu;
  LODWORD(v46) = 0;
  v47 = 0;
  v48 = 1;
  v50 = 0;
  if ( (v51 & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v46, &v51);
  else
    LODWORD(v46) = v51;
  if ( (v53 & 0x100000000LL) != 0 )
  {
    sub_182C690(v23, &v48, &v53);
  }
  else
  {
    v49 &= ~1u;
    v48 = v53;
  }
  v24 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v51);
  sub_182CBA0(v24, &v53);
  v6 = (v49 & 1) == 0;
  if ( (v49 & 1) == 0 )
    LOBYTE(v6) = v48 == 1;
  v25 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v46);
  sub_182CBA0(v25, &v48);
LABEL_41:
  v26 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v44);
  sub_182CBA0(v26, v45);
  v27 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v40);
  sub_182CBA0(v27, &v42);
  return v6;
}

