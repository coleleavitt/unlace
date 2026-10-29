__int64 __fastcall sub_162CBE0(__int64 *a1, int a2, __int64 a3, double a4, double a5)
{
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned int v9; // r15d
  unsigned __int64 v11; // r13
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // r13
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  _QWORD *v32; // rax
  unsigned int v33; // eax
  __int64 v34; // rax
  __int64 *v35; // rsi
  unsigned __int64 v36; // rdi
  __int64 v37; // rbx
  __int64 v38; // rax
  unsigned __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  unsigned int v46; // eax
  __int64 v47; // rax
  __int64 v48; // r15
  __int64 v49; // r13
  __int64 v50; // rax
  unsigned int v51; // r10d
  unsigned __int64 v52; // r13
  unsigned __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  unsigned int v58; // eax
  unsigned int v59; // eax
  __int64 v60; // rax
  unsigned int v61; // eax
  unsigned int v62; // eax
  unsigned int v63; // eax
  __int64 v64; // rax
  unsigned __int8 *v65; // rbx
  unsigned __int8 *v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rbx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // r14
  unsigned __int8 *v76; // rbx
  _BYTE *v77; // rdx
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // rax
  unsigned int v83; // eax
  __int64 v84; // rax
  __int64 v85; // rbx
  __int64 v86; // rdx
  int v87; // eax
  __int64 v88; // rdx
  int v89; // eax
  __int64 v90; // rax
  __int64 v91; // r12
  __int64 v92; // r14
  __int64 v93; // r12
  void *v94; // rdi
  __int64 v95; // rax
  __int64 v96; // r15
  __int64 v97; // rax
  __int64 v98; // r15
  void *v99; // rdi
  __int64 v100; // [rsp+8h] [rbp-100h]
  __int64 v101; // [rsp+8h] [rbp-100h]
  unsigned __int64 v102; // [rsp+10h] [rbp-F8h]
  __int64 v103; // [rsp+18h] [rbp-F0h]
  __int64 v104; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v105; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v106; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v107; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v108[16]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v109; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v110; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v111; // [rsp+68h] [rbp-A0h]
  char v112; // [rsp+B8h] [rbp-50h]
  unsigned int v113; // [rsp+C0h] [rbp-48h]
  char v114; // [rsp+C4h] [rbp-44h]

  v7 = sub_168B6C0(a1);
  if ( a2 == 11944 )
  {
    v9 = sub_16EC930(*a1, a3, 2);
    if ( (_BYTE)v9 )
      return 1;
    v15 = 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL);
    v16 = *(_QWORD *)(a3 + v15 + 32);
    v17 = *(_QWORD *)(a3 + v15 + 40);
    v18 = sub_19179A0(*a1, v16, 1);
    if ( v18 == 1 )
      return 1;
    v19 = v18 & 0xFFFFFFFFFFFFFFFELL;
    v105 = *(_QWORD *)(v19 + 8);
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v105 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                   + 16LL)
        & 0xF7) == 0x22 )
    {
      v20 = *a1;
      *(_QWORD *)(a3 + 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL) + 32) = v19;
      v21 = sub_19146F0(v20, v17);
      if ( v21 == 1 )
        return 1;
      v106 = *(_QWORD *)((v21 & 0xFFFFFFFFFFFFFFFELL) + 8);
      if ( sub_9EC890(*(_QWORD *)(v106 & 0xFFFFFFFFFFFFFFF0LL), v17, v22, v23, v24) )
      {
        *(_QWORD *)(a3 + 8) = v105;
        return v9;
      }
      v25 = sub_BF6D70(a3);
      sub_168B9F0(v108, a1, v25, 4162, 0);
      if ( v112 )
      {
        sub_AE9DF0(&v110, (__int64)"second", 1u);
      }
      else if ( v114 )
      {
        v28 = sub_168B9E0(v108);
        v31 = v109;
        if ( v109 )
          v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v109 + 32LL))(v109);
        v107 = v31;
        v32 = sub_1587BC0(v28, &v107, v26, v27, v29, v30);
        sub_AE9DF0((unsigned __int8 **)(*v32 + 32LL * v113 + 8), (__int64)"second", 1u);
      }
