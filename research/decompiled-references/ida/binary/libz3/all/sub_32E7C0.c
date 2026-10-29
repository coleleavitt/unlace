__int64 __fastcall sub_32E7C0(_QWORD *a1, __int64 *a2, unsigned int a3)
{
  __int64 v3; // r15
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r13
  unsigned int v10; // eax
  _DWORD *v11; // rax
  __int64 v12; // r13
  void *v13; // r14
  __int64 v14; // r15
  __int64 v15; // r13
  __int64 v16; // r15
  int v17; // eax
  void *v18; // r14
  int v19; // eax
  void *v20; // r14
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rdx
  void *v24; // rdi
  void *v25; // rdi
  void *v26; // rdi
  void *v27; // r15
  void *v28; // r14
  void *v29; // rbp
  void *v30; // rbp
  void *v31; // rbp
  void *v32; // rdi
  unsigned int v33; // r14d
  void *v34; // rbp
  void *v35; // rbp
  void *v36; // rbx
  bool v38; // al
  unsigned int v39; // eax
  void *v40; // rdi
  bool v41; // al
  __int64 v43; // rdx
  __int64 v44; // rsi
  unsigned int v45; // eax
  unsigned int v46; // eax
  void *v47; // rbp
  void *v48; // rbp
  void *v49; // rbp
  void *v50; // rbp
  bool v51; // al
  void *v53; // rbp
  bool v54; // al
  unsigned int v56; // eax
  unsigned int v57; // eax
  void *v59; // [rsp+8h] [rbp-180h]
  void *v60; // [rsp+8h] [rbp-180h]
  void *v61; // [rsp+8h] [rbp-180h]
  void *v62; // [rsp+10h] [rbp-178h]
  __int64 v63; // [rsp+10h] [rbp-178h]
  __int64 v64; // [rsp+18h] [rbp-170h]
  _BYTE v65[16]; // [rsp+20h] [rbp-168h] BYREF
  _QWORD v66[2]; // [rsp+30h] [rbp-158h] BYREF
  _QWORD v67[2]; // [rsp+40h] [rbp-148h] BYREF
  _QWORD v68[2]; // [rsp+50h] [rbp-138h] BYREF
  _QWORD v69[2]; // [rsp+60h] [rbp-128h] BYREF
  _QWORD v70[2]; // [rsp+70h] [rbp-118h] BYREF
  _QWORD v71[2]; // [rsp+80h] [rbp-108h] BYREF
  _QWORD v72[2]; // [rsp+90h] [rbp-F8h] BYREF
  _QWORD v73[2]; // [rsp+A0h] [rbp-E8h] BYREF
  _QWORD v74[2]; // [rsp+B0h] [rbp-D8h] BYREF
  _QWORD v75[2]; // [rsp+C0h] [rbp-C8h] BYREF
  _QWORD v76[2]; // [rsp+D0h] [rbp-B8h] BYREF
  _QWORD v77[2]; // [rsp+E0h] [rbp-A8h] BYREF
  _QWORD v78[2]; // [rsp+F0h] [rbp-98h] BYREF
  _QWORD v79[2]; // [rsp+100h] [rbp-88h] BYREF
  _QWORD v80[2]; // [rsp+110h] [rbp-78h] BYREF
  _QWORD v81[2]; // [rsp+120h] [rbp-68h] BYREF
  _QWORD v82[2]; // [rsp+130h] [rbp-58h] BYREF
  _QWORD v83[9]; // [rsp+140h] [rbp-48h] BYREF

  v3 = a3;
  v5 = 96LL * a3;
  sub_16669D0(v65, *a1);
  v6 = a1[3];
  v7 = a1[4];
  v66[0] = 0;
  v66[1] = 0;
  v67[0] = 1;
  v8 = v5 + v6;
  v9 = v5 + v7;
  v67[1] = 0;
  v68[0] = 0;
  v68[1] = 0;
  v69[0] = 1;
  v69[1] = 0;
  v70[0] = 0;
  v70[1] = 0;
  v71[0] = 1;
  v71[1] = 0;
  if ( (*(_BYTE *)(v8 + 20) & 1) != 0
    || *(_DWORD *)(v8 + 16) != 1
    || (*(_BYTE *)(v9 + 20) & 1) != 0
    || *(_DWORD *)(v9 + 16) != 1 )
  {
    LOBYTE(v10) = sub_1848D40(qword_1C7F2C0, v8, v9);
  }
  else if ( (*(_BYTE *)(v8 + 4) & 1) != 0 || (*(_BYTE *)(v9 + 4) & 1) != 0 )
  {
    v10 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v8, v9) >> 31;
  }
  else
  {
    LOBYTE(v10) = *(_DWORD *)v8 < *(_DWORD *)v9;
  }
  if ( !(_BYTE)v10 )
  {
    v32 = qword_1C7F2C0;
    if ( (*(_BYTE *)(v8 + 4) & 1) != 0 || (*(_BYTE *)(v9 + 4) & 1) != 0 )
    {
      v32 = qword_1C7F2C0;
      if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, v8, v9) )
        goto LABEL_46;
    }
    else if ( *(_DWORD *)v8 != *(_DWORD *)v9 )
    {
      goto LABEL_46;
    }
    if ( (*(_BYTE *)(v8 + 20) & 1) != 0 || (*(_BYTE *)(v9 + 20) & 1) != 0 )
      v38 = (unsigned int)sub_182C7B0(v32, v8 + 16, v9 + 16) == 0;
    else
      v38 = *(_DWORD *)(v8 + 16) == *(_DWORD *)(v9 + 16);
    if ( !v38 )
      goto LABEL_46;
    v63 = v9 + 32;
    v64 = v8 + 32;
    if ( (*(_BYTE *)(v8 + 52) & 1) != 0
      || *(_DWORD *)(v8 + 48) != 1
      || (*(_BYTE *)(v9 + 52) & 1) != 0
      || *(_DWORD *)(v9 + 48) != 1 )
    {
      LOBYTE(v39) = sub_1848D40(qword_1C7F2C0, v64, v63);
    }
    else if ( (*(_BYTE *)(v8 + 36) & 1) != 0 || (*(_BYTE *)(v9 + 36) & 1) != 0 )
    {
      v39 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v64, v63) >> 31;
    }
    else
    {
      LOBYTE(v39) = *(_DWORD *)(v8 + 32) < *(_DWORD *)(v9 + 32);
    }
    if ( !(_BYTE)v39 )
    {
      v40 = qword_1C7F2C0;
      if ( (*(_BYTE *)(v8 + 36) & 1) != 0 || (*(_BYTE *)(v9 + 36) & 1) != 0 )
      {
        v40 = qword_1C7F2C0;
        v41 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v64, v63) == 0;
      }
      else
      {
        v41 = *(_DWORD *)(v8 + 32) == *(_DWORD *)(v9 + 32);
      }
      if ( !v41 )
        goto LABEL_46;
      if ( !((*(_BYTE *)(v8 + 52) & 1) != 0 || (*(_BYTE *)(v9 + 52) & 1) != 0
           ? (unsigned int)sub_182C7B0(v40, v8 + 48, v9 + 48) == 0
           : *(_DWORD *)(v8 + 48) == *(_DWORD *)(v9 + 48)) )
        goto LABEL_46;
      v43 = v9 + 64;
      v44 = v8 + 64;
      if ( (*(_BYTE *)(v8 + 84) & 1) != 0
        || *(_DWORD *)(v8 + 80) != 1
        || (*(_BYTE *)(v9 + 84) & 1) != 0
        || *(_DWORD *)(v9 + 80) != 1 )
      {
        LOBYTE(v45) = sub_1848D40(qword_1C7F2C0, v44, v43);
      }
      else if ( (*(_BYTE *)(v8 + 68) & 1) != 0 || (*(_BYTE *)(v9 + 68) & 1) != 0 )
      {
        v45 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v44, v43) >> 31;
      }
      else
      {
        LOBYTE(v45) = *(_DWORD *)(v8 + 64) < *(_DWORD *)(v9 + 64);
      }
      if ( !(_BYTE)v45 )
        goto LABEL_46;
    }
  }
  v11 = *(_DWORD **)(sub_15D1F10(*(_QWORD *)(a1[6] + 8 * v3)) + 24);
  if ( !v11 || *v11 != 5 || v11[1] != 1 )
    goto LABEL_46;
  v12 = a1[3];
  v78[0] = 0;
  v78[1] = 0;
  v13 = qword_1C7F2C0;
  v14 = *a2;
  v15 = v5 + v12;
  v79[0] = 1;
  v79[1] = 0;
  v16 = v5 + v14;
  if ( (*(_BYTE *)(v15 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v78, v15);
  else
    LODWORD(v78[0]) = *(_DWORD *)v15;
  if ( (*(_BYTE *)(v15 + 20) & 1) != 0 )
  {
    sub_182C690(v13, v79, v15 + 16);
  }
  else
  {
    v17 = *(_DWORD *)(v15 + 16);
    BYTE4(v79[0]) &= ~1u;
    LODWORD(v79[0]) = v17;
  }
  v80[0] = 0;
  v18 = qword_1C7F2C0;
  v80[1] = 0;
  v81[0] = 1;
  v81[1] = 0;
  if ( (*(_BYTE *)(v15 + 36) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v80, v15 + 32);
  else
    LODWORD(v80[0]) = *(_DWORD *)(v15 + 32);
  if ( (*(_BYTE *)(v15 + 52) & 1) != 0 )
  {
    sub_182C690(v18, v81, v15 + 48);
  }
  else
  {
    v19 = *(_DWORD *)(v15 + 48);
    BYTE4(v81[0]) &= ~1u;
    LODWORD(v81[0]) = v19;
  }
  v82[0] = 0;
  v20 = qword_1C7F2C0;
  v82[1] = 0;
  v83[0] = 1;
  v83[1] = 0;
  if ( (*(_BYTE *)(v15 + 68) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v82, v15 + 64);
  else
    LODWORD(v82[0]) = *(_DWORD *)(v15 + 64);
  if ( (*(_BYTE *)(v15 + 84) & 1) != 0 )
  {
    sub_182C690(v20, v83, v15 + 80);
  }
  else
  {
    v21 = *(_DWORD *)(v15 + 80);
    BYTE4(v83[0]) &= ~1u;
    LODWORD(v83[0]) = v21;
  }
  if ( (v79[0] & 0x100000000LL) != 0
    || LODWORD(v79[0]) != 1
    || (*(_BYTE *)(v16 + 20) & 1) != 0
    || *(_DWORD *)(v16 + 16) != 1 )
  {
    sub_1852000(qword_1C7F2C0, v78, v16);
  }
  else
  {
    v61 = qword_1C7F2C0;
    sub_1832A70(qword_1C7F2C0, v78, v16);
    sub_182CBA0(v61, v79);
    BYTE4(v79[0]) &= ~1u;
    LODWORD(v79[0]) = 1;
  }
  v22 = v16 + 32;
  if ( (v81[0] & 0x100000000LL) != 0
    || LODWORD(v81[0]) != 1
    || (*(_BYTE *)(v16 + 52) & 1) != 0
    || *(_DWORD *)(v16 + 48) != 1 )
  {
    sub_1852000(qword_1C7F2C0, v80, v22);
  }
  else
  {
    v60 = qword_1C7F2C0;
    sub_1832A70(qword_1C7F2C0, v80, v22);
    sub_182CBA0(v60, v81);
    BYTE4(v81[0]) &= ~1u;
    LODWORD(v81[0]) = 1;
  }
  v23 = v16 + 64;
  if ( (v83[0] & 0x100000000LL) != 0
    || LODWORD(v83[0]) != 1
    || (*(_BYTE *)(v16 + 84) & 1) != 0
    || *(_DWORD *)(v16 + 80) != 1 )
  {
    sub_1852000(qword_1C7F2C0, v82, v23);
  }
  else
  {
    v59 = qword_1C7F2C0;
    sub_1832A70(qword_1C7F2C0, v82, v23);
    sub_182CBA0(v59, v83);
    BYTE4(v83[0]) &= ~1u;
    LODWORD(v83[0]) = 1;
  }
  v72[0] = 0;
  v24 = qword_1C7F2C0;
  v72[1] = 0;
  v73[0] = 1;
  v73[1] = 0;
  if ( (v78[0] & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, v72, v78);
  else
    LODWORD(v72[0]) = v78[0];
  if ( (v79[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v24, v73, v79);
  }
  else
  {
    BYTE4(v73[0]) &= ~1u;
    LODWORD(v73[0]) = v79[0];
  }
  v74[0] = 0;
  v25 = qword_1C7F2C0;
  v74[1] = 0;
  v75[0] = 1;
  v75[1] = 0;
  if ( (v80[0] & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, v74, v80);
  else
    LODWORD(v74[0]) = v80[0];
  if ( (v81[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v25, v75, v81);
  }
  else
  {
    BYTE4(v75[0]) &= ~1u;
    LODWORD(v75[0]) = v81[0];
  }
  v76[0] = 0;
  v26 = qword_1C7F2C0;
  v76[1] = 0;
  v77[0] = 1;
  v77[1] = 0;
  if ( (v82[0] & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, v76, v82);
  else
    LODWORD(v76[0]) = v82[0];
  if ( (v83[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v26, v77, v83);
  }
  else
  {
    BYTE4(v77[0]) &= ~1u;
    LODWORD(v77[0]) = v83[0];
  }
  v62 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v82);
  sub_182CBA0(v62, v83);
  v27 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v80);
  sub_182CBA0(v27, v81);
  v28 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v78);
  sub_182CBA0(v28, v79);
  if ( !*(_DWORD *)(a1[3] + v5) )
  {
    if ( (v67[0] & 0x100000000LL) != 0 || LODWORD(v67[0]) != 1 || (v73[0] & 0x100000000LL) != 0 || LODWORD(v73[0]) != 1 )
    {
      LOBYTE(v46) = sub_1848D40(qword_1C7F2C0, v66, v72);
    }
    else if ( (v66[0] & 0x100000000LL) != 0 || (v72[0] & 0x100000000LL) != 0 )
    {
      v46 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v66, v72) >> 31;
    }
    else
    {
      LOBYTE(v46) = SLODWORD(v66[0]) < SLODWORD(v72[0]);
    }
    if ( (_BYTE)v46 )
      goto LABEL_84;
    v50 = qword_1C7F2C0;
    if ( (v66[0] & 0x100000000LL) != 0 || (v72[0] & 0x100000000LL) != 0 )
      v51 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v66, v72) == 0;
    else
      v51 = LODWORD(v66[0]) == LODWORD(v72[0]);
    if ( !v51 )
      goto LABEL_42;
    if ( !((v67[0] & 0x100000000LL) != 0 || (v73[0] & 0x100000000LL) != 0
         ? (unsigned int)sub_182C7B0(v50, v67, v73) == 0
         : LODWORD(v67[0]) == LODWORD(v73[0])) )
      goto LABEL_42;
    if ( (v69[0] & 0x100000000LL) != 0 || LODWORD(v69[0]) != 1 || (v75[0] & 0x100000000LL) != 0 || LODWORD(v75[0]) != 1 )
    {
      if ( (unsigned __int8)sub_1848D40(qword_1C7F2C0, v68, v74) )
        goto LABEL_84;
    }
    else
    {
      if ( (v68[0] & 0x100000000LL) != 0 || (v74[0] & 0x100000000LL) != 0 )
        v56 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v68, v74) >> 31;
      else
        LOBYTE(v56) = SLODWORD(v68[0]) < SLODWORD(v74[0]);
      if ( (_BYTE)v56 )
        goto LABEL_84;
    }
    v53 = qword_1C7F2C0;
    if ( (v68[0] & 0x100000000LL) != 0 || (v74[0] & 0x100000000LL) != 0 )
      v54 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v68, v74) == 0;
    else
      v54 = LODWORD(v68[0]) == LODWORD(v74[0]);
    if ( !v54 )
      goto LABEL_42;
    if ( !((v69[0] & 0x100000000LL) != 0 || (v75[0] & 0x100000000LL) != 0
         ? (unsigned int)sub_182C7B0(v53, v69, v75) == 0
         : LODWORD(v69[0]) == LODWORD(v75[0])) )
      goto LABEL_42;
    if ( (v71[0] & 0x100000000LL) != 0 || LODWORD(v71[0]) != 1 || (v77[0] & 0x100000000LL) != 0 || LODWORD(v77[0]) != 1 )
    {
      if ( !(unsigned __int8)sub_1848D40(qword_1C7F2C0, v70, v76) )
        goto LABEL_42;
    }
    else
    {
      if ( (v70[0] & 0x100000000LL) != 0 || (v76[0] & 0x100000000LL) != 0 )
        v57 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v70, v76) >> 31;
      else
        LOBYTE(v57) = SLODWORD(v70[0]) < SLODWORD(v76[0]);
      if ( !(_BYTE)v57 )
        goto LABEL_42;
    }
LABEL_84:
    v47 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v76);
    sub_182CBA0(v47, v77);
    v48 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v74);
    sub_182CBA0(v48, v75);
    v49 = qword_1C7F2C0;
    v33 = 1;
    sub_182CBA0(qword_1C7F2C0, v72);
    sub_182CBA0(v49, v73);
    goto LABEL_47;
  }
LABEL_42:
  v29 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v76);
  sub_182CBA0(v29, v77);
  v30 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v74);
  sub_182CBA0(v30, v75);
  v31 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v72);
  sub_182CBA0(v31, v73);
LABEL_46:
  v33 = 0;
LABEL_47:
  v34 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v70);
  sub_182CBA0(v34, v71);
  v35 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v68);
  sub_182CBA0(v35, v69);
  v36 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v66);
  sub_182CBA0(v36, v67);
  return v33;
}

