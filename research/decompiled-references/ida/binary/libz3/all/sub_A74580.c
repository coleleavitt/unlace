__int64 __fastcall sub_A74580(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char **exception; // rbp
  char **v6; // r12
  __int64 result; // rax
  __int64 v9; // rdx
  unsigned int v10; // eax
  void *v11; // r12
  _QWORD *v12; // r14
  unsigned int v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // r12d
  size_t v16; // rdi
  unsigned int *v17; // rax
  int *v18; // r15
  unsigned int *v19; // rsi
  __int64 v20; // rdi
  _DWORD *v21; // rdx
  int *v22; // rax
  int *v23; // rdi
  int v24; // ecx
  char v25; // r8
  __int64 v26; // rcx
  char v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rax
  int *v30; // rbx
  int *v31; // r12
  unsigned int *v32; // r15
  void *v33; // r13
  int *v34; // rsi
  __int64 v35; // r15
  __int64 v36; // rdx
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rdx
  void *v40; // rbx
  void *v41; // rbp
  __int64 v42; // rbx
  int v43; // eax
  int v44; // eax
  __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // r14
  void *v48; // r12
  __int64 v49; // rsi
  unsigned int v50; // r15d
  char **i; // rbx
  __int64 v52; // rsi
  __int64 v53; // r12
  int *v54; // r14
  __int64 v55; // rdx
  int v56; // ecx
  _QWORD *v57; // rsi
  __int64 v58; // rax
  _QWORD *v59; // rax
  void *v60; // r14
  __int64 v61; // rdx
  __int64 v62; // rdx
  void *v63; // rbp
  __int64 v64; // r12
  unsigned int v65; // r9d
  unsigned int v66; // edx
  __int64 v67; // rax
  int *v68; // r14
  unsigned int v69; // r9d
  _DWORD *v70; // r10
  __int64 v71; // rax
  _QWORD *v72; // rdx
  int *v73; // rdi
  int *j; // rax
  int v75; // ecx
  char v76; // r8
  __int64 v77; // rcx
  char v78; // r8
  __int64 v79; // rcx
  __int64 v80; // rax
  int *v81; // r12
  int *v82; // rbx
  _QWORD *v83; // r14
  void *v84; // r13
  int *v85; // rsi
  _QWORD *v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rax
  _QWORD *v89; // r12
  _QWORD *v90; // rbx
  void *v91; // r14
  _QWORD *v92; // rsi
  _QWORD *v93; // rax
  unsigned int v94; // [rsp+0h] [rbp-C8h]
  int v95; // [rsp+0h] [rbp-C8h]
  unsigned int v96; // [rsp+0h] [rbp-C8h]
  __int64 v97; // [rsp+0h] [rbp-C8h]
  unsigned int v98; // [rsp+Ch] [rbp-BCh]
  unsigned int v99; // [rsp+Ch] [rbp-BCh]
  unsigned int v100; // [rsp+Ch] [rbp-BCh]
  __int64 v101; // [rsp+10h] [rbp-B8h]
  _DWORD *v102; // [rsp+10h] [rbp-B8h]
  _DWORD *v103; // [rsp+10h] [rbp-B8h]
  unsigned int v104; // [rsp+18h] [rbp-B0h]
  __int64 v105; // [rsp+18h] [rbp-B0h]
  __int64 v106; // [rsp+20h] [rbp-A8h]
  char **v107; // [rsp+20h] [rbp-A8h]
  unsigned int v109; // [rsp+38h] [rbp-90h]
  unsigned int v110; // [rsp+3Ch] [rbp-8Ch]
  char *v111; // [rsp+40h] [rbp-88h] BYREF
  __int64 v112; // [rsp+48h] [rbp-80h]
  __int64 v113; // [rsp+50h] [rbp-78h] BYREF
  __int64 v114; // [rsp+58h] [rbp-70h]
  char *v115; // [rsp+60h] [rbp-68h] BYREF
  __int64 v116; // [rsp+68h] [rbp-60h]
  __int64 v117; // [rsp+70h] [rbp-58h] BYREF
  __int64 v118; // [rsp+78h] [rbp-50h]
  int v119; // [rsp+80h] [rbp-48h]

  result = *(_QWORD *)(a2 + 24);
  if ( !result )
  {
LABEL_30:
    v45 = *(_QWORD *)(a1 + 120);
    if ( v45 )
      goto LABEL_31;
    return result;
  }
  v98 = 0;
  while ( v98 < *(_DWORD *)(result - 4) )
  {
    v9 = *(_QWORD *)(a1 + 96);
    v10 = *(_DWORD *)(result + 4LL * v98);
    v11 = qword_1C7F2C0;
    v101 = *(_QWORD *)(a2 + 16) + 32LL * v98;
    v109 = v10;
    if ( !v9 || v10 >= *(_DWORD *)(v9 - 4) )
    {
      v111 = nullptr;
      v112 = 0;
      v113 = 1;
      v114 = 0;
      if ( (*(_BYTE *)(&qword_1C7F2A0 + 1) & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v111, &qword_1C7F2A0);
      else
        LODWORD(v111) = qword_1C7F2A0;
      if ( (qword_1C7F2B0 & 0x100000000LL) != 0 )
      {
        sub_182C690(v11, &v113, &qword_1C7F2B0);
      }
      else
      {
        BYTE4(v113) &= ~1u;
        LODWORD(v113) = qword_1C7F2B0;
      }
      v12 = *(_QWORD **)(a1 + 96);
      v94 = v109 + 1;
      if ( v12 )
      {
        v110 = *((_DWORD *)v12 - 1);
        if ( v110 < v109 + 1 )
          goto LABEL_12;
        v87 = 32LL * v94;
        v88 = 32LL * v110;
        v89 = &v12[(unsigned __int64)v87 / 8];
        v90 = &v12[(unsigned __int64)v88 / 8];
        if ( v87 != v88 )
        {
          do
          {
            v91 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v89);
            v92 = v89 + 2;
            v89 += 4;
            sub_182CBA0(v91, v92);
          }
          while ( v90 != v89 );
          v12 = *(_QWORD **)(a1 + 96);
        }
        *((_DWORD *)v12 - 1) = v94;
      }
      else
      {
        v110 = 0;
        if ( v109 != -1 )
        {
          v86 = (_QWORD *)sub_186B270(0x48u);
          v12 = v86 + 1;
          *(_QWORD *)(a1 + 96) = v86 + 1;
          *v86 = 2;
LABEL_12:
          while ( 1 )
          {
            v13 = *((_DWORD *)v12 - 2);
            v14 = v109 + 1;
            if ( v13 >= v94 )
              break;
            while ( 1 )
            {
              v15 = (3 * v13 + 1) >> 1;
              v16 = 32 * v15 + 8;
              if ( 32 * v13 + 8 >= (unsigned int)v16 || v13 >= v15 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_137C7A(&v115);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, &v115);
                sub_233E40((__int64)&v115);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v17 = (unsigned int *)sub_186B270(v16);
              v18 = *(int **)(a1 + 96);
              v19 = v17;
              v12 = v17 + 2;
              if ( !v18 )
                break;
              v20 = (unsigned int)*(v18 - 1);
              v21 = v17 + 2;
              v17[1] = v20;
              v22 = v18;
              v23 = &v18[8 * v20];
              if ( v23 != v18 )
              {
                do
                {
                  v24 = *v22;
                  v25 = *((_BYTE *)v22 + 4);
                  v22 += 8;
                  v21 += 8;
                  *(v21 - 8) = v24;
                  *((_BYTE *)v21 - 28) = v25 & 3 | *(_BYTE *)(v21 - 7) & 0xFC;
                  v26 = *((_QWORD *)v22 - 3);
                  *((_QWORD *)v22 - 3) = 0;
                  *((_QWORD *)v21 - 3) = v26;
                  v27 = *((_BYTE *)v22 - 12);
                  *(v21 - 4) = *(v22 - 4);
                  *((_BYTE *)v21 - 12) = v27 & 3 | *(_BYTE *)(v21 - 3) & 0xFC;
                  v28 = *((_QWORD *)v22 - 1);
                  *((_QWORD *)v22 - 1) = 0;
                  *((_QWORD *)v21 - 1) = v28;
                }
                while ( v23 != v22 );
              }
              v29 = (unsigned int)*(v18 - 1);
              v30 = &v18[8 * v29];
              if ( (_DWORD)v29 )
              {
                v106 = a1;
                v104 = v15;
                v31 = v18;
                v32 = v19;
                do
                {
                  v33 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v31);
                  v34 = v31 + 4;
                  v31 += 8;
                  sub_182CBA0(v33, v34);
                }
                while ( v31 != v30 );
                a1 = v106;
                v19 = v32;
                v15 = v104;
                v18 = *(int **)(v106 + 96);
              }
              sub_186B220(v18 - 2);
              v14 = v109 + 1;
              *(_QWORD *)(a1 + 96) = v12;
              *v19 = v15;
              v13 = *((_DWORD *)v12 - 2);
              if ( v13 >= v94 )
                goto LABEL_23;
            }
            v17[1] = 0;
            *(_QWORD *)(a1 + 96) = v12;
            *v17 = v15;
          }
LABEL_23:
          *((_DWORD *)v12 - 1) = v14;
          v35 = 32LL * v14;
          v36 = 32LL * v110;
          v37 = &v12[(unsigned __int64)v36 / 8];
          if ( v36 != v35 )
          {
            do
            {
              v37 += 4;
              *((_DWORD *)v37 - 8) = (_DWORD)v111;
              *((_BYTE *)v37 - 28) = BYTE4(v111) & 3 | *((_BYTE *)v37 - 28) & 0xFC;
              v38 = v112;
              v112 = 0;
              *(v37 - 3) = v38;
              *((_DWORD *)v37 - 4) = v113;
              *((_BYTE *)v37 - 12) = BYTE4(v113) & 3 | *((_BYTE *)v37 - 12) & 0xFC;
              v39 = v114;
              v114 = 0;
              *(v37 - 1) = v39;
            }
            while ( &v12[(unsigned __int64)v35 / 8] != v37 );
          }
        }
      }
      v40 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v111);
      sub_182CBA0(v40, &v113);
      v41 = qword_1C7F2C0;
      v42 = *(_QWORD *)(a1 + 96) + 32LL * v109;
      if ( (*(_BYTE *)(v101 + 4) & 1) != 0 )
      {
        sub_182C690(qword_1C7F2C0, *(_QWORD *)(a1 + 96) + 32LL * v109, v101);
      }
      else
      {
        v43 = *(_DWORD *)v101;
        *(_BYTE *)(v42 + 4) &= ~1u;
        *(_DWORD *)v42 = v43;
      }
      if ( (*(_BYTE *)(v101 + 20) & 1) != 0 )
      {
        sub_182C690(v41, v42 + 16, v101 + 16);
      }
      else
      {
        v44 = *(_DWORD *)(v101 + 16);
        *(_BYTE *)(v42 + 20) &= ~1u;
        *(_DWORD *)(v42 + 16) = v44;
      }
      goto LABEL_29;
    }
    sub_2FC4A0((__int64)qword_1C7F2C0, v9 + 32LL * v10, v101, v9 + 32LL * v10);
