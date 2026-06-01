__int64 __fastcall sub_1A81340(__int64 a1, int a2, unsigned int a3)
{
  __int64 v4; // rax
  unsigned int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r12
  unsigned __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rcx
  void **v15; // rax
  __int64 v16; // rdx
  void *v17; // rcx
  void *v18; // rsi
  void *v19; // rcx
  void *v20; // rsi
  void *v21; // rcx
  void *v22; // rdx
  void *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rbx
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 *v31; // rax
  unsigned __int64 v32; // rcx
  __int64 *v33; // rdi
  int v34; // edx
  __int64 v35; // rdx
  __int64 v36; // rax
  _QWORD *v38; // rsi
  __int64 v39; // rbp
  unsigned __int64 v40; // rdx
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rax
  int v44; // eax
  _BYTE *v45; // rdi
  unsigned __int64 v46; // rdx
  __int64 v47; // r14
  __int64 v48; // r12
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rax
  int *v51; // r15
  unsigned __int64 v52; // r12
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // r12
  void *v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // r14
  __int64 v61; // r12
  __int64 v62; // r14
  unsigned __int64 v63; // rax
  int *v64; // r15
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // r14
  unsigned __int64 v67; // r14
  __int64 v68; // rdi
  size_t v69; // rdx
  __int64 v70; // rdx
  int v71; // eax
  void *v72; // r15
  __int64 v73; // r12
  void *v74; // rdi
  int v75; // ebp
  __int64 v76; // rax
  __int64 *v77; // r15
  __int64 v78; // rax
  __int64 v79; // r15
  __int64 *v80; // rdx
  __int64 *v81; // r15
  __int64 *v82; // rdi
  __int64 v83; // r12
  void *v84; // rdi
  int v85; // ebp
  __int64 v86; // rax
  __int64 v87; // rdx
  int v88; // eax
  void *v89; // r15
  __int64 v90; // r14
  void *v91; // rdi
  int v92; // ebp
  __int64 v93; // rax
  __int64 *v94; // r15
  __int64 v95; // rax
  __int64 v96; // r15
  __int64 *v97; // rax
  __int64 *v98; // r15
  __int64 *v99; // rdi
  __int64 v100; // r14
  void *v101; // rdi
  int v102; // ebp
  __int64 v103; // rax
  __int64 *v104; // [rsp+0h] [rbp-148h] BYREF
  __int64 *v105; // [rsp+8h] [rbp-140h]
  void *v106; // [rsp+18h] [rbp-130h] BYREF
  void *src; // [rsp+20h] [rbp-128h] BYREF
  size_t n; // [rsp+28h] [rbp-120h]
  _QWORD v109[2]; // [rsp+30h] [rbp-118h] BYREF
  int v110; // [rsp+40h] [rbp-108h] BYREF
  int v111; // [rsp+44h] [rbp-104h]
  char v112; // [rsp+48h] [rbp-100h]
  __int64 v113; // [rsp+4Ch] [rbp-FCh]
  char v114; // [rsp+54h] [rbp-F4h]
  void *dest; // [rsp+58h] [rbp-F0h]
  __m128 v116; // [rsp+60h] [rbp-E8h] BYREF
  char v117; // [rsp+78h] [rbp-D0h]
  void *v118[2]; // [rsp+80h] [rbp-C8h] BYREF
  void *v119; // [rsp+90h] [rbp-B8h]
  __int64 v120; // [rsp+98h] [rbp-B0h]
  __int64 v121; // [rsp+A0h] [rbp-A8h]
  __int64 v122; // [rsp+A8h] [rbp-A0h]
  char v123; // [rsp+F8h] [rbp-50h]
  unsigned int v124; // [rsp+100h] [rbp-48h]
  char v125; // [rsp+104h] [rbp-44h]

  v4 = *(unsigned int *)(a1 + 10152);
  if ( !(_DWORD)v4 )
    goto LABEL_19;
  v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 10144) + 48 * v4 - 40) + 36LL);
  if ( v6 > 8 )
    goto LABEL_6;
  v7 = 1LL << v6;
  v8 = (1LL << v6) & 0x173;
  if ( ((1LL << v6) & 0x173) != 0 )
  {
LABEL_19:
    sub_168B9F0((__int64)v118, (__int64 *)(a1 + 8), a3, 0x12EAu, 0);
    sub_15F7200(v118);
    return 0;
  }
  if ( (v7 & 8) == 0 )
  {
    if ( (v7 & 0x80u) != 0LL )
    {
      sub_168B9F0((__int64)v118, (__int64 *)(a1 + 8), a3, 0x12ECu, 0);
      sub_15F7200(v118);
      sub_168B9F0(
        (__int64)v118,
        (__int64 *)(a1 + 8),
        *(_DWORD *)(*(_QWORD *)(a1 + 10144) + 48LL * *(unsigned int *)(a1 + 10152) - 48),
        0x71u,
        0);
      sub_15F7200(v118);
      return 0;
    }
LABEL_6:
    LODWORD(v104) = a3;
    sub_160ECE0(a1, 1);
    v9 = sub_13FC5D0(
           *(_QWORD *)(*(_QWORD *)(a1 + 240) + 104LL) + 632LL,
           *(_QWORD *)(*(_QWORD *)(a1 + 10144) + 48LL * *(unsigned int *)(a1 + 10152) - 40),
           (int)v104);
    v10 = *(unsigned int *)(a1 + 10152);
    LODWORD(v118[0]) = 0;
    v118[1] = nullptr;
    v11 = v9;
    v12 = *(unsigned int *)(a1 + 10156);
    v122 = 0;
    v13 = v10 + 1;
    v119 = nullptr;
    v120 = 0;
    v121 = 0;
    if ( v10 + 1 > v12 )
    {
      v67 = *(_QWORD *)(a1 + 10144);
      v68 = a1 + 10144;
      if ( v67 > (unsigned __int64)v118 || (unsigned __int64)v118 >= v67 + 48 * v10 )
      {
        sub_1A7FD60(v68, v13);
        v14 = *(_QWORD *)(a1 + 10144);
        v10 = *(unsigned int *)(a1 + 10152);
        v15 = v118;
      }
      else
      {
        sub_1A7FD60(v68, v13);
        v14 = *(_QWORD *)(a1 + 10144);
        v10 = *(unsigned int *)(a1 + 10152);
        v15 = (void **)((char *)v118 + v14 - v67);
      }
    }
    else
    {
      v14 = *(_QWORD *)(a1 + 10144);
      v15 = v118;
    }
    v16 = v14 + 48 * v10;
    *(_DWORD *)v16 = *(_DWORD *)v15;
    v17 = v15[1];
    *(_QWORD *)(v16 + 16) = 0;
    *(_QWORD *)(v16 + 24) = 0;
    *(_QWORD *)(v16 + 32) = 0;
    *(_QWORD *)(v16 + 8) = v17;
    *(_QWORD *)(v16 + 16) = v15[2];
    v18 = v15[3];
    v15[2] = nullptr;
    v19 = *(void **)(v16 + 24);
    *(_QWORD *)(v16 + 24) = v18;
    v20 = v15[4];
    v15[3] = v19;
    v21 = *(void **)(v16 + 32);
    *(_QWORD *)(v16 + 32) = v20;
    LODWORD(v20) = *((_DWORD *)v15 + 10);
    v15[4] = v21;
    *(_DWORD *)(v16 + 40) = (_DWORD)v20 != 0;
    v22 = v15[2];
    ++*((_DWORD *)v15 + 10);
    v15[3] = v22;
    v23 = v119;
    v24 = (unsigned int)(*(_DWORD *)(a1 + 10152) + 1);
    *(_DWORD *)(a1 + 10152) = v24;
    if ( v23 )
    {
      operator delete(v23);
      v24 = *(unsigned int *)(a1 + 10152);
    }
    v25 = *(_QWORD *)(a1 + 10144);
    *(_DWORD *)(v25 + 48 * v24 - 48) = a2;
    *(_QWORD *)(v25 + 48LL * *(unsigned int *)(a1 + 10152) - 40) = v11;
    sub_FF1730(a1 + 11128, v11, a2, 1, (__int64)nullsub_1204, (__int64)&v110, (char)nullsub_1205);
    v28 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2264LL) + 80LL);
    v29 = *(_QWORD *)(v28 + 72);
    if ( (v29 & 1) != 0 )
    {
      v30 = v29 & 0xFFFFFFFFFFFFFFFELL;
LABEL_12:
      v31 = (__int64 *)(v29 & 0xFFFFFFFFFFFFFFF8LL);
      v32 = (unsigned __int64)v31;
      if ( v30 )
      {
        if ( (v30 & 4) != 0 )
        {
          v32 = 0;
          if ( v31 )
          {
            v33 = (__int64 *)*v31;
            v34 = *(_DWORD *)(*v31 + 12);
            if ( *((_DWORD *)v31 + 2) != v34 )
            {
              *((_DWORD *)v31 + 2) = v34;
              v35 = *v33;
              v104 = v31;
              (*(void (__fastcall **)(__int64 *, __int64, __int64, _QWORD))(v35 + 152))(v33, v28, v35, 0);
              v31 = v104;
            }
            v32 = v31[2];
          }
        }
      }
      goto LABEL_18;
    }
    v38 = (_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v29 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v32 = v29 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v29 & 2) != 0 )
      {
        v39 = v38[2295];
        v40 = v28 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v39 )
        {
          v41 = v38[294];
          v38[304] += 24LL;
          v42 = (v41 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v38[295] >= v42 + 24 && v41 )
          {
            v38[294] = v42 + 24;
            v43 = (v41 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v43 = sub_986170((__int64)(v38 + 294), 24, 24, 3, v26, v27);
            v42 = v43 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v43 = v39;
          v40 = v42 | 4;
          *(_DWORD *)(v43 + 8) = 0;
          *(_QWORD *)(v43 + 16) = v28;
        }
        v30 = v40 & 0xFFFFFFFFFFFFFFFELL;
        v29 = v30 | 1;
        *(_QWORD *)(v28 + 72) = v30 | 1;
        goto LABEL_12;
      }
    }
    else
    {
      v32 = 0;
    }
