_QWORD *__fastcall sub_1A84440(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        __int64 a6,
        int *a7,
        __int64 a8)
{
  unsigned int v10; // ecx
  __int64 *v11; // rsi
  __int64 v12; // r9
  __int64 *v13; // rsi
  __int64 *v14; // rcx
  __int64 v15; // r9
  __int64 v16; // r14
  __int64 v17; // rax
  _DWORD *v18; // r8
  _QWORD *v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  int v31; // edx
  __int64 v32; // rax
  __int64 v33; // rcx
  unsigned int v34; // r14d
  int v35; // r8d
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rbp
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rcx
  __int64 v43; // rax
  unsigned __int64 v44; // rdi
  __int64 v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // r12
  unsigned int v48; // r13d
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // r12
  __int64 v60; // rax
  _QWORD *v61; // rax
  unsigned __int8 *v62; // rbp
  __int64 v63; // rax
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 *v70; // rcx
  __int64 v71; // rdx
  void *v72; // rax
  _QWORD *v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rbp
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rax
  _QWORD *v80; // rax
  __int64 v81; // rdx
  __int64 v82; // r15
  __int64 v83; // rdx
  int v84; // eax
  __int64 v85; // rax
  __int64 v86; // rcx
  int v87; // eax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // r15
  void *v92; // rdi
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rax
  void *v97; // rdi
  __int64 v100; // [rsp+8h] [rbp-130h]
  __int64 v101; // [rsp+8h] [rbp-130h]
  __int64 v102; // [rsp+10h] [rbp-128h]
  __int64 v103; // [rsp+10h] [rbp-128h]
  __int64 *v104; // [rsp+10h] [rbp-128h]
  __int64 v105; // [rsp+10h] [rbp-128h]
  int v106; // [rsp+18h] [rbp-120h]
  __int64 v107; // [rsp+18h] [rbp-120h]
  unsigned __int64 v108; // [rsp+28h] [rbp-110h] BYREF
  __int64 v109; // [rsp+38h] [rbp-100h] BYREF
  unsigned __int64 v110; // [rsp+40h] [rbp-F8h] BYREF
  int v111; // [rsp+48h] [rbp-F0h]
  void *ptr; // [rsp+50h] [rbp-E8h] BYREF
  signed __int64 v113; // [rsp+58h] [rbp-E0h]
  _DWORD v114[4]; // [rsp+60h] [rbp-D8h] BYREF
  _QWORD v115[2]; // [rsp+70h] [rbp-C8h] BYREF
  _QWORD *v116; // [rsp+80h] [rbp-B8h]
  unsigned __int8 *v117; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v118; // [rsp+98h] [rbp-A0h]
  char v119; // [rsp+E8h] [rbp-50h]
  unsigned int v120; // [rsp+F0h] [rbp-48h]
  char v121; // [rsp+F4h] [rbp-44h]

  v10 = *(_DWORD *)(a5 + 36);
  v11 = (__int64 *)a5;
  v108 = a5;
  if ( v10 == 1 )
  {
    sub_168B9F0((__int64)v115, (__int64 *)(a1 + 8), a4, 0x1AE2u, 0);
    sub_15F7200(v115);
    v11 = (__int64 *)v108;
    v10 = *(_DWORD *)(v108 + 36);
  }
  if ( v10 > 7 || ((1LL << v10) & 0xBC) == 0 )
  {
    sub_FF1730(a1 + 11128, (__int64)v11, a4, 1, (__int64)nullsub_1204, (__int64)&ptr, (char)nullsub_1205);
    v13 = (__int64 *)v108;
    if ( *(_DWORD *)(v108 + 36) != 5 )
      goto LABEL_6;
    goto LABEL_46;
  }
  v37 = *(unsigned int *)(a1 + 10152);
  v38 = 0;
  if ( (_DWORD)v37 )
    v38 = *(_QWORD *)(*(_QWORD *)(a1 + 10144) + 48 * v37 - 40);
  sub_1A7B950(*(_QWORD *)(a1 + 248), a1 + 11128, (__int64)v11, v38, a4, 0);
  v13 = (__int64 *)v108;
  if ( *(_DWORD *)(v108 + 36) == 5 )
  {
LABEL_46:
    v39 = *(unsigned int *)(a1 + 10152);
    if ( !(_DWORD)v39 )
      BUG();
    if ( ((*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 10144) + 48 * v39 - 40) + 36LL) - 2) & 0xFFFFFFFD) == 0 )
    {
      sub_168B9F0((__int64)v115, (__int64 *)(a1 + 8), a4, 0x1B75u, 0);
      if ( v119 )
      {
        sub_AEC220(&v117, *(_BYTE **)v108, *(_QWORD *)(v108 + 8));
      }
      else if ( v121 )
      {
        v67 = sub_168B9E0(v115);
        v70 = (__int64 *)v108;
        v71 = v67;
        v72 = v116;
        if ( v116 )
        {
          v107 = v71;
          v72 = (void *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, unsigned __int64))(*v116 + 32LL))(
                          v116,
                          *v116,
                          v71,
                          v108);
          v71 = v107;
          v70 = (__int64 *)v108;
        }
        v104 = v70;
        ptr = v72;
        v73 = sub_1587BC0(v71, (__int64 *)&ptr, v71, (__int64)v70, v68, v69);
        sub_AEC220((unsigned __int8 **)(*v73 + 32LL * v120 + 8), (_BYTE *)*v104, v104[1]);
      }
      sub_15F7200(v115);
      v13 = (__int64 *)v108;
    }
  }
