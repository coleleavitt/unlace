__int64 __fastcall sub_9B4200(_QWORD *a1, unsigned int a2, _BYTE *a3, __int64 a4, _BYTE *a5, __int64 a6, _QWORD *a7)
{
  __int64 v7; // r14
  int *v9; // r13
  unsigned int *v10; // rbx
  int v11; // eax
  __int64 v12; // rax
  char v13; // dl
  char v14; // si
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  int *v19; // r15
  void *v20; // r14
  int v21; // eax
  void *v22; // r15
  int v23; // eax
  void *v24; // r14
  void *v25; // r14
  void *v26; // r14
  void *v27; // r14
  void *v28; // r14
  void *v29; // r14
  void *v30; // r14
  void *v31; // r14
  int v32; // eax
  void *v33; // r15
  int v34; // eax
  void *v35; // r14
  void *v36; // r14
  void *v37; // r14
  void *v38; // r14
  void *v39; // r14
  void *v40; // r14
  void *v41; // r14
  __int64 v42; // rax
  __int64 v43; // rdx
  unsigned int v44; // esi
  __int64 v45; // r15
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rax
  char v49; // dl
  int v50; // edx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rdi
  void *v54; // rcx
  void *v55; // r15
  void *v56; // r14
  void *v57; // r14
  void *v58; // r14
  void *v59; // rcx
  char v60; // al
  void *v61; // r15
  void *v62; // r14
  void *v63; // r14
  __int64 v65; // rax
  bool v66; // al
  unsigned int *v67; // [rsp+10h] [rbp-1A8h]
  void *v68; // [rsp+18h] [rbp-1A0h]
  void *v69; // [rsp+18h] [rbp-1A0h]
  void *v70; // [rsp+18h] [rbp-1A0h]
  void *v71; // [rsp+20h] [rbp-198h]
  __int64 v72; // [rsp+20h] [rbp-198h]
  void *v73; // [rsp+30h] [rbp-188h]
  int *v74; // [rsp+38h] [rbp-180h]
  void *v79; // [rsp+70h] [rbp-148h]
  __int64 v80; // [rsp+78h] [rbp-140h]
  int v81[4]; // [rsp+80h] [rbp-138h] BYREF
  _BYTE v82[16]; // [rsp+90h] [rbp-128h] BYREF
  char v83[16]; // [rsp+A0h] [rbp-118h] BYREF
  _BYTE v84[16]; // [rsp+B0h] [rbp-108h] BYREF
  int v85[4]; // [rsp+C0h] [rbp-F8h] BYREF
  _BYTE v86[16]; // [rsp+D0h] [rbp-E8h] BYREF
  char v87[16]; // [rsp+E0h] [rbp-D8h] BYREF
  _BYTE v88[16]; // [rsp+F0h] [rbp-C8h] BYREF
  char v89[16]; // [rsp+100h] [rbp-B8h] BYREF
  _BYTE v90[16]; // [rsp+110h] [rbp-A8h] BYREF
  _BYTE v91[16]; // [rsp+120h] [rbp-98h] BYREF
  _BYTE v92[16]; // [rsp+130h] [rbp-88h] BYREF
  __int64 v93; // [rsp+140h] [rbp-78h] BYREF
  __int64 v94; // [rsp+148h] [rbp-70h]
  __int64 v95; // [rsp+150h] [rbp-68h] BYREF
  __int64 v96; // [rsp+158h] [rbp-60h]
  __int64 v97; // [rsp+160h] [rbp-58h] BYREF
  __int64 v98; // [rsp+168h] [rbp-50h]
  __int64 v99; // [rsp+170h] [rbp-48h] BYREF
  __int64 v100; // [rsp+178h] [rbp-40h]

  v7 = a2;
  if ( a2 == -1 || ((*(_BYTE *)(a1[82] + 4LL * a2 + 3) >> 4) & 3) != 1 )
  {
    v9 = sub_9AA900((__int64)a1, a2);
    v10 = *(unsigned int **)(a1[81] + 16LL * a2);
    if ( v10 )
      v67 = &v10[2 * *(v10 - 1)];
    else
      v67 = nullptr;
    *a3 = 1;
    *a5 = 1;
    sub_992B50(a4);
    sub_992B50(a4 + 32);
    sub_992B50(a6);
    sub_992B50(a6 + 32);
    v93 = 1;
    v94 = 0;
    v95 = 1;
    v96 = 0;
    sub_182CBA0(qword_1C7F2C0, &v95);
    v11 = *(_DWORD *)a7;
    *(_DWORD *)a7 = v93;
    LODWORD(v93) = v11;
    v12 = a7[1];
    a7[1] = v94;
    v94 = v12;
    v13 = BYTE4(v93) & 1 | *((_BYTE *)a7 + 4) & 0xFC | BYTE4(v93) & 2;
    BYTE4(v93) = *((_BYTE *)a7 + 4) & 1 | BYTE4(v93) & 0xFC | *((_BYTE *)a7 + 4) & 2;
    LODWORD(v12) = *((_DWORD *)a7 + 4);
    v14 = *((_BYTE *)a7 + 20);
    *((_BYTE *)a7 + 4) = v13;
    v15 = v96;
    *((_DWORD *)a7 + 4) = 1;
    LODWORD(v95) = v12;
    v16 = a7[3];
    a7[3] = v15;
    v96 = v16;
    LOBYTE(v16) = v14 & 1 | v14 & 2 | BYTE4(v95) & 0xFC;
    *((_BYTE *)a7 + 20) = v14 & 0xFC | BYTE4(v95) & 2;
    BYTE4(v95) = v16;
    sub_25A130((char *)&v93);
    v17 = *(_QWORD *)(a1[85] + 8 * v7);
    if ( v17 )
    {
      if ( *a3 || sub_927C80(a4, v17 + 16) )
      {
        sub_98B520(a4, (int *)(v17 + 16));
        *a3 = 0;
      }
      else if ( *a3 )
      {
        goto LABEL_63;
      }
      if ( *a5 )
      {
        v18 = *(_QWORD *)(a1[86] + 8 * v7);
        v19 = (int *)(v18 + 16);
        if ( !v18 )
          goto LABEL_11;
        goto LABEL_10;
      }
      if ( sub_9B0850(a4, a6) )
        return 1;
    }
LABEL_63:
    v65 = *(_QWORD *)(a1[86] + 8 * v7);
    if ( !v65 )
      goto LABEL_11;
    v19 = (int *)(v65 + 16);
    if ( !*a5 && !sub_927C80((__int64)v19, a6) )
    {
      if ( *a3 || *a5 )
        goto LABEL_11;
      goto LABEL_68;
    }
LABEL_10:
    sub_98B520(a6, v19);
    *a5 = 0;
    if ( *a3 )
      goto LABEL_11;
LABEL_68:
    if ( sub_9B0850(a4, a6) )
      return 1;
LABEL_11:
    v80 = 4 * v7;
    if ( v10 == v67 )
      return 1;
    while ( 1 )
    {
      while ( 1 )
      {
        v42 = *v10;
        if ( (_DWORD)v42 == -1 )
          goto LABEL_39;
        v43 = a1[79] + 24 * v42;
        v44 = *(_DWORD *)(v43 + 12);
        if ( v44 == -1 )
          goto LABEL_39;
        v45 = 4LL * v44;
        if ( ((*(_BYTE *)(a1[82] + v45 + 3) >> 4) & 3) == 2 )
          goto LABEL_39;
        v72 = *(_QWORD *)v43 + 40LL * v10[1];
        v74 = sub_9AA900((__int64)a1, v44);
        v46 = a1[82];
        if ( (*(_BYTE *)(v46 + v45 + 3) & 0x40) != 0
          && (*(_BYTE *)(v46 + v80 + 3) & 0x40) != 0
          && ((*(_BYTE *)(v72 + 20) & 1) != 0 || *(_DWORD *)(v72 + 16) != 1) )
        {
          sub_992B90((__int64)v89, v72);
          sub_992D20((__int64)&v93, (__int64)a7, (__int64)v89);
          v47 = *(_DWORD *)a7;
          *(_DWORD *)a7 = v93;
          LODWORD(v93) = v47;
          v48 = a7[1];
          a7[1] = v94;
          v94 = v48;
          v49 = *((_BYTE *)a7 + 4) & 0xFC | BYTE4(v93) & 2 | BYTE4(v93) & 1;
          BYTE4(v93) = *((_BYTE *)a7 + 4) & 1 | BYTE4(v93) & 0xFC | *((_BYTE *)a7 + 4) & 2;
          *((_BYTE *)a7 + 4) = v49;
          v50 = v95;
          LODWORD(v95) = *((_DWORD *)a7 + 4);
          v51 = a7[3];
          *((_DWORD *)a7 + 4) = v50;
          v52 = v96;
          v96 = v51;
          LOBYTE(v51) = *((_BYTE *)a7 + 20);
          a7[3] = v52;
          LOBYTE(v52) = v51 & 0xFC | BYTE4(v95) & 2 | BYTE4(v95) & 1;
          BYTE4(v95) = v51 & 1 | BYTE4(v95) & 0xFC | v51 & 2;
          *((_BYTE *)a7 + 20) = v52;
          sub_25A130((char *)&v93);
          sub_25A130(v89);
        }
        v53 = *(_QWORD *)(a1[85] + 8LL * v44);
        v54 = *(void **)(a1[86] + 8LL * v44);
        if ( *(int *)v72 >= 0 )
          break;
        if ( !v53 )
          goto LABEL_55;
        v73 = *(void **)(a1[86] + 8LL * v44);
        sub_992E80((__int64)v89, (__int64)v74, v53 + 16);
        sub_9AFE60((__int64)&v93, (__int64)v89, v72);
        sub_89A7E0((__int64)v85, (__int64)v9, (__int64)&v93);
        v55 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v97);
        sub_182CBA0(v55, &v99);
        v56 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v93);
        sub_182CBA0(v56, &v95);
        v57 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v91);
        sub_182CBA0(v57, v92);
        v58 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v89);
        sub_182CBA0(v58, v90);
        v59 = v73;
        if ( *a3 || (v60 = sub_927C80(a4, (__int64)v85), v59 = v73, v60) )
        {
          v68 = v59;
          sub_98B520(a4, v85);
          v59 = v68;
          *a3 = 0;
LABEL_53:
          if ( !*a5 )
          {
            v70 = v59;
            v66 = sub_9B0850(a4, a6);
            v59 = v70;
            if ( v66 )
            {
LABEL_90:
              sub_25A130(v87);
              sub_25A130((char *)v85);
              return 1;
            }
          }
          goto LABEL_54;
        }
        if ( !*a3 )
          goto LABEL_53;