LABEL_18:
    v36 = *(_QWORD *)(v32 + 8);
    *(_QWORD *)(v32 - 8) = v11;
    *(_QWORD *)(v32 + 8) = v36 & 0xFFFFFFFFFFFFFFF8LL | 4;
    return 0;
  }
  sub_168B9F0((__int64)v118, (__int64 *)(a1 + 8), a3, 0x12EBu, 0);
  sub_15F7200(v118);
  sub_168B9F0(
    (__int64)v118,
    (__int64 *)(a1 + 8),
    *(_DWORD *)(*(_QWORD *)(a1 + 10144) + 48LL * *(unsigned int *)(a1 + 10152) - 48),
    0x17FDu,
    0);
  v44 = *(_DWORD *)(*(_QWORD *)(a1 + 10144) + 48LL * *(unsigned int *)(a1 + 10152) - 48);
  v114 = 0;
  v113 = 0;
  dest = &v116.m128_u16[4];
  v116.m128_u64[0] = 0;
  v116.m128_i8[8] = 0;
  v117 = 0;
  v110 = v44;
  v111 = v44;
  v112 = 0;
  src = v109;
  sub_1A7BE10(&src, "export ", (__int64)"");
  v45 = dest;
  if ( src == v109 )
  {
    v69 = n;
    if ( n )
    {
      if ( n == 1 )
        *(_BYTE *)dest = v109[0];
      else
        memcpy(dest, src, n);
      v69 = n;
      v45 = dest;
    }
    v116.m128_u64[0] = v69;
    v45[v69] = 0;
    v45 = src;
    goto LABEL_33;
  }
  if ( dest == &v116.m128_u16[4] )
  {
    v104 = (__int64 *)v109[0];
    dest = src;
    v116 = _mm_loadh_ps((const double *)&v104);
    goto LABEL_47;
  }
  v104 = (__int64 *)v109[0];
  v46 = v116.m128_u64[1];
  dest = src;
  v116 = _mm_loadh_ps((const double *)&v104);
  if ( !v45 )
  {
LABEL_47:
    v45 = v109;
    src = v109;
    goto LABEL_33;
  }
  src = v45;
  v109[0] = v46;
