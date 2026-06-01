__int64 __fastcall sub_A580A0(__int64 a1, int **a2, char a3, __int64 a4, _BYTE *a5)
{
  unsigned int v6; // ebx
  __int64 v7; // rdi
  unsigned int v8; // eax
  char v9; // r14
  void *v10; // rbx
  void *v11; // rbx
  void *v12; // rbx
  void *v13; // rbx
  void *v14; // rbx
  void *v15; // rbx
  int *v16; // r13
  __int64 v17; // r8
  __int64 v18; // r14
  void *v19; // rdi
  unsigned int v20; // ebx
  void *v21; // r15
  int v22; // eax
  int v23; // eax
  char v24; // r15
  int v25; // eax
  bool v26; // al
  void *v27; // r15
  char v28; // al
  void *v29; // r15
  void *v30; // r15
  void *v31; // r15
  void *v32; // r15
  void *v33; // r15
  void *v34; // r15
  void *v35; // r15
  unsigned int v36; // ebx
  int *v38; // rax
  int v39; // eax
  int v40; // eax
  char v41; // al
  bool v42; // al
  __int64 v43; // rax
  __int64 v44; // rcx
  bool v45; // r13
  int v46; // edx
  __int64 *v47; // rbx
  int v48; // eax
  unsigned int v49; // [rsp+78h] [rbp-308h]
  signed int v50; // [rsp+7Ch] [rbp-304h]
  __int64 v51; // [rsp+88h] [rbp-2F8h]
  signed int v52; // [rsp+88h] [rbp-2F8h]
  bool v54; // [rsp+B8h] [rbp-2C8h]
  void *v55; // [rsp+B8h] [rbp-2C8h]
  __int64 v56; // [rsp+B8h] [rbp-2C8h]
  __int64 v57; // [rsp+B8h] [rbp-2C8h]
  __int64 v58; // [rsp+C0h] [rbp-2C0h]
  int *v59; // [rsp+D0h] [rbp-2B0h]
  unsigned int v60; // [rsp+D8h] [rbp-2A8h]
  bool v61; // [rsp+DEh] [rbp-2A2h]
  unsigned int v63; // [rsp+ECh] [rbp-294h] BYREF
  _QWORD v64[2]; // [rsp+F0h] [rbp-290h] BYREF
  _QWORD v65[2]; // [rsp+100h] [rbp-280h] BYREF
  _QWORD v66[2]; // [rsp+110h] [rbp-270h] BYREF
  _QWORD v67[2]; // [rsp+120h] [rbp-260h] BYREF
  _QWORD v68[2]; // [rsp+130h] [rbp-250h] BYREF
  _QWORD v69[2]; // [rsp+140h] [rbp-240h] BYREF
  _QWORD v70[2]; // [rsp+150h] [rbp-230h] BYREF
  _QWORD v71[2]; // [rsp+160h] [rbp-220h] BYREF
  _QWORD v72[2]; // [rsp+170h] [rbp-210h] BYREF
  _QWORD v73[2]; // [rsp+180h] [rbp-200h] BYREF
  _QWORD v74[2]; // [rsp+190h] [rbp-1F0h] BYREF
  _QWORD v75[2]; // [rsp+1A0h] [rbp-1E0h] BYREF
  _QWORD v76[2]; // [rsp+1B0h] [rbp-1D0h] BYREF
  _QWORD v77[2]; // [rsp+1C0h] [rbp-1C0h] BYREF
  _QWORD v78[2]; // [rsp+1D0h] [rbp-1B0h] BYREF
  _QWORD v79[2]; // [rsp+1E0h] [rbp-1A0h] BYREF
  _QWORD v80[2]; // [rsp+1F0h] [rbp-190h] BYREF
  _QWORD v81[2]; // [rsp+200h] [rbp-180h] BYREF
  _QWORD v82[2]; // [rsp+210h] [rbp-170h] BYREF
  _QWORD v83[2]; // [rsp+220h] [rbp-160h] BYREF
  _QWORD v84[2]; // [rsp+230h] [rbp-150h] BYREF
  _QWORD v85[2]; // [rsp+240h] [rbp-140h] BYREF
  _QWORD v86[2]; // [rsp+250h] [rbp-130h] BYREF
  _QWORD v87[2]; // [rsp+260h] [rbp-120h] BYREF
  _QWORD v88[2]; // [rsp+270h] [rbp-110h] BYREF
  _QWORD v89[2]; // [rsp+280h] [rbp-100h] BYREF
  _QWORD v90[2]; // [rsp+290h] [rbp-F0h] BYREF
  _QWORD v91[2]; // [rsp+2A0h] [rbp-E0h] BYREF
  _QWORD v92[2]; // [rsp+2B0h] [rbp-D0h] BYREF
  _QWORD v93[2]; // [rsp+2C0h] [rbp-C0h] BYREF
  _QWORD v94[2]; // [rsp+2D0h] [rbp-B0h] BYREF
  _QWORD v95[2]; // [rsp+2E0h] [rbp-A0h] BYREF
  unsigned int v96[36]; // [rsp+2F0h] [rbp-90h] BYREF

  v6 = 0;
  ++*(_DWORD *)(a1 + 404);
  v63 = 0;
  v64[0] = 0;
  v64[1] = 0;
  v65[0] = 1;
  v65[1] = 0;
  v66[0] = 0;
  v66[1] = 0;
  v67[0] = 1;
  v67[1] = 0;
  v68[0] = 0;
  v68[1] = 0;
  v69[0] = 1;
  v69[1] = 0;
  v70[0] = 0;
  v70[1] = 0;
  v71[0] = 1;
  v71[1] = 0;
  v72[0] = 0;
  v72[1] = 0;
  v73[0] = 1;
  v73[1] = 0;
  v74[0] = 0;
  v74[1] = 0;
  v75[0] = 1;
  v75[1] = 0;
  v76[0] = 0;
  v76[1] = 0;
  v77[0] = 1;
  v77[1] = 0;
  v78[0] = 0;
  v78[1] = 0;
  v79[0] = 1;
  v79[1] = 0;
  v80[0] = 0;
  v80[1] = 0;
  v81[0] = 1;
  v81[1] = 0;
  v82[0] = 0;
  v82[1] = 0;
  v83[0] = 1;
  v83[1] = 0;
  v84[0] = 0;
  v84[1] = 0;
  v85[0] = 1;
  v85[1] = 0;
  v86[0] = 0;
  v86[1] = 0;
  v7 = *(_QWORD *)(a1 + 16);
  *a5 = 0;
  v8 = 214013 * *(_DWORD *)(v7 + 7504);
  v87[0] = 1;
  v87[1] = 0;
  v88[0] = 0;
  v8 += 2531011;
  v88[1] = 0;
  *(_DWORD *)(v7 + 7504) = v8;
  v89[0] = 1;
  v89[1] = 0;
  v90[0] = 0;
  v90[1] = 0;
  v91[0] = 1;
  v91[1] = 0;
  v92[0] = 0;
  v92[1] = 0;
  v93[0] = 1;
  v93[1] = 0;
  v49 = (HIWORD(v8) & 0x7FFF) % 0x14u + 10;
  v94[0] = 0;
  v94[1] = 0;
  v95[0] = 1;
  v95[1] = 0;
  v61 = 0;
  while ( 2 )
  {
    v9 = sub_8E6FA0(v7);
    if ( v9 )
    {
LABEL_168:
      if ( v6 )
        goto LABEL_74;
      v36 = 2;
LABEL_135:
      if ( (unsigned __int8)sub_8E6FA0(*(_QWORD *)(a1 + 16)) )
        goto LABEL_74;
      goto LABEL_75;
    }
    v10 = qword_1C7F2C0;
    sub_182CEF0(qword_1C7F2C0, v78);
    sub_182CBA0(v10, v79);
    LODWORD(v79[0]) = 1;
    BYTE4(v79[0]) &= ~1u;
    v11 = qword_1C7F2C0;
    sub_182CEF0(qword_1C7F2C0, v80);
    sub_182CBA0(v11, v81);
    BYTE4(v81[0]) &= ~1u;
    LODWORD(v81[0]) = 1;
    v12 = qword_1C7F2C0;
    sub_182CEF0(qword_1C7F2C0, v82);
    sub_182CBA0(v12, v83);
    LODWORD(v83[0]) = 1;
    BYTE4(v83[0]) &= ~1u;
    v13 = qword_1C7F2C0;
    sub_182CEF0(qword_1C7F2C0, v72);
    sub_182CBA0(v13, v73);
    BYTE4(v73[0]) &= ~1u;
    LODWORD(v73[0]) = 1;
    v14 = qword_1C7F2C0;
    sub_182CEF0(qword_1C7F2C0, v74);
    sub_182CBA0(v14, v75);
    BYTE4(v75[0]) &= ~1u;
    LODWORD(v75[0]) = 1;
    v15 = qword_1C7F2C0;
    sub_182CEF0(qword_1C7F2C0, v76);
    sub_182CBA0(v15, v77);
    BYTE4(v77[0]) &= ~1u;
    LODWORD(v77[0]) = 1;
    v16 = *a2;
    if ( !*a2 || (v59 = &v16[10 * *(v16 - 1)], v16 == v59) )
    {
LABEL_134:
      v36 = 0;
      v63 = 0;
      *a5 = 0;
      goto LABEL_135;
    }
    v50 = -1;
    v60 = -1;
    do
    {
      while ( 1 )
      {
        v20 = v16[8];
        if ( v20 == -1 )
          goto LABEL_16;
        v96[0] = -1;
        v21 = qword_1C7F2C0;
        if ( (v16[1] & 1) != 0 )
        {
          sub_182C690(qword_1C7F2C0, v70, v16);
          if ( (v16[5] & 1) == 0 )
          {
LABEL_20:
            v23 = v16[4];
            BYTE4(v71[0]) &= ~1u;
            LODWORD(v71[0]) = v23;
            goto LABEL_21;
          }
        }
        else
        {
          v22 = *v16;
          BYTE4(v70[0]) &= ~1u;
          LODWORD(v70[0]) = v22;
          if ( (v16[5] & 1) == 0 )
            goto LABEL_20;
        }
        sub_182C690(v21, v71, v16 + 4);
LABEL_21:
        v58 = 8LL * v20;
        v24 = SLODWORD(v70[0]) > 0;
        if ( a3 != SLODWORD(v70[0]) > 0 )
        {
          v17 = *(_QWORD *)(*(_QWORD *)(a1 + 744) + 8LL * v20);
          if ( !v17 )
            goto LABEL_13;
LABEL_7:
          if ( ((*(_BYTE *)(*(_QWORD *)(a1 + 720) + 4LL * v20 + 3) >> 4) & 3) == 2 )
          {
            v56 = v17;
            v38 = sub_9ACE50(a1, v20);
            v17 = v56;
            v18 = (__int64)v38;
          }
          else
          {
            v18 = *(_QWORD *)(a1 + 728) + 96LL * v20;
          }
          v19 = qword_1C7F2C0;
          if ( (*(_BYTE *)(v18 + 4) & 1) != 0 || (*(_BYTE *)(v17 + 20) & 1) != 0 )
          {
            v51 = v17;
            v55 = qword_1C7F2C0;
            v25 = sub_182C7B0(qword_1C7F2C0, v18, v17 + 16);
            v19 = v55;
            v17 = v51;
            if ( v25 )
              goto LABEL_12;
          }
          else if ( *(_DWORD *)v18 != *(_DWORD *)(v17 + 16) )
          {
LABEL_12:
            v9 = 1;
            goto LABEL_13;
          }
          if ( (*(_BYTE *)(v18 + 20) & 1) != 0 || (*(_BYTE *)(v17 + 36) & 1) != 0 )
          {
            v57 = v17;
            v39 = sub_182C7B0(v19, v18 + 16, v17 + 32);
            v17 = v57;
            v26 = v39 == 0;
          }
          else
          {
            v26 = *(_DWORD *)(v18 + 16) == *(_DWORD *)(v17 + 32);
          }
          if ( v26 && sub_9B0850(v18 + 32, v17 + 48) )
            goto LABEL_15;
          goto LABEL_12;
        }
        v17 = *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8LL * v20);
        if ( v17 )
          goto LABEL_7;
LABEL_13:
        v54 = a3 == v24;
        if ( (unsigned __int8)sub_A00DC0((_QWORD *)a1, v20, a3 == v24, (__int64)v66, (int *)v84, (__int64)v90, a5, v96) )
          break;
        ++v63;
LABEL_15:
        v9 = 1;
LABEL_16:
        v16 += 10;
        if ( v16 == v59 )
          goto LABEL_66;
      }
      v52 = v96[0];
      if ( v96[0] == -1 )
      {
        sub_98B5F0((__int64)v72, (int *)v84);
        sub_98B5F0((__int64)v78, (int *)v90);
        if ( !v9 )
        {
          v60 = v20;
          v61 = a3 == v24;
          goto LABEL_69;
        }
        if ( SLODWORD(v72[0]) <= 0 )
        {
          if ( LODWORD(v72[0]) )
          {
            v60 = v20;
            v61 = a3 == v24;
            goto LABEL_71;
          }
          v48 = v74[0];
          if ( SLODWORD(v74[0]) > 0 )
          {
            v60 = v20;
            v50 = -1;
            v61 = a3 == v24;
            goto LABEL_140;
          }
          if ( !LODWORD(v74[0]) && SLODWORD(v76[0]) > 0 )
          {
            v60 = v20;
            v50 = -1;
            v61 = a3 == v24;
            goto LABEL_111;
          }
        }
        else
        {
          ++v63;
        }
        v60 = v20;
        v61 = a3 == v24;
        goto LABEL_150;
      }
      v27 = qword_1C7F2C0;
      if ( (v79[0] & 0x100000000LL) != 0
        || LODWORD(v79[0]) != 1
        || (v91[0] & 0x100000000LL) != 0
        || LODWORD(v91[0]) != 1 )
      {
        v28 = sub_1848D40(qword_1C7F2C0, v78, v90);
        v27 = qword_1C7F2C0;
        if ( v28 )
          goto LABEL_35;
LABEL_84:
        if ( (v78[0] & 0x100000000LL) != 0 )
          goto LABEL_96;
        v41 = BYTE4(v90[0]);
        goto LABEL_86;
      }
      if ( (v78[0] & 0x100000000LL) != 0 || (v41 = BYTE4(v90[0]), (v90[0] & 0x100000000LL) != 0) )
      {
        v40 = sub_182C7B0(qword_1C7F2C0, v78, v90);
        v27 = qword_1C7F2C0;
        if ( v40 < 0 )
          goto LABEL_35;
        goto LABEL_84;
      }
      if ( SLODWORD(v78[0]) < SLODWORD(v90[0]) )
      {
LABEL_35:
        if ( (v66[0] & 0x100000000LL) != 0 )
          goto LABEL_94;
        goto LABEL_36;
      }
LABEL_86:
      if ( (v41 & 1) != 0 )
      {
LABEL_96:
        if ( (unsigned int)sub_182C7B0(v27, v78, v90) )
          goto LABEL_97;
        goto LABEL_88;
      }
      if ( LODWORD(v78[0]) != LODWORD(v90[0]) )
        goto LABEL_97;
LABEL_88:
      if ( (v79[0] & 0x100000000LL) != 0 || (v91[0] & 0x100000000LL) != 0 )
        v42 = (unsigned int)sub_182C7B0(v27, v79, v91) == 0;
      else
        v42 = LODWORD(v79[0]) == LODWORD(v91[0]);
      if ( v42 && sub_927C80((__int64)v80, (__int64)v92) )
      {
        v27 = qword_1C7F2C0;
        if ( (v66[0] & 0x100000000LL) != 0 )
        {
LABEL_94:
          sub_182C690(v27, v64, v66);
          if ( (v67[0] & 0x100000000LL) != 0 )
            goto LABEL_95;
          goto LABEL_37;
        }
LABEL_36:
        BYTE4(v64[0]) &= ~1u;
        LODWORD(v64[0]) = v66[0];
        if ( (v67[0] & 0x100000000LL) != 0 )
        {
LABEL_95:
          sub_182C690(v27, v65, v67);
LABEL_38:
          v29 = qword_1C7F2C0;
          if ( (v70[0] & 0x100000000LL) != 0 )
          {
            sub_182C690(qword_1C7F2C0, v68, v70);
            if ( (v71[0] & 0x100000000LL) == 0 )
              goto LABEL_40;
          }
          else
          {
            BYTE4(v68[0]) &= ~1u;
            LODWORD(v68[0]) = v70[0];
            if ( (v71[0] & 0x100000000LL) == 0 )
            {
LABEL_40:
              BYTE4(v69[0]) &= ~1u;
              LODWORD(v69[0]) = v71[0];
LABEL_41:
              v30 = qword_1C7F2C0;
              if ( (v90[0] & 0x100000000LL) != 0 )
              {
                sub_182C690(qword_1C7F2C0, v78, v90);
              }
              else
              {
                BYTE4(v78[0]) &= ~1u;
                LODWORD(v78[0]) = v90[0];
              }
              if ( (v91[0] & 0x100000000LL) != 0 )
              {
                sub_182C690(v30, v79, v91);
              }
              else
              {
                BYTE4(v79[0]) &= ~1u;
                LODWORD(v79[0]) = v91[0];
              }
              v31 = qword_1C7F2C0;
              if ( (v92[0] & 0x100000000LL) != 0 )
              {
                sub_182C690(qword_1C7F2C0, v80, v92);
              }
              else
              {
                BYTE4(v80[0]) &= ~1u;
                LODWORD(v80[0]) = v92[0];
              }
              if ( (v93[0] & 0x100000000LL) != 0 )
              {
                sub_182C690(v31, v81, v93);
              }
              else
              {
                BYTE4(v81[0]) &= ~1u;
                LODWORD(v81[0]) = v93[0];
              }
              v32 = qword_1C7F2C0;
              if ( (v94[0] & 0x100000000LL) != 0 )
              {
                sub_182C690(qword_1C7F2C0, v82, v94);
              }
              else
              {
                BYTE4(v82[0]) &= ~1u;
                LODWORD(v82[0]) = v94[0];
              }
              if ( (v95[0] & 0x100000000LL) != 0 )
              {
                sub_182C690(v32, v83, v95);
              }
              else
              {
                BYTE4(v83[0]) &= ~1u;
                LODWORD(v83[0]) = v95[0];
              }
              v33 = qword_1C7F2C0;
              if ( (v84[0] & 0x100000000LL) != 0 )
              {
                sub_182C690(qword_1C7F2C0, v72, v84);
              }
              else
              {
                BYTE4(v72[0]) &= ~1u;
                LODWORD(v72[0]) = v84[0];
              }
              if ( (v85[0] & 0x100000000LL) != 0 )
              {
                sub_182C690(v33, v73, v85);
              }
              else
              {
                BYTE4(v73[0]) &= ~1u;
                LODWORD(v73[0]) = v85[0];
              }
              v34 = qword_1C7F2C0;
              if ( (v86[0] & 0x100000000LL) != 0 )
              {
                sub_182C690(qword_1C7F2C0, v74, v86);
              }
              else
              {
                BYTE4(v74[0]) &= ~1u;
                LODWORD(v74[0]) = v86[0];
              }
              if ( (v87[0] & 0x100000000LL) != 0 )
              {
                sub_182C690(v34, v75, v87);
              }
              else
              {
                BYTE4(v75[0]) &= ~1u;
                LODWORD(v75[0]) = v87[0];
              }
              v35 = qword_1C7F2C0;
              if ( (v88[0] & 0x100000000LL) != 0 )
              {
                sub_182C690(qword_1C7F2C0, v76, v88);
              }
              else
              {
                BYTE4(v76[0]) &= ~1u;
                LODWORD(v76[0]) = v88[0];
              }
              if ( (v89[0] & 0x100000000LL) != 0 )
              {
                sub_182C690(v35, v77, v89);
              }
              else
              {
                BYTE4(v77[0]) &= ~1u;
                LODWORD(v77[0]) = v89[0];
              }
              goto LABEL_65;
            }
          }
          sub_182C690(v29, v69, v71);
          goto LABEL_41;
        }
LABEL_37:
        BYTE4(v65[0]) &= ~1u;
        LODWORD(v65[0]) = v67[0];
        goto LABEL_38;
      }
LABEL_97:
      if ( LODWORD(v94[0]) | LODWORD(v92[0]) | LODWORD(v90[0]) || v50 != -1 && v52 >= v50 )
        goto LABEL_16;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)v64, (int *)v66);
      sub_27B950((__int64)qword_1C7F2C0, (__int64)v68, (int *)v70);
      sub_98B5F0((__int64)v78, (int *)v90);
      sub_98B5F0((__int64)v72, (int *)v84);
