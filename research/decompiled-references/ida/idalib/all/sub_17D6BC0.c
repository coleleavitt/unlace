__int64 __fastcall sub_17D6BC0(
        _QWORD *a1,
        void **p_ptr,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8)
{
  __int64 v11; // rax
  __m128i *v12; // r14
  _BYTE *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int8 v17; // r15
  char v18; // al
  char v19; // al
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned __int64 v23; // r9
  __int64 v24; // r15
  unsigned __int8 v25; // al
  __int64 *v26; // rsi
  unsigned int v27; // edx
  unsigned int v28; // ecx
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  int v31; // eax
  _QWORD *v32; // rax
  unsigned __int64 i; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  unsigned __int8 v37; // dl
  int v38; // r15d
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r10
  __int64 v43; // r9
  __int64 v44; // rdi
  unsigned __int64 v45; // r9
  __int64 v46; // r13
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  bool v51; // zf
  char v52; // al
  __int64 v54; // rax
  __int64 v55; // rax
  int v56; // edx
  __int64 v57; // rax
  __int64 v58; // rcx
  int v59; // eax
  __int64 v60; // rax
  __int64 v61; // rax
  int v62; // edx
  __int64 v63; // rax
  __int64 v64; // rcx
  int v65; // eax
  __int64 v66; // rax
  __int64 v67; // rcx
  int v68; // eax
  unsigned int v69; // ecx
  __int64 v70; // r9
  __int64 v71; // rdi
  unsigned __int64 v72; // r9
  __int64 v73; // rax
  _QWORD *v74; // rdx
  __int64 v75; // r14
  __int64 v76; // r12
  unsigned __int16 *v77; // rcx
  __int64 v78; // rdx
  unsigned int v79; // eax
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rbp
  unsigned int v84; // eax
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rax
  unsigned __int64 v89; // rax
  unsigned __int64 v90; // rax
  __int64 v91; // rax
  size_t v92; // rax
  char v93; // [rsp+8h] [rbp-B80h]
  __int64 v94; // [rsp+8h] [rbp-B80h]
  __int64 v95; // [rsp+8h] [rbp-B80h]
  __int64 v96; // [rsp+8h] [rbp-B80h]
  __int64 v97; // [rsp+8h] [rbp-B80h]
  __int64 v98; // [rsp+8h] [rbp-B80h]
  __int64 v99; // [rsp+8h] [rbp-B80h]
  void **v100; // [rsp+10h] [rbp-B78h]
  __int64 v102; // [rsp+20h] [rbp-B68h]
  __int64 v103; // [rsp+20h] [rbp-B68h]
  __int64 v104; // [rsp+20h] [rbp-B68h]
  __int64 v105; // [rsp+20h] [rbp-B68h]
  __int64 v106; // [rsp+28h] [rbp-B60h]
  bool v107; // [rsp+3Fh] [rbp-B49h] BYREF
  char *v108; // [rsp+40h] [rbp-B48h] BYREF
  __int64 v109; // [rsp+48h] [rbp-B40h]
  void *ptr; // [rsp+50h] [rbp-B38h] BYREF
  __int128 v111; // [rsp+58h] [rbp-B30h] BYREF
  void *v112; // [rsp+68h] [rbp-B20h]
  __int64 v113; // [rsp+70h] [rbp-B18h]
  _BYTE v114[16]; // [rsp+78h] [rbp-B10h] BYREF
  char v115; // [rsp+88h] [rbp-B00h]
  _QWORD v116[2]; // [rsp+E0h] [rbp-AA8h] BYREF
  __int128 v117; // [rsp+F0h] [rbp-A98h]
  __int64 v118; // [rsp+100h] [rbp-A88h]
  __int64 v119; // [rsp+108h] [rbp-A80h]
  __int64 v120; // [rsp+110h] [rbp-A78h]
  int v121; // [rsp+118h] [rbp-A70h]
  __int64 v122; // [rsp+120h] [rbp-A68h]
  __int64 v123; // [rsp+130h] [rbp-A58h]
  __int64 v124; // [rsp+138h] [rbp-A50h]
  int v125; // [rsp+140h] [rbp-A48h]
  __int64 v126; // [rsp+148h] [rbp-A40h]
  __int64 v127; // [rsp+150h] [rbp-A38h]
  int v128; // [rsp+158h] [rbp-A30h]
  __int64 *v129; // [rsp+160h] [rbp-A28h]
  __int64 v130; // [rsp+168h] [rbp-A20h]
  __int64 v131; // [rsp+170h] [rbp-A18h] BYREF
  __int16 v132; // [rsp+3B0h] [rbp-7D8h]
  __int64 v133; // [rsp+3B8h] [rbp-7D0h]
  _QWORD *v134; // [rsp+3C0h] [rbp-7C8h]
  __int64 v135; // [rsp+3C8h] [rbp-7C0h]
  _QWORD v136[5]; // [rsp+3D0h] [rbp-7B8h] BYREF
  _QWORD v137[242]; // [rsp+3F8h] [rbp-790h] BYREF

  v11 = *(_QWORD *)(a5 + 16);
  v100 = p_ptr;
  v12 = (__m128i *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v11 & 4) != 0 )
    v12 = (__m128i *)v12->m128i_i64[0];
  v13 = (_BYTE *)a1[29];
  v14 = v13[1] & 8;
  if ( *(_BYTE *)(a5 + 73) >> 5 != 2 )
  {
    if ( (_BYTE)v14 )
    {
      p_ptr = (void **)(a1 + 1);
      sub_168B9F0((__int64)v116, a1 + 1, *(_DWORD *)(a5 + 24), 0x15C0u, 0);
      sub_15F7200(v116);
    }
    else
    {
      if ( (*v13 & 2) != 0 )
      {
        v93 = 0;
        goto LABEL_7;
      }
      p_ptr = (void **)(a1 + 1);
      sub_168B9F0((__int64)v116, a1 + 1, *(_DWORD *)(a5 + 24), 0x1582u, 0);
      sub_15F7200(v116);
    }
LABEL_13:
    v14 = a1[29];
    v18 = *(_BYTE *)(a5 + 73) >> 5;
    if ( (*(_BYTE *)(v14 + 1) & 8) == 0 )
    {
      v93 = 0;
      if ( v18 == 2 )
        goto LABEL_10;
      goto LABEL_7;
    }
    v108 = nullptr;
    if ( v18 != 2 )
      goto LABEL_15;
    goto LABEL_48;
  }
  if ( !(_BYTE)v14 )
  {
    if ( (*v13 & 2) != 0 )
    {
      v93 = 0;
      goto LABEL_10;
    }
    p_ptr = (void **)(a1 + 1);
    sub_168B9F0((__int64)v116, a1 + 1, *(_DWORD *)(a5 + 24), 0x1577u, 0);
    sub_15F7200(v116);
    goto LABEL_13;
  }
  v108 = nullptr;
