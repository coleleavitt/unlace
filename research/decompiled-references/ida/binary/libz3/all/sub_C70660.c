__int64 __fastcall sub_C70660(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6, __int64 *a7)
{
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int16 v10; // dx
  __int64 *v11; // rcx
  _DWORD *v12; // rdi
  __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // rbp
  __int64 v16; // rsi
  __int64 v17; // rax
  __int16 v18; // ax
  __int64 *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r12
  __int64 v22; // rbp
  _DWORD *v23; // rax
  int v24; // edx
  void *v25; // r15
  __int64 v26; // rdx
  char v27; // cl
  __int64 v28; // rax
  void *v29; // rdi
  __int64 v30; // r15
  __int64 v31; // rax
  _DWORD *v32; // rdx
  _DWORD *v33; // rdx
  bool v34; // zf
  int v36; // edx
  _DWORD *v37; // rax
  _DWORD *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rbp
  void *v42; // rdi
  _DWORD *v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // r15
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // r15
  __int64 v50; // rax
  _DWORD *v51; // rax
  int v52; // ecx
  int v53; // r8d
  int v54; // r9d
  __int64 v55; // rax
  __int64 v56; // rbp
  _DWORD *v57; // rax
  void *v58; // rbx
  void *v59; // rbx
  void *v60; // r12
  int v61; // eax
  __int64 v62; // rax
  char v63; // dl
  char v64; // cl
  __int64 v65; // rax
  char v66; // si
  char v67; // cl
  int v68; // [rsp+8h] [rbp-150h]
  __int64 *v70; // [rsp+18h] [rbp-140h]
  __int64 *v74; // [rsp+50h] [rbp-108h]
  char v75; // [rsp+5Eh] [rbp-FAh]
  char v76; // [rsp+5Fh] [rbp-F9h]
  __int64 v77; // [rsp+60h] [rbp-F8h]
  __int64 *v78; // [rsp+68h] [rbp-F0h]
  __int64 v79; // [rsp+70h] [rbp-E8h]
  __int64 v81; // [rsp+88h] [rbp-D0h] BYREF
  char v82; // [rsp+96h] [rbp-C2h] BYREF
  char v83; // [rsp+97h] [rbp-C1h] BYREF
  __int64 v84; // [rsp+98h] [rbp-C0h] BYREF
  __int64 v85; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 v86; // [rsp+A8h] [rbp-B0h]
  __int64 v87; // [rsp+B0h] [rbp-A8h]
  __int64 v88; // [rsp+B8h] [rbp-A0h]
  __int64 v89; // [rsp+C0h] [rbp-98h] BYREF
  __int64 v90; // [rsp+C8h] [rbp-90h]
  __int64 v91; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v92; // [rsp+D8h] [rbp-80h]
  __int64 v93; // [rsp+E0h] [rbp-78h] BYREF
  __int64 v94; // [rsp+E8h] [rbp-70h]
  __int64 v95; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v96; // [rsp+F8h] [rbp-60h]
  __int64 v97; // [rsp+100h] [rbp-58h] BYREF
  __int64 v98; // [rsp+108h] [rbp-50h]
  __int64 v99; // [rsp+110h] [rbp-48h] BYREF
  __int64 v100; // [rsp+118h] [rbp-40h]

  v7 = *a7;
  v8 = a7[1];
  v81 = a3;
  sub_C6E330(v7, v8);
  v9 = v81;
  *a7 = 0;
  v10 = *(_WORD *)(v9 + 4);
  if ( v10 )
  {
    v11 = &v81;
    v13 = 1;
  }
  else
  {
    v11 = &v81;
    v12 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL);
    v13 = 1;
    if ( v12 && !*v12 && v12[1] == 6 )
    {
      v13 = *(unsigned int *)(v9 + 24);
      if ( !(_DWORD)v13 )
        return 2;
      v11 = (__int64 *)(v9 + 32);
      v9 = *(_QWORD *)(v9 + 32);
      v10 = *(_WORD *)(v9 + 4);
    }
  }
  v70 = v11;
  LOBYTE(v14) = 0;
  v78 = &v11[v13];
  while ( 1 )
  {
    if ( v10 )
    {
      v85 = 0;
      v15 = *(_QWORD *)(v9 + 32);
      v86 = 0;
      v87 = 1;
      v88 = 0;
      v76 = 0;
      v75 = 0;
      goto LABEL_7;
    }
    v36 = *(_DWORD *)(v9 + 24);
    v37 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL);
    if ( v36 )
      break;
    if ( v37 && *v37 != -1 )
    {
      v15 = *(_QWORD *)(v9 + 32);
LABEL_32:
      v85 = 0;
      v86 = 0;
      v87 = 1;
      v88 = 0;
      v76 = 0;
      goto LABEL_33;
    }
