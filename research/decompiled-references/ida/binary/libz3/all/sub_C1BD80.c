__int64 __fastcall sub_C1BD80(__int64 **a1, __int64 a2, int a3, __int64 a4, __int64 *a5, __int64 *a6)
{
  _DWORD *v6; // rax
  unsigned int v8; // edx
  _DWORD *v11; // r9
  __int64 *v13; // rcx
  int v15; // ebx
  __int64 v17; // rax
  _QWORD *v18; // rsi
  __int64 v19; // rax
  int v20; // edi
  unsigned int v21; // edx
  _QWORD *v22; // r10
  __int64 v23; // rdx
  _QWORD *v24; // r8
  _QWORD *v25; // rax
  _DWORD *v26; // rdx
  void *v27; // rbx
  int v28; // edx
  void *v29; // rbx
  _DWORD *v30; // rax
  char *v31; // rcx
  void *v32; // r9
  void *v33; // rdi
  _QWORD *v34; // rax
  int v35; // edx
  int v36; // eax
  __int64 v37; // rsi
  void *v38; // rdi
  __int64 *v39; // r10
  _QWORD *v40; // r9
  __int64 v41; // r8
  int v42; // esi
  __int64 *v43; // rdx
  unsigned int v44; // r11d
  __int64 v45; // r8
  __int64 *v46; // rcx
  __int64 v47; // r11
  __int64 *v48; // rdi
  __int64 *v49; // rax
  __int64 v50; // rax
  __int64 v51; // r11
  __int64 v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rsi
  __int64 v55; // rdi
  bool v56; // zf
  __int64 *v57; // rax
  _QWORD *v58; // rcx
  __int64 v59; // rax
  int v60; // edi
  unsigned int v61; // edx
  _QWORD *v62; // rsi
  __int64 v63; // rdx
  _QWORD *v64; // r8
  _QWORD *v65; // rdx
  _QWORD *v66; // rax
  int v67; // esi
  int v68; // ebx
  int v69; // eax
  __int64 v70; // rbx
  __int64 v71; // rsi
  __int64 v72; // rdi
  void *v73; // rbx
  void *v74; // rbx
  int v75; // [rsp-8h] [rbp-118h]
  int v76; // [rsp+0h] [rbp-110h]
  int v77; // [rsp+0h] [rbp-110h]
  int v78; // [rsp+8h] [rbp-108h]
  int v79; // [rsp+10h] [rbp-100h]
  int v80; // [rsp+10h] [rbp-100h]
  __int64 v81; // [rsp+10h] [rbp-100h]
  _QWORD *v82; // [rsp+18h] [rbp-F8h]
  int v83; // [rsp+18h] [rbp-F8h]
  int v84[2]; // [rsp+20h] [rbp-F0h]
  __int64 v85; // [rsp+20h] [rbp-F0h]
  int v86[2]; // [rsp+20h] [rbp-F0h]
  int v87[2]; // [rsp+20h] [rbp-F0h]
  _QWORD *v88; // [rsp+28h] [rbp-E8h]
  __int64 *v89; // [rsp+28h] [rbp-E8h]
  __int64 v90; // [rsp+28h] [rbp-E8h]
  int v91; // [rsp+30h] [rbp-E0h]
  char v92; // [rsp+30h] [rbp-E0h]
  void *v93; // [rsp+38h] [rbp-D8h]
  _QWORD *v94; // [rsp+38h] [rbp-D8h]
  _QWORD *v95; // [rsp+38h] [rbp-D8h]
  void *v96; // [rsp+38h] [rbp-D8h]
  int v97; // [rsp+38h] [rbp-D8h]
  char *v98; // [rsp+40h] [rbp-D0h]
  _QWORD *v99; // [rsp+40h] [rbp-D0h]
  char *v100; // [rsp+40h] [rbp-D0h]
  int v101; // [rsp+40h] [rbp-D0h]
  _QWORD *v102; // [rsp+48h] [rbp-C8h]
  void *v103; // [rsp+48h] [rbp-C8h]
  void *v104; // [rsp+48h] [rbp-C8h]
  int v105[2]; // [rsp+58h] [rbp-B8h]
  unsigned int v106; // [rsp+58h] [rbp-B8h]
  __int64 v107; // [rsp+68h] [rbp-A8h] BYREF
  _QWORD v108[2]; // [rsp+70h] [rbp-A0h] BYREF
  _QWORD v109[2]; // [rsp+80h] [rbp-90h] BYREF
  _QWORD v110[2]; // [rsp+90h] [rbp-80h] BYREF
  _QWORD v111[2]; // [rsp+A0h] [rbp-70h] BYREF
  _DWORD *v112; // [rsp+B0h] [rbp-60h] BYREF
  __int64 v113; // [rsp+B8h] [rbp-58h] BYREF
  __int64 v114; // [rsp+C0h] [rbp-50h] BYREF
  _QWORD v115[9]; // [rsp+C8h] [rbp-48h] BYREF

  v6 = *(_DWORD **)(a2 + 24);
  *(_QWORD *)v105 = a4;
  if ( !v6 )
    return 5;
  v8 = 5;
  if ( *v6 == 5 && v6[1] == 22 )
  {
    v11 = *(_DWORD **)a4;
    if ( !*(_WORD *)(*(_QWORD *)a4 + 4LL) )
    {
      v13 = *a1;
      v15 = a2;
      v17 = **a1;
      v113 = 0;
      v115[0] = 1;
      v18 = (_QWORD *)v13[3];
      v91 = v17;
      v19 = *((unsigned int *)v13 + 8);
      v109[0] = 1;
      v20 = v11[3];
      v21 = v19 - 1;
      v108[0] = 0;
      v19 *= 40;
      v108[1] = 0;
      v112 = v11;
      v22 = (_QWORD *)((char *)v18 + v19);
      v23 = 40LL * (v20 & v21);
      v114 = 0;
      v109[1] = 0;
      v24 = &v18[(unsigned __int64)v23 / 8];
      v115[1] = 0;
      if ( v23 != v19 )
      {
        v25 = &v18[(unsigned __int64)v23 / 8];
        do
        {
          v26 = (_DWORD *)*v25;
          if ( *v25 > 1u )
          {
            if ( v26[3] == v20 && v11 == v26 )
            {
              *(_QWORD *)v105 = a4;
              goto LABEL_26;
            }
          }
          else if ( !v26 )
          {
            goto LABEL_13;
          }
          v25 += 5;
        }
        while ( v22 != v25 );
        *(_QWORD *)v105 = a4;
      }
      while ( v24 != v18 )
      {
        v30 = (_DWORD *)*v18;
        if ( *v18 > 1u )
        {
          if ( v30[3] == v20 && v11 == v30 )
          {
            v25 = v18;
LABEL_26:
            v88 = v25;
            v93 = v11;
            v98 = (char *)v13;
            v103 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v113);
            sub_182CBA0(v103, v115);
            v31 = v98;
            v32 = v93;
            v33 = qword_1C7F2C0;
            v34 = v88;
            if ( (*((_BYTE *)v88 + 12) & 1) != 0 )
            {
              v102 = v108;
              sub_182C690(qword_1C7F2C0, v108, v88 + 1);
              v32 = v93;
              v31 = v98;
              v34 = v88;
            }
            else
            {
              v35 = *((_DWORD *)v88 + 2);
              BYTE4(v108[0]) &= ~1u;
              v102 = v108;
              LODWORD(v108[0]) = v35;
            }
            if ( (*((_BYTE *)v34 + 28) & 1) != 0 )
            {
              v96 = v32;
              v100 = v31;
              sub_182C690(v33, v109, v34 + 3);
              v32 = v96;
              v31 = v100;
            }
            else
            {
              v36 = *((_DWORD *)v34 + 6);
              BYTE4(v109[0]) &= ~1u;
              LODWORD(v109[0]) = v36;
            }
            v94 = v32;
            v110[0] = 0;
            v37 = *(_QWORD *)(*(_QWORD *)v105 + 8LL);
            v110[1] = 0;
            v111[0] = 1;
            v111[1] = 0;
            v99 = v110;
            if ( !(unsigned __int8)sub_1666AE0(v31 + 8, v37, v110, &v107) )
            {
              sub_1872CE0("");
              sub_1873130(114, 65);
            }
            v82 = v94;
            BYTE4(v112) &= 0xFCu;
            v38 = qword_1C7F2C0;
            BYTE4(v114) &= 0xFCu;
            LODWORD(v112) = 0;
            v113 = 0;
            LODWORD(v114) = 1;
            v115[0] = 0;
            v95 = &v112;
            sub_1833EB0(qword_1C7F2C0, v110, v108, &v112);
            v89 = &v114;
            sub_182CBA0(v38, &v114);
            v39 = *a1;
            v40 = v82;
            LODWORD(v114) = 1;
            BYTE4(v114) &= ~1u;
            v41 = *((unsigned int *)v39 + 14);
            v42 = *((_DWORD *)v82 + 3);
            v43 = (__int64 *)v39[6];
            v44 = v41 - 1;
            v45 = 16 * v41;
            v46 = (__int64 *)((char *)v43 + v45);
            v47 = 16LL * (v42 & v44);
            v48 = &v43[(unsigned __int64)v47 / 8];
            v49 = &v43[(unsigned __int64)v47 / 8];
            if ( v47 == v45 )
            {
LABEL_40:
              if ( v43 != v48 )
              {
                LODWORD(v46) = v105[0];
                do
                {
                  v50 = *v43;
                  if ( (unsigned __int64)*v43 > 1 )
                  {
                    if ( *(_DWORD *)(v50 + 12) == v42 && v82 == (_QWORD *)v50 )
                    {
                      v49 = v43;
                      goto LABEL_51;
                    }
                  }
                  else if ( !v50 )
                  {
                    break;
                  }
                  v43 += 2;
                }
                while ( v48 != v43 );
              }
LABEL_39:
              BUG();
            }
            while ( 1 )
            {
              v45 = *v49;
              if ( (unsigned __int64)*v49 > 1 )
              {
                if ( *(_DWORD *)(v45 + 12) == v42 && v82 == (_QWORD *)v45 )
                {
LABEL_51:
                  v51 = v49[1];
                  if ( (BYTE4(v112) & 1) != 0 || (_DWORD)v112 != 1 || (v114 & 0x100000000LL) != 0 )
                  {
                    v52 = v39[2];
                    if ( !v52 )
                    {
                      v81 = v49[1];
                      *(_QWORD *)v87 = v39;
                      sub_16669E0(v39 + 1);
                      v39 = *(__int64 **)v87;
                      LODWORD(v51) = v81;
                      v40 = v82;
                      v52 = *(_QWORD *)(*(_QWORD *)v87 + 16LL);
                    }
                    v79 = v51;
                    v82 = v39;
                    *(_QWORD *)v84 = v40;
                    sub_166A700(v52, (unsigned int)&v112, 0, (_DWORD)v46, v45, (_DWORD)v40);
                    v53 = sub_15E1B70(v82[1]);
                    v40 = *(_QWORD **)v84;
                    v51 = v53;
                  }
                  if ( v51 )
                    ++*(_DWORD *)(v51 + 8);
                  v54 = *a5;
                  if ( *a5 )
                  {
                    v55 = a5[1];
                    v56 = (*(_DWORD *)(v54 + 8))-- == 1;
                    if ( v56 )
                    {
                      v82 = (_QWORD *)v51;
                      *(_QWORD *)v86 = v40;
                      sub_15D7BC0(v55, v54);
                      v51 = (__int64)v82;
                      v40 = *(_QWORD **)v86;
                    }
                  }
                  v57 = *a1;
                  *a5 = v51;
                  if ( *((_BYTE *)v57 + 153) )
                  {
                    v58 = (_QWORD *)v57[9];
                    v59 = *((unsigned int *)v57 + 20);
                    v60 = *((_DWORD *)v40 + 3);
                    v61 = v59 - 1;
                    v59 *= 16;
                    v62 = (_QWORD *)((char *)v58 + v59);
                    v63 = 16LL * (v60 & v61);
                    v64 = &v58[(unsigned __int64)v63 / 8];
                    if ( v63 != v59 )
                    {
                      v65 = &v58[(unsigned __int64)v63 / 8];
                      do
                      {
                        v66 = (_QWORD *)*v65;
                        if ( *v65 > 1u )
                        {
                          if ( *((_DWORD *)v66 + 3) == v60 && v40 == v66 )
                          {
                            v66 = v65;
                            goto LABEL_69;
                          }
                        }
                        else if ( !v66 )
                        {
                          goto LABEL_69;
                        }
                        v65 += 2;
                      }
                      while ( v62 != v65 );
                    }
                    if ( v58 != v64 )
                    {
                      while ( 1 )
                      {
                        v66 = (_QWORD *)*v58;
                        if ( *v58 > 1u )
                        {
                          if ( *((_DWORD *)v66 + 3) == v60 && v40 == v66 )
                          {
                            v66 = v58;
                            goto LABEL_69;
                          }
                        }
                        else if ( !v66 )
                        {
                          goto LABEL_69;
                        }
                        v58 += 2;
                        if ( v64 == v58 )
                        {
                          v66 = nullptr;
                          goto LABEL_69;
                        }
                      }
                    }
                    v66 = nullptr;
LABEL_69:
                    v67 = v15;
                    v68 = v91;
                    v107 = v66[1];
                    sub_15DC610(
                      v91,
                      v67,
                      a3,
                      v105[0],
                      (int)v64,
                      (int)v40,
                      v76,
                      (int)&v107,
                      v79,
                      (int)v82,
                      v51,
                      (char)&v114,
                      v91,
                      (int)&v112,
                      (int)v110,
                      v108);
                    v69 = sub_15E1B70(v68);
                    v70 = sub_15E0A80(
                            v68,
                            5,
                            v69,
                            1,
                            v78,
                            0,
                            0,
                            v75,
                            v77,
                            v78,
                            v80,
                            v83,
                            v85,
                            v90,
                            v92,
                            v97,
                            v101,
                            v104);
                    if ( v70 )
                      ++*(_DWORD *)(v70 + 8);
                    v71 = *a6;
                    if ( *a6 )
                    {
                      v72 = a6[1];
                      v56 = (*(_DWORD *)(v71 + 8))-- == 1;
                      if ( v56 )
                        sub_15D7BC0(v72, v71);
                    }
                    *a6 = v70;
                  }
                  v73 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v95);
                  sub_182CBA0(v73, v89);
                  v74 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v99);
                  sub_182CBA0(v74, v111);
                  v28 = 4;
LABEL_14:
                  v106 = v28;
                  v29 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v102);
                  sub_182CBA0(v29, v109);
                  return v106;
                }
              }
              else if ( !v45 )
              {
                goto LABEL_39;
              }
              v49 += 2;
              if ( v46 == v49 )
                goto LABEL_40;
            }
          }
        }
        else if ( !v30 )
        {
          break;
        }
        v18 += 5;
      }
LABEL_13:
      v27 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v113);
      sub_182CBA0(v27, v115);
      v28 = 5;
      v102 = v108;
      goto LABEL_14;
    }
  }
  return v8;
}