LABEL_38:
      v37 = sub_1605D30((__int64)v108, &v106);
      v107 = sub_EEC8C0(v17, (__int64)&v106, a4);
      goto LABEL_27;
    }
LABEL_23:
    v33 = sub_BF6D70(a3);
    sub_168B9F0(v108, a1, v33, 4163, 0);
    v34 = sub_162C0B0((__int64)v108, (__int64)"first");
LABEL_24:
    v35 = &v105;
LABEL_25:
    v36 = v16;
    v37 = sub_1605D30(v34, v35);
LABEL_26:
    v107 = sub_EEC8C0(v36, (__int64)v35, a4);
LABEL_27:
    v9 = *(unsigned __int8 *)(sub_1587DB0(v37, &v107) + 120);
    sub_15F7200(v108);
    return v9;
  }
  if ( a2 == 11945 )
  {
    if ( !(unsigned __int8)sub_16EC930(*a1, a3, 2) )
    {
      v16 = *(_QWORD *)(a3 + 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL) + 32);
      v38 = sub_19179A0(*a1, v16, 1);
      if ( v38 != 1 )
      {
        v39 = v38 & 0xFFFFFFFFFFFFFFFELL;
        v106 = *(_QWORD *)(v39 + 8);
        v40 = v106;
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v106 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                       + 16LL)
            & 0xF7) == 0x22 )
        {
          *(_QWORD *)(a3 + 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL) + 32) = v39;
          *(_QWORD *)(a3 + 8) = v40;
          return (unsigned int)sub_16D5460(*a1, a3, 1, 0, 15, 1);
        }
        v58 = sub_BF6D70(a3);
        sub_168B9F0(v108, a1, v58, 4163, 0);
        v34 = sub_162C0B0((__int64)v108, (__int64)"first");
        v35 = &v106;
        goto LABEL_25;
      }
    }
    return 1;
  }
  v8 = v7;
  if ( a2 == 11946 )
  {
    v9 = sub_16EC930(*a1, a3, 2);
    if ( (_BYTE)v9 )
      return 1;
    v41 = 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL);
    v16 = *(_QWORD *)(a3 + v41 + 32);
    v17 = *(_QWORD *)(a3 + v41 + 40);
    v42 = sub_19179A0(*a1, v16, 1);
    if ( v42 == 1 )
      return 1;
    v105 = *(_QWORD *)((v42 & 0xFFFFFFFFFFFFFFFELL) + 8);
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v105 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                   + 16LL)
        & 0xF7) == 0x22 )
    {
      v106 = *(_QWORD *)(v17 + 8);
      if ( sub_9EC890(*(_QWORD *)(v106 & 0xFFFFFFFFFFFFFFF0LL), v16, v43, v44, v45) )
      {
        *(_QWORD *)(a3 + 8) = *(_QWORD *)(v8 + 18720);
        return v9;
      }
      v46 = sub_BF6D70(a3);
      sub_168B9F0(v108, a1, v46, 4162, 0);
      if ( v112 )
      {
        v65 = v110;
        if ( !v110 )
        {
          v86 = v111;
          v87 = *(_DWORD *)(v111 + 14976);
          if ( v87 )
          {
            v90 = (unsigned int)(v87 - 1);
            *(_DWORD *)(v111 + 14976) = v90;
            v65 = *(unsigned __int8 **)(v86 + 8 * v90 + 14848);
            v91 = *((unsigned int *)v65 + 134);
            *v65 = 0;
            v92 = *((_QWORD *)v65 + 66);
            *((_DWORD *)v65 + 106) = 0;
            v93 = v92 + (v91 << 6);
            while ( v92 != v93 )
            {
              while ( 1 )
              {
                v93 -= 64;
                v94 = *(void **)(v93 + 24);
                if ( v94 == (void *)(v93 + 40) )
                  break;
                operator delete(v94);
                if ( v92 == v93 )
                  goto LABEL_86;
              }
            }
LABEL_86:
            *((_DWORD *)v65 + 134) = 0;
          }
          else
          {
            v65 = (unsigned __int8 *)operator new(0x3A0u);
            *v65 = 0;
            *((_QWORD *)v65 + 12) = v65 + 112;
            *((_QWORD *)v65 + 16) = v65 + 144;
            *((_QWORD *)v65 + 20) = v65 + 176;
            *((_QWORD *)v65 + 24) = v65 + 208;
            *((_QWORD *)v65 + 28) = v65 + 240;
            *((_QWORD *)v65 + 32) = v65 + 272;
            *((_QWORD *)v65 + 36) = v65 + 304;
            *((_QWORD *)v65 + 40) = v65 + 336;
            *((_QWORD *)v65 + 44) = v65 + 368;
            *((_QWORD *)v65 + 48) = v65 + 400;
            *((_QWORD *)v65 + 52) = v65 + 432;
            v65[112] = 0;
            *((_QWORD *)v65 + 13) = 0;
            *((_QWORD *)v65 + 17) = 0;
            v65[144] = 0;
            *((_QWORD *)v65 + 21) = 0;
            v65[176] = 0;
            *((_QWORD *)v65 + 25) = 0;
            v65[208] = 0;
            *((_QWORD *)v65 + 29) = 0;
            v65[240] = 0;
            *((_QWORD *)v65 + 33) = 0;
            v65[272] = 0;
            *((_QWORD *)v65 + 37) = 0;
            v65[304] = 0;
            *((_QWORD *)v65 + 41) = 0;
            v65[336] = 0;
            *((_QWORD *)v65 + 45) = 0;
            v65[368] = 0;
            *((_QWORD *)v65 + 49) = 0;
            v65[400] = 0;
            *((_QWORD *)v65 + 53) = 0x800000000LL;
            *((_QWORD *)v65 + 66) = v65 + 544;
            *((_QWORD *)v65 + 67) = 0x600000000LL;
          }
          v110 = v65;
        }
        v65[*v65 + 1] = 1;
        v66 = v110;
        v67 = *v110;
        *v110 = v67 + 1;
        *(_QWORD *)&v66[8 * v67 + 16] = "second";
      }
      else if ( v114 )
      {
        v70 = sub_168B9E0(v108);
        v73 = v109;
        if ( v109 )
          v73 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v109 + 32LL))(v109);
        v107 = v73;
        v74 = sub_1587BC0(v70, &v107, v68, v69, v71, v72);
        v75 = *v74 + 32LL * v113;
        v76 = *(unsigned __int8 **)(v75 + 8);
        if ( !v76 )
        {
          v88 = *(_QWORD *)(v75 + 16);
          v89 = *(_DWORD *)(v88 + 14976);
          if ( v89 )
          {
            v95 = (unsigned int)(v89 - 1);
            *(_DWORD *)(v88 + 14976) = v95;
            v76 = *(unsigned __int8 **)(v88 + 8 * v95 + 14848);
            v96 = *((unsigned int *)v76 + 134);
            *v76 = 0;
            v97 = *((_QWORD *)v76 + 66);
            *((_DWORD *)v76 + 106) = 0;
            v98 = v97 + (v96 << 6);
            while ( v97 != v98 )
            {
              while ( 1 )
              {
                v98 -= 64;
                v99 = *(void **)(v98 + 24);
                if ( v99 == (void *)(v98 + 40) )
                  break;
                v101 = v97;
                operator delete(v99);
                v97 = v101;
                if ( v101 == v98 )
                  goto LABEL_91;
              }
            }
LABEL_91:
            *((_DWORD *)v76 + 134) = 0;
          }
          else
          {
            v76 = (unsigned __int8 *)operator new(0x3A0u);
            *v76 = 0;
            *((_QWORD *)v76 + 12) = v76 + 112;
            *((_QWORD *)v76 + 16) = v76 + 144;
            *((_QWORD *)v76 + 20) = v76 + 176;
            *((_QWORD *)v76 + 24) = v76 + 208;
            *((_QWORD *)v76 + 28) = v76 + 240;
            *((_QWORD *)v76 + 32) = v76 + 272;
            *((_QWORD *)v76 + 36) = v76 + 304;
            *((_QWORD *)v76 + 40) = v76 + 336;
            *((_QWORD *)v76 + 44) = v76 + 368;
            *((_QWORD *)v76 + 48) = v76 + 400;
            *((_QWORD *)v76 + 52) = v76 + 432;
            v76[112] = 0;
            *((_QWORD *)v76 + 13) = 0;
            *((_QWORD *)v76 + 17) = 0;
            v76[144] = 0;
            *((_QWORD *)v76 + 21) = 0;
            v76[176] = 0;
            *((_QWORD *)v76 + 25) = 0;
            v76[208] = 0;
            *((_QWORD *)v76 + 29) = 0;
            v76[240] = 0;
            *((_QWORD *)v76 + 33) = 0;
            v76[272] = 0;
            *((_QWORD *)v76 + 37) = 0;
            v76[304] = 0;
            *((_QWORD *)v76 + 41) = 0;
            v76[336] = 0;
            *((_QWORD *)v76 + 45) = 0;
            v76[368] = 0;
            *((_QWORD *)v76 + 49) = 0;
            v76[400] = 0;
            *((_QWORD *)v76 + 53) = 0x800000000LL;
            *((_QWORD *)v76 + 66) = v76 + 544;
            *((_QWORD *)v76 + 67) = 0x600000000LL;
          }
          *(_QWORD *)(v75 + 8) = v76;
        }
        v76[*v76 + 1] = 1;
        v77 = *(_BYTE **)(v75 + 8);
        v78 = (unsigned __int8)*v77;
        *v77 = v78 + 1;
        *(_QWORD *)&v77[8 * v78 + 16] = "second";
      }
      goto LABEL_38;
    }
    goto LABEL_23;
  }
  if ( (unsigned int)(a2 - 11947) > 1 )
  {
    v9 = 1;
    if ( a2 != 11949 )
      return v9;
    v47 = 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL);
    v16 = *(_QWORD *)(a3 + v47 + 32);
    v48 = *(_QWORD *)(a3 + v47 + 40);
    v100 = v48;
    v49 = sub_19179A0(*a1, v16, 1);
    v50 = sub_19179A0(*a1, v48, 1);
    LOBYTE(v51) = v50 == 1 || v49 == 1;
    v9 = v51;
    if ( (_BYTE)v51 )
      return v9;
    v52 = v49 & 0xFFFFFFFFFFFFFFFELL;
    v53 = v50 & 0xFFFFFFFFFFFFFFFELL;
    v54 = *(_QWORD *)(v53 + 8);
    v102 = v53;
    v104 = *(_QWORD *)(v52 + 8);
    v105 = v54;
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v104 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                   + 16LL)
        & 0xF7) == 0x22 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v54 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                     + 16LL)
          & 0xF7) == 0x22 )
      {
LABEL_42:
        if ( !(unsigned int)sub_BFE6E0(v16, v8, 2, a4) )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v105 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                         + 16LL)
              & 0xF7) != 0x22 )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v104 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                       & 0xFFFFFFFFFFFFFFF0LL)
                           + 16LL)
                & 0xF7) == 0x22 )
              goto LABEL_46;