LABEL_62:
    if ( (unsigned __int8)sub_1374270(a5, v9) )
      return 0;
LABEL_63:
    if ( ++v70 == v78 )
      return 2 - (unsigned int)(unsigned __int8)v14;
    v9 = *v70;
    v10 = *(_WORD *)(*v70 + 4);
  }
  v15 = *(_QWORD *)(v9 + 32);
  if ( !v37 || *v37 || v37[1] != 8 || v36 != 1 )
    goto LABEL_32;
  if ( !*(_WORD *)(v15 + 4) && !*(_DWORD *)(v15 + 24) )
  {
    v43 = *(_DWORD **)(*(_QWORD *)(v15 + 16) + 24LL);
    if ( !v43 || *v43 == -1 )
      goto LABEL_62;
  }
  v85 = 0;
  v39 = *(_QWORD *)(v15 + 32);
  v87 = 1;
  v34 = *(_WORD *)(v15 + 4) == 0;
  v86 = 0;
  v88 = 0;
  if ( !v34 )
  {
    v9 = v15;
    v76 = 1;
    v15 = v39;
    v75 = 1;
    goto LABEL_7;
  }
  v40 = *(_QWORD *)(v15 + 16);
  v9 = v15;
  v76 = 1;
  v15 = v39;
  v37 = *(_DWORD **)(v40 + 24);
LABEL_33:
  v75 = v76;
  if ( v37 && *v37 == 5 )
    v75 = v76 ^ (v37[1] == 3);
