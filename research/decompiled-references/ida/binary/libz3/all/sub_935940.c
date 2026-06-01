void __fastcall sub_935940(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned int *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r15
  _QWORD *v6; // rsi
  _DWORD *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 v10; // rbp
  int v11; // r12d
  _DWORD *v12; // rsi
  void *v13; // rdi
  __int64 v14; // r12
  _DWORD *v15; // rbp
  unsigned int v16; // eax
  void *v17; // r15
  unsigned int v18; // eax
  void *v19; // r15
  unsigned int v20; // eax
  _QWORD *v21; // r8
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  void *v27; // r15
  void *v28; // r15
  void *v29; // r15
  unsigned int v30; // eax
  unsigned int v31; // eax
  void *v32; // rbx
  unsigned int v33; // eax
  unsigned int v34; // eax
  __int64 v35; // rax
  unsigned int v36; // r13d
  void *v37; // r15
  int v38; // eax
  int v39; // eax
  void *v40; // r15
  int v41; // eax
  int v42; // eax
  void *v43; // rdi
  int *v44; // rdx
  unsigned int *v45; // rcx
  unsigned int *v46; // r14
  unsigned int v47; // r9d
  size_t v48; // rdi
  unsigned int *v49; // r10
  unsigned int v50; // r9d
  _DWORD *v51; // r15
  __int64 v52; // rax
  _DWORD *v53; // rdx
  _DWORD *v54; // r11
  _DWORD *i; // rax
  int v56; // ecx
  char v57; // si
  __int64 v58; // rcx
  char v59; // si
  __int64 v60; // rcx
  char v61; // si
  __int64 v62; // rcx
  char v63; // si
  __int64 v64; // rcx
  __int64 v65; // rax
  _DWORD *v66; // rbp
  void *v67; // r12
  void *v68; // r12
  _DWORD *v69; // rsi
  void *v70; // r15
  bool v71; // al
  bool v72; // al
  _QWORD *v73; // rax
  char **exception; // rbp
  _QWORD *v75; // [rsp+8h] [rbp-190h]
  int *v76; // [rsp+8h] [rbp-190h]
  _DWORD *v78; // [rsp+18h] [rbp-180h]
  int *v79; // [rsp+20h] [rbp-178h]
  __int64 v80; // [rsp+30h] [rbp-168h]
  __int64 v81; // [rsp+30h] [rbp-168h]
  _DWORD *v82; // [rsp+38h] [rbp-160h]
  _QWORD *v83; // [rsp+68h] [rbp-130h]
  int v84; // [rsp+70h] [rbp-128h]
  unsigned int v85; // [rsp+74h] [rbp-124h]
  __int64 v86; // [rsp+78h] [rbp-120h]
  unsigned int v87; // [rsp+80h] [rbp-118h]
  _DWORD *v88; // [rsp+80h] [rbp-118h]
  _QWORD *v89; // [rsp+80h] [rbp-118h]
  _DWORD *v90; // [rsp+88h] [rbp-110h]
  __int64 v91; // [rsp+90h] [rbp-108h]
  unsigned int v92; // [rsp+90h] [rbp-108h]
  _DWORD *v93; // [rsp+98h] [rbp-100h]
  unsigned int *v94; // [rsp+98h] [rbp-100h]
  unsigned int v95; // [rsp+A4h] [rbp-F4h]
  unsigned int *v96; // [rsp+A8h] [rbp-F0h]
  __int64 v97[4]; // [rsp+B0h] [rbp-E8h] BYREF
  _QWORD v98[2]; // [rsp+D0h] [rbp-C8h] BYREF
  _QWORD v99[2]; // [rsp+E0h] [rbp-B8h] BYREF
  _QWORD v100[2]; // [rsp+F0h] [rbp-A8h] BYREF
  _QWORD v101[2]; // [rsp+100h] [rbp-98h] BYREF
  __int64 v102; // [rsp+110h] [rbp-88h]
  __int64 v103; // [rsp+118h] [rbp-80h] BYREF
  __int64 v104; // [rsp+120h] [rbp-78h]
  __int64 v105; // [rsp+128h] [rbp-70h] BYREF
  __int64 v106; // [rsp+130h] [rbp-68h]
  __int64 v107; // [rsp+138h] [rbp-60h] BYREF
  __int64 v108; // [rsp+140h] [rbp-58h]
  __int64 v109; // [rsp+148h] [rbp-50h] BYREF
  __int64 v110; // [rsp+150h] [rbp-48h]

  v1 = a1[38];
  if ( v1 )
  {
    v85 = *(_DWORD *)(v1 - 4) - 1;
    v2 = 80LL * v85;
  }
  else
  {
    v85 = -1;
    v2 = 0x4FFFFFFFB0LL;
  }
  v3 = (unsigned int *)(v2 + v1);
  v4 = v3[1];
  v5 = *v3;
  v98[0] = 0;
  v6 = (_QWORD *)a1[39];
  v99[0] = 1;
  v84 = v4;
  v7 = (_DWORD *)a1[49];
  v100[0] = 0;
  v101[0] = 1;
  v8 = v6[v4];
  v98[1] = 0;
  v99[1] = 0;
  v100[1] = 0;
  v101[1] = 0;
  v75 = v6;
  v90 = v7;
  if ( !v8 || (v9 = v8 + 80LL * *(unsigned int *)(v8 - 4), v8 == v9) )
  {
    v78 = v7;
  }
  else
  {
    v78 = v7;
    v10 = v8 + 40;
    v11 = 0;
    v79 = (int *)(v3 + 10);
    v76 = (int *)(v3 + 2);
    v80 = -40 - v8;
    while ( 1 )
    {
      if ( *(_DWORD *)(v10 - 40) != -1 && (_DWORD)v5 != v11 )
      {
        sub_27B950((__int64)qword_1C7F2C0, (__int64)v98, v76);
        sub_27B950((__int64)qword_1C7F2C0, (__int64)v100, v79);
        sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v98, v10 - 32, (__int64)v98);
        sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v100, v10, (__int64)v100);
        v12 = (_DWORD *)(*(_QWORD *)(a1[39] + 8LL * (unsigned int)v5) + v80 + v10);
        if ( *v12 == -1 || sub_927C80((__int64)v98, (__int64)(v12 + 2)) )
        {
          v13 = qword_1C7F2C0;
          *v78 = v11;
          sub_27B950((__int64)v13, (__int64)(v78 + 2), (int *)v98);
          sub_27B950((__int64)qword_1C7F2C0, (__int64)(v78 + 10), (int *)v100);
          v78 += 18;
        }
      }
      ++v11;
      if ( v9 == v10 + 40 )
        break;
      v10 += 80;
    }
    v75 = (_QWORD *)a1[39];
  }
  if ( v75 )
  {
    v83 = &v75[*((unsigned int *)v75 - 1)];
    if ( v83 != v75 )
    {
      v81 = 0;
      v86 = 80 * v5;
      while ( 1 )
      {
        if ( v84 != (_DWORD)v81 )
        {
          v14 = *v75 + v86;
          if ( *(_DWORD *)v14 != -1 )
          {
            v15 = v90;
            if ( v78 != v90 )
              break;
          }
        }
LABEL_17:
        ++v75;
        ++v81;
        if ( v75 == v83 )
          goto LABEL_100;
      }
      while ( 1 )
      {
        v36 = *v15;
        if ( *v15 == (_DWORD)v81 )
          goto LABEL_46;
        v37 = qword_1C7F2C0;
        if ( (*(_BYTE *)(v14 + 12) & 1) != 0 )
        {
          sub_182C690(qword_1C7F2C0, v98, v14 + 8);
          if ( (*(_BYTE *)(v14 + 28) & 1) == 0 )
          {
LABEL_50:
            v39 = *(_DWORD *)(v14 + 24);
            BYTE4(v99[0]) &= ~1u;
            v40 = qword_1C7F2C0;
            LODWORD(v99[0]) = v39;
            if ( (*(_BYTE *)(v14 + 44) & 1) == 0 )
              goto LABEL_51;
            goto LABEL_61;
          }
        }
        else
        {
          v38 = *(_DWORD *)(v14 + 8);
          BYTE4(v98[0]) &= ~1u;
          LODWORD(v98[0]) = v38;
          if ( (*(_BYTE *)(v14 + 28) & 1) == 0 )
            goto LABEL_50;
        }
        sub_182C690(v37, v99, v14 + 24);
        v40 = qword_1C7F2C0;
        if ( (*(_BYTE *)(v14 + 44) & 1) == 0 )
        {
LABEL_51:
          v41 = *(_DWORD *)(v14 + 40);
          BYTE4(v100[0]) &= ~1u;
          LODWORD(v100[0]) = v41;
          if ( (*(_BYTE *)(v14 + 60) & 1) == 0 )
            goto LABEL_52;
          goto LABEL_62;
        }
LABEL_61:
        sub_182C690(v40, v100, v14 + 40);
        if ( (*(_BYTE *)(v14 + 60) & 1) == 0 )
        {
LABEL_52:
          v42 = *(_DWORD *)(v14 + 56);
          BYTE4(v101[0]) &= ~1u;
          v43 = qword_1C7F2C0;
          LODWORD(v101[0]) = v42;
          if ( !v15[2] )
            goto LABEL_63;
          goto LABEL_53;
        }
LABEL_62:
        sub_182C690(v40, v101, v14 + 56);
        v43 = qword_1C7F2C0;
        if ( !v15[2] )
        {
LABEL_63:
          if ( (v98[0] & 0x100000000LL) != 0 )
            sub_182C690(v43, v98, v98);
          else
            BYTE4(v98[0]) &= ~1u;
          if ( (v99[0] & 0x100000000LL) != 0 )
            sub_182C690(v43, v99, v99);
          else
            BYTE4(v99[0]) &= ~1u;
          goto LABEL_57;
        }
LABEL_53:
        v44 = v15 + 2;
        if ( LODWORD(v98[0]) )
        {
          if ( (v99[0] & 0x100000000LL) != 0 || LODWORD(v99[0]) != 1 || (v15[7] & 1) != 0 || v15[6] != 1 )
          {
            sub_1851D20(v43, v98, v44, v98);
          }
          else
          {
            sub_1831A80(v43, v98, v44, v98);
            sub_182CBA0(v43, v99);
            BYTE4(v99[0]) &= ~1u;
            LODWORD(v99[0]) = 1;
          }
        }
        else
        {
          sub_27B950((__int64)v43, (__int64)v98, v44);
        }
LABEL_57:
        sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v100, (__int64)(v15 + 10), (__int64)v100);
        v45 = (unsigned int *)(*(_QWORD *)(a1[39] + 8 * v81) + 80LL * v36);
        v16 = *v45;
        v46 = v45;
        if ( *v45 == -1 )
        {
          v82 = v45 + 2;
          goto LABEL_24;
        }
        v82 = v45 + 2;
        if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)v98, (__int64)(v45 + 2))
          || ((v70 = qword_1C7F2C0, (v98[0] & 0x100000000LL) != 0) || (v46[3] & 1) != 0
            ? (v71 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v98, v82) == 0)
            : (v71 = LODWORD(v98[0]) == v46[2]),
              v71
           && ((v99[0] & 0x100000000LL) != 0 || (v46[7] & 1) != 0
             ? (v72 = (unsigned int)sub_182C7B0(v70, v99, v46 + 6) == 0)
             : (v72 = LODWORD(v99[0]) == v46[6]),
               v72 && sub_3ED700((__int64)qword_1C7F2C0, (__int64)v100, (__int64)(v46 + 10)))) )
        {
          v16 = *v46;
LABEL_24:
          v17 = qword_1C7F2C0;
          WORD1(v102) = v36;
          HIDWORD(v102) = v16;
          LOWORD(v102) = v81;
          v103 = 0;
          v104 = 0;
          v105 = 1;
          v106 = 0;
          if ( (v46[3] & 1) != 0 )
            sub_182C690(qword_1C7F2C0, &v103, v82);
          else
            LODWORD(v103) = v46[2];
          if ( (v46[7] & 1) != 0 )
          {
            sub_182C690(v17, &v105, v46 + 6);
          }
          else
          {
            v18 = v46[6];
            BYTE4(v105) &= ~1u;
            LODWORD(v105) = v18;
          }
          v19 = qword_1C7F2C0;
          v107 = 0;
          v108 = 0;
          v109 = 1;
          v110 = 0;
          if ( (v46[11] & 1) != 0 )
            sub_182C690(qword_1C7F2C0, &v107, v46 + 10);
          else
            LODWORD(v107) = v46[10];
          if ( (v46[15] & 1) != 0 )
          {
            sub_182C690(v19, &v109, v46 + 14);
          }
          else
          {
            v20 = v46[14];
            BYTE4(v109) &= ~1u;
            LODWORD(v109) = v20;
          }
          v21 = (_QWORD *)a1[41];
          if ( v21 )
          {
            v22 = *((unsigned int *)v21 - 1);
            if ( (_DWORD)v22 == *((_DWORD *)v21 - 2) )
            {
              v47 = (unsigned int)(3 * v22 + 1) >> 1;
              v48 = 72 * v47 + 8;
              if ( 72 * (int)v22 + 8 >= (unsigned int)v48 || (unsigned int)v22 >= v47 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_91CD50(v97, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v97);
                sub_233E40((__int64)v97);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v87 = (unsigned int)(3 * v22 + 1) >> 1;
              v49 = (unsigned int *)sub_186B270(v48);
              v50 = v87;
              v21 = v49 + 2;
              v51 = (_DWORD *)a1[41];
              if ( v51 )
              {
                v52 = (unsigned int)*(v51 - 1);
                v53 = v49 + 2;
                v49[1] = v52;
                v54 = &v51[18 * v52];
                for ( i = v51; v54 != i; *((_QWORD *)v53 - 1) = v64 )
                {
                  v56 = *i;
                  v57 = *((_BYTE *)v53 + 12);
                  i += 18;
                  v53 += 18;
                  *(v53 - 18) = v56;
                  *(v53 - 17) = *(i - 17);
                  *(v53 - 16) = *(i - 16);
                  *((_BYTE *)v53 - 60) = v57 & 0xFC | *(_BYTE *)(i - 15) & 3;
                  v58 = *((_QWORD *)i - 7);
                  *((_QWORD *)i - 7) = 0;
                  v59 = *((_BYTE *)v53 - 44);
                  *((_QWORD *)v53 - 7) = v58;
                  *(v53 - 12) = *(i - 12);
                  *((_BYTE *)v53 - 44) = v59 & 0xFC | *(_BYTE *)(i - 11) & 3;
                  v60 = *((_QWORD *)i - 5);
                  *((_QWORD *)i - 5) = 0;
                  v61 = *((_BYTE *)v53 - 28);
                  *((_QWORD *)v53 - 5) = v60;
                  *(v53 - 8) = *(i - 8);
                  *((_BYTE *)v53 - 28) = v61 & 0xFC | *(_BYTE *)(i - 7) & 3;
                  v62 = *((_QWORD *)i - 3);
                  *((_QWORD *)i - 3) = 0;
                  v63 = *((_BYTE *)v53 - 12);
                  *((_QWORD *)v53 - 3) = v62;
                  *(v53 - 4) = *(i - 4);
                  *((_BYTE *)v53 - 12) = v63 & 0xFC | *(_BYTE *)(i - 3) & 3;
                  v64 = *((_QWORD *)i - 1);
                  *((_QWORD *)i - 1) = 0;
                }
                v65 = (unsigned int)*(v51 - 1);
                if ( (_DWORD)v65 )
                {
                  v91 = v14;
                  v93 = v49 + 2;
                  v95 = v87;
                  v96 = v49;
                  v88 = v15;
                  v66 = &v51[18 * v65];
                  do
                  {
                    v67 = qword_1C7F2C0;
                    sub_182CBA0(qword_1C7F2C0, v51 + 10);
                    sub_182CBA0(v67, v51 + 14);
                    v68 = qword_1C7F2C0;
                    sub_182CBA0(qword_1C7F2C0, v51 + 2);
                    v69 = v51 + 6;
                    v51 += 18;
                    sub_182CBA0(v68, v69);
                  }
                  while ( v66 != v51 );
                  v15 = v88;
                  v14 = v91;
                  v21 = v93;
                  v50 = v95;
                  v49 = v96;
                  v51 = (_DWORD *)a1[41];
                }
                v94 = v49;
                v92 = v50;
                v89 = v21;
                sub_186B220(v51 - 2);
                v49 = v94;
                v21 = v89;
                v50 = v92;
                v23 = &v89[9 * v94[1]];
              }
              else
              {
                v49[1] = 0;
                v23 = v49 + 2;
              }
              *v49 = v50;
              a1[41] = v21;
            }
            else
            {
              v23 = &v21[9 * v22];
            }
          }
          else
          {
            v73 = (_QWORD *)sub_186B270(0x98u);
            v21 = v73 + 1;
            *v73 = 2;
            a1[41] = v73 + 1;
            v23 = v73 + 1;
          }
          *v23 = v102;
          *((_DWORD *)v23 + 2) = v103;
          *((_BYTE *)v23 + 12) = BYTE4(v103) & 3 | *((_BYTE *)v23 + 12) & 0xFC;
          v24 = v104;
          v104 = 0;
          v23[2] = v24;
          *((_DWORD *)v23 + 6) = v105;
          *((_BYTE *)v23 + 28) = BYTE4(v105) & 3 | *((_BYTE *)v23 + 28) & 0xFC;
          v25 = v106;
          v106 = 0;
          v23[4] = v25;
          *((_DWORD *)v23 + 10) = v107;
          *((_BYTE *)v23 + 44) = BYTE4(v107) & 3 | *((_BYTE *)v23 + 44) & 0xFC;
          v26 = v108;
          v108 = 0;
          v23[6] = v26;
          *((_DWORD *)v23 + 14) = v109;
          *((_BYTE *)v23 + 60) = BYTE4(v109) & 3 | *((_BYTE *)v23 + 60) & 0xFC;
          v23[8] = v110;
          v27 = qword_1C7F2C0;
          v110 = 0;
          ++*((_DWORD *)v21 - 1);
          sub_182CBA0(v27, &v107);
          sub_182CBA0(v27, &v109);
          v28 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v103);
          sub_182CBA0(v28, &v105);
          v29 = qword_1C7F2C0;
          *v46 = v85;
          if ( (v98[0] & 0x100000000LL) != 0 )
          {
            sub_182C690(v29, v82, v98);
          }
          else
          {
            v30 = v98[0];
            *((_BYTE *)v46 + 12) &= ~1u;
            v46[2] = v30;
          }
          if ( (v99[0] & 0x100000000LL) != 0 )
          {
            sub_182C690(v29, v46 + 6, v99);
          }
          else
          {
            v31 = v99[0];
            *((_BYTE *)v46 + 28) &= ~1u;
            v46[6] = v31;
          }
          v32 = qword_1C7F2C0;
          if ( (v100[0] & 0x100000000LL) != 0 )
          {
            sub_182C690(qword_1C7F2C0, v46 + 10, v100);
          }
          else
          {
            v33 = v100[0];
            *((_BYTE *)v46 + 44) &= ~1u;
            v46[10] = v33;
          }
          if ( (v101[0] & 0x100000000LL) != 0 )
          {
            sub_182C690(v32, v46 + 14, v101);
          }
          else
          {
            v34 = v101[0];
            *((_BYTE *)v46 + 60) &= ~1u;
            v46[14] = v34;
          }
          v35 = *((_QWORD *)v46 + 9);
          if ( v35 && *(_DWORD *)(v35 - 4) )
            sub_935670((__int64)a1, v81, v36);
        }
LABEL_46:
        v15 += 18;
        if ( v15 == v78 )
          goto LABEL_17;
      }
    }
  }
LABEL_100:
  sub_25A130((char *)v100);
  sub_25A130((char *)v98);
}

