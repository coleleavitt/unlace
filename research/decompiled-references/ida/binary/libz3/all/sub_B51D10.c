__int64 __fastcall sub_B51D10(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ecx
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rdi
  int v13; // r9d
  _BOOL4 v14; // r8d
  __int64 v15; // rbx
  __int64 v17; // rdi
  __int64 *v18; // rax
  __int64 v19; // rsi
  int v20; // r8d
  int v21; // r9d
  unsigned int v22; // eax
  _QWORD *v23; // r12
  __int64 v24; // rax
  unsigned int v25; // eax
  __int64 v26; // rax
  void *v27; // r12
  _QWORD *v28; // rax
  __int64 v29; // rdi
  int v30; // r8d
  int v31; // r9d
  int v32; // r8d
  int v33; // r9d
  int v34; // r8d
  int v35; // r9d
  void *v36; // r12
  void *v37; // r12
  void *v38; // r12
  int v39; // [rsp+30h] [rbp-160h]
  int v40; // [rsp+30h] [rbp-160h]
  __int64 v41; // [rsp+40h] [rbp-150h]
  __int64 v42; // [rsp+50h] [rbp-140h]
  _BYTE v43[4]; // [rsp+6Ch] [rbp-124h] BYREF
  __int64 v44; // [rsp+70h] [rbp-120h]
  _QWORD v45[3]; // [rsp+78h] [rbp-118h] BYREF
  __int64 v46; // [rsp+90h] [rbp-100h]
  _QWORD v47[3]; // [rsp+98h] [rbp-F8h] BYREF
  __int64 v48; // [rsp+B0h] [rbp-E0h]
  _QWORD v49[3]; // [rsp+B8h] [rbp-D8h] BYREF
  __int64 v50; // [rsp+D0h] [rbp-C0h]
  _QWORD v51[3]; // [rsp+D8h] [rbp-B8h] BYREF
  __int64 v52; // [rsp+F0h] [rbp-A0h] BYREF
  __int64 v53; // [rsp+F8h] [rbp-98h]
  _QWORD v54[2]; // [rsp+100h] [rbp-90h] BYREF
  __int64 v55; // [rsp+110h] [rbp-80h] BYREF
  __int64 v56; // [rsp+118h] [rbp-78h] BYREF
  _QWORD v57[2]; // [rsp+120h] [rbp-70h] BYREF
  __int64 v58; // [rsp+130h] [rbp-60h] BYREF
  __int64 v59; // [rsp+138h] [rbp-58h] BYREF
  __int64 v60; // [rsp+140h] [rbp-50h] BYREF
  __int64 v61; // [rsp+148h] [rbp-48h]

  v5 = *(_DWORD *)(a1 + 312);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
  v45[0] = 0;
  v45[1] = 0;
  v41 = v6 + 24;
  v7 = *(_QWORD *)(v6 + 752);
  v58 = 2;
  v42 = v7;
  v8 = v7;
  v44 = v7;
  v59 = 0;
  sub_18393F0(v7, &v58, (unsigned int)(v5 - 1), v45);
  v52 = 0xFFFFFFFFLL;
  v53 = 0;
  sub_1839610(v8, v45, &v52);
  v9 = *(_QWORD *)(a3 + 8);
  v46 = v8;
  v47[0] = 0;
  v47[1] = 0;
  v48 = v8;
  v49[0] = 0;
  v49[1] = 0;
  v50 = v8;
  v51[0] = 0;
  v51[1] = 0;
  if ( !v9 )
  {
LABEL_4:
    sub_1872CE0("");
    sub_1873130(114, 120);
  }
  v10 = *(_DWORD *)(v9 - 4);
  if ( v10 == 1 )
  {
    v58 = 0;
    v59 = 0;
    v60 = 1;
    v61 = 0;
    sub_182CBA0(qword_1C7F2C0, &v60);
    v17 = *(_QWORD *)(a1 + 32);
    v56 = 0;
    BYTE4(v60) &= ~1u;
    v55 = v42;
    v18 = *(__int64 **)(a3 + 8);
    LODWORD(v60) = 1;
    v19 = *v18;
    v57[0] = 0;
    if ( !(unsigned __int8)sub_1673B50(v17, v19, (unsigned int)&v58, (unsigned int)v43, v20, v21) )
    {
      sub_1872CE0("");
      sub_1873130(114, 87);
    }
    if ( (v58 & 0x100000000LL) != 0 )
    {
      sub_182EA00(v42, &v56, &v58);
    }
    else
    {
      BYTE4(v56) &= ~1u;
      LODWORD(v56) = v58;
    }
    v22 = *(_DWORD *)(a1 + 312) + *(_DWORD *)(a1 + 316) - 1;
    if ( (v56 & 0x100000000LL) != 0 )
    {
      v40 = *(_DWORD *)(a1 + 312) + *(_DWORD *)(a1 + 316) - 1;
      sub_182EA00(v42, v47, &v56);
      v22 = v40;
    }
    else
    {
      BYTE4(v47[0]) &= ~1u;
      LODWORD(v47[0]) = v56;
    }
    sub_1830040(v42, v47, v22);
    v23 = (_QWORD *)(v6 + 760);
    v24 = sub_2945C0(v23, *(_DWORD *)(a1 + 312) + *(_DWORD *)(a1 + 316) - 1, 0);
    sub_183AEC0(v42, &v56, v24, &v56);
    v25 = *(_DWORD *)(a1 + 316) - 1;
    if ( (v56 & 0x100000000LL) != 0 )
    {
      v39 = *(_DWORD *)(a1 + 316) - 1;
      sub_182EA00(v42, v51, &v56);
      v25 = v39;
    }
    else
    {
      BYTE4(v51[0]) &= ~1u;
      LODWORD(v51[0]) = v56;
    }
    sub_1830040(v42, v51, v25);
    v26 = sub_2945C0(v23, *(_DWORD *)(a1 + 316) - 1, 0);
    sub_183AEC0(v42, &v56, v26, &v56);
    if ( (v56 & 0x100000000LL) != 0 )
    {
      sub_182EA00(v42, v49, &v56);
    }
    else
    {
      BYTE4(v49[0]) &= ~1u;
      LODWORD(v49[0]) = v56;
    }
    sub_182EF00(v55, &v56);
    v27 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v58);
    sub_182CBA0(v27, &v60);
  }
  else
  {
    if ( v10 != 3 )
      goto LABEL_4;
    v52 = 0;
    v53 = 0;
    v54[0] = 1;
    v54[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v54);
    BYTE4(v54[0]) &= ~1u;
    v55 = 0;
    LODWORD(v54[0]) = 1;
    v56 = 0;
    v57[0] = 1;
    v57[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v57);
    BYTE4(v57[0]) &= ~1u;
    LODWORD(v57[0]) = 1;
    v58 = 0;
    v59 = 0;
    v60 = 1;
    v61 = 0;
    sub_182CBA0(qword_1C7F2C0, &v60);
    v28 = *(_QWORD **)(a3 + 8);
    v29 = *(_QWORD *)(a1 + 32);
    LODWORD(v60) = 1;
    BYTE4(v60) &= ~1u;
    sub_1673B50(v29, *v28, (unsigned int)&v52, (unsigned int)v43, v30, v31);
    sub_1673B50(
      *(_QWORD *)(a1 + 32),
      *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL),
      (unsigned int)&v55,
      (unsigned int)v43,
      v32,
      v33);
    sub_1673B50(
      *(_QWORD *)(a1 + 32),
      *(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL),
      (unsigned int)&v58,
      (unsigned int)v43,
      v34,
      v35);
    if ( (v52 & 0x100000000LL) != 0 )
    {
      sub_182EA00(v42, v47, &v52);
    }
    else
    {
      BYTE4(v47[0]) &= ~1u;
      LODWORD(v47[0]) = v52;
    }
    if ( (v55 & 0x100000000LL) != 0 )
    {
      sub_182EA00(v42, v51, &v55);
    }
    else
    {
      BYTE4(v51[0]) &= ~1u;
      LODWORD(v51[0]) = v55;
    }
    if ( (v58 & 0x100000000LL) != 0 )
    {
      sub_182EA00(v42, v49, &v58);
    }
    else
    {
      BYTE4(v49[0]) &= ~1u;
      LODWORD(v49[0]) = v58;
    }
    v36 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v58);
    sub_182CBA0(v36, &v60);
    v37 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v55);
    sub_182CBA0(v37, v57);
    v38 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v52);
    sub_182CBA0(v38, v54);
  }
  v11 = v50;
  v59 = 0;
  v60 = 0;
  v58 = v50;
  if ( (v51[0] & 0x100000000LL) != 0 )
  {
    sub_182EA00(v50, &v59, v51);
    v11 = v58;
  }
  else
  {
    LODWORD(v59) = v51[0];
  }
  sub_183A580(v11, &v59, v45, &v59);
  v12 = v58;
  v56 = 0;
  v57[0] = 0;
  v55 = v58;
  if ( (v59 & 0x100000000LL) != 0 )
  {
    sub_182EA00(v58, &v56, &v59);
    v12 = v58;
  }
  else
  {
    LODWORD(v56) = v59;
  }
  sub_182EF00(v12, &v59);
  v58 = v41;
  sub_181A6B0(&v59);
  v13 = sub_182F370(v42, &v56);
  v14 = 0;
  if ( (v47[0] & 0x100000000LL) == 0 )
    v14 = LODWORD(v47[0]) == 1;
  sub_181AED0(v41, (unsigned int)&v59, *(_DWORD *)(a1 + 312), *(_DWORD *)(a1 + 316), v14, v13, (__int64)v49);
  v15 = sub_15CC210(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL), &v59);
  sub_182EF00(*(_QWORD *)(v58 + 728), &v60);
  sub_182EF00(v55, &v56);
  sub_182EF00(v50, v51);
  sub_182EF00(v48, v49);
  sub_182EF00(v46, v47);
  sub_182EF00(v44, v45);
  return v15;
}