LABEL_6:
  sub_1A7C050(a1, (__int64)v13, a4, *(__int64 **)(a1 + 544), 0, v12);
  if ( !sub_FEED10((char **)v108, *(_QWORD *)(a1 + 232)) )
    goto LABEL_12;
  sub_168B9F0(
    (__int64)v115,
    (__int64 *)(a1 + 8),
    a4,
    *(_BYTE *)(*(_QWORD *)(a1 + 232) + 201LL) >> 5 == 0 ? 4203 : 4213,
    0);
  sub_FEEE60((__int64)&ptr, (__int64 *)v108, 0);
  if ( v119 )
  {
    sub_AEC220(&v117, ptr, v113);
LABEL_70:
    v47 = *(_QWORD *)(a1 + 232);
    if ( v119 )
    {
      sub_AEC220(&v117, *(_BYTE **)(v47 + 488), *(_QWORD *)(v47 + 496));
    }
    else if ( v121 )
    {
      v49 = sub_168B9E0(v115);
      v53 = (__int64)v116;
      if ( v116 )
      {
        v103 = v49;
        v53 = (*(__int64 (__fastcall **)(_QWORD *))(*v116 + 32LL))(v116);
        v49 = v103;
      }
      v110 = v53;
      v54 = sub_1587BC0(v49, (__int64 *)&v110, v49, v50, v51, v52);
      sub_AEC220((unsigned __int8 **)(*v54 + 32LL * v120 + 8), *(_BYTE **)(v47 + 488), *(_QWORD *)(v47 + 496));
    }
    goto LABEL_9;
  }
  if ( v121 )
  {
    v59 = sub_168B9E0(v115);
    v60 = (__int64)v116;
    if ( v116 )
      v60 = (*(__int64 (__fastcall **)(_QWORD *))(*v116 + 32LL))(v116);
    v110 = v60;
    v61 = sub_1587BC0(v59, (__int64 *)&v110, v55, v56, v57, v58);
    sub_AEC220((unsigned __int8 **)(*v61 + 32LL * v120 + 8), ptr, v113);
    goto LABEL_70;
  }
LABEL_9:
  if ( ptr != v114 )
    operator delete(ptr);
  sub_15F7200(v115);
