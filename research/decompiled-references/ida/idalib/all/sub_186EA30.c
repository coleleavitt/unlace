void __fastcall sub_186EA30(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  _WORD *v6; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r13
  __int64 v10; // rsi
  unsigned __int8 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // r14
  __int16 v17; // ax
  __int64 v18; // rdi
  int v19; // eax
  unsigned __int64 v20; // rcx
  char v21; // al
  char v22; // r9
  __int64 v23; // r12
  __int64 v24; // rdi
  _QWORD *v25; // rax
  __int64 v26; // rdx
  _WORD *v27; // rdx
  __int64 *v28; // r10
  __int64 v29; // r14
  __int64 v30; // rax
  char v31; // al
  __int64 *v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // r8
  unsigned int v39; // ecx
  __int64 v40; // rax
  __int64 *v41; // rsi
  bool v42; // al
  unsigned int v43; // edx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rsi
  unsigned __int64 v47; // rdx
  _WORD *v48; // rax
  __int64 v49; // r9
  _QWORD *v50; // r15
  _QWORD *v51; // rbx
  __int64 v52; // rcx
  unsigned int v53; // eax
  unsigned __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rbx
  __int64 v61; // r8
  __int64 v62; // r9
  void *v63; // rax
  _QWORD *v64; // rax
  char *v65; // r9
  _DWORD *v66; // rax
  _DWORD *v67; // r10
  bool v68; // r15
  char *v69; // rdx
  char *v70; // rdi
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rdx
  __int64 v75; // r14
  _QWORD *v76; // rax
  _QWORD *v77; // rax
  unsigned __int8 v78; // [rsp+10h] [rbp-118h]
  unsigned __int8 v79; // [rsp+10h] [rbp-118h]
  unsigned __int8 v80; // [rsp+10h] [rbp-118h]
  __int64 v81; // [rsp+10h] [rbp-118h]
  char v82; // [rsp+10h] [rbp-118h]
  __int64 v83; // [rsp+10h] [rbp-118h]
  unsigned int v84; // [rsp+10h] [rbp-118h]
  char v85; // [rsp+10h] [rbp-118h]
  char v86; // [rsp+10h] [rbp-118h]
  unsigned __int8 v87; // [rsp+18h] [rbp-110h]
  __int64 *v88; // [rsp+20h] [rbp-108h]
  char v89; // [rsp+20h] [rbp-108h]
  unsigned int v90; // [rsp+20h] [rbp-108h]
  unsigned __int8 v91; // [rsp+20h] [rbp-108h]
  char v92; // [rsp+20h] [rbp-108h]
  unsigned __int8 v93; // [rsp+20h] [rbp-108h]
  __int64 v94; // [rsp+20h] [rbp-108h]
  __int64 v95; // [rsp+20h] [rbp-108h]
  unsigned __int8 v96; // [rsp+2Eh] [rbp-FAh]
  char v97; // [rsp+2Eh] [rbp-FAh]
  __int64 v98; // [rsp+38h] [rbp-F0h] BYREF
  void *v99; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v100; // [rsp+48h] [rbp-E0h]
  _BYTE v101[16]; // [rsp+50h] [rbp-D8h] BYREF
  void *ptr; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v103; // [rsp+68h] [rbp-C0h]
  _QWORD v104[2]; // [rsp+70h] [rbp-B8h] BYREF
  unsigned __int8 *v105; // [rsp+80h] [rbp-A8h] BYREF
  char v106; // [rsp+D8h] [rbp-50h]
  unsigned int v107; // [rsp+E0h] [rbp-48h]
  char v108; // [rsp+E4h] [rbp-44h]

  v87 = a3;
  v78 = a4;
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 24) + 28LL) & 0x7F) != 0x21 )
  {
    v6 = (_WORD *)a2;
    v8 = a2;
    v9 = a2;
    ptr = *(void **)(a2 + 8);
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 248LL);
    v11 = sub_F65CA0((__int64 *)&ptr, v10, a3, a4, a5, a6);
    while ( 1 )
    {
      v16 = sub_BFBAE0(v8);
      v17 = *(_WORD *)v16 & 0x1FF;
      if ( v17 != 46 )
        break;
      v18 = *(_QWORD *)(v16 + 24);
      v19 = *(_BYTE *)(v18 + 28) & 0x7F;
      v20 = (unsigned int)(v19 - 40);
      if ( (unsigned int)v20 <= 6 )
        return;
      if ( (unsigned int)(v19 - 49) <= 2 && !(unsigned __int8)sub_B78060(v18, v10, v12, v20, v14) )
        v9 = v16;
      ptr = *(void **)(v9 + 8);
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 248LL);
      v21 = sub_F65CA0((__int64 *)&ptr, v10, v12, v20, v14, v15);
      v8 = *(_QWORD *)(v16 + 16);
      if ( !v21 )
        v11 = 0;
    }
    if ( v17 != 98 )
    {
      sub_186F230(a1, v8);
      return;
    }
    v22 = v78 & v11;
    if ( (v78 & v11) == 0 )
    {
      v23 = *(_QWORD *)(v9 + 24);
      if ( (*(_WORD *)v8 & 0x1FF) == 0x4F )
      {
        while ( 1 )
        {
          v27 = *(_WORD **)(v8 + 16);
          if ( (*v27 & 0x1FF) != 0x4F )
            break;
          v8 = *(_QWORD *)(v8 + 16);
        }
        if ( ((*(_WORD *)(v8 + 2) >> 3) & 0x7F) == 8 )
        {
          v28 = (__int64 *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v28 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
          {
            v29 = *(_QWORD *)(a1 + 24);
            v88 = (__int64 *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL);
            v30 = sub_F68450(*v28, v10, (__int64)v27, v13, v14);
            v31 = sub_A5F460(v29, v30);
            v22 = 0;
            if ( v31 )
            {
              v32 = (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL);
              sub_168B9F0((__int64)&ptr, v32, *(_DWORD *)(v9 + 40), 0x19DAu, 0);
              v98 = sub_F68450(*v88, (__int64)v32, v33, v34, v35);
              v36 = sub_162B6D0((__int64)&ptr, &v98);
              if ( *(_BYTE *)(v36 + 120) )
              {
                sub_AE9DF0((unsigned __int8 **)(v36 + 32), v23, 0xAu);
              }
              else if ( *(_BYTE *)(v36 + 132) )
              {
                v94 = v36;
                v71 = sub_168B9E0((_QWORD *)v36);
                v74 = v94;
                v75 = v71;
                v76 = *(_QWORD **)(v94 + 16);
                if ( v76 )
                {
                  v76 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64, _QWORD, __int64, _QWORD))(*v76 + 32LL))(
                                    *(_QWORD *)(v94 + 16),
                                    &v98,
                                    v94,
                                    *v76,
                                    v73,
                                    0);
                  v74 = v94;
                }
                v95 = v74;
                v99 = v76;
                v77 = sub_1587BC0(v75, (__int64 *)&v99, v74, v72, v73, 0);
                sub_AE9DF0((unsigned __int8 **)(*v77 + 32LL * *(unsigned int *)(v95 + 128) + 8), v23, 0xAu);
              }
              sub_15F7200(&ptr);
              v22 = 0;
            }
          }
        }
      }
      v24 = *(_QWORD *)(a1 + 16);
      if ( *(_BYTE *)(v24 + 20) )
      {
        v25 = *(_QWORD **)v24;
        v26 = *(_QWORD *)v24 + 8LL * *(unsigned int *)(v24 + 12);
        if ( *(_QWORD *)v24 == v26 )
          return;
        while ( v23 != *v25 )
        {
          if ( (_QWORD *)v26 == ++v25 )
            return;
        }
      }
      else
      {
        v89 = v22;
        v37 = sub_2236570(v24, v23);
        v22 = v89;
        if ( !v37 )
          return;
      }
      LOBYTE(v38) = *(_BYTE *)(a1 + 88);
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 48)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 43 > 1 )
      {
        if ( !(_BYTE)v38 || v78 || *(_QWORD *)(a1 + 96) != v23 )
        {
          if ( v87 )
            return;
LABEL_45:
          v39 = 6892;
          goto LABEL_37;
        }
        LOBYTE(v38) = 0;
      }
      else if ( !(_BYTE)v38 || v78 || v23 != *(_QWORD *)(a1 + 96) )
      {
LABEL_36:
        v39 = 7325;
LABEL_37:
        sub_168B9F0((__int64)&ptr, (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL), *(_DWORD *)(v9 + 40), v39, 0);
        if ( v106 )
        {
          sub_AE9DF0(&v105, v23, 0xAu);
        }
        else if ( v108 )
        {
          v60 = sub_168B9E0(&ptr);
          v63 = (void *)v104[0];
          if ( v104[0] )
            v63 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v104[0] + 32LL))(v104[0]);
          v99 = v63;
          v64 = sub_1587BC0(v60, (__int64 *)&v99, v58, v59, v61, v62);
          sub_AE9DF0((unsigned __int8 **)(*v64 + 32LL * v107 + 8), v23, 0xAu);
        }
        sub_15F7200(&ptr);
        v40 = *(_QWORD *)(a1 + 80);
        if ( v40 )
        {
          v41 = (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL);
          sub_168B9F0((__int64)&ptr, v41, *(_DWORD *)(v40 + 24), 0x1921u, 0);
          v42 = sub_B98FC0(*(_QWORD *)(a1 + 80), (__int64)v41);
          if ( v42 )
            v42 = (*(_BYTE *)(*(_QWORD *)(a1 + 80) + 29LL) & 2) != 0;
          LOBYTE(v99) = v42;
          sub_1588420((__int64)&ptr, (unsigned __int8 *)&v99);
          sub_15F7200(&ptr);
        }
        return;
      }
      v43 = 0;
      ptr = v104;
      v103 = 0x400000000LL;
      do
      {
        v44 = *((_QWORD *)v6 + 3);
        if ( (*(_BYTE *)(v44 + 28) & 0x7Fu) - 49 > 2 )
        {
          if ( ptr != v104 )
          {
            v82 = v38;
            free(ptr);
            LOBYTE(v38) = v82;
          }
          goto LABEL_73;
        }
        v45 = v43;
        v46 = HIDWORD(v103);
        v47 = v43 + 1LL;
        if ( v47 > HIDWORD(v103) )
        {
          v46 = (__int64)v104;
          v97 = v38;
          v92 = v22;
          v83 = *((_QWORD *)v6 + 3);
          sub_2237220(&ptr, v104, v47, 8);
          v45 = (unsigned int)v103;
          LOBYTE(v38) = v97;
          v22 = v92;
          v44 = v83;
        }
        v96 = v38;
        *((_QWORD *)ptr + v45) = v44;
        LODWORD(v103) = v103 + 1;
        v90 = v103;
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v44 + 48)
                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                      + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 43 <= 1 )
          v22 = 1;
        v79 = v22;
        v48 = (_WORD *)sub_BFBAE0(*((_QWORD *)v6 + 2));
        v22 = v79;
        v43 = v90;
        v6 = v48;
        v38 = v96;
      }
      while ( (*v48 & 0x1FF) == 0x2E );
      v49 = v79 ^ 1u;
      v50 = ptr;
      if ( ((v79 ^ 1) & v87) != 0 )
      {
        if ( ptr != v104 )
          free(ptr);
        return;
      }
      v51 = (char *)ptr + 8 * v90 - 8;
      v52 = 0x400000000LL;
      v99 = v101;
      v100 = 0x400000000LL;
      if ( v51 == ptr )
      {
        v70 = (char *)ptr + 8 * v90 - 8;
        v68 = 0;
        if ( v51 == v104 )
          goto LABEL_73;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v56 = *(v51 - 1);
            if ( *(char *)(v56 + 29) < 0 )
            {
              v80 = v38;
              v56 = sub_B72720(*(v51 - 1));
              v38 = v80;
            }
            v57 = *(unsigned int *)(v56 + 68);
            if ( (v57 & 0xFFFFFFF0) == 0 )
            {
              v91 = v38;
              v81 = v56;
              sub_B7EAB0(v56, v46, v57, v52, v38, v49);
              v38 = v91;
              LODWORD(v57) = *(_DWORD *)(v81 + 68);
            }
            v52 = (unsigned int)v100;
            v46 = HIDWORD(v100);
            v53 = ((unsigned int)v57 >> 4) - 1;
            v54 = (unsigned int)v100 + 1LL;
            if ( v54 > HIDWORD(v100) )
              break;
            --v51;
            *((_DWORD *)v99 + (unsigned int)v100) = v53;
            v55 = (unsigned int)(v100 + 1);
            LODWORD(v100) = v100 + 1;
            if ( v51 == v50 )
              goto LABEL_77;
          }
          v46 = (__int64)v101;
          v84 = v53;
          --v51;
          v93 = v38;
          sub_2237220(&v99, v101, v54, 4);
          v52 = (unsigned int)v100;
          v38 = v93;
          *((_DWORD *)v99 + (unsigned int)v100) = v84;
          v55 = (unsigned int)(v100 + 1);
          LODWORD(v100) = v100 + 1;
        }
        while ( v51 != v50 );