LABEL_60:
            v61 = sub_BF6D70(a3);
            sub_168B9F0(v108, a1, v61, 4161, 0);
            v34 = sub_1605D30((__int64)v108, &v104);
            goto LABEL_24;
          }
          if ( !(unsigned int)sub_BFE6E0(v100, v8, 2, a4) )
          {
            v103 = sub_F68450(*(_QWORD *)(v104 & 0xFFFFFFFFFFFFFFF0LL), v8, v55, v56, v57);
            v82 = sub_F68450(*(_QWORD *)(v105 & 0xFFFFFFFFFFFFFFF0LL), v8, v79, v80, v81);
            if ( !sub_AAC110(
                    v8,
                    *(_QWORD *)(*(_QWORD *)&byte_8[v103 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL)
                  & 0xFFFFFFFFFFFFFFF0LL,
                    *(_QWORD *)(*(_QWORD *)&byte_8[v82 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL)
                  & 0xFFFFFFFFFFFFFFF0LL,
                    0) )
            {
              v83 = sub_BF6D70(a3);
              sub_168B9F0(v108, a1, v83, 5312, 0);
              v84 = sub_1605D30((__int64)v108, &v104);
              v85 = sub_1605D30(v84, &v105);
              v35 = &v106;
              v106 = sub_EEC8C0(v16, (__int64)&v105, a4);
              v36 = v100;
              v37 = sub_1587DB0(v85, &v106);
              goto LABEL_26;
            }
          }
        }
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v104 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                       + 16LL)
            & 0xF7) == 0x22 )
        {
LABEL_46:
          if ( (unsigned int)sub_BFE6E0(v16, v8, 2, a4) )
            v52 = sub_160A600(*a1, v52, v105, 0xDu, 0, 0, a4, a5, 0) & 0xFFFFFFFFFFFFFFFELL;
          if ( (unsigned int)sub_BFE6E0(v100, v8, 2, a4) )
            v102 = sub_160A600(*a1, v102, v104, 0xDu, 0, 0, a4, a5, 0) & 0xFFFFFFFFFFFFFFFELL;
          *(_QWORD *)(a3 + 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL) + 32) = v52;
          *(_QWORD *)(a3 + 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL) + 40) = v102;
          *(_QWORD *)(a3 + 8) = *(_QWORD *)(v8 + 18736);
          return v9;
        }