LABEL_48:
  v30 = sub_B8EAA0((__int64)v12);
  if ( (*(_BYTE *)a3 & 7) == 3 )
    goto LABEL_52;
  if ( (*(_BYTE *)(v30 + 8) & 0x7F) == 0
    || (*(_BYTE *)(v30 + 8) & 0x7F) == 0x18
    && (v91 = *(_QWORD *)(v30 - 8), (v91 & 7) == 0)
    && (v91 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    sub_168B9F0((__int64)v116, a1 + 1, *(_DWORD *)(a5 + 24), 0xBC0u, 0);
    v92 = j__strlen("static ");
    sub_9EC740((__int64)&ptr, *(_DWORD *)(a5 + 24), "static ", v92, 0);
    sub_1589170((__int64)v116, &ptr);
    if ( v112 != v114 )
      operator delete(v112);
    sub_15F7200(v116);
    sub_15ACED0((char *)a3, (__int64)a1, 3u, 0, &v108, (int *)v116);
    goto LABEL_15;
  }
  if ( (*(_BYTE *)a3 & 7) != 0 )
  {
LABEL_52:
    if ( (v12->m128i_i8[8] & 0x7Fu) - 58 <= 3 )
    {
      sub_168B9F0((__int64)v116, a1 + 1, *(_DWORD *)(a3 + 168), 0xBC1u, 0);
      v31 = *(_DWORD *)(a3 + 168);
      *(_QWORD *)((char *)&v111 + 4) = 0;
      BYTE12(v111) = 0;
      v112 = v114;
      v113 = 0;
      v114[0] = 0;
      v115 = 0;
      LODWORD(ptr) = v31;
      HIDWORD(ptr) = v31;
      LOBYTE(v111) = 1;
      sub_1589170((__int64)v116, &ptr);
      if ( v112 != v114 )
        operator delete(v112);
      sub_15F7200(v116);
      sub_15ACED0((char *)a3, (__int64)a1, 0, 0, &v108, (int *)v116);
    }
  }
LABEL_15:
  v19 = (*(_BYTE *)(a3 + 3) >> 2) & 0x1F;
  if ( v19 )
  {
    if ( (*(_BYTE *)(a3 + 3) & 4) != 0 )
    {
      sub_168B9F0((__int64)v116, a1 + 1, *(_DWORD *)(a3 + 220), 0x1576u, 0);
      v107 = *(_BYTE *)(a5 + 73) >> 5 == 2;
      v57 = sub_1588420((__int64)v116, (unsigned __int8 *)&v107);
      v58 = v57;
      if ( *(_BYTE *)(v57 + 120) )
      {
        v98 = v57;
        sub_AE9DF0((unsigned __int8 **)(v57 + 32), (__int64)"const", 1u);
        v58 = v98;
      }
      else if ( *(_BYTE *)(v57 + 132) )
      {
        v95 = v57;
        sub_17B29E0(v57, (__int64)"const");
        v58 = v95;
      }
      v59 = *(_DWORD *)(a3 + 220);
      *(_QWORD *)((char *)&v111 + 4) = 0;
      BYTE12(v111) = 0;
      v114[0] = 0;
      v112 = v114;
      v113 = 0;
      v115 = 0;
      LODWORD(ptr) = v59;
      HIDWORD(ptr) = v59;
      LOBYTE(v111) = 1;
      sub_1589170(v58, &ptr);
      if ( v112 != v114 )
        operator delete(v112);
      sub_15F7200(v116);
      v19 = (*(_BYTE *)(a3 + 3) >> 2) & 0x1F;
    }
    if ( (v19 & 4) != 0 )
    {
      sub_168B9F0((__int64)v116, a1 + 1, *(_DWORD *)(a3 + 228), 0x1576u, 0);
      v107 = *(_BYTE *)(a5 + 73) >> 5 == 2;
      v60 = sub_1588420((__int64)v116, (unsigned __int8 *)&v107);
      v61 = sub_17CAFB0(v60, (__int64)"volatile");
      BYTE12(v111) = 0;
      v62 = *(_DWORD *)(a3 + 228);
      *(_QWORD *)((char *)&v111 + 4) = 0;
      v114[0] = 0;
      v112 = v114;
      v113 = 0;
      v115 = 0;
      LODWORD(ptr) = v62;
      HIDWORD(ptr) = v62;
      LOBYTE(v111) = 1;
      sub_1589170(v61, &ptr);
      if ( v112 != v114 )
        operator delete(v112);
      sub_15F7200(v116);
      v19 = (*(_BYTE *)(a3 + 3) >> 2) & 0x1F;
    }
    if ( (v19 & 2) != 0 )
    {
      sub_168B9F0((__int64)v116, a1 + 1, *(_DWORD *)(a3 + 224), 0x1576u, 0);
      v107 = *(_BYTE *)(a5 + 73) >> 5 == 2;
      v54 = sub_1588420((__int64)v116, (unsigned __int8 *)&v107);
      v55 = sub_17CAFB0(v54, (__int64)"restrict");
      BYTE12(v111) = 0;
      v56 = *(_DWORD *)(a3 + 224);
      *(_QWORD *)((char *)&v111 + 4) = 0;
      v114[0] = 0;
      v112 = v114;
      v113 = 0;
      v115 = 0;
      LODWORD(ptr) = v56;
      HIDWORD(ptr) = v56;
      LOBYTE(v111) = 1;
      sub_1589170(v55, &ptr);
      if ( v112 != v114 )
        operator delete(v112);
      sub_15F7200(v116);
      v19 = (*(_BYTE *)(a3 + 3) >> 2) & 0x1F;
    }
    if ( (v19 & 0x10) != 0 )
    {
      sub_168B9F0((__int64)v116, a1 + 1, *(_DWORD *)(a3 + 232), 0x1576u, 0);
      v107 = *(_BYTE *)(a5 + 73) >> 5 == 2;
      v66 = sub_1588420((__int64)v116, (unsigned __int8 *)&v107);
      v67 = v66;
      if ( *(_BYTE *)(v66 + 120) )
      {
        v99 = v66;
        sub_AE9DF0((unsigned __int8 **)(v66 + 32), (__int64)"_Atomic", 1u);
        v67 = v99;
      }
      else if ( *(_BYTE *)(v66 + 132) )
      {
        v94 = v66;
        sub_17B29E0(v66, (__int64)"_Atomic");
        v67 = v94;
      }
      v68 = *(_DWORD *)(a3 + 232);
      *(_QWORD *)((char *)&v111 + 4) = 0;
      BYTE12(v111) = 0;
      v114[0] = 0;
      v112 = v114;
      v113 = 0;
      v115 = 0;
      LODWORD(ptr) = v68;
      HIDWORD(ptr) = v68;
      LOBYTE(v111) = 1;
      sub_1589170(v67, &ptr);
      if ( v112 != v114 )
        operator delete(v112);
      sub_15F7200(v116);
      v19 = (*(_BYTE *)(a3 + 3) >> 2) & 0x1F;
    }
    if ( (v19 & 8) != 0 )
    {
      sub_168B9F0((__int64)v116, a1 + 1, *(_DWORD *)(a3 + 236), 0x1576u, 0);
      v107 = *(_BYTE *)(a5 + 73) >> 5 == 2;
      v63 = sub_1588420((__int64)v116, (unsigned __int8 *)&v107);
      v64 = v63;
      if ( *(_BYTE *)(v63 + 120) )
      {
        v97 = v63;
        sub_AE9DF0((unsigned __int8 **)(v63 + 32), (__int64)"__unaligned", 1u);
        v64 = v97;
      }
      else if ( *(_BYTE *)(v63 + 132) )
      {
        v96 = v63;
        sub_17B29E0(v63, (__int64)"__unaligned");
        v64 = v96;
      }
      v65 = *(_DWORD *)(a3 + 236);
      *(_QWORD *)((char *)&v111 + 4) = 0;
      BYTE12(v111) = 0;
      v114[0] = 0;
      v112 = v114;
      v113 = 0;
      v115 = 0;
      LODWORD(ptr) = v65;
      HIDWORD(ptr) = v65;
      LOBYTE(v111) = 1;
      sub_1589170(v64, &ptr);
      if ( v112 != v114 )
        operator delete(v112);
      sub_15F7200(v116);
    }
    *(_BYTE *)(a3 + 3) &= 0x83u;
    *(_DWORD *)(a3 + 220) = 0;
    *(_QWORD *)(a3 + 224) = 0;
    *(_QWORD *)(a3 + 232) = 0;
    *(_DWORD *)(a3 + 276) = 0;
  }
  v106 = a5 + 64;
  v93 = 0;
  v24 = sub_B8E970(a5 + 64);
  if ( v24 )
  {
    while ( 1 )
    {
      if ( *(char *)(v24 + 28) < 0 )
        goto LABEL_28;
      v25 = *(_BYTE *)(v24 + 28) & 0x7F;
      v20 = (unsigned int)v25 - 49;
      if ( (unsigned int)v20 > 2 )
        break;
      if ( (*(_BYTE *)(v24 + 29) & 0x60) == 0 )
        goto LABEL_25;
      sub_168B9F0((__int64)v116, a1 + 1, *(_DWORD *)(v24 + 24), 0xBBBu, 0);
      v107 = *(_BYTE *)(a5 + 73) >> 5 == 2;
      v29 = sub_1588420((__int64)v116, (unsigned __int8 *)&v107);
      LOBYTE(ptr) = ((*(_BYTE *)(v24 + 29) >> 5) & 3) == 1;
      sub_1588420(v29, (unsigned __int8 *)&ptr);
      sub_15F7200(v116);
      if ( *(char *)(v24 + 28) >= 0 )
      {
        v93 = 1;
LABEL_25:
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v24 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0
          || !(unsigned __int8)sub_17B63A0(a1, v24) )
        {
          goto LABEL_28;
        }
      }
LABEL_27:
      v93 = 1;
LABEL_28:
      v23 = *(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v24 = v23;
      if ( !v23 )
        goto LABEL_41;
    }
    if ( (*(_BYTE *)(v24 + 29) & 2) != 0 )
      goto LABEL_28;
    v21 = (unsigned int)v25 - 58;
    if ( (unsigned int)v21 <= 4 )
    {
      v32 = (_QWORD *)(*(_QWORD *)(v24 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      v20 = *(_QWORD *)(v24 + 16) & 4LL;
      if ( (*(_QWORD *)(v24 + 16) & 4) != 0 )
      {
        if ( v106 != *v32 )
          goto LABEL_28;
      }
      else if ( (_QWORD *)v106 != v32 )
      {
        goto LABEL_28;
      }
      v26 = a1 + 1;
      v27 = *(_DWORD *)(v24 + 24);
      if ( (_DWORD)v21 != 4 )
      {
        if ( (*(_BYTE *)(v24 + 75) & 1) != 0 || !*(_QWORD *)(v24 + 40) )
        {
          v69 = 5492;
LABEL_124:
          sub_168B9F0((__int64)v116, v26, v27, v69, 0);
          LOBYTE(ptr) = *(_BYTE *)(a5 + 73) >> 5 == 2;
          sub_1588420((__int64)v116, (unsigned __int8 *)&ptr);
          sub_15F7200(v116);
          goto LABEL_28;
        }
        v28 = 3006;
        if ( *(char *)a1[29] < 0 )
          goto LABEL_160;
        goto LABEL_64;
      }
    }
    else
    {
      if ( v25 == 9 || v25 == 89 )
        goto LABEL_28;
      v26 = a1 + 1;
      v27 = *(_DWORD *)(v24 + 24);
      if ( (unsigned int)v21 > 9 )
      {
        v28 = 3004;
        if ( (unsigned int)v25 - 34 > 5 )
          v28 = (unsigned int)v25 - 40 < 7 ? 3005 : 3001;
LABEL_64:
        sub_168B9F0((__int64)v116, v26, v27, v28, 0);
        LOBYTE(ptr) = *(_BYTE *)(a5 + 73) >> 5 == 2;
        sub_1588420((__int64)v116, (unsigned __int8 *)&ptr);
        sub_15F7200(v116);
        goto LABEL_27;
      }
    }
    if ( *(char *)a1[29] < 0 )
    {
LABEL_160:
      v69 = 5493;
      goto LABEL_124;
    }
    v28 = 3006;
    goto LABEL_64;
  }
LABEL_41:
  p_ptr = *(void ***)(a5 + 104);
  sub_7052B0((__int64 *)p_ptr + 12, (__int64)p_ptr, v20, v21, v22, v23);
  if ( *(char *)(*(_QWORD *)(a5 + 128) + 2LL) < 0
    && ((v12->m128i_i8[8] + 70) & 0x7Fu) <= 3
    && (unsigned __int8)v12->m128i_i8[9] >> 5 == 2 )
  {
    p_ptr = (void **)v12[2].m128i_i64[1];
    sub_7052B0((__int64 *)p_ptr + 12, (__int64)p_ptr, v14, (__int64)v13, a5, a6);
    if ( *(char *)(v12[4].m128i_i64[0] + 2) < 0 )
    {
      for ( i = sub_B8E970(v106); ; i = *(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF8LL )
      {
        v37 = *(_BYTE *)(i + 28) & 0x7F;
        if ( (unsigned int)v37 - 49 > 2 )
          break;
        v36 = i;
        if ( v37 == 32 )
          goto LABEL_70;
LABEL_71:
        if ( (*(_BYTE *)(v36 + 68) & 0xC) != 0xC && (*(_BYTE *)(v36 + 68) & 0xC) != 0 )
        {
          p_ptr = (void **)&v12[-4];
          sub_17AE280((__int64)a1, (__int64)v12[-4].m128i_i64, *(unsigned int *)(v36 + 24), v36, v34, v35);
          goto LABEL_42;
        }
LABEL_73:
        ;
      }
      if ( v37 != 32 )
        goto LABEL_73;
LABEL_70:
      v36 = *(_QWORD *)(*(_QWORD *)(i + 56) + 8LL * *(unsigned int *)(i + 64) - 8);
      if ( !v36 )
        goto LABEL_73;
      goto LABEL_71;
    }
  }
LABEL_42:
  if ( *(_BYTE *)(a5 + 73) >> 5 == 2 )
  {
    if ( (*(_BYTE *)(a1[29] + 1LL) & 8) == 0 )
      goto LABEL_10;
    goto LABEL_44;
  }
LABEL_7:
  if ( ((v12->m128i_i8[8] + 70) & 0x7Fu) > 3 )
  {
    sub_168B9F0((__int64)v116, a1 + 1, *(_DWORD *)(a5 + 24), 0xBBFu, 0);
    p_ptr = &ptr;
    LODWORD(ptr) = (*(_BYTE *)(a1[29] + 1LL) & 8) != 0;
    sub_1588370((__int64)v116, (unsigned int *)&ptr);
    sub_15F7200(v116);
    v93 = 1;
  }
  if ( (*(_BYTE *)(a1[29] + 1LL) & 8) != 0 )
  {
LABEL_44:
    if ( !sub_B7E900(a5, (__int64)p_ptr, v14, (__int64)v13, a5, a6) )
    {
      sub_168B9F0((__int64)v116, a1 + 1, *(_DWORD *)(a3 + 160), 0x15FDu, 0);
      ptr = *(void **)(a3 + 160);
      sub_1587DB0((__int64)v116, (__int64 *)&ptr);
      sub_15F7200(v116);
    }
  }
LABEL_10:
  if ( !(_BYTE)qword_2CD8AC8 && __cxa_guard_acquire(&qword_2CD8AC8) )
  {
    qword_2CD8AE0[0] = 0;
    qword_2CD8AE0[1] = &qword_2CD8AE0[3];
    qword_2CD8AE0[2] = 0x200000000LL;
    __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
    __cxa_guard_release(&qword_2CD8AC8);
  }
  v15 = *(_QWORD *)(a3 + 160);
  v137[2] = qword_2CD8AE0;
  v116[0] = a3;
  v124 = v15;
  v129 = &v131;
  v130 = 0x400000000LL;
  LODWORD(v15) = *(_DWORD *)a3;
  v116[1] = 0;
  v117 = 0;
  v118 = 0;
  v119 = 0;
  v120 = 0;
  v121 = 0;
  v122 = 0;
  v16 = *(_QWORD *)(a3 + 72);
  LOBYTE(v132) = ((((unsigned int)v15 >> 12) & 0x7F) == 69) | v132 & 0xFE;
  v134 = v136;
  v136[2] = v16;
  v135 = 0x200000000LL;
  v136[3] = v137;
  v136[4] = 0x200000000LL;
  v123 = 0;
  v125 = 7;
  v126 = 0;
  v127 = 0;
  v128 = 0;
  v132 &= 0xFC01u;
  v133 = 0;
  memset(&v137[3], 0, 40);
  v17 = *(_BYTE *)a3;
  v137[232] = 0;
  switch ( v17 & 7 )
  {
    case 0:
    case 1:
    case 7:
      v38 = 0;
      break;
    case 2:
      v38 = ((v17 >> 5) ^ 1) & 1;
      break;
    case 3:
      v38 = 2;
      break;
    case 4:
      v38 = 4;
      break;
    case 5:
      v38 = 5;
      break;
    case 6:
      v38 = 3;
      break;
  }
  v42 = sub_1E85170(a1, v116);
  if ( (v12->m128i_i8[8] & 0x7Fu) - 58 > 3 || v12 == (__m128i *)&dword_40 )
  {
    if ( (*(_BYTE *)a3 & 7) == 7 )
    {
      v104 = v42;
      sub_168B9F0((__int64)&ptr, a1 + 1, *(_DWORD *)(a5 + 24), 0x109Bu, 0);
      v38 = 0;
      sub_15F7200(&ptr);
      v93 = 1;
      v42 = v104;
    }
    v70 = *(_QWORD *)(a5 + 48);
    v71 = a1[31];
    if ( v70 )
    {
      v72 = v70 & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v102 = v42;
      v89 = sub_A7AA70(v71, a5, v39, v40, v41, 0);
      v71 = a1[31];
      v42 = v102;
      v72 = v89;
    }
    v73 = sub_B731A0(v71, (__int64)v12, *(_DWORD *)(a3 + 160), *(_DWORD *)(a5 + 24), 0, v72, v42, v38);
    v46 = v73;
    if ( v93 )
      sub_B88650(v73, 1);
    sub_1836CB0(a1, v100, v46, v116);
    sub_17D5BF0((__int64)a1, (__int64 *)v46, 0.0, a8);
  }
  else
  {
    v43 = *(_QWORD *)(a5 + 48);
    v44 = a1[31];
    if ( v43 )
    {
      v45 = v43 & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v103 = v42;
      v90 = sub_A7AA70(v44, a5, v39, v40, v41, 0);
      v44 = a1[31];
      v42 = v103;
      v45 = v90;
    }
    v46 = sub_B7BC50(v44, (__int64)v12, *(_DWORD *)(a3 + 160), *(_DWORD *)(a5 + 24), 0, v45, v42, 0, 0, 0);
    *(_BYTE *)(v46 + 29) = (32 * (a4 & 3)) | *(_BYTE *)(v46 + 29) & 0x9F;
    sub_1836CB0(a1, v100, v46, v116);
    if ( (*(_BYTE *)(a1[29] + 1LL) & 8) != 0 )
    {
      v88 = a1[490];
      v48 = *(unsigned int *)(v88 + 8);
      if ( v48 + 1 > (unsigned __int64)*(unsigned int *)(v88 + 12) )
      {
        v105 = a1[490];
        sub_2237220(v105, v88 + 16, v48 + 1, 8);
        v88 = v105;
        v48 = *(unsigned int *)(v105 + 8);
      }
      *(_QWORD *)(*(_QWORD *)v88 + 8 * v48) = v46;
      v47 = *(unsigned int *)(v88 + 280);
      ++*(_DWORD *)(v88 + 8);
      ++*(_QWORD *)(*(_QWORD *)(v88 + 272) + 8 * v47 - 8);
    }
  }
  *(_BYTE *)(v46 + 29) |= 2u;
  *(_BYTE *)(a5 + 75) |= 1u;
  sub_B94AD0(v12, v46, v47, v48, v49, v50);
  *((_QWORD *)&v111 + 1) = v46;
  ptr = (char *)&v111 + 8;
  *(_QWORD *)&v111 = 0x200000001LL;
  v51 = (unsigned __int8)sub_17B7E30((__int64)a1, (__int64 *)v100, (__int64)v12, a5, a4, v38, (__int64)&ptr) == 0;
  v52 = *(_BYTE *)(v46 + 28);
  if ( v51 )
  {
    if ( (v52 & 0x7Fu) - 40 > 6 || (*(_BYTE *)(a1[29] + 1LL) & 8) == 0 || !(unsigned __int8)sub_17A0330(v46) )
      goto LABEL_88;
    goto LABEL_135;
  }
  if ( (v52 & 0x7Fu) - 40 <= 6 && (*(_BYTE *)(a1[29] + 1LL) & 8) != 0 )
  {
    v93 = sub_17A0330(v46);
    if ( v93 )
    {
LABEL_135:
      v74 = (_QWORD *)(*(_QWORD *)(v46 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v46 + 16) & 4) != 0 )
        v74 = (_QWORD *)*v74;
      sub_1A2F990(&v108, a1, v74);
      v75 = v109;
      if ( v109 )
      {
        v76 = a1[31];
        if ( *(_DWORD *)(a1[29] + 152LL) > 0xB532B7Fu )
        {
          v78 = *((unsigned __int16 *)v100 + 8);
        }
        else
        {
          v77 = (unsigned __int16 *)v100[4];
          v78 = 1;
          if ( v77 )
            v78 = v77[7];
        }
        v79 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v109 + 40LL))(v109, v46, v78);
        sub_AB9320(v76, v46, v79, v80, v81, v82);
        v83 = a1[31];
        v84 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v75 + 32LL))(v75, v46);
        sub_AB39A0(v83, v46, v84, v85, v86, v87);
      }
LABEL_88:
      if ( !v93 )
        goto LABEL_89;
    }
  }
  sub_B88650(v46, 1);
LABEL_89:
  if ( ptr != (char *)&v111 + 8 )
    free(ptr);
  sub_147A7A0((char *)v116);
  return v46;
}