LABEL_77:
        v65 = (char *)v99 + 4 * v55;
        v66 = *(_DWORD **)(a1 + 104);
        v67 = &v66[*(unsigned int *)(a1 + 112)];
        v68 = v66 == v67 || v99 == v65;
        if ( v68 )
        {
LABEL_94:
          v68 = 0;
        }
        else if ( *v66 > *(_DWORD *)v99 )
        {
LABEL_93:
          v68 = 1;
        }
        else if ( *v66 >= *(_DWORD *)v99 )
        {
          v69 = (char *)v99;
          while ( 1 )
          {
            v69 += 4;
            if ( v67 == ++v66 || v65 == v69 )
              break;
            if ( *(_DWORD *)v69 < *v66 )
              goto LABEL_93;
            if ( *(_DWORD *)v69 > *v66 )
              goto LABEL_94;
          }
        }
        if ( v99 != v101 )
        {
          v85 = v38;
          free(v99);
          LOBYTE(v38) = v85;
        }
        v70 = (char *)ptr;
        if ( ptr == v104 )
          goto LABEL_88;
      }
      v86 = v38;
      free(v70);
      LOBYTE(v38) = v86;
LABEL_88:
      if ( v68 )
        return;
LABEL_73:
      if ( !(_BYTE)v38 )
        goto LABEL_45;
      goto LABEL_36;
    }
  }
}