LABEL_59:
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v105 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                       + 16LL)
            & 0xF7) == 0x22 )
          goto LABEL_46;
        goto LABEL_60;
      }
    }
    else
    {
      if ( !(unsigned int)sub_BFE6E0(v16, v8, 2, a4) )
      {
        v62 = sub_BF6D70(a3);
        sub_168B9F0(v108, a1, v62, 4164, 0);
        v34 = sub_162C0B0((__int64)v108, (__int64)"first");
        v35 = &v104;
        goto LABEL_25;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v105 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                     + 16LL)
          & 0xF7) == 0x22 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v104 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                       + 16LL)
            & 0xF7) != 0x22 )
          goto LABEL_46;
        goto LABEL_42;
      }
    }
    if ( !(unsigned int)sub_BFE6E0(v100, v8, 2, a4) )
    {
      v63 = sub_BF6D70(a3);
      sub_168B9F0(v108, a1, v63, 4164, 0);
      v64 = sub_162BBD0((__int64)v108, (__int64)"second");
      v35 = &v105;
      v36 = v100;
      v37 = sub_1605D30(v64, &v105);
      goto LABEL_26;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v104 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                   + 16LL)
        & 0xF7) != 0x22 )
      goto LABEL_59;
    goto LABEL_42;
  }
  v9 = sub_16EC930(*a1, a3, 1);
  if ( (_BYTE)v9 )
    return 1;
  v11 = *(_QWORD *)(a3 + 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL) + 32);
  v12 = sub_19179A0(*a1, v11, 1);
  if ( v12 == 1 )
    return 1;
  v13 = v12 & 0xFFFFFFFFFFFFFFFELL;
  v106 = *(_QWORD *)(v13 + 8);
  v14 = v106;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v106 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
      & 0xF7) != 0x22 )
  {
    v59 = sub_BF6D70(a3);
    sub_168B9F0(v108, a1, v59, 4163, 0);
    v60 = sub_162C0B0((__int64)v108, (__int64)"first");
    v35 = &v106;
    v36 = v11;
    v37 = sub_1605D30(v60, &v106);
    goto LABEL_26;
  }
  *(_QWORD *)(a3 + 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL) + 32) = v13;
  if ( a2 == 11947 )
    *(_QWORD *)(a3 + 8) = v14;
  return v9;
}