LABEL_12:
  v14 = (__int64 *)v108;
  ptr = v114;
  v113 = 0x200000000LL;
  if ( a8 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 21LL) & 4) == 0 || *(_QWORD *)(v108 + 40) )
    {
      if ( v108 && (_DWORD)a8 )
      {
        v31 = *a7;
        v32 = *(_QWORD *)(v108 + 40);
        v15 = 1;
        LODWORD(v113) = 1;
        v114[0] = v31;
        if ( (_DWORD)a8 == 1 || !v32 )
          goto LABEL_19;
        v33 = 1;
        v34 = 1;
        do
        {
          v32 = *(_QWORD *)(v32 + 40);
          v35 = a7[4 * v34];
          if ( v15 + 1 > (unsigned __int64)HIDWORD(v113) )
          {
            v106 = a7[4 * v34];
            v102 = v32;
            sub_2237220(&ptr, v114, v15 + 1, 4);
            v33 = (unsigned int)v113;
            v35 = v106;
            v32 = v102;
          }
          ++v34;
          *((_DWORD *)ptr + v33) = v35;
          v33 = (unsigned int)(v113 + 1);
          LODWORD(v113) = v33;
          v15 = (unsigned int)v33;
        }
        while ( v32 && (_DWORD)a8 != v34 );
        goto LABEL_18;
      }
      v15 = 0;
      v18 = v114;
    }
    else
    {
      v36 = *a7;
      LODWORD(v113) = 1;
      v15 = 1;
      v18 = v114;
      v114[0] = v36;
    }
  }
  else
  {
    if ( v108 )
    {
      v114[0] = 0;
      v15 = 1;
      LODWORD(v113) = 1;
      v16 = *(_QWORD *)(v108 + 40);
      if ( !v16 )
      {
LABEL_19:
        v18 = ptr;
        goto LABEL_20;
      }
      v17 = 1;
      do
      {
        while ( v15 + 1 <= (unsigned __int64)HIDWORD(v113) )
        {
          *((_DWORD *)ptr + v17) = 0;
          v17 = (unsigned int)(v113 + 1);
          LODWORD(v113) = v17;
          v16 = *(_QWORD *)(v16 + 40);
          v15 = (unsigned int)v17;
          if ( !v16 )
            goto LABEL_18;
        }
        sub_2237220(&ptr, v114, v15 + 1, 4);
        *((_DWORD *)ptr + (unsigned int)v113) = 0;
        LODWORD(v113) = v113 + 1;
        v15 = (unsigned int)v113;
        v16 = *(_QWORD *)(v16 + 40);
        v17 = (unsigned int)v113;
      }
      while ( v16 );
LABEL_18:
      v14 = (__int64 *)v108;
      goto LABEL_19;
    }
    v15 = 0;
    v18 = v114;
  }