LABEL_29:
    ++v98;
    result = *(_QWORD *)(a2 + 24);
    if ( !result )
      goto LABEL_30;
  }
  v45 = *(_QWORD *)(a1 + 120);
  if ( v45 )
  {
LABEL_31:
    v46 = *(unsigned int *)(v45 - 4);
    if ( (_DWORD)v46 )
    {
      v47 = v45 + 40 * v46;
      do
      {
        v48 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v45);
        v49 = v45 + 16;
        v45 += 40;
        sub_182CBA0(v48, v49);
      }
      while ( v45 != v47 );
      v45 = *(_QWORD *)(a1 + 120);
      result = *(_QWORD *)(a2 + 24);
    }
    *(_DWORD *)(v45 - 4) = 0;
  }
  if ( result )
  {
    v50 = 0;
    for ( i = &v115; v50 < *(_DWORD *)(result - 4); ++v50 )
    {
      v52 = *(unsigned int *)(result + 4LL * v50);
      v53 = 32 * v52;
      v54 = (int *)(32 * v52 + *(_QWORD *)(a1 + 96));
      v55 = (unsigned int)*v54;
      if ( (_DWORD)v55 )
      {
        v95 = sub_A7A1D0(a1, v52, v55, a4, a5);
        v115 = nullptr;
        v116 = 0;
        v117 = 1;
        v118 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)i, v54);
        v56 = v95;
        v57 = *(_QWORD **)(a1 + 120);
        v119 = v95;
        if ( v57 )
        {
          v58 = *((unsigned int *)v57 - 1);
          if ( (_DWORD)v58 == *((_DWORD *)v57 - 2) )
          {
            v65 = (unsigned int)(3 * v58 + 1) >> 1;
            v66 = 40 * v65 + 8;
            if ( 40 * (int)v58 + 8 >= v66 || (unsigned int)v58 >= v65 )
            {
              v6 = (char **)__cxa_allocate_exception(0x28u);
              sub_137C7A(&v111);
              *v6 = (char *)off_1C63128;
              sub_2333C0(v6 + 1, &v111);
              sub_233E40((__int64)&v111);
              __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v96 = (unsigned int)(3 * v58 + 1) >> 1;
            v67 = sub_186B270(v66);
            v68 = *(int **)(a1 + 120);
            v69 = v96;
            v70 = (_DWORD *)v67;
            v57 = (_QWORD *)(v67 + 8);
            if ( v68 )
            {
              v71 = (unsigned int)*(v68 - 1);
              v72 = v57;
              v70[1] = v71;
              v73 = &v68[10 * v71];
              for ( j = v68; v73 != j; *((_DWORD *)v72 - 2) = *(j - 2) )
              {
                v75 = *j;
                v76 = *((_BYTE *)j + 4);
                j += 10;
                v72 += 5;
                *((_DWORD *)v72 - 10) = v75;
                *((_BYTE *)v72 - 36) = v76 & 3 | *((_BYTE *)v72 - 36) & 0xFC;
                v77 = *((_QWORD *)j - 4);
                *((_QWORD *)j - 4) = 0;
                *(v72 - 4) = v77;
                v78 = *((_BYTE *)j - 20);
                *((_DWORD *)v72 - 6) = *(j - 6);
                *((_BYTE *)v72 - 20) = v78 & 3 | *((_BYTE *)v72 - 20) & 0xFC;
                v79 = *((_QWORD *)j - 2);
                *((_QWORD *)j - 2) = 0;
                *(v72 - 2) = v79;
              }
              v80 = (unsigned int)*(v68 - 1);
              if ( (_DWORD)v80 )
              {
                v99 = v96;
                v102 = v70;
                v105 = a1;
                v97 = v53;
                v81 = &v68[10 * v80];
                v107 = i;
                v82 = v68;
                v83 = v57;
                do
                {
                  v84 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v82);
                  v85 = v82 + 4;
                  v82 += 10;
                  sub_182CBA0(v84, v85);
                }
                while ( v82 != v81 );
                a1 = v105;
                v57 = v83;
                v53 = v97;
                v69 = v99;
                v70 = v102;
                i = v107;
                v68 = *(int **)(v105 + 120);
              }
              v103 = v70;
              v100 = v69;
              sub_186B220(v68 - 2);
              v70 = v103;
              v69 = v100;
              v59 = &v57[5 * (unsigned int)v103[1]];
            }
            else
            {
              *(_DWORD *)(v67 + 4) = 0;
              v59 = (_QWORD *)(v67 + 8);
            }
            *(_QWORD *)(a1 + 120) = v57;
            v56 = v119;
            *v70 = v69;
          }
          else
          {
            v59 = &v57[5 * v58];
          }
        }
        else
        {
          v93 = (_QWORD *)sub_186B270(0x58u);
          *v93 = 2;
          v56 = v119;
          v57 = v93 + 1;
          *(_QWORD *)(a1 + 120) = v93 + 1;
          v59 = v93 + 1;
        }
        v60 = qword_1C7F2C0;
        *(_DWORD *)v59 = (_DWORD)v115;
        *((_BYTE *)v59 + 4) = BYTE4(v115) & 3 | *((_BYTE *)v59 + 4) & 0xFC;
        v61 = v116;
        v116 = 0;
        v59[1] = v61;
        *((_DWORD *)v59 + 4) = v117;
        *((_BYTE *)v59 + 20) = BYTE4(v117) & 3 | *((_BYTE *)v59 + 20) & 0xFC;
        v62 = v118;
        v118 = 0;
        v59[3] = v62;
        *((_DWORD *)v59 + 8) = v56;
        ++*((_DWORD *)v57 - 1);
        sub_182CBA0(v60, i);
        sub_182CBA0(v60, &v117);
        v63 = qword_1C7F2C0;
        v64 = *(_QWORD *)(a1 + 96) + v53;
        sub_182CEF0(qword_1C7F2C0, v64);
        sub_182CBA0(v63, v64 + 16);
        *(_BYTE *)(v64 + 20) &= ~1u;
        *(_DWORD *)(v64 + 16) = 1;
        result = *(_QWORD *)(a2 + 24);
        if ( !result )
          break;
      }
    }
  }
  return result;
}