LABEL_65:
      v16 += 10;
      v60 = v20;
      v50 = v52;
      v61 = v54;
    }
    while ( v16 != v59 );
LABEL_66:
    if ( v9 == 1 || v50 != -1 )
    {
      if ( v60 == -1 )
      {
        v6 = v63;
        goto LABEL_168;
      }
      if ( SLODWORD(v72[0]) > 0 )
        goto LABEL_111;
      if ( !LODWORD(v72[0]) )
      {
        v48 = v74[0];
        if ( SLODWORD(v74[0]) > 0 )
          goto LABEL_140;
        if ( !LODWORD(v74[0]) && SLODWORD(v76[0]) > 0 )
LABEL_111:
          ++v63;
      }
LABEL_112:
      if ( v50 != -1 )
      {
        if ( !sub_9B1230(a1, v60) )
        {
          v43 = *(_QWORD *)(*(_QWORD *)(a1 + 744) + 8LL * v60);
          if ( v43 )
          {
            v44 = *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8LL * v60);
            if ( v44 )
            {
              sub_9F7AE0((__int64)v96, v44 + 16, v43 + 16);
              v45 = sub_9F4890((__int64)v96, (__int64)v78);
              sub_2A6060((__int64)v96);
              if ( v45 )
              {
                if ( !v61 )
                {
                  sub_1831620(qword_1C7F2C0, v78);
                  sub_1831620(qword_1C7F2C0, v80);
                  sub_1831620(qword_1C7F2C0, v82);
                }
                goto LABEL_106;
              }
            }
          }
        }
        sub_A55750(a1, v50, v60, (int *)v64, 0);
        if ( v61 )
          v46 = LODWORD(v64[0]) >> 31;
        else
          LOBYTE(v46) = SLODWORD(v64[0]) > 0;
        sub_A01020((_QWORD *)a1, v50, v46, (int *)&v63, a5);
        v47 = (__int64 *)(*(_QWORD *)(a1 + 696) + 24LL * (*(_DWORD *)(*(_QWORD *)(a1 + 720) + 4LL * v60) & 0xFFFFFFF));
        sub_1831620(qword_1C7F2C0, v68);
        sub_9C4A00(a1, (__int64)a2, (__int64)v68, v47);
LABEL_107:
        v6 = v63;
        if ( v63 >= v49 )
          goto LABEL_74;
        v7 = *(_QWORD *)(a1 + 16);
        continue;
      }
