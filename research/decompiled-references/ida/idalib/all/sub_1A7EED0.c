__int64 __fastcall sub_1A7EED0(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // ecx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rbx
  unsigned __int64 v20; // rbx
  __int64 v21; // rbx
  __int64 *v22; // rbp
  unsigned int v23; // edx
  unsigned int v24; // ecx
  char v26; // dl
  unsigned __int64 *v27; // rdi
  __int64 v28; // r9
  unsigned __int64 *v29; // rcx
  unsigned __int64 *v30; // rax
  __int64 v31; // rdi
  unsigned __int64 *v32; // rsi
  unsigned __int64 *v33; // rax
  unsigned __int64 *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rbp
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  _QWORD *v41; // rax
  int v42; // edx
  unsigned __int8 *v43; // rbp
  __int64 v44; // rax
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // r14
  __int64 *v48; // rax
  unsigned __int8 *v49; // rbp
  unsigned __int8 *v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rbp
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // r15
  __int64 v67; // rax
  _QWORD *v68; // rax
  __int64 v69; // rdx
  int v70; // eax
  __int64 v71; // rax
  __int64 v72; // r13
  __int64 v73; // r14
  __int64 v74; // r13
  void *v75; // rdi
  __int64 v76; // rdx
  int v77; // eax
  __int64 v78; // r15
  int v79; // r14d
  unsigned __int8 *v80; // rdi
  __int64 v81; // r14
  __int64 v82; // r14
  int v83; // r15d
  unsigned __int8 *v84; // rdi
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // r14
  __int64 v88; // rax
  __int64 v89; // r14
  void *v90; // rdi
  __int64 v91; // rax
  __int64 v92; // r14
  __int64 v93; // rax
  __int64 v94; // r14
  void *v95; // rdi
  __int64 *v96; // [rsp+8h] [rbp-150h]
  __int64 v97; // [rsp+8h] [rbp-150h]
  char *v98; // [rsp+8h] [rbp-150h]
  __int64 v99; // [rsp+8h] [rbp-150h]
  __int64 v100; // [rsp+8h] [rbp-150h]
  __int64 v101; // [rsp+10h] [rbp-148h]
  __int64 v102; // [rsp+28h] [rbp-130h] BYREF
  _DWORD v103[4]; // [rsp+30h] [rbp-128h] BYREF
  _DWORD v104[4]; // [rsp+40h] [rbp-118h] BYREF
  __int64 v105; // [rsp+50h] [rbp-108h] BYREF
  char v106; // [rsp+58h] [rbp-100h]
  __int64 v107; // [rsp+5Ch] [rbp-FCh]
  char v108; // [rsp+64h] [rbp-F4h]
  void *v109; // [rsp+68h] [rbp-F0h]
  __int64 v110; // [rsp+70h] [rbp-E8h]
  char v111[24]; // [rsp+78h] [rbp-E0h] BYREF
  _QWORD v112[2]; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v113; // [rsp+A0h] [rbp-B8h]
  unsigned __int8 *v114; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v115; // [rsp+B8h] [rbp-A0h]
  char v116; // [rsp+108h] [rbp-50h]
  unsigned int v117; // [rsp+110h] [rbp-48h]
  char v118; // [rsp+114h] [rbp-44h]

  v7 = sub_B7B1E0(*(_QWORD *)(a1 + 248), *(_QWORD *)(a1 + 544), a3);
  *(_DWORD *)(v7 + 72) = a4;
  v8 = v7;
  sub_B94AD0(*(__m128i **)(a1 + 544), v7, v9, v10, v11, v12);
  sub_17A2E00(a1, a2, v8 + 40);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 89LL) & 1) == 0 )
  {
    v13 = *(unsigned int *)(a1 + 10152);
    if ( !(_DWORD)v13
      || (v14 = *(_QWORD *)(*(_QWORD *)(a1 + 10144) + 48 * v13 - 40)) == 0
      || (v15 = *(_DWORD *)(v14 + 36), v15 > 8)
      || ((1LL << v15) & 0x1BC) == 0 )
    {
      sub_168B9F0((__int64)v112, (__int64 *)(a1 + 8), a3, 0xECFu, 0);
      if ( v116 )
      {
        v49 = v114;
        if ( !v114 )
        {
          v69 = v115;
          v70 = *(_DWORD *)(v115 + 14976);
          if ( v70 )
          {
            v71 = (unsigned int)(v70 - 1);
            *(_DWORD *)(v115 + 14976) = v71;
            v49 = *(unsigned __int8 **)(v69 + 8 * v71 + 14848);
            v72 = *((unsigned int *)v49 + 134);
            *v49 = 0;
            v73 = *((_QWORD *)v49 + 66);
            *((_DWORD *)v49 + 106) = 0;
            v74 = v73 + (v72 << 6);
            while ( v73 != v74 )
            {
              while ( 1 )
              {
                v74 -= 64;
                v75 = *(void **)(v74 + 24);
                if ( v75 == (void *)(v74 + 40) )
                  break;
                operator delete(v75);
                if ( v73 == v74 )
                  goto LABEL_91;
              }
            }
LABEL_91:
            *((_DWORD *)v49 + 134) = 0;
          }
          else
          {
            v49 = (unsigned __int8 *)operator new(0x3A0u);
            *v49 = 0;
            *((_QWORD *)v49 + 12) = v49 + 112;
            *((_QWORD *)v49 + 16) = v49 + 144;
            *((_QWORD *)v49 + 20) = v49 + 176;
            *((_QWORD *)v49 + 24) = v49 + 208;
            *((_QWORD *)v49 + 28) = v49 + 240;
            *((_QWORD *)v49 + 32) = v49 + 272;
            *((_QWORD *)v49 + 36) = v49 + 304;
            *((_QWORD *)v49 + 40) = v49 + 336;
            *((_QWORD *)v49 + 44) = v49 + 368;
            *((_QWORD *)v49 + 48) = v49 + 400;
            *((_QWORD *)v49 + 52) = v49 + 432;
            *((_QWORD *)v49 + 13) = 0;
            v49[112] = 0;
            *((_QWORD *)v49 + 17) = 0;
            v49[144] = 0;
            *((_QWORD *)v49 + 21) = 0;
            v49[176] = 0;
            *((_QWORD *)v49 + 25) = 0;
            v49[208] = 0;
            *((_QWORD *)v49 + 29) = 0;
            v49[240] = 0;
            *((_QWORD *)v49 + 33) = 0;
            v49[272] = 0;
            *((_QWORD *)v49 + 37) = 0;
            v49[304] = 0;
            *((_QWORD *)v49 + 41) = 0;
            v49[336] = 0;
            *((_QWORD *)v49 + 45) = 0;
            v49[368] = 0;
            *((_QWORD *)v49 + 49) = 0;
            v49[400] = 0;
            *((_QWORD *)v49 + 53) = 0x800000000LL;
            *((_QWORD *)v49 + 66) = v49 + 544;
            *((_QWORD *)v49 + 67) = 0x600000000LL;
          }
          v114 = v49;
        }
        v49[*v49 + 1] = 2;
        v50 = v114;
        v51 = *v114;
        *v114 = v51 + 1;
        *(_QWORD *)&v50[8 * v51 + 16] = 0;
      }
      else if ( v118 )
      {
        v37 = sub_168B9E0(v112);
        v40 = v113;
        if ( v113 )
          v40 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v113 + 32LL))(v113);
        v105 = v40;
        v41 = sub_1587BC0(v37, &v105, v35, v36, v38, v39);
        sub_AE9DF0((unsigned __int8 **)(*v41 + 32LL * v117 + 8), 0, 2u);
      }
      goto LABEL_8;
    }
    if ( v15 != 3 )
    {
      if ( v15 != 7 )
        goto LABEL_11;
      sub_168B9F0((__int64)v112, (__int64 *)(a1 + 8), a3, 0xECBu, 0);
      sub_15F7200(v112);
      sub_168B9F0(
        (__int64)v112,
        (__int64 *)(a1 + 8),
        *(_DWORD *)(*(_QWORD *)(a1 + 10144) + 48LL * *(unsigned int *)(a1 + 10152) - 48),
        0x1898u,
        0);
LABEL_8:
      sub_15F7200(v112);
      sub_B88650(v8, 1);
      return v8;
    }
    sub_168B9F0((__int64)v112, (__int64 *)(a1 + 8), a3, 0xECFu, 0);
    if ( v116 )
    {
      sub_AE9DF0(&v114, 1, 2u);
    }
    else if ( v118 )
    {
      v66 = sub_168B9E0(v112);
      v67 = v113;
      if ( v113 )
        v67 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v113 + 32LL))(v113);
      v105 = v67;
      v68 = sub_1587BC0(v66, &v105, v62, v63, v64, v65);
      sub_AE9DF0((unsigned __int8 **)(*v68 + 32LL * v117 + 8), 1, 2u);
    }
    sub_15F7200(v112);
    sub_168B9F0(
      (__int64)v112,
      (__int64 *)(a1 + 8),
      *(_DWORD *)(*(_QWORD *)(a1 + 10144) + 48LL * *(unsigned int *)(a1 + 10152) - 48),
      0x17FDu,
      0);
    v42 = *(_DWORD *)(*(_QWORD *)(a1 + 10144) + 48LL * *(unsigned int *)(a1 + 10152) - 48);
    v108 = 0;
    v107 = 0;
    v109 = v111;
    v111[16] = 0;
    LODWORD(v105) = v42;
    HIDWORD(v105) = v42;
    v106 = 0;
    qmemcpy(v104, "export ", 7);
    strcpy(v111, "export ");
    v110 = 7;
    if ( v116 )
    {
      if ( !v42 )
        goto LABEL_8;
      v43 = v114;
      if ( !v114 )
      {
        v76 = v115;
        v77 = *(_DWORD *)(v115 + 14976);
        if ( v77 )
        {
          v86 = (unsigned int)(v77 - 1);
          *(_DWORD *)(v115 + 14976) = v86;
          v43 = *(unsigned __int8 **)(v76 + 8 * v86 + 14848);
          v87 = *((unsigned int *)v43 + 134);
          *v43 = 0;
          v88 = *((_QWORD *)v43 + 66);
          *((_DWORD *)v43 + 106) = 0;
          v89 = v88 + (v87 << 6);
          while ( v88 != v89 )
          {
            while ( 1 )
            {
              v89 -= 64;
              v90 = *(void **)(v89 + 24);
              if ( v90 == (void *)(v89 + 40) )
                break;
              v99 = v88;
              operator delete(v90);
              v88 = v99;
              if ( v99 == v89 )
                goto LABEL_107;
            }
          }
LABEL_107:
          *((_DWORD *)v43 + 134) = 0;
        }
        else
        {
          v43 = (unsigned __int8 *)operator new(0x3A0u);
          *v43 = 0;
          *((_QWORD *)v43 + 12) = v43 + 112;
          *((_QWORD *)v43 + 16) = v43 + 144;
          *((_QWORD *)v43 + 20) = v43 + 176;
          *((_QWORD *)v43 + 24) = v43 + 208;
          *((_QWORD *)v43 + 28) = v43 + 240;
          *((_QWORD *)v43 + 32) = v43 + 272;
          *((_QWORD *)v43 + 36) = v43 + 304;
          *((_QWORD *)v43 + 40) = v43 + 336;
          *((_QWORD *)v43 + 44) = v43 + 368;
          *((_QWORD *)v43 + 48) = v43 + 400;
          *((_QWORD *)v43 + 52) = v43 + 432;
          v43[112] = 0;
          *((_QWORD *)v43 + 13) = 0;
          *((_QWORD *)v43 + 17) = 0;
          v43[144] = 0;
          *((_QWORD *)v43 + 21) = 0;
          v43[176] = 0;
          *((_QWORD *)v43 + 25) = 0;
          v43[208] = 0;
          *((_QWORD *)v43 + 29) = 0;
          v43[240] = 0;
          *((_QWORD *)v43 + 33) = 0;
          v43[272] = 0;
          *((_QWORD *)v43 + 37) = 0;
          v43[304] = 0;
          *((_QWORD *)v43 + 41) = 0;
          v43[336] = 0;
          *((_QWORD *)v43 + 45) = 0;
          v43[368] = 0;
          *((_QWORD *)v43 + 49) = 0;
          v43[400] = 0;
          *((_QWORD *)v43 + 53) = 0x800000000LL;
          *((_QWORD *)v43 + 66) = v43 + 544;
          *((_QWORD *)v43 + 67) = 0x600000000LL;
        }
        v114 = v43;
      }
    }
    else
    {
      if ( !v118 )
        goto LABEL_8;
      v54 = sub_168B9E0(v112);
      v57 = v113;
      if ( v113 )
        v57 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v113 + 32LL))(v113);
      v102 = v57;
      v58 = sub_1587BC0(v54, &v102, v52, v53, v55, v56);
      if ( !(_DWORD)v105 || !HIDWORD(v105) )
      {
LABEL_67:
        if ( v109 != v111 )
          operator delete(v109);
        goto LABEL_8;
      }
      v59 = *v58 + 32LL * v117;
      v43 = *(unsigned __int8 **)(v59 + 8);
      if ( !v43 )
      {
        v60 = *(_QWORD *)(v59 + 16);
        v61 = *(_DWORD *)(v60 + 14976);
        if ( v61 )
        {
          v91 = (unsigned int)(v61 - 1);
          *(_DWORD *)(v60 + 14976) = v91;
          v43 = *(unsigned __int8 **)(v60 + 8 * v91 + 14848);
          v92 = *((unsigned int *)v43 + 134);
          *v43 = 0;
          v93 = *((_QWORD *)v43 + 66);
          *((_DWORD *)v43 + 106) = 0;
          v94 = v93 + (v92 << 6);
          while ( v93 != v94 )
          {
            while ( 1 )
            {
              v94 -= 64;
              v95 = *(void **)(v94 + 24);
              if ( v95 == (void *)(v94 + 40) )
                break;
              v101 = v93;
              v100 = v59;
              operator delete(v95);
              v93 = v101;
              v59 = v100;
              if ( v101 == v94 )
                goto LABEL_112;
            }
          }
LABEL_112:
          *((_DWORD *)v43 + 134) = 0;
        }
        else
        {
          v97 = v59;
          v43 = (unsigned __int8 *)operator new(0x3A0u);
          *v43 = 0;
          *((_QWORD *)v43 + 12) = v43 + 112;
          *((_QWORD *)v43 + 16) = v43 + 144;
          *((_QWORD *)v43 + 20) = v43 + 176;
          *((_QWORD *)v43 + 24) = v43 + 208;
          *((_QWORD *)v43 + 28) = v43 + 240;
          *((_QWORD *)v43 + 32) = v43 + 272;
          *((_QWORD *)v43 + 36) = v43 + 304;
          *((_QWORD *)v43 + 40) = v43 + 336;
          *((_QWORD *)v43 + 44) = v43 + 368;
          *((_QWORD *)v43 + 48) = v43 + 400;
          *((_QWORD *)v43 + 52) = v43 + 432;
          v43[112] = 0;
          *((_QWORD *)v43 + 13) = 0;
          *((_QWORD *)v43 + 17) = 0;
          v43[144] = 0;
          *((_QWORD *)v43 + 21) = 0;
          v43[176] = 0;
          *((_QWORD *)v43 + 25) = 0;
          v43[208] = 0;
          *((_QWORD *)v43 + 29) = 0;
          v43[240] = 0;
          *((_QWORD *)v43 + 33) = 0;
          v43[272] = 0;
          *((_QWORD *)v43 + 37) = 0;
          v43[304] = 0;
          *((_QWORD *)v43 + 41) = 0;
          v43[336] = 0;
          *((_QWORD *)v43 + 45) = 0;
          v43[368] = 0;
          *((_QWORD *)v43 + 49) = 0;
          v43[400] = 0;
          *((_QWORD *)v43 + 53) = 0x800000000LL;
          v59 = v97;
          *((_QWORD *)v43 + 66) = v43 + 544;
          *((_QWORD *)v43 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v59 + 8) = v43;
      }
    }
    v44 = *((unsigned int *)v43 + 134);
    v45 = *((_QWORD *)v43 + 66);
    v46 = v44 + 1;
    v47 = v45 + (v44 << 6);
    v48 = &v105;
    if ( v46 > *((unsigned int *)v43 + 135) )
    {
      if ( v45 > (unsigned __int64)&v105 || v47 <= (unsigned __int64)&v105 )
      {
        v82 = sub_2237400(v43 + 528, v43 + 544, v46, 64, v103);
        sub_9EF810((__int64 *)v43 + 66, v82);
        v83 = v103[0];
        v84 = *((unsigned __int8 **)v43 + 66);
        if ( v43 + 544 != v84 )
          free(v84);
        v85 = *((unsigned int *)v43 + 134);
        *((_QWORD *)v43 + 66) = v82;
        *((_DWORD *)v43 + 135) = v83;
        v47 = (v85 << 6) + v82;
        v48 = &v105;
      }
      else
      {
        v98 = (char *)&v105 - v45;
        v78 = sub_2237400(v43 + 528, v43 + 544, v46, 64, v103);
        sub_9EF810((__int64 *)v43 + 66, v78);
        v79 = v103[0];
        v80 = *((unsigned __int8 **)v43 + 66);
        if ( v43 + 544 != v80 )
          free(v80);
        *((_DWORD *)v43 + 135) = v79;
        v81 = *((unsigned int *)v43 + 134);
        *((_QWORD *)v43 + 66) = v78;
        v48 = (__int64 *)&v98[v78];
        v47 = v78 + (v81 << 6);
      }
    }
    *(_QWORD *)v47 = *v48;
    *(_DWORD *)(v47 + 8) = *((_DWORD *)v48 + 2);
    *(_QWORD *)(v47 + 12) = *(__int64 *)((char *)v48 + 12);
    *(_DWORD *)(v47 + 20) = *((_DWORD *)v48 + 5);
    *(_QWORD *)(v47 + 24) = v47 + 40;
    v96 = v48;
    sub_1A7BED0((_QWORD *)(v47 + 24), (_BYTE *)v48[3], v48[3] + v48[4]);
    *(_BYTE *)(v47 + 56) = *((_BYTE *)v96 + 56);
    ++*((_DWORD *)v43 + 134);
    goto LABEL_67;
  }
