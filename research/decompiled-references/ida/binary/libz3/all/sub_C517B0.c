_BOOL8 __fastcall sub_C517B0(__int64 *a1, __int64 *a2, __int64 a3)
{
  void *v4; // r12
  int v5; // eax
  void *v6; // r15
  void *v7; // r15
  void *v8; // r15
  void *v9; // r13
  int v10; // edx
  void *v11; // r13
  __int64 v12; // rdx
  char v13; // cl
  __int64 v14; // rax
  void *v15; // r13
  void *v16; // r15
  void *v17; // r15
  void *v18; // r15
  void *v19; // r12
  void *v20; // r12
  _BOOL4 v21; // r14d
  void *v22; // rbx
  _QWORD *v24; // r15
  unsigned int *v25; // rax
  unsigned int v26; // r12d
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r12
  _BOOL4 v31; // eax
  __int64 v32; // rax
  __int64 v33; // r13
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // r15
  unsigned int v37; // [rsp+18h] [rbp-E8h]
  bool v38; // [rsp+1Fh] [rbp-E1h]
  __int64 v39; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v40; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v42; // [rsp+58h] [rbp-A8h]
  __int64 v43; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+68h] [rbp-98h]
  int v45[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v46; // [rsp+78h] [rbp-88h]
  _QWORD v47[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v48; // [rsp+90h] [rbp-70h] BYREF
  __int64 v49; // [rsp+98h] [rbp-68h]
  __int64 v50; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v51; // [rsp+A8h] [rbp-58h]
  __int64 v52; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v53; // [rsp+B8h] [rbp-48h]
  __int64 v54; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v55; // [rsp+C8h] [rbp-38h]

  v41 = 0;
  v4 = qword_1C7F2C0;
  v42 = 0;
  v43 = 1;
  v44 = 0;
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v41, a3);
  else
    LODWORD(v41) = *(_DWORD *)a3;
  if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
  {
    sub_182C690(v4, &v43, a3 + 16);
  }
  else
  {
    v5 = *(_DWORD *)(a3 + 16);
    BYTE4(v43) &= ~1u;
    LODWORD(v43) = v5;
  }
  v37 = 0;
  while ( 1 )
  {
    v52 = 0;
    v53 = 0;
    v54 = 1;
    v55 = 0;
    sub_182CBA0(qword_1C7F2C0, &v54);
    LODWORD(v54) = 1;
    BYTE4(v54) &= ~1u;
    *(_QWORD *)v45 = 2;
    v46 = 0;
    v47[0] = 1;
    v47[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v47);
    v16 = qword_1C7F2C0;
    BYTE4(v47[0]) &= ~1u;
    BYTE4(v48) &= 0xFCu;
    BYTE4(v50) &= 0xFCu;
    LODWORD(v47[0]) = 1;
    LODWORD(v48) = 0;
    v49 = 0;
    LODWORD(v50) = 1;
    v51 = 0;
    sub_1831270(qword_1C7F2C0, &v41, v45, &v48);
    sub_182CBA0(v16, &v50);
    BYTE4(v50) &= ~1u;
    v17 = qword_1C7F2C0;
    LODWORD(v50) = 1;
    if ( (v48 & 0x100000000LL) != 0 || (v52 & 0x100000000LL) != 0 )
      break;
    if ( (_DWORD)v48 != (_DWORD)v52 )
      goto LABEL_15;
LABEL_7:
    if ( (v50 & 0x100000000LL) != 0 || (v54 & 0x100000000LL) != 0 )
      v38 = (unsigned int)sub_182C7B0(v17, &v50, &v54) == 0;
    else
      v38 = (_DWORD)v50 == (_DWORD)v54;
    v6 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v48);
    sub_182CBA0(v6, &v50);
    v7 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v45);
    sub_182CBA0(v7, v47);
    v8 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v52);
    sub_182CBA0(v8, &v54);
    if ( !v38 )
      goto LABEL_16;
    ++v37;
    v48 = 2;
    v49 = 0;
    v50 = 1;
    v51 = 0;
    sub_182CBA0(qword_1C7F2C0, &v50);
    v9 = qword_1C7F2C0;
    LODWORD(v50) = 1;
    BYTE4(v50) &= ~1u;
    BYTE4(v52) &= 0xFCu;
    BYTE4(v54) &= 0xFCu;
    LODWORD(v52) = 0;
    v53 = 0;
    LODWORD(v54) = 1;
    v55 = 0;
    sub_1833EB0(qword_1C7F2C0, &v41, &v48, &v52);
    sub_182CBA0(v9, &v54);
    v10 = v52;
    v11 = qword_1C7F2C0;
    LODWORD(v52) = v41;
    LODWORD(v41) = v10;
    v12 = v53;
    v53 = v42;
    v42 = v12;
    v13 = BYTE4(v52) & 1;
    LOBYTE(v12) = BYTE4(v41) & 0xFC | BYTE4(v52) & 2;
    BYTE4(v52) = BYTE4(v41) & 1 | BYTE4(v52) & 0xFC | BYTE4(v41) & 2;
    BYTE4(v41) = v13 | v12;
    LODWORD(v54) = v43;
    v14 = v44;
    v44 = v55;
    v55 = v14;
    LODWORD(v43) = 1;
    LOBYTE(v14) = BYTE4(v43) & 1 | BYTE4(v43) & 2 | BYTE4(v54) & 0xFC;
    BYTE4(v43) = BYTE4(v43) & 0xFC | BYTE4(v54) & 2;
    BYTE4(v54) = v14;
    sub_182CBA0(qword_1C7F2C0, &v52);
    sub_182CBA0(v11, &v54);
    v15 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v48);
    sub_182CBA0(v15, &v50);
  }
  if ( !(unsigned int)sub_182C7B0(qword_1C7F2C0, &v48, &v52) )
    goto LABEL_7;