LABEL_7:
  v16 = *(_QWORD *)(v9 + 40);
  v84 = v15;
  v89 = 0;
  v90 = 0;
  v17 = *(_QWORD *)(a1 + 32);
  v91 = 1;
  v77 = v17;
  v92 = 0;
  if ( !(unsigned __int8)sub_1666AE0(a4, v16, &v89, &v93) )
    goto LABEL_26;
  if ( v75 )
    sub_1831620(qword_1C7F2C0, &v89);
  v18 = *(_WORD *)(v15 + 4);
  if ( v18 )
  {
    v19 = &v84;
    v20 = 1;
    goto LABEL_12;
  }
  v19 = &v84;
  v38 = *(_DWORD **)(*(_QWORD *)(v15 + 16) + 24LL);
  v20 = 1;
  if ( !v38 || *v38 != 5 || v38[1] != 6 )
    goto LABEL_12;
  v20 = *(unsigned int *)(v15 + 24);
  v21 = 0;
  if ( !(_DWORD)v20 )
  {
LABEL_95:
    v51 = *(_DWORD **)(*(_QWORD *)(a2 + 40) + 24LL);
    if ( !v51 || *v51 != 5 || v51[1] != 1 || !v76 )
      goto LABEL_97;
    BYTE4(v93) &= 0xFCu;
    v58 = qword_1C7F2C0;
    BYTE4(v95) &= 0xFCu;
    LODWORD(v93) = 0;
    v94 = 0;
    LODWORD(v95) = 1;
    v96 = 0;
    if ( (v89 & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v93, &v89);
    else
      LODWORD(v93) = v89;
    if ( (v91 & 0x100000000LL) != 0 )
    {
      sub_182C690(v58, &v95, &v91);
      BYTE4(v97) &= 0xFCu;
      v59 = qword_1C7F2C0;
      BYTE4(v99) &= 0xFCu;
      LODWORD(v97) = 1;
      v98 = 0;
      LODWORD(v99) = 1;
      v100 = 0;
      if ( (v91 & 0x100000000LL) != 0 )
        goto LABEL_114;
    }
    else
    {
      BYTE4(v95) &= ~1u;
      BYTE4(v97) &= 0xFCu;
      v59 = qword_1C7F2C0;
      BYTE4(v99) &= 0xFCu;
      LODWORD(v95) = v91;
      LODWORD(v97) = 1;
      v98 = 0;
      LODWORD(v99) = 1;
      v100 = 0;
    }
    if ( (_DWORD)v91 == 1 && (v99 & 0x100000000LL) == 0 )
    {
      sub_1832A70(v59, &v89, &v97);
      sub_182CBA0(v59, &v91);
      BYTE4(v91) &= ~1u;
      LODWORD(v91) = 1;
      goto LABEL_115;
    }
LABEL_114:
    sub_1852000(v59, &v89, &v97);
LABEL_115:
    sub_25A130((char *)&v93);
LABEL_97:
    v68 = v85;
    v14 = (unsigned int)v85 >> 31;
    sub_3ED4D0((__int64)qword_1C7F2C0, (int *)&v89, (__int64)&v85, (__int64)&v89);
    if ( v21 )
    {
      sub_27B900((__int64)a4, (int)&v85, 0, v52, v53, v54);
      v55 = sub_15E1B70(*a4);
      v56 = v55;
      if ( v55 )
        ++*(_DWORD *)(v55 + 8);
      sub_C6E330(v21, v77);
    }
    else
    {
      v56 = 0;
    }
    v57 = *(_DWORD **)(*(_QWORD *)(a2 + 40) + 24LL);
    if ( v57 && *v57 == 5 && v57[1] == 1 )
    {
      v60 = qword_1C7F2C0;
      LODWORD(v97) = 0;
      BYTE4(v97) &= 0xFCu;
      BYTE4(v99) &= 0xFCu;
      v98 = 0;
      LODWORD(v99) = 1;
      v100 = 0;
      if ( v68 < 0 )
        sub_1849700(qword_1C7F2C0, &v89, &v97);
      else
        sub_18495B0(qword_1C7F2C0, &v89, &v97);
      sub_182CBA0(v60, &v99);
      v61 = v89;
      LODWORD(v89) = v97;
      LODWORD(v97) = v61;
      v62 = v90;
      v90 = v98;
      v98 = v62;
      v63 = BYTE4(v97) & 1;
      v64 = BYTE4(v89) & 0xFC | BYTE4(v97) & 2;
      BYTE4(v97) = BYTE4(v89) & 1 | BYTE4(v97) & 0xFC | BYTE4(v89) & 2;
      BYTE4(v89) = v64 | v63;
      LODWORD(v99) = v91;
      v65 = v92;
      v92 = v100;
      v100 = v65;
      LODWORD(v91) = 1;
      v66 = BYTE4(v91) & 2;
      v67 = BYTE4(v91) & 1;
      BYTE4(v91) = BYTE4(v91) & 0xFC | BYTE4(v99) & 2;
      BYTE4(v99) = v67 | v66 | BYTE4(v99) & 0xFC;
      sub_25A130((char *)&v97);
    }
    sub_27B950((__int64)qword_1C7F2C0, a6, (int *)&v89);
    if ( v56 != *a7 )
    {
      sub_C6E330(*a7, a7[1]);
      *a7 = v56;
      if ( v56 )
        ++*(_DWORD *)(v56 + 8);
    }
    sub_C6E330(v56, v77);
    sub_25A130((char *)&v89);
    sub_25A130((char *)&v85);
    goto LABEL_63;
  }
  v19 = (__int64 *)(v15 + 32);
  v18 = *(_WORD *)(*(_QWORD *)(v15 + 32) + 4LL);
LABEL_12:
  v21 = 0;
  v74 = &v19[v20];
  while ( 2 )
  {
    v22 = *v19;
    v93 = 0;
    v94 = 0;
    v95 = 1;
    v96 = 0;
    if ( !v18
      && (v23 = *(_DWORD **)(*(_QWORD *)(v22 + 16) + 24LL)) != nullptr
      && *v23 == 5
      && v23[1] == 9
      && *(_DWORD *)(v22 + 24) == 2 )
    {
      v30 = *(_QWORD *)(v22 + 40);
      if ( !(unsigned __int8)sub_1666AE0(a4, *(_QWORD *)(v22 + 32), &v93, &v82) )
        break;
    }
    else
    {
      v97 = 1;
      v98 = 0;
      v99 = 1;
      v100 = 0;
      sub_182CBA0(qword_1C7F2C0, &v99);
      v24 = v97;
      v25 = qword_1C7F2C0;
      LODWORD(v97) = v93;
      LODWORD(v93) = v24;
      v26 = v98;
      v98 = v94;
      v94 = v26;
      LOBYTE(v26) = BYTE4(v97) & 1;
      v27 = BYTE4(v93) & 0xFC | BYTE4(v97) & 2;
      BYTE4(v97) = BYTE4(v93) & 1 | BYTE4(v97) & 0xFC | BYTE4(v93) & 2;
      BYTE4(v93) = v27 | v26;
      LODWORD(v99) = v95;
      v28 = v96;
      v96 = v100;
      v100 = v28;
      LODWORD(v95) = 1;
      LOBYTE(v28) = BYTE4(v95) & 1 | BYTE4(v95) & 2 | BYTE4(v99) & 0xFC;
      BYTE4(v95) = BYTE4(v95) & 0xFC | BYTE4(v99) & 2;
      BYTE4(v99) = v28;
      sub_182CBA0(qword_1C7F2C0, &v97);
      v29 = v25;
      v30 = v22;
      sub_182CBA0(v29, &v99);
    }
    if ( *(_WORD *)(v30 + 4) )
      break;
    v31 = *(_QWORD *)(v30 + 16);
    v32 = *(_DWORD **)(v31 + 24);
    if ( !v32 )
    {
      if ( *(_DWORD *)(v30 + 24) )
        break;
      goto LABEL_50;
    }
    if ( *v32 != 5 || v32[1] != 18 )
    {
      if ( *(_DWORD *)(v30 + 24) )
        break;
      v33 = *(_DWORD **)(v31 + 24);
      goto LABEL_22;
    }
    v47 = *(_QWORD *)(v30 + 32);
    if ( !*(_WORD *)(v47 + 4) && !*(_DWORD *)(v47 + 24) )
    {
      v31 = *(_QWORD *)(v47 + 16);
      v33 = *(_DWORD **)(v31 + 24);
      if ( !v33 )
      {
LABEL_50:
        if ( a2 == v31 )
        {
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v85, (int *)&v93);
          if ( v75 )
            sub_1831620(qword_1C7F2C0, &v85);
        }
        else
        {
          v79 = *(_QWORD *)(a1 + 32);
          sub_1374250(&v97, a5, v22);
          v41 = v97;
          v97 = 0;
          v98 = 0;
          v99 = 1;
          v100 = 0;
          if ( (unsigned __int8)sub_1666AE0(a4, v41, &v97, &v83) )
          {
            if ( v75 )
              sub_1831620(qword_1C7F2C0, &v97);
            v42 = qword_1C7F2C0;
            if ( (v91 & 0x100000000LL) != 0 || (_DWORD)v91 != 1 || (v99 & 0x100000000LL) != 0 || (_DWORD)v99 != 1 )
            {
              sub_1852000(qword_1C7F2C0, &v89, &v97);
            }
            else
            {
              sub_1832A70(qword_1C7F2C0, &v89, &v97);
              sub_182CBA0(v42, &v91);
              BYTE4(v91) &= ~1u;
              LODWORD(v91) = 1;
            }
          }
          else
          {
            if ( v75 )
            {
              v48 = sub_15E1A70(*a4);
              v49 = v48;
              if ( v48 )
                ++*(_DWORD *)(v48 + 8);
              sub_C6E330(v41, v79);
              v41 = v49;
            }
            v44 = *a4;
            if ( v21 )
            {
              v45 = sub_15E1B70(v44);
              v46 = v45;
              if ( v45 )
                ++*(_DWORD *)(v45 + 8);
              sub_C6E330(v21, v77);
            }
            else
            {
              v50 = sub_15E1A70(v44);
              v46 = v50;
              if ( v50 )
                ++*(_DWORD *)(v50 + 8);
              sub_C6E330(0, v77);
            }
            v21 = v46;
          }
          sub_25A130((char *)&v97);
          sub_C6E330(v41, v79);
        }
        ++v19;
        sub_25A130((char *)&v93);
        if ( v19 == v74 )
          goto LABEL_95;
        v18 = *(_WORD *)(*v19 + 4);
        continue;
      }
LABEL_22:
      if ( *v33 != -1 )
        break;
      goto LABEL_50;
    }
    break;
  }
  sub_25A130((char *)&v93);
  if ( v21 )
  {
    v34 = (*(_DWORD *)(v21 + 8))-- == 1;
    if ( v34 )
      sub_15D7BC0(v77, v21);
  }
LABEL_26:
  sub_25A130((char *)&v89);
  sub_25A130((char *)&v85);
  return 0;
}