LABEL_11:
  v16 = *(_QWORD *)(a1 + 544);
  if ( v16 )
  {
    while ( 1 )
    {
      if ( (*(_BYTE *)(v16 + 8) & 0x7F) == 0x18 )
      {
        v17 = v16 - 48;
        if ( v16 != 48 )
        {
          v18 = *(_QWORD *)(v16 - 8);
          if ( (v18 & 7) != 0 || (v18 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          {
            v22 = (__int64 *)(a1 + 8);
            sub_168B9F0((__int64)v112, v22, a3, 0xED2u, 0);
            sub_15F7200(v112);
            v23 = *(_DWORD *)(v16 - 24);
            v24 = 5773;
            goto LABEL_30;
          }
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 89LL) & 1) == 0 )
            break;
        }
      }
LABEL_17:
      v19 = *(_QWORD *)(sub_B8C1B0(v16) + 16);
      if ( (v19 & 4) != 0 )
      {
        v16 = *(_QWORD *)((v19 & 0xFFFFFFFFFFFFFFF8LL) + 8);
        if ( !v16 )
          goto LABEL_19;
      }
      else
      {
        v16 = v19 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v16 )
          goto LABEL_19;
      }
    }
    v26 = *(_BYTE *)(a1 + 10972);
    if ( !v26 )
      goto LABEL_42;
    v27 = *(unsigned __int64 **)(a1 + 10952);
    v28 = *(unsigned int *)(a1 + 10964);
    v29 = &v27[v28];
    if ( v27 != v29 )
    {
      v30 = *(unsigned __int64 **)(a1 + 10952);
      if ( v17 == *v27 )
      {
LABEL_53:
        v26 = 0;
        v32 = &v27[*(unsigned int *)(a1 + 10964)];
        goto LABEL_44;
      }
      while ( v29 != ++v30 )
      {
        if ( v17 == *v30 )
          goto LABEL_53;
      }
    }
    if ( (unsigned int)v28 < *(_DWORD *)(a1 + 10960) )
    {
      *(_DWORD *)(a1 + 10964) = v28 + 1;
      *v29 = v17;
      v31 = *(_QWORD *)(a1 + 10952);
      v30 = (unsigned __int64 *)(v31 + 8 * v28);
    }
    else
    {
LABEL_42:
      v30 = (unsigned __int64 *)sub_2236760(a1 + 10952, v17);
      v31 = *(_QWORD *)(a1 + 10952);
      if ( !*(_BYTE *)(a1 + 10972) )
      {
        v32 = (unsigned __int64 *)(v31 + 8LL * *(unsigned int *)(a1 + 10960));
        goto LABEL_44;
      }
    }
    v32 = (unsigned __int64 *)(v31 + 8LL * *(unsigned int *)(a1 + 10964));
