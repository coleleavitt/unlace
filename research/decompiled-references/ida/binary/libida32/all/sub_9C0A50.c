void __fastcall sub_9C0A50(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v6; // r13
  int v7; // eax
  _QWORD *v8; // rsi
  unsigned int v9; // eax
  unsigned __int64 v10; // rdx
  unsigned int v11; // edx
  __int64 v12; // rax
  void **v13; // rsi
  unsigned __int64 v14; // r12
  int v15; // r14d
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // eax
  _QWORD *v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // r15
  __int64 *v23; // r14
  __int64 *v24; // r12
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rbp
  __int64 v28; // r13
  int v29; // eax
  __int64 v30; // r8
  __int64 v31; // rdx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // r13
  unsigned int v37; // edx
  unsigned int v38; // edi
  unsigned __int64 v39; // rsi
  __int64 v40; // rdx
  unsigned __int64 v41; // rax
  char *v42; // rdi
  int *v43; // r8
  char *v44; // rax
  int v45; // ecx
  int v46; // r9d
  int v47; // edx
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  __int64 *v50; // r12
  __int64 *i; // r13
  __int64 v52; // r9
  __int64 v53; // rdi
  unsigned __int64 v54; // rax
  unsigned int v55; // eax
  char *v56; // r9
  char *v57; // r15
  _WORD *v58; // r8
  __int64 v59; // r15
  __int64 v60; // r14
  int v61; // eax
  __int64 v62; // rsi
  unsigned int v63; // edx
  unsigned __int64 v64; // rdi
  unsigned int v65; // r12d
  char *v66; // rsi
  int v67; // r9d
  __int64 v68; // rcx
  __int64 v69; // r10
  unsigned __int64 v70; // r14
  _WORD *v71; // r11
  __int64 v72; // rcx
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // rdx
  _QWORD *v75; // rcx
  __int64 v76; // rax
  unsigned __int64 v77; // r11
  __int64 v78; // rax
  unsigned __int64 v79; // rdx
  _QWORD *v80; // rax
  unsigned __int64 v81; // rdx
  __int64 v82; // [rsp+0h] [rbp-278h]
  __int64 *v83; // [rsp+10h] [rbp-268h]
  void (__fastcall *v84)(__int64 *, __int64, __int64 *); // [rsp+18h] [rbp-260h]
  unsigned __int64 v85; // [rsp+30h] [rbp-248h]
  unsigned __int64 v86; // [rsp+30h] [rbp-248h]
  _WORD *v87; // [rsp+30h] [rbp-248h]
  __int64 v88; // [rsp+38h] [rbp-240h]
  __int64 v89; // [rsp+40h] [rbp-238h]
  unsigned __int64 v90; // [rsp+40h] [rbp-238h]
  _WORD *v91; // [rsp+48h] [rbp-230h]
  __int64 v92; // [rsp+48h] [rbp-230h]
  char *v93; // [rsp+50h] [rbp-228h]
  _WORD *v94; // [rsp+50h] [rbp-228h]
  char *v95; // [rsp+58h] [rbp-220h]
  __int64 v96; // [rsp+60h] [rbp-218h] BYREF
  __int16 v97; // [rsp+68h] [rbp-210h]
  bool v98; // [rsp+6Ah] [rbp-20Eh]
  __int16 v99; // [rsp+6Bh] [rbp-20Dh]
  void *v100; // [rsp+70h] [rbp-208h] BYREF
  __int64 v101; // [rsp+78h] [rbp-200h]
  _BYTE v102[32]; // [rsp+80h] [rbp-1F8h] BYREF
  void *ptr; // [rsp+A0h] [rbp-1D8h] BYREF
  __int64 v104; // [rsp+A8h] [rbp-1D0h]
  void *v105[16]; // [rsp+B0h] [rbp-1C8h] BYREF
  void *v106; // [rsp+130h] [rbp-148h] BYREF
  __int64 v107; // [rsp+138h] [rbp-140h]
  _BYTE v108[312]; // [rsp+140h] [rbp-138h] BYREF

  v4 = a3;
  v6 = *a1;
  v7 = sub_9C0140(*a1 + 96, a3);
  v8 = *(_QWORD **)(v6 + 88);
  v9 = 2 * v7;
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    v10 = (*(_QWORD *)(v6 + 88) >> 1) & ~(-1LL << (*(_QWORD *)(v6 + 88) >> 58));
    v11 = (v10 >> v9) & 1 | (2 * ((v10 >> ((unsigned __int8)v9 + 1)) & 1));
    if ( v11 <= 1 )
      return;
  }
  else
  {
    v11 = (*(_QWORD *)(*v8 + 8LL * (v9 >> 6)) >> (v9 & 0x3F)) & 1
        | (2 * ((*(_QWORD *)(*v8 + 8LL * ((v9 + 1) >> 6)) >> ((unsigned __int8)v9 + 1)) & 1));
    if ( v11 <= 1 )
      return;
  }
  v83 = (__int64 *)a1[9];
  v12 = *v83;
  v96 = a2;
  v84 = *(void (__fastcall **)(__int64 *, __int64, __int64 *))(v12 + 16);
  v97 = 0;
  v100 = v102;
  v98 = v11 == 2;
  v99 = 0;
  v101 = 0x200000000LL;
  if ( v11 != 2 )
  {
    v13 = v105;
    v14 = *(unsigned int *)(a1[1] + 24);
    v106 = v108;
    v107 = 0x2000000000LL;
    v15 = v14;
    ptr = v105;
    v104 = 0x2000000000LL;
    if ( v14 > 0x20 )
    {
      sub_22134E0(&ptr, v105, v14, 4);
      memset(ptr, 0, 4 * v14);
      v17 = (unsigned int)v107;
      LODWORD(v104) = v14;
      v16 = a1[2];
      v81 = (unsigned int)v107 + 1LL;
      if ( v81 > HIDWORD(v107) )
      {
        sub_22134E0(&v106, v108, v81, 8);
        v17 = (unsigned int)v107;
      }
    }
    else
    {
      if ( v14 )
      {
        v65 = 4 * v14;
        if ( v65 >= 8 )
        {
          v68 = v65 >> 3;
          memset(v105, 0, 8 * v68);
          v13 = &v105[v68];
        }
        if ( (v65 & 4) != 0 )
          *(_DWORD *)v13 = 0;
      }
      LODWORD(v104) = v15;
      v16 = a1[2];
      v17 = 0;
    }
    *((_QWORD *)v106 + v17) = v16;
    v18 = a1[2];
    LODWORD(v107) = v107 + 1;
    *((_DWORD *)ptr + *(unsigned int *)(v18 + 48)) = (__int64)(*(_QWORD *)(v18 + 88) - *(_QWORD *)(v18 + 80)) >> 4;
    v19 = v107;
    v20 = (_QWORD *)a1[1];
    if ( !(_DWORD)v107 )
      goto LABEL_35;
    v82 = v4;
    while ( 1 )
    {
      v21 = v19--;
      v22 = *((_QWORD *)v106 + v21 - 1);
      LODWORD(v107) = v19;
      if ( v22 == *v20 )
        LOBYTE(v97) = 1;
      v23 = *(__int64 **)(v22 + 56);
      v24 = *(__int64 **)(v22 + 64);
      if ( v23 != v24 )
        break;
LABEL_33:
      if ( !v19 )
      {
        v4 = v82;
LABEL_35:
        v50 = (__int64 *)v20[5];
        for ( i = (__int64 *)v20[6]; i != v50; ++v50 )
        {
          v59 = *a1;
          v60 = *v50;
          v61 = sub_9C0140(*a1 + 96, v4);
          v62 = *(unsigned int *)(v60 + 48);
          v63 = 2 * v61;
          v64 = *(_QWORD *)(*(_QWORD *)(v59 + 8) + 8 * v62);
          if ( (v64 & 1) != 0 )
          {
            v54 = (v64 >> 1) & ~(-1LL << (v64 >> 58));
            v53 = (v54 >> v63) & 1;
            LOBYTE(v54) = (v54 >> ((unsigned __int8)v63 + 1)) & 1;
          }
          else
          {
            v52 = *(_QWORD *)v64;
            v53 = (*(_QWORD *)(*(_QWORD *)v64 + 8LL * (v63 >> 6)) >> (v63 & 0x3F)) & 1LL;
            v54 = (*(_QWORD *)(v52 + 8LL * ((v63 + 1) >> 6)) >> ((unsigned __int8)v63 + 1)) & 1LL;
          }
          if ( (_BYTE)v54 )
          {
            if ( !(_DWORD)v53 )
            {
              v55 = *((_DWORD *)ptr + v62);
              if ( v55 )
              {
                v56 = *(char **)(v60 + 88);
                v57 = *(char **)(v60 + 80);
                v58 = (_WORD *)(*(_QWORD *)(v60 + 32) & 0xFFFFFFFFFFFFFFF8LL);
                if ( v55 < (unsigned int)((v56 - v57) >> 4) && v58 && v57 != v56 )
                {
                  v69 = v60;
                  v70 = v85;
                  do
                  {
                    v76 = *(_QWORD *)v57;
                    if ( *(_QWORD *)v57
                      && *((_DWORD *)ptr + *(unsigned int *)(v76 + 48)) >= (unsigned int)((__int64)(*(_QWORD *)(v76 + 88)
                                                                                                  - *(_QWORD *)(v76 + 80)) >> 4) )
                    {
                      if ( (*v58 & 0x1FF) == 0x83 )
                      {
                        v71 = *(_WORD **)(v76 + 24);
                        if ( v71 && (*v71 & 0x1FFu) - 132 <= 1 )
                        {
                          v72 = (unsigned int)v101;
                          v73 = v88 & 0xFFFFFFFF00000000LL;
                          v74 = (unsigned int)v101 + 1LL;
                          v88 &= 0xFFFFFFFF00000000LL;
                          if ( v74 > HIDWORD(v101) )
                          {
                            v90 = v73;
                            v95 = v56;
                            v94 = v58;
                            v92 = v69;
                            v87 = v71;
                            sub_22134E0(&v100, v102, v74, 16);
                            v72 = (unsigned int)v101;
                            v56 = v95;
                            v58 = v94;
                            v69 = v92;
                            v73 = v90;
                            v71 = v87;
                          }
                          v75 = (char *)v100 + 16 * v72;
                          *v75 = v71;
                          v75[1] = v73;
                          LODWORD(v101) = v101 + 1;
                        }
                      }
                      else
                      {
                        v77 = (unsigned int)((__int64)&v57[-*(_QWORD *)(v69 + 80)] >> 4) | v70 & 0xFFFFFFFF00000000LL;
                        v78 = (unsigned int)v101;
                        v70 = v77;
                        v79 = (unsigned int)v101 + 1LL;
                        if ( v79 > HIDWORD(v101) )
                        {
                          v93 = v56;
                          v91 = v58;
                          v89 = v69;
                          v86 = v77;
                          sub_22134E0(&v100, v102, v79, 16);
                          v78 = (unsigned int)v101;
                          v56 = v93;
                          v58 = v91;
                          v69 = v89;
                          v77 = v86;
                        }
                        v80 = (char *)v100 + 16 * v78;
                        *v80 = v58;
                        v80[1] = v77;
                        LODWORD(v101) = v101 + 1;
                      }
                    }
                    v57 += 16;
                  }
                  while ( v56 != v57 );
                  v85 = v70;
                }
              }
            }
          }
        }
        if ( ptr != v105 )
          free(ptr);
        if ( v106 != v108 )
          free(v106);
        goto LABEL_50;
      }
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v27 = *v23;
        if ( !*v23 )
          goto LABEL_17;
        v28 = *a1;
        v29 = sub_9C0140(*a1 + 96, v82);
        v30 = *(unsigned int *)(v27 + 48);
        v31 = *(_QWORD *)(v28 + 8);
        v32 = (unsigned int)(2 * v29);
        v33 = *(_QWORD *)(v31 + 8 * v30);
        v34 = (unsigned int)(v32 + 1);
        if ( (v33 & 1) != 0 )
          break;
        v25 = *(_QWORD *)(*(_QWORD *)v33 + 8LL * ((unsigned int)v32 >> 6));
        if ( !_bittest64(&v25, v32 & 0x3F) )
          goto LABEL_27;
        v26 = *(_QWORD *)(*(_QWORD *)v33 + 8LL * ((unsigned int)v34 >> 6));
        if ( _bittest64(&v26, v34) )
          goto LABEL_22;
LABEL_17:
        v23 += 2;
        if ( v24 == v23 )
          goto LABEL_32;
      }
      v35 = (v33 >> 1) & ~(-1LL << (*(_QWORD *)(v31 + 8 * v30) >> 58));
      if ( !_bittest64(&v35, v32) )
        goto LABEL_27;
      if ( !_bittest64(&v35, v34) )
        goto LABEL_17;
LABEL_22:
      v36 = *a1;
      v37 = 2 * sub_9C0140(*a1 + 96, v82);
      v38 = v37 + 1;
      v39 = *(_QWORD *)(*(_QWORD *)(v36 + 8) + 8LL * *(unsigned int *)(v22 + 48));
      if ( (v39 & 1) != 0 )
      {
        v41 = (v39 >> 1) & ~(-1LL << (v39 >> 58));
        v40 = (v41 >> v37) & 1;
        LOBYTE(v41) = (v41 >> v38) & 1;
      }
      else
      {
        v40 = (*(_QWORD *)(*(_QWORD *)v39 + 8LL * (v37 >> 6)) >> (v37 & 0x3F)) & 1LL;
        v41 = (*(_QWORD *)(*(_QWORD *)v39 + 8LL * (v38 >> 6)) >> v38) & 1LL;
      }
      if ( (_BYTE)v41 && !(_DWORD)v40 )
      {
        HIBYTE(v97) = 1;
        goto LABEL_17;
      }
      v30 = *(unsigned int *)(v27 + 48);
LABEL_27:
      v42 = *(char **)(v27 + 80);
      v43 = (int *)((char *)ptr + 4 * v30);
      v44 = *(char **)(v27 + 88);
      v45 = *v43;
      v46 = *v43 + 1;
      v47 = v46;
      if ( !*v43 )
      {
        if ( v42 == v44 )
        {
          v47 = 1;
        }
        else
        {
          v66 = *(char **)(v27 + 80);
          while ( 1 )
          {
            v47 = v46;
            if ( !*(_QWORD *)v66 )
            {
              *v43 = v46;
              v67 = v45 + 2;
              v45 = v47;
              v47 = v67;
            }
            v66 += 16;
            if ( v66 == v44 )
              break;
            v46 = v45 + 1;
          }
        }
      }
      *v43 = v47;
      if ( v47 != (unsigned int)((v44 - v42) >> 4) )
        goto LABEL_17;
      v48 = (unsigned int)v107;
      v49 = (unsigned int)v107 + 1LL;
      if ( v49 > HIDWORD(v107) )
      {
        sub_22134E0(&v106, v108, v49, 8);
        v48 = (unsigned int)v107;
      }
      v23 += 2;
      *((_QWORD *)v106 + v48) = v27;
      LODWORD(v107) = v107 + 1;
      if ( v24 == v23 )
      {
LABEL_32:
        v19 = v107;
        v20 = (_QWORD *)a1[1];
        goto LABEL_33;
      }
    }
  }
LABEL_50:
  v84(v83, v4, &v96);
  if ( v100 != v102 )
    free(v100);
}