LABEL_54:
        v69 = v59;
        sub_25A130(v87);
        sub_25A130((char *)v85);
        v54 = v69;
LABEL_55:
        if ( !v54 )
          goto LABEL_39;
        sub_992E80((__int64)v89, (__int64)v74, (__int64)v54 + 16);
        sub_9AFE60((__int64)&v93, (__int64)v89, v72);
        sub_89A7E0((__int64)v85, (__int64)v9, (__int64)&v93);
        v61 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v97);
        sub_182CBA0(v61, &v99);
        v62 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v93);
        sub_182CBA0(v62, &v95);
        v63 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v91);
        sub_182CBA0(v63, v92);
        sub_25A130(v89);
        if ( *a5 || sub_927C80((__int64)v85, a6) )
        {
          sub_98B520(a6, v85);
          *a5 = 0;
          if ( *a3 )
            goto LABEL_59;
        }
        else if ( *a3 || *a5 )
        {
          goto LABEL_59;
        }
        if ( sub_9B0850(a4, a6) )
          goto LABEL_90;
LABEL_59:
        v10 += 2;
        sub_25A130(v87);
        sub_25A130((char *)v85);
        if ( v10 == v67 )
          return 1;
      }
      if ( v54 )
        break;
LABEL_26:
      if ( v53 )
      {
        sub_992E80((__int64)v85, (__int64)v74, v53 + 16);
        sub_9AFE60((__int64)v89, (__int64)v85, v72);
        v93 = 0;
        v31 = qword_1C7F2C0;
        v94 = 0;
        v95 = 1;
        v96 = 0;
        if ( (v9[1] & 1) != 0 )
        {
          sub_182C690(qword_1C7F2C0, &v93, v9);
          if ( (v9[5] & 1) != 0 )
            goto LABEL_86;
LABEL_29:
          v32 = v9[4];
          BYTE4(v95) &= ~1u;
          LODWORD(v95) = v32;
        }
        else
        {
          LODWORD(v93) = *v9;
          if ( (v9[5] & 1) == 0 )
            goto LABEL_29;
LABEL_86:
          sub_182C690(v31, &v95, v9 + 4);
        }
        v97 = 0;
        v33 = qword_1C7F2C0;
        v98 = 0;
        v99 = 1;
        v100 = 0;
        if ( (v9[9] & 1) != 0 )
          sub_182C690(qword_1C7F2C0, &v97, v9 + 8);
        else
          LODWORD(v97) = v9[8];
        if ( (v9[13] & 1) != 0 )
        {
          sub_182C690(v33, &v99, v9 + 12);
        }
        else
        {
          v34 = v9[12];
          BYTE4(v99) &= ~1u;
          LODWORD(v99) = v34;
        }
        sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v93, (__int64)v89, (__int64)&v93);
        sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v97, (__int64)v91, (__int64)&v97);
        sub_91F480((__int64)v81, (__int64)&v93);
        v71 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v97);
        sub_182CBA0(v71, &v99);
        v35 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v93);
        sub_182CBA0(v35, &v95);
        v36 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v91);
        sub_182CBA0(v36, v92);
        v37 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v89);
        sub_182CBA0(v37, v90);
        v38 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v87);
        sub_182CBA0(v38, v88);
        v39 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v85);
        sub_182CBA0(v39, v86);
        if ( *a5 || sub_927C80((__int64)v81, a6) )
        {
          sub_98B520(a6, v81);
          *a5 = 0;
          if ( *a3 )
          {
LABEL_38:
            v40 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v83);
            sub_182CBA0(v40, v84);
            v41 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v81);
            sub_182CBA0(v41, v82);
            goto LABEL_39;
          }
        }
        else if ( *a3 || *a5 )
        {
          goto LABEL_38;
        }
        if ( sub_9B0850(a4, a6) )
          goto LABEL_75;
        goto LABEL_38;
      }