LABEL_44:
    if ( v30 != v32 && *v30 >= 0xFFFFFFFFFFFFFFFELL )
    {
      v33 = v30 + 1;
      do
      {
        v34 = v33;
        if ( v32 == v33 )
          break;
        ++v33;
      }
      while ( *v34 >= 0xFFFFFFFFFFFFFFFELL );
    }
    if ( !v26 )
      goto LABEL_19;
    goto LABEL_17;
  }
LABEL_19:
  v20 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
LABEL_52:
    v20 = *(_QWORD *)(v20 + 8);
  if ( v20 )
  {
    while ( (*(_BYTE *)(v20 + 8) & 0x7F) != 6 || v20 == 40 )
    {
      v21 = *(_QWORD *)(sub_B8C1B0(v20) + 16);
      if ( (v21 & 4) != 0 )
      {
        v20 = v21 & 0xFFFFFFFFFFFFFFF8LL;
        goto LABEL_52;
      }
      v20 = v21 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v20 )
        goto LABEL_25;
    }
    v22 = (__int64 *)(a1 + 8);
    sub_168B9F0((__int64)v112, v22, a3, 0xED3u, 0);
    sub_15F7200(v112);
    if ( *(_DWORD *)(v20 + 32) )
    {
      v23 = *(_DWORD *)(v20 - 16);
      v24 = 5969;
LABEL_30:
      sub_168B9F0((__int64)v112, v22, v23, v24, 0);
      sub_15F7200(v112);
    }
    sub_B88650(v8, 1);
  }
  else
  {
LABEL_25:
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 89LL) & 1) == 0 )
      *(_QWORD *)(v8 + 8) = *(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF8LL | 2;
  }
  return v8;
}