LABEL_20:
  v19 = sub_B7AF10(*(_QWORD *)(a1 + 248), *(_QWORD *)(a1 + 544), a2, (__int64)v14, (unsigned __int64)v18, v15);
  sub_B94AD0(*(__m128i **)(a1 + 544), (__int64)v19, v20, v21, v22, v23);
  v27 = *(unsigned int *)(a1 + 10152);
  if ( (_DWORD)v27 )
    sub_A93DF0(*(_QWORD *)(a1 + 248), *(_QWORD *)(*(_QWORD *)(a1 + 10144) + 48 * v27 - 40), (__int64)v19, v24, v25, v26);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 21LL) & 4) != 0 )
  {
    if ( a3 )
    {
      if ( *(_DWORD *)(v108 + 36) != 5 )
      {
LABEL_25:
        v28 = *(unsigned int *)(a1 + 10152);
        if ( (_DWORD)v28 && (v29 = *(_QWORD *)(a1 + 10144), *(_DWORD *)(*(_QWORD *)(v29 + 48 * v28 - 40) + 36LL) != 3) )
        {
LABEL_53:
          v40 = *(_QWORD *)(v29 + 48 * v28 - 40);
          v41 = *(unsigned int *)(v40 + 1040);
          v42 = *(unsigned int *)(v40 + 1044);
          if ( v41 >= v42 && v42 < v41 + 1 )
          {
            sub_2237220(v40 + 1032, v40 + 1048, v41 + 1, 8);
            v41 = *(unsigned int *)(v40 + 1040);
          }
          *(_QWORD *)(*(_QWORD *)(v40 + 1032) + 8 * v41) = v108 & 0xFFFFFFFFFFFFFFFBLL;
          ++*(_DWORD *)(v40 + 1040);
        }
        else
        {
          sub_168B9F0((__int64)v115, (__int64 *)(a1 + 8), a3, 0xECFu, 0);
          sub_15F7200(v115);
        }
        goto LABEL_28;
      }
      sub_168B9F0((__int64)v115, (__int64 *)(a1 + 8), a3, 0xED0u, 0);
      v48 = a7[4 * a8 - 4];
      if ( v119 )
      {
        v62 = v117;
        if ( v117 )
        {
          v63 = *((unsigned int *)v117 + 106);
          v64 = *((unsigned int *)v117 + 107);
          v65 = v63 + 1;
        }
        else
        {
          v83 = v118;
          v84 = *(_DWORD *)(v118 + 14976);
          if ( v84 )
          {
            v88 = (unsigned int)(v84 - 1);
            *(_DWORD *)(v118 + 14976) = v88;
            v62 = *(unsigned __int8 **)(v83 + 8 * v88 + 14848);
            v89 = *((unsigned int *)v62 + 134);
            *v62 = 0;
            v90 = *((_QWORD *)v62 + 66);
            *((_DWORD *)v62 + 106) = 0;
            v91 = v90 + (v89 << 6);
            while ( v90 != v91 )
            {
              while ( 1 )
              {
                v91 -= 64;
                v92 = *(void **)(v91 + 24);
                if ( v92 == (void *)(v91 + 40) )
                  break;
                v100 = v90;
                operator delete(v92);
                v90 = v100;
                if ( v100 == v91 )
                  goto LABEL_111;
              }
            }
LABEL_111:
            v63 = *((unsigned int *)v62 + 106);
            v64 = *((unsigned int *)v62 + 107);
            *((_DWORD *)v62 + 134) = 0;
            v65 = v63 + 1;
          }
          else
          {
            v85 = operator new(0x3A0u);
            v64 = 8;
            v65 = 1;
            v62 = (unsigned __int8 *)v85;
            *(_BYTE *)v85 = 0;
            *(_QWORD *)(v85 + 96) = v85 + 112;
            *(_QWORD *)(v85 + 128) = v85 + 144;
            *(_QWORD *)(v85 + 160) = v85 + 176;
            *(_QWORD *)(v85 + 192) = v85 + 208;
            *(_QWORD *)(v85 + 224) = v85 + 240;
            *(_QWORD *)(v85 + 256) = v85 + 272;
            *(_QWORD *)(v85 + 288) = v85 + 304;
            *(_QWORD *)(v85 + 320) = v85 + 336;
            *(_QWORD *)(v85 + 352) = v85 + 368;
            *(_QWORD *)(v85 + 384) = v85 + 400;
            *(_QWORD *)(v85 + 416) = v85 + 432;
            *(_QWORD *)(v85 + 104) = 0;
            *(_BYTE *)(v85 + 112) = 0;
            *(_QWORD *)(v85 + 136) = 0;
            *(_BYTE *)(v85 + 144) = 0;
            *(_QWORD *)(v85 + 168) = 0;
            *(_BYTE *)(v85 + 176) = 0;
            *(_QWORD *)(v85 + 200) = 0;
            *(_BYTE *)(v85 + 208) = 0;
            *(_QWORD *)(v85 + 232) = 0;
            *(_BYTE *)(v85 + 240) = 0;
            *(_QWORD *)(v85 + 264) = 0;
            *(_BYTE *)(v85 + 272) = 0;
            *(_QWORD *)(v85 + 296) = 0;
            *(_BYTE *)(v85 + 304) = 0;
            *(_QWORD *)(v85 + 328) = 0;
            *(_BYTE *)(v85 + 336) = 0;
            *(_QWORD *)(v85 + 360) = 0;
            *(_BYTE *)(v85 + 368) = 0;
            *(_QWORD *)(v85 + 392) = 0;
            *(_BYTE *)(v85 + 400) = 0;
            *(_QWORD *)(v85 + 424) = 0x800000000LL;
            *(_QWORD *)(v85 + 528) = v85 + 544;
            *(_QWORD *)(v85 + 536) = 0x600000000LL;
            v63 = 0;
          }
          v117 = v62;
        }
        LOBYTE(v111) = 1;
        v110 = __PAIR64__(v48, a3);
        if ( v65 <= v64 )
          goto LABEL_90;
      }
      else
      {
        if ( !v121 )
        {
LABEL_75:
          sub_15F7200(v115);
          goto LABEL_28;
        }
        v76 = sub_168B9E0(v115);
        v79 = (__int64)v116;
        if ( v116 )
          v79 = (*(__int64 (__fastcall **)(_QWORD *))(*v116 + 32LL))(v116);
        v109 = v79;
        v80 = sub_1587BC0(v76, &v109, v74, v75, v77, v78);
        v81 = *v80 + 32LL * v120;
        v62 = *(unsigned __int8 **)(v81 + 8);
        v82 = v81;
        if ( !v62 )
        {
          v86 = *(_QWORD *)(v81 + 16);
          v87 = *(_DWORD *)(v86 + 14976);
          if ( v87 )
          {
            v93 = (unsigned int)(v87 - 1);
            *(_DWORD *)(v86 + 14976) = v93;
            v62 = *(unsigned __int8 **)(v86 + 8 * v93 + 14848);
            v94 = *((unsigned int *)v62 + 134);
            *v62 = 0;
            v95 = *((_QWORD *)v62 + 66);
            *((_DWORD *)v62 + 106) = 0;
            v96 = v95 + (v94 << 6);
            while ( v95 != v96 )
            {
              while ( 1 )
              {
                v96 -= 64;
                v97 = *(void **)(v96 + 24);
                if ( v97 == (void *)(v96 + 40) )
                  break;
                v105 = v96;
                v101 = v95;
                operator delete(v97);
                v95 = v101;
                v96 = v105;
                if ( v101 == v105 )
                  goto LABEL_116;
              }
            }
LABEL_116:
            *((_DWORD *)v62 + 134) = 0;
          }
          else
          {
            v62 = (unsigned __int8 *)operator new(0x3A0u);
            *v62 = 0;
            *((_QWORD *)v62 + 12) = v62 + 112;
            *((_QWORD *)v62 + 16) = v62 + 144;
            *((_QWORD *)v62 + 20) = v62 + 176;
            *((_QWORD *)v62 + 24) = v62 + 208;
            *((_QWORD *)v62 + 28) = v62 + 240;
            *((_QWORD *)v62 + 32) = v62 + 272;
            *((_QWORD *)v62 + 36) = v62 + 304;
            *((_QWORD *)v62 + 40) = v62 + 336;
            *((_QWORD *)v62 + 44) = v62 + 368;
            *((_QWORD *)v62 + 48) = v62 + 400;
            *((_QWORD *)v62 + 52) = v62 + 432;
            v62[112] = 0;
            *((_QWORD *)v62 + 13) = 0;
            *((_QWORD *)v62 + 17) = 0;
            v62[144] = 0;
            *((_QWORD *)v62 + 21) = 0;
            v62[176] = 0;
            *((_QWORD *)v62 + 25) = 0;
            v62[208] = 0;
            *((_QWORD *)v62 + 29) = 0;
            v62[240] = 0;
            *((_QWORD *)v62 + 33) = 0;
            v62[272] = 0;
            *((_QWORD *)v62 + 37) = 0;
            v62[304] = 0;
            *((_QWORD *)v62 + 41) = 0;
            v62[336] = 0;
            *((_QWORD *)v62 + 45) = 0;
            v62[368] = 0;
            *((_QWORD *)v62 + 49) = 0;
            v62[400] = 0;
            *((_QWORD *)v62 + 53) = 0x800000000LL;
            *((_QWORD *)v62 + 66) = v62 + 544;
            *((_QWORD *)v62 + 67) = 0x600000000LL;
          }
          *(_QWORD *)(v82 + 8) = v62;
        }
        LOBYTE(v111) = 1;
        v110 = __PAIR64__(v48, a3);
        v63 = *((unsigned int *)v62 + 106);
        v65 = v63 + 1;
        if ( v63 + 1 <= (unsigned __int64)*((unsigned int *)v62 + 107) )
        {
LABEL_90:
          v66 = *((_QWORD *)v62 + 52) + 12 * v63;
          *(_QWORD *)v66 = v110;
          *(_DWORD *)(v66 + 8) = v111;
          ++*((_DWORD *)v62 + 106);
          goto LABEL_75;
        }
      }
      sub_2237220(v62 + 416, v62 + 432, v65, 12);
      v63 = *((unsigned int *)v62 + 106);
      goto LABEL_90;
    }
  }
  else if ( a3 )
  {
    goto LABEL_25;
  }
  v43 = *(unsigned int *)(a1 + 10152);
  if ( (_DWORD)v43 )
  {
    v44 = v19[2] & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v19[2] & 4) != 0 )
      v44 = *(_QWORD *)(v44 + 8);
    if ( v44 )
    {
      do
      {
        while ( 1 )
        {
          if ( (*(_BYTE *)(v44 + 8) & 0x7F) == 6 && v44 != 40 )
          {
            v28 = *(unsigned int *)(a1 + 10152);
            if ( !(_DWORD)v28 )
              BUG();
            v29 = *(_QWORD *)(a1 + 10144);
            goto LABEL_53;
          }
          v45 = *(_QWORD *)(sub_B8C1B0(v44) + 16);
          if ( (v45 & 4) != 0 )
            break;
          v44 = v45 & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v44 )
            goto LABEL_64;
        }
        v44 = *(_QWORD *)((v45 & 0xFFFFFFFFFFFFFFF8LL) + 8);
      }
      while ( v44 );
LABEL_64:
      v43 = *(unsigned int *)(a1 + 10152);
      v46 = 0;
      if ( !(_DWORD)v43 )
        goto LABEL_66;
    }
    v46 = *(_QWORD *)(*(_QWORD *)(a1 + 10144) + 48 * v43 - 40);
LABEL_66:
    sub_12F1A10(v46 + 920, (__int64 *)&v108, v46, v24, v25, v26);
  }
LABEL_28:
  if ( ptr != v114 )
    free(ptr);
  return v19;
}
