__int64 __fastcall sub_1E04F40(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  _QWORD *v10; // r15
  __int64 v11; // r9
  char v12; // r12
  __int64 v13; // r14
  unsigned __int64 v14; // rdx
  int v15; // eax
  void ***v16; // r12
  __int64 v17; // r14
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned int v20; // r8d
  __int64 v21; // rcx
  void *v22; // r8
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rax
  __int64 v25; // rdi
  __m128i v26; // rax
  __int64 v27; // rdi
  __int64 v28; // r9
  int v29; // eax
  __int64 v30; // rax
  int v31; // eax
  char v32; // r15
  int v33; // r12d
  unsigned __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // r13
  __m128 v37; // kr00_16
  int v38; // r14d
  unsigned __int64 v39; // rax
  __int64 v40; // rcx
  __int64 *v41; // r8
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // r13
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 *v48; // rcx
  _QWORD *v49; // rdi
  unsigned __int64 v50; // rdx
  void *v51; // rdx
  unsigned __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r14
  int v56; // r9d
  char v57; // al
  __int64 v58; // rax
  __int64 v59; // r12
  __int64 v60; // r14
  __int64 v61; // rdx
  const __m128i *v62; // rsi
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v67; // rax
  char v68; // al
  __int64 v69; // rdx
  __int64 *v70; // rcx
  __int64 v71; // r13
  unsigned __int64 v72; // r14
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // r13
  __m128 v77; // kr10_16
  int v78; // eax
  __int64 v79; // rdi
  __int64 v80; // rcx
  __int64 v81; // r9
  int v82; // r8d
  __int64 *v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  int v86; // eax
  int v87; // eax
  __m128i v88; // [rsp+10h] [rbp-138h] BYREF
  __int64 *v89; // [rsp+20h] [rbp-128h]
  unsigned __int64 v90; // [rsp+28h] [rbp-120h]
  void *v91; // [rsp+30h] [rbp-118h]
  __int64 v92; // [rsp+38h] [rbp-110h]
  char v93; // [rsp+4Ah] [rbp-FEh] BYREF
  char v94; // [rsp+4Bh] [rbp-FDh] BYREF
  int v95; // [rsp+4Ch] [rbp-FCh] BYREF
  __int64 *v96; // [rsp+50h] [rbp-F8h] BYREF
  __int64 *v97; // [rsp+58h] [rbp-F0h] BYREF
  __int64 v98; // [rsp+60h] [rbp-E8h] BYREF
  _DWORD *v99; // [rsp+68h] [rbp-E0h]
  __m128 v100; // [rsp+70h] [rbp-D8h] BYREF
  void *v101; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v102; // [rsp+88h] [rbp-C0h]
  _BYTE v103[32]; // [rsp+90h] [rbp-B8h] BYREF
  void *ptr; // [rsp+B0h] [rbp-98h] BYREF
  __int64 v105; // [rsp+B8h] [rbp-90h]
  _BYTE v106[32]; // [rsp+C0h] [rbp-88h] BYREF
  void *v107; // [rsp+E0h] [rbp-68h] BYREF
  __int64 v108; // [rsp+E8h] [rbp-60h]
  _QWORD v109[11]; // [rsp+F0h] [rbp-58h] BYREF

  v8 = *(_QWORD *)(a2 + 56);
  v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
  v10 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
  LODWORD(v8) = (v8 >> 2) & 1;
  v11 = (unsigned int)v8;
  if ( (_DWORD)v8 )
    v10 = *(_QWORD **)(v9 + 32);
  v12 = *(_BYTE *)(a2 + 81);
  v13 = *v10;
  v101 = v103;
  v102 = 0x400000000LL;
  ptr = v106;
  v105 = 0x400000000LL;
  if ( v12 )
  {
    v14 = *(unsigned int *)(a2 + 84);
    v15 = *(_DWORD *)(a2 + 84);
    if ( v14 > 4 )
    {
      sub_2237220(&ptr, v106, v14, 8);
      v69 = *(unsigned int *)(a2 + 84);
      v15 = v69;
      if ( HIDWORD(v102) < (unsigned int)v69 )
      {
        sub_2237220(&v101, v103, v69, 8);
        v15 = *(_DWORD *)(a2 + 84);
      }
    }
    if ( v15 )
    {
      v16 = (void ***)(a2 + 96);
      v17 = a2 + 16LL * (unsigned int)(v15 - 1) + 112;
      while ( 1 )
      {
        v107 = sub_1DD4AE0(*a1, *v16, a1[4], *(_DWORD *)(a2 + 24), *(_QWORD *)(a2 + 40), 0, a5, a6);
        if ( !v107 )
          goto LABEL_63;
        v43 = sub_1CBC0D0(*a1, (__int64 **)&v107, *(_DWORD *)(a2 + 24), a5);
        if ( (v43 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_63;
        v21 = (unsigned int)v102;
        v22 = v107;
        v23 = (unsigned int)v102 + 1LL;
        if ( v23 > HIDWORD(v102) )
        {
          v89 = (__int64 *)v43;
          v88.m128i_i64[0] = (__int64)v107;
          sub_2237220(&v101, v103, v23, 8);
          v43 = (unsigned __int64)v89;
          v22 = (void *)v88.m128i_i64[0];
          v21 = (unsigned int)v102;
        }
        *((_QWORD *)v101 + v21) = v22;
        v18 = (unsigned int)v105;
        LODWORD(v102) = v102 + 1;
        v19 = (unsigned int)v105 + 1LL;
        if ( v19 > HIDWORD(v105) )
        {
          v88.m128i_i64[0] = v43;
          sub_2237220(&ptr, v106, v19, 8);
          v18 = (unsigned int)v105;
          v43 = v88.m128i_i64[0];
        }
        *((_QWORD *)ptr + v18) = v43;
        v16 += 2;
        v20 = v105 + 1;
        LODWORD(v105) = v105 + 1;
        if ( v16 == (void ***)v17 )
        {
          v88.m128i_i64[0] = (__int64)&v107;
          goto LABEL_70;
        }
      }
    }
    v20 = v105;
    v88.m128i_i64[0] = (__int64)&v107;
LABEL_70:
    v70 = (__int64 *)(*(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 56) & 4) != 0 )
      v70 = (__int64 *)v70[4];
    v96 = v70;
    v71 = *v70;
    goto LABEL_73;
  }
  if ( *(_BYTE *)(a2 + 80) )
  {
    v24 = *(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL;
    v25 = *(_QWORD *)v24;
    if ( *(_BYTE *)(*(_QWORD *)v24 + 16LL) == 38 )
    {
LABEL_16:
      v98 = v13;
      v99 = v10 + 1;
      v26.m128i_i64[0] = sub_1743190((__int64)&v98);
      v27 = *a1;
      v88 = v26;
      a5 = (__m128)_mm_load_si128(&v88);
      v108 = 0x200000000LL;
      v100 = a5;
      v88.m128i_i64[0] = (__int64)&v107;
      v107 = v109;
      sub_1E4C9B0(v27, a5.m128_u64[0], a5.m128_u64[1], &v107);
      v28 = a1[4];
      v93 = 1;
      v29 = *(_DWORD *)(v98 + 20);
      v92 = v28;
      v91 = v107;
      v95 = v29;
      v30 = *a1;
      v90 = (unsigned int)v108;
      v94 = 0;
      v89 = (__int64 *)v30;
      sub_F6CE20((__int64 *)&v100);
      v31 = sub_F6CCB0((__int64 *)&v100, a5);
      if ( (unsigned __int8)sub_1E54D70(
                              (_DWORD)v89,
                              *v99,
                              v31,
                              (_DWORD)v91,
                              v90,
                              v92,
                              (__int64)&v93,
                              (__int64)&v94,
                              (__int64)&v95) )
        goto LABEL_61;
      v32 = v93;
      if ( v93 )
      {
        if ( v95 == 1 )
        {
LABEL_95:
          v70 = (__int64 *)(*(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(a2 + 56) & 4) != 0 )
            v70 = (__int64 *)v70[4];
          v96 = v70;
          v71 = *v70;
          if ( v107 != (void *)(v88.m128i_i64[0] + 16) )
          {
            free(v107);
            v70 = v96;
          }
          v20 = v105;
LABEL_73:
          v72 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(a2 + 40) & 7) != 0 )
            v72 = 0;
          v32 = 0;
          v12 = 1;
          v45 = sub_BBE760(
                  *(_QWORD **)(*a1 + 248),
                  a1[3],
                  *(_DWORD *)(a2 + 64),
                  *(_DWORD *)(a2 + 24),
                  (*(_DWORD *)(a2 + 68) & 0xFFFFFu) - *(_DWORD *)(a1[4] + 8),
                  *(_WORD *)(a2 + 70) >> 4,
                  v72,
                  v71,
                  (__int64)v70,
                  (__int64)ptr,
                  v20,
                  (__int64)v101,
                  (unsigned int)v102);
          goto LABEL_37;
        }
        v33 = 0;
        while ( 1 )
        {
          v36 = *a1;
          ++v33;
          v37 = v100;
          v38 = *(_DWORD *)(*a1 + 12632);
          *(_DWORD *)(*a1 + 12632) = v33;
          v97 = sub_1DD3670(
                  *a1,
                  v37.m128_i64[0],
                  (const __m128i *)v37.m128_u64[1],
                  a1[4],
                  *(_DWORD *)(a2 + 24),
                  *(_QWORD *)(a2 + 40),
                  *(double *)a5.m128_u64,
                  a6);
          if ( !v97 )
            break;
          v39 = sub_1CBC0D0(*a1, &v97, *(_DWORD *)(a2 + 24), a5);
          if ( (v39 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
            break;
          v40 = (unsigned int)v102;
          v41 = v97;
          v42 = (unsigned int)v102 + 1LL;
          if ( v42 > HIDWORD(v102) )
          {
            v90 = v39;
            v89 = v97;
            sub_2237220(&v101, v103, v42, 8);
            v39 = v90;
            v41 = v89;
            v40 = (unsigned int)v102;
          }
          *((_QWORD *)v101 + v40) = v41;
          LODWORD(v102) = v102 + 1;
          v34 = (unsigned int)v105 + 1LL;
          if ( v34 > HIDWORD(v105) )
          {
            v89 = (__int64 *)v39;
            sub_2237220(&ptr, v106, v34, 8);
            *((_QWORD *)ptr + (unsigned int)v105) = v89;
            LODWORD(v105) = v105 + 1;
            v87 = v95 - 1;
            *(_DWORD *)(v36 + 12632) = v38;
            if ( v33 == v87 )
              goto LABEL_95;
          }
          else
          {
            *((_QWORD *)ptr + (unsigned int)v105) = v39;
            LODWORD(v105) = v105 + 1;
            v35 = v95 - 1;
            *(_DWORD *)(v36 + 12632) = v38;
            if ( v35 == v33 )
              goto LABEL_95;
          }
        }
        *(_DWORD *)(v36 + 12632) = v38;
LABEL_61:
        if ( v107 != (void *)(v88.m128i_i64[0] + 16) )
          free(v107);
LABEL_63:
        v45 = 0;
        goto LABEL_55;
      }
      v76 = *a1;
      v77 = v100;
      v78 = *(_DWORD *)(*a1 + 12632);
      *(_DWORD *)(*a1 + 12632) = 0;
      v79 = *a1;
      v80 = a1[4];
      v81 = *(_QWORD *)(a2 + 40);
      v82 = *(_DWORD *)(a2 + 24);
      LODWORD(v89) = v78;
      v97 = sub_1DD3670(
              v79,
              v77.m128_i64[0],
              (const __m128i *)v77.m128_u64[1],
              v80,
              v82,
              v81,
              *(double *)a5.m128_u64,
              a6);
      if ( !v97
        || (sub_1CBC0D0(*a1, &v97, *(_DWORD *)(a2 + 24), a5),
            v83 = (__int64 *)sub_1E509C0(*a1, v97),
            v48 = v83,
            (v96 = v83) == nullptr) )
      {
        *(_DWORD *)(v76 + 12632) = (_DWORD)v89;
        goto LABEL_61;
      }
      v46 = *v83;
      *(_DWORD *)(v76 + 12632) = (_DWORD)v89;
      if ( v107 != v109 )
      {
        v89 = (__int64 *)v46;
        free(v107);
        v48 = v96;
        v46 = (__int64)v89;
      }
      v49 = *(_QWORD **)(*a1 + 248);
LABEL_34:
      v50 = 0;
      if ( (*(_QWORD *)(a2 + 40) & 7) == 0 )
        v50 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL;
      v45 = sub_BBE620(
              v49,
              a1[3],
              *(_DWORD *)(a2 + 64),
              *(_DWORD *)(a2 + 24),
              (*(_DWORD *)(a2 + 68) & 0xFFFFFu) - *(_DWORD *)(a1[4] + 8),
              *(_WORD *)(a2 + 70) >> 4,
              v50,
              v46,
              *(_BYTE *)(a2 + 80),
              (__int64)v48);
LABEL_37:
      v51 = (void *)*v96;
      v108 = (__int64)(v96 + 1);
      v107 = v51;
      v52 = sub_F6E530(v88.m128i_i64[0]);
      v55 = v52;
      if ( !v52 || !*(_QWORD *)(v52 + 32) )
        goto LABEL_65;
      if ( v12 )
      {
        if ( *v96 & 7 | (*v96 >> 3) & 1 || *(_BYTE *)(*(_QWORD *)(*v96 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 38 )
          BUG();
        v56 = *((_DWORD *)v96 + 2);
      }
      else
      {
        v73 = *(_QWORD *)(a2 + 48);
        v90 = v53;
        LODWORD(v89) = 0;
        v74 = sub_F57E80(*(_QWORD *)(v73 & 0xFFFFFFFFFFFFFFF0LL));
        v56 = (int)v89;
        v53 = v90;
        if ( v74 )
        {
          if ( *(_BYTE *)(v74 + 16) == 16 )
          {
            if ( *(_QWORD *)(v74 + 32) )
            {
              v75 = *(_QWORD *)(a2 + 16LL * *(unsigned int *)(a2 + 84) + 88);
              if ( v75 )
              {
                if ( (*(_WORD *)v75 & 0x1FF) == 0x6C )
                  v56 = *(_DWORD *)(v75 + 20);
              }
            }
          }
        }
      }
      if ( (unsigned __int8)sub_1CD20D0(*a1, v55, v53, v45, a2, v56, a5, a6) )
      {
        v57 = *(_BYTE *)(v45 + 29) & 0x9D;
        *(_BYTE *)(v45 + 29) &= 0x9Fu;
        *(_BYTE *)(v45 + 29) = *(_BYTE *)(a2 + 29) & 2 | v57;
      }
      else
      {
LABEL_65:
        v68 = *(_BYTE *)(v45 + 29) & 0x9D;
        *(_BYTE *)(v45 + 29) &= 0x9Fu;
        *(_BYTE *)(v45 + 29) = *(_BYTE *)(a2 + 29) & 2 | v68;
        if ( !v32 )
          goto LABEL_46;
      }
      sub_B88650(v45, 1);
LABEL_46:
      v58 = *(_QWORD *)(a2 + 72);
      v59 = *a1;
      if ( (v58 & 0xFFFFFFFFFFFFFFF8LL) == 0 || ((v58 >> 1) & 3) == 1 )
      {
LABEL_54:
        sub_1DC20B0(*(_QWORD *)(v59 + 11280), a2, v45, v54);
        goto LABEL_55;
      }
      sub_18C74E0(*a1, 4, 0, 4);
      v60 = *a1;
      v107 = (void *)((unsigned __int64)v107 & 0xFFFFFFFE00000000LL);
      v61 = a1[4];
      v108 = 0;
      v109[1] = 0;
      v100.m128_u64[0] = 0;
      if ( !(_BYTE)byte_2CCC440 )
      {
        v89 = (__int64 *)v61;
        v86 = __cxa_guard_acquire(&byte_2CCC440);
        v61 = (__int64)v89;
        if ( v86 )
        {
          qword_2CCC460 &= 0xFFFFFFFE00000000LL;
          qword_2CCC468 = 0;
          qword_2CCC478 = 0;
          __cxa_guard_release(&byte_2CCC440);
          v61 = (__int64)v89;
        }
      }
      v62 = (const __m128i *)(*(_QWORD *)(a2 + 72) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v62 )
      {
        v84 = (*(__int64 *)(a2 + 72) >> 1) & 3;
        if ( v84 == 1 )
        {
          v85 = v62[4].m128i_i64[1];
          v62 = nullptr;
          if ( !v85 )
            goto LABEL_51;
          v62 = (const __m128i *)(v85 & 0xFFFFFFFFFFFFFFF8LL);
          if ( ((v85 >> 1) & 3) != 2 || !v62 )
            goto LABEL_51;
        }
        else if ( v84 != 2 )
        {
          goto LABEL_51;
        }
        v62 = (const __m128i *)v62->m128i_i64[1];
      }
      else
      {
        v62 = (const __m128i *)&qword_2CCC460;
      }
LABEL_51:
      if ( !(unsigned __int8)sub_1DD6BB0(
                               v60,
                               v62,
                               v61,
                               (__m128i *)v88.m128i_i64[0],
                               0,
                               (__int64 *)&v100,
                               *(double *)a5.m128_u64,
                               a6) )
        sub_BC4850(v45, *(_QWORD **)(*a1 + 248), (const __m128i *)v88.m128i_i64[0], v63, v64, v65);
      sub_190D5E0(v59, a5);
      v59 = *a1;
      goto LABEL_54;
    }
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 38 )
    {
      if ( sub_F63050(v25, v9, a3, a4) )
        goto LABEL_16;
      v44 = *(_QWORD *)(a2 + 56);
      v9 = v44 & 0xFFFFFFFFFFFFFFF8LL;
      v11 = (v44 >> 2) & 1;
    }
  }
  if ( v11 )
    v9 = *(_QWORD *)(v9 + 32);
  v45 = (__int64)sub_1DD4AE0(*a1, (void **)v9, a1[4], *(_DWORD *)(a2 + 24), *(_QWORD *)(a2 + 40), 0, a5, a6);
  v96 = (__int64 *)v45;
  if ( v45 )
  {
    v46 = sub_1CBC0D0(*a1, &v96, *(_DWORD *)(a2 + 24), a5);
    if ( (v46 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v47 = *a1;
      v48 = v96;
      v32 = 0;
      v88.m128i_i64[0] = (__int64)&v107;
      v49 = *(_QWORD **)(v47 + 248);
    }
    else
    {
      v67 = *a1;
      v48 = v96;
      v32 = 1;
      v88.m128i_i64[0] = (__int64)&v107;
      v49 = *(_QWORD **)(v67 + 248);
      v46 = v49[2340];
    }
    goto LABEL_34;
  }
LABEL_55:
  if ( ptr != v106 )
    free(ptr);
  if ( v101 != v103 )
    free(v101);
  return v45;
}