LABEL_33:
  n = 0;
  *v45 = 0;
  if ( src != v109 )
    operator delete(src);
  v117 = 0;
  if ( v123 )
  {
    if ( v110 && v111 )
    {
      v47 = v121;
      if ( v121 )
      {
        v48 = *(unsigned int *)(v121 + 536);
        v49 = v48 + 1;
        v8 = v48 << 6;
      }
      else
      {
        v70 = v122;
        v71 = *(_DWORD *)(v122 + 14976);
        if ( v71 )
        {
          v78 = (unsigned int)(v71 - 1);
          *(_DWORD *)(v122 + 14976) = v78;
          v47 = *(_QWORD *)(v70 + 8 * v78 + 14848);
          v79 = *(unsigned int *)(v47 + 536);
          *(_BYTE *)v47 = 0;
          v80 = *(__int64 **)(v47 + 528);
          *(_DWORD *)(v47 + 424) = 0;
          v81 = &v80[8 * v79];
          while ( v80 != v81 )
          {
            while ( 1 )
            {
              v81 -= 8;
              v82 = (__int64 *)v81[3];
              if ( v82 == v81 + 5 )
                break;
              v104 = v80;
              operator delete(v82);
              v80 = v104;
              if ( v104 == v81 )
                goto LABEL_79;
            }
          }
LABEL_79:
          *(_DWORD *)(v47 + 536) = 0;
        }
        else
        {
          v47 = operator new(0x3A0u);
          *(_BYTE *)v47 = 0;
          *(_QWORD *)(v47 + 96) = v47 + 112;
          *(_QWORD *)(v47 + 128) = v47 + 144;
          *(_QWORD *)(v47 + 160) = v47 + 176;
          *(_QWORD *)(v47 + 192) = v47 + 208;
          *(_QWORD *)(v47 + 224) = v47 + 240;
          *(_QWORD *)(v47 + 256) = v47 + 272;
          *(_QWORD *)(v47 + 288) = v47 + 304;
          *(_QWORD *)(v47 + 320) = v47 + 336;
          *(_QWORD *)(v47 + 352) = v47 + 368;
          *(_QWORD *)(v47 + 384) = v47 + 400;
          *(_QWORD *)(v47 + 416) = v47 + 432;
          *(_BYTE *)(v47 + 112) = 0;
          *(_QWORD *)(v47 + 104) = 0;
          *(_QWORD *)(v47 + 136) = 0;
          *(_BYTE *)(v47 + 144) = 0;
          *(_QWORD *)(v47 + 168) = 0;
          *(_BYTE *)(v47 + 176) = 0;
          *(_QWORD *)(v47 + 200) = 0;
          *(_BYTE *)(v47 + 208) = 0;
          *(_QWORD *)(v47 + 232) = 0;
          *(_BYTE *)(v47 + 240) = 0;
          *(_QWORD *)(v47 + 264) = 0;
          *(_BYTE *)(v47 + 272) = 0;
          *(_QWORD *)(v47 + 296) = 0;
          *(_BYTE *)(v47 + 304) = 0;
          *(_QWORD *)(v47 + 328) = 0;
          *(_BYTE *)(v47 + 336) = 0;
          *(_QWORD *)(v47 + 360) = 0;
          *(_BYTE *)(v47 + 368) = 0;
          *(_QWORD *)(v47 + 392) = 0;
          *(_BYTE *)(v47 + 400) = 0;
          *(_QWORD *)(v47 + 424) = 0x800000000LL;
          *(_QWORD *)(v47 + 528) = v47 + 544;
          *(_QWORD *)(v47 + 536) = 0x600000000LL;
        }
        v121 = v47;
        v49 = 1;
      }
      v50 = *(_QWORD *)(v47 + 528);
      v51 = &v110;
      v52 = v50 + v8;
      if ( *(unsigned int *)(v47 + 540) < v49 )
      {
        v72 = (void *)(v47 + 544);
        if ( v50 > (unsigned __int64)&v110 || v52 <= (unsigned __int64)&v110 )
        {
          v104 = (__int64 *)(v47 + 528);
          v83 = sub_2237400(v47 + 528, v47 + 544, v49, 64, &src);
          sub_9EF810(v104, v83);
          v84 = *(void **)(v47 + 528);
          v85 = (int)src;
          if ( v84 != v72 )
            free(v84);
          v86 = *(unsigned int *)(v47 + 536);
          *(_QWORD *)(v47 + 528) = v83;
          v51 = &v110;
          *(_DWORD *)(v47 + 540) = v85;
          v52 = (v86 << 6) + v83;
        }
        else
        {
          v105 = (__int64 *)(v47 + 528);
          v104 = (__int64 *)((char *)&v110 - v50);
          v73 = sub_2237400(v47 + 528, v47 + 544, v49, 64, &src);
          sub_9EF810(v105, v73);
          v74 = *(void **)(v47 + 528);
          v75 = (int)src;
          if ( v74 != v72 )
            free(v74);
          v76 = *(unsigned int *)(v47 + 536);
          v77 = v104;
          *(_QWORD *)(v47 + 528) = v73;
          *(_DWORD *)(v47 + 540) = v75;
          v51 = (int *)((char *)v77 + v73);
          v52 = (v76 << 6) + v73;
        }
      }
      *(_QWORD *)v52 = *(_QWORD *)v51;
      *(_DWORD *)(v52 + 8) = v51[2];
      *(_QWORD *)(v52 + 12) = *(_QWORD *)(v51 + 3);
      *(_DWORD *)(v52 + 20) = v51[5];
      *(_QWORD *)(v52 + 24) = v52 + 40;
      sub_1A7BED0((_QWORD *)(v52 + 24), *((_BYTE **)v51 + 3), *((_QWORD *)v51 + 3) + *((_QWORD *)v51 + 4));
      *(_BYTE *)(v52 + 56) = *((_BYTE *)v51 + 56);
      ++*(_DWORD *)(v47 + 536);
    }
  }
  else if ( v125 )
  {
    v57 = sub_168B9E0(v118);
    v58 = v119;
    if ( v119 )
      v58 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v119 + 32LL))(v119);
    v106 = v58;
    v59 = sub_1587BC0(v57, (__int64 *)&v106, v53, v54, v55, v56);
    if ( v110 )
    {
      if ( v111 )
      {
        v60 = *v59 + 32LL * v124;
        v61 = *(_QWORD *)(v60 + 8);
        if ( !v61 )
        {
          v87 = *(_QWORD *)(v60 + 16);
          v88 = *(_DWORD *)(v87 + 14976);
          if ( v88 )
          {
            v95 = (unsigned int)(v88 - 1);
            *(_DWORD *)(v87 + 14976) = v95;
            v61 = *(_QWORD *)(v87 + 8 * v95 + 14848);
            v96 = *(unsigned int *)(v61 + 536);
            v97 = *(__int64 **)(v61 + 528);
            *(_BYTE *)v61 = 0;
            *(_DWORD *)(v61 + 424) = 0;
            v98 = &v97[8 * v96];
            while ( v97 != v98 )
            {
              while ( 1 )
              {
                v98 -= 8;
                v99 = (__int64 *)v98[3];
                if ( v99 == v98 + 5 )
                  break;
                v104 = v97;
                operator delete(v99);
                v97 = v104;
                if ( v104 == v98 )
                  goto LABEL_95;
              }
            }
LABEL_95:
            *(_DWORD *)(v61 + 536) = 0;
          }
          else
          {
            v61 = operator new(0x3A0u);
            *(_BYTE *)v61 = 0;
            *(_QWORD *)(v61 + 96) = v61 + 112;
            *(_QWORD *)(v61 + 128) = v61 + 144;
            *(_QWORD *)(v61 + 160) = v61 + 176;
            *(_QWORD *)(v61 + 192) = v61 + 208;
            *(_QWORD *)(v61 + 224) = v61 + 240;
            *(_QWORD *)(v61 + 256) = v61 + 272;
            *(_QWORD *)(v61 + 288) = v61 + 304;
            *(_QWORD *)(v61 + 320) = v61 + 336;
            *(_QWORD *)(v61 + 352) = v61 + 368;
            *(_QWORD *)(v61 + 384) = v61 + 400;
            *(_QWORD *)(v61 + 416) = v61 + 432;
            *(_QWORD *)(v61 + 104) = 0;
            *(_BYTE *)(v61 + 112) = 0;
            *(_QWORD *)(v61 + 136) = 0;
            *(_BYTE *)(v61 + 144) = 0;
            *(_QWORD *)(v61 + 168) = 0;
            *(_BYTE *)(v61 + 176) = 0;
            *(_QWORD *)(v61 + 200) = 0;
            *(_BYTE *)(v61 + 208) = 0;
            *(_QWORD *)(v61 + 232) = 0;
            *(_BYTE *)(v61 + 240) = 0;
            *(_QWORD *)(v61 + 264) = 0;
            *(_BYTE *)(v61 + 272) = 0;
            *(_QWORD *)(v61 + 296) = 0;
            *(_BYTE *)(v61 + 304) = 0;
            *(_QWORD *)(v61 + 328) = 0;
            *(_BYTE *)(v61 + 336) = 0;
            *(_QWORD *)(v61 + 360) = 0;
            *(_BYTE *)(v61 + 368) = 0;
            *(_QWORD *)(v61 + 392) = 0;
            *(_BYTE *)(v61 + 400) = 0;
            *(_QWORD *)(v61 + 424) = 0x800000000LL;
            *(_QWORD *)(v61 + 528) = v61 + 544;
            *(_QWORD *)(v61 + 536) = 0x600000000LL;
          }
          *(_QWORD *)(v60 + 8) = v61;
        }
        v62 = *(unsigned int *)(v61 + 536);
        v63 = *(_QWORD *)(v61 + 528);
        v64 = &v110;
        v65 = v62 + 1;
        v66 = v63 + (v62 << 6);
        if ( v65 > *(unsigned int *)(v61 + 540) )
        {
          v89 = (void *)(v61 + 544);
          if ( v63 > (unsigned __int64)&v110 || v66 <= (unsigned __int64)&v110 )
          {
            v104 = (__int64 *)(v61 + 528);
            v100 = sub_2237400(v61 + 528, v61 + 544, v65, 64, &src);
            sub_9EF810(v104, v100);
            v101 = *(void **)(v61 + 528);
            v102 = (int)src;
            if ( v101 != v89 )
              free(v101);
            v103 = *(unsigned int *)(v61 + 536);
            *(_QWORD *)(v61 + 528) = v100;
            v64 = &v110;
            *(_DWORD *)(v61 + 540) = v102;
            v66 = (v103 << 6) + v100;
          }
          else
          {
            v105 = (__int64 *)(v61 + 528);
            v104 = (__int64 *)((char *)&v110 - v63);
            v90 = sub_2237400(v61 + 528, v61 + 544, v65, 64, &src);
            sub_9EF810(v105, v90);
            v91 = *(void **)(v61 + 528);
            v92 = (int)src;
            if ( v91 != v89 )
              free(v91);
            v93 = *(unsigned int *)(v61 + 536);
            v94 = v104;
            *(_QWORD *)(v61 + 528) = v90;
            *(_DWORD *)(v61 + 540) = v92;
            v64 = (int *)((char *)v94 + v90);
            v66 = (v93 << 6) + v90;
          }
        }
        *(_QWORD *)v66 = *(_QWORD *)v64;
        *(_DWORD *)(v66 + 8) = v64[2];
        *(_QWORD *)(v66 + 12) = *(_QWORD *)(v64 + 3);
        *(_DWORD *)(v66 + 20) = v64[5];
        *(_QWORD *)(v66 + 24) = v66 + 40;
        sub_1A7BED0((_QWORD *)(v66 + 24), *((_BYTE **)v64 + 3), *((_QWORD *)v64 + 3) + *((_QWORD *)v64 + 4));
        *(_BYTE *)(v66 + 56) = *((_BYTE *)v64 + 56);
        ++*(_DWORD *)(v61 + 536);
      }
    }
  }
  if ( dest != &v116.m128_u16[4] )
    operator delete(dest);
  sub_15F7200(v118);
  return 0;
}