LABEL_150:
      v58 = 8LL * v60;
      goto LABEL_71;
    }
    break;
  }
  if ( v60 == -1 )
    goto LABEL_134;
LABEL_69:
  if ( SLODWORD(v72[0]) > 0 )
  {
    ++v63;
    v58 = 8LL * v60;
    goto LABEL_71;
  }
  if ( LODWORD(v72[0]) )
    goto LABEL_150;
  v50 = -1;
  v48 = v74[0];
  if ( SLODWORD(v74[0]) > 0 )
  {
LABEL_140:
    if ( (v74[0] & 0x100000000LL) != 0
      || v48 != 1
      || (v75[0] & 0x100000000LL) != 0
      || LODWORD(v75[0]) != 1
      || LODWORD(v76[0]) )
    {
      goto LABEL_111;
    }
    goto LABEL_112;
  }
  v58 = 8LL * v60;
  if ( !LODWORD(v74[0]) && SLODWORD(v76[0]) > 0 )
  {
    ++v63;
    goto LABEL_150;
  }
LABEL_71:
  if ( v61 )
  {
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 752) + v58) )
      goto LABEL_134;
    if ( !(LODWORD(v82[0]) | LODWORD(v80[0]) | LODWORD(v78[0])) )
      goto LABEL_74;
LABEL_106:
    sub_9F40B0((_QWORD *)a1, v60, (__int64)v78);
    goto LABEL_107;
  }
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 744) + v58) )
    goto LABEL_134;
  if ( LODWORD(v82[0]) | LODWORD(v80[0]) | LODWORD(v78[0]) )
  {
    sub_1831620(qword_1C7F2C0, v78);
    sub_1831620(qword_1C7F2C0, v80);
    sub_1831620(qword_1C7F2C0, v82);
    sub_9F40B0((_QWORD *)a1, v60, (__int64)v78);
    goto LABEL_107;
  }
LABEL_74:
  v36 = 3;
LABEL_75:
  sub_2A6060((__int64)v90);
  sub_2A6060((__int64)v84);
  sub_2A6060((__int64)v78);
  sub_2A6060((__int64)v72);
  sub_25A130((char *)v70);
  sub_25A130((char *)v68);
  sub_25A130((char *)v66);
  sub_25A130((char *)v64);
  return v36;
}