LABEL_15:
  v18 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v48);
  sub_182CBA0(v18, &v50);
  v19 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v45);
  sub_182CBA0(v19, v47);
  v20 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v52);
  sub_182CBA0(v20, &v54);
LABEL_16:
  if ( v37 )
  {
    v24 = a1 + 3;
    v25 = *(unsigned int **)(*(_QWORD *)(sub_15D1F10(*a2) + 24) + 8LL);
    if ( *((_BYTE *)v25 + 8) )
      sub_A8ADA((__int64)"std::get: wrong index for variant");
    v26 = *v25;
    if ( v37 < *v25 )
    {
      LOBYTE(v53) = 0;
      v54 = 0;
      v32 = *a2;
      v55 = 0;
      *(_QWORD *)v45 = v32;
      LODWORD(v52) = v37 - 1;
      sub_15DCAD0(a1[4], (int)v45, 0);
      sub_15D0DF0(&v54);
      sub_15D0DF0(&v52);
      v52 = 0;
      v53 = 0;
      v54 = 1;
      v33 = *a1;
      v55 = 0;
      sub_182CBA0(qword_1C7F2C0, &v54);
      BYTE4(v54) &= ~1u;
      LODWORD(v54) = 1;
      sub_1674520(v24, &v52, v37);
      v34 = sub_15E1B70(v33);
      v40 = v34;
      if ( v34 )
        ++*(_DWORD *)(v34 + 8);
      sub_C516F0(a1 + 13, &v40);
      sub_25A130((char *)&v52);
      LOBYTE(v53) = 0;
      LOBYTE(v55) = 0;
      v35 = a1[4];
      v48 = *a2;
      LODWORD(v52) = v26 - 1;
      LODWORD(v54) = v37;
      v36 = sub_15DCAD0(v35, (int)&v48, 0);
      sub_15D0DF0(&v54);
      sub_15D0DF0(&v52);
      if ( v36 )
        ++*(_DWORD *)(v36 + 8);
      sub_C4E2C0(*a2, a2[1]);
      *a2 = v36;
    }
    else
    {
      v52 = 0;
      v53 = 0;
      v54 = 1;
      v27 = *a1;
      v55 = 0;
      sub_182CBA0(qword_1C7F2C0, &v54);
      BYTE4(v54) &= ~1u;
      LODWORD(v54) = 1;
      sub_1674520(v24, &v52, v26);
      v28 = sub_15E1B70(v27);
      v39 = v28;
      if ( v28 )
        ++*(_DWORD *)(v28 + 8);
      sub_C516F0(a1 + 13, &v39);
      sub_25A130((char *)&v52);
      v52 = 0;
      v53 = 0;
      v54 = 1;
      v55 = 0;
      sub_182CBA0(qword_1C7F2C0, &v54);
      BYTE4(v54) &= ~1u;
      LODWORD(v54) = 1;
      v29 = sub_1674520(v24, &v52, 1);
      v30 = v29;
      if ( v29 )
        ++*(_DWORD *)(v29 + 8);
      sub_C4E2C0(*a2, a2[1]);
      *a2 = v30;
      sub_25A130((char *)&v52);
    }
  }
  v21 = (v41 & 0x100000000LL) == 0;
  if ( (v41 & 0x100000000LL) == 0 )
  {
    v21 = 0;
    if ( (_DWORD)v41 == 1 )
    {
      v31 = (v43 & 0x100000000LL) == 0;
      v21 = v31;
      if ( (v43 & 0x100000000LL) == 0 )
      {
        LOBYTE(v31) = (_DWORD)v43 == 1;
        v21 = v31;
      }
    }
  }
  v22 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v41);
  sub_182CBA0(v22, &v43);
  return v21;
}