LABEL_39:
      v10 += 2;
      if ( v10 == v67 )
        return 1;
    }
    sub_992E80((__int64)v85, (__int64)v74, (__int64)v54 + 16);
    sub_9AFE60((__int64)v89, (__int64)v85, v72);
    v93 = 0;
    v20 = qword_1C7F2C0;
    v94 = 0;
    v95 = 1;
    v96 = 0;
    if ( (v9[1] & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v93, v9);
    else
      LODWORD(v93) = *v9;
    if ( (v9[5] & 1) != 0 )
    {
      sub_182C690(v20, &v95, v9 + 4);
    }
    else
    {
      v21 = v9[4];
      BYTE4(v95) &= ~1u;
      LODWORD(v95) = v21;
    }
    v97 = 0;
    v22 = qword_1C7F2C0;
    v98 = 0;
    v99 = 1;
    v100 = 0;
    if ( (v9[9] & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v97, v9 + 8);
    else
      LODWORD(v97) = v9[8];
    if ( (v9[13] & 1) != 0 )
    {
      sub_182C690(v22, &v99, v9 + 12);
    }
    else
    {
      v23 = v9[12];
      BYTE4(v99) &= ~1u;
      LODWORD(v99) = v23;
    }
    sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v93, (__int64)v89, (__int64)&v93);
    sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v97, (__int64)v91, (__int64)&v97);
    sub_91F480((__int64)v81, (__int64)&v93);
    v79 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v97);
    sub_182CBA0(v79, &v99);
    v24 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v93);
    sub_182CBA0(v24, &v95);
    v25 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v91);
    sub_182CBA0(v25, v92);
    v26 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v89);
    sub_182CBA0(v26, v90);
    v27 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v87);
    sub_182CBA0(v27, v88);
    v28 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v85);
    sub_182CBA0(v28, v86);
    if ( *a3 || sub_927C80(a4, (__int64)v81) )
    {
      sub_98B520(a4, v81);
      *a3 = 0;
    }
    else if ( *a3 )
    {
LABEL_25:
      v29 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v83);
      sub_182CBA0(v29, v84);
      v30 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v81);
      sub_182CBA0(v30, v82);
      goto LABEL_26;
    }
    if ( !*a5 && sub_9B0850(a4, a6) )
    {
LABEL_75:
      sub_25A130(v83);
      sub_25A130((char *)v81);
      return 1;
    }
    goto LABEL_25;
  }
  return 0;
}

