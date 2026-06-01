void __fastcall sub_165DB50(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // r12d
  unsigned __int8 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r10
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  __int64 (*v15)(void); // rax
  __int64 v16; // rax
  __int64 v17; // r14
  const __m128i *v18; // r13
  __int64 *m128i_i64; // rcx
  _BYTE *v20; // rsi
  size_t v21; // r9
  __int64 *v22; // rax
  unsigned __int64 v23; // rbx
  __int64 v24; // rbx
  unsigned __int64 v25; // rdi
  __int64 *v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 (__fastcall *v29)(__int64); // rax
  __int64 v30; // rax
  __int64 v31; // r14
  const __m128i *v32; // r11
  unsigned __int64 v33; // r13
  _BYTE *v34; // rsi
  _BYTE *v35; // rax
  size_t v36; // r8
  unsigned __int64 v37; // rbx
  __int64 v38; // rbx
  unsigned __int64 v39; // rdi
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rax
  __int32 v42; // ebx
  _BYTE *v43; // rdi
  char *v44; // rcx
  char *v45; // rsi
  __int64 v46; // r9
  __int64 v47; // rdx
  void **v48; // rbp
  unsigned __int64 v49; // rax
  void **v50; // r12
  void **v51; // rbx
  void **v52; // rdi
  void **v53; // rdi
  void **v54; // rbx
  void **v55; // r12
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // rax
  __int32 v58; // ebx
  _BYTE *v59; // rdi
  char *v60; // rcx
  __int64 v61; // rsi
  __int64 v62; // rax
  __int64 v63; // rsi
  __int64 v64; // r8
  char *v65; // rsi
  __int64 v66; // rdx
  void **v67; // r12
  void **v68; // rbx
  void **v69; // rdi
  void **v70; // rdi
  void **v71; // rbx
  void **v72; // r12
  void *v73; // rdi
  __int64 v74; // rsi
  __int64 v75; // rcx
  __int64 v76; // rax
  char v77; // al
  __int64 v78; // rsi
  __int64 v79; // rax
  __int64 v80; // rsi
  unsigned __int64 v81; // rdx
  int v82; // eax
  __m128i *v83; // r15
  __m128i *v84; // rcx
  const __m128i *v85; // r14
  __int64 v86; // rsi
  __int64 v87; // rcx
  __int64 v88; // rax
  unsigned __int64 v89; // rdx
  int v90; // eax
  unsigned __int64 v91; // r15
  unsigned __int64 v92; // rcx
  const __m128i *v93; // r14
  __int64 v94; // rax
  __int64 v95; // r13
  __int64 v96; // r14
  __int64 v97; // r13
  void *v98; // rdi
  __int64 v99; // rax
  __int64 v100; // r13
  __int64 v101; // r14
  __int64 v102; // r13
  void *v103; // rdi
  __int64 v104; // [rsp+0h] [rbp-F8h]
  const __m128i *v105; // [rsp+0h] [rbp-F8h]
  size_t v106; // [rsp+8h] [rbp-F0h]
  size_t v107; // [rsp+8h] [rbp-F0h]
  size_t v108; // [rsp+8h] [rbp-F0h]
  const __m128i *v109; // [rsp+8h] [rbp-F0h]
  __int64 *v110; // [rsp+10h] [rbp-E8h]
  __int64 *v111; // [rsp+10h] [rbp-E8h]
  __int64 *v112; // [rsp+10h] [rbp-E8h]
  const __m128i *v113; // [rsp+10h] [rbp-E8h]
  size_t v114; // [rsp+10h] [rbp-E8h]
  __int64 *v115; // [rsp+18h] [rbp-E0h]
  _BYTE *v116; // [rsp+18h] [rbp-E0h]
  char v117[8]; // [rsp+20h] [rbp-D8h] BYREF
  unsigned __int64 v118; // [rsp+28h] [rbp-D0h]
  __int64 v119; // [rsp+30h] [rbp-C8h]
  __int64 v120; // [rsp+38h] [rbp-C0h]
  void *v121; // [rsp+40h] [rbp-B8h]
  unsigned __int64 v122; // [rsp+48h] [rbp-B0h]
  int v123; // [rsp+50h] [rbp-A8h]
  char v124; // [rsp+58h] [rbp-A0h]
  __int64 v125; // [rsp+60h] [rbp-98h]
  unsigned __int64 v126; // [rsp+68h] [rbp-90h]
  _QWORD v127[4]; // [rsp+70h] [rbp-88h] BYREF
  unsigned __int64 v128; // [rsp+90h] [rbp-68h]
  unsigned __int64 v129; // [rsp+98h] [rbp-60h]
  int v130; // [rsp+A0h] [rbp-58h]
  char v131; // [rsp+A8h] [rbp-50h]
  __int64 v132; // [rsp+B0h] [rbp-48h]
  __int64 v133; // [rsp+B8h] [rbp-40h]

  v6 = *(_DWORD *)(a2 + 32);
  v7 = *(_BYTE *)(a2 + 36) & 3;
  v8 = sub_1E38470(a1, v6, *(_QWORD *)(a2 + 48), a3, 0);
  if ( !v8 )
    return;
  v9 = v8;
  v10 = sub_1E38470(a1, v6, *(_QWORD *)(a2 + 40), a3, 0);
  v11 = v10;
  if ( !v10 )
    return;
  if ( (*(_BYTE *)(a2 + 36) & 4) != 0 )
  {
    v12 = *(_QWORD *)(a2 + 56);
    if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v104 = v11;
      v12 = sub_1DD1D30(a1, *(_QWORD *)(a2 + 56), a3, v6, 0, 0);
      v11 = v104;
      if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return;
    }
    v119 = v9;
    v13 = a1[31];
    v120 = v12;
    v127[0] = v11 | v7;
    v14 = v127[0] & 0xFFFFFFFFFFFFFFF8LL;
    v118 = v127[0] & 0xFFFFFFFFFFFFFFF8LL;
    v123 = 0;
    v121 = nullptr;
    v117[0] = (v11 | v7) & 3 | v117[0] & 0xFC | 4;
    v122 = v13 + 2448;
    if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v77 = sub_B72F20(v14);
      v14 = v118;
      v125 = 0;
      v124 = v77 & 1 | v124 & 0xFC;
      if ( (v117[0] & 4) == 0 )
      {
LABEL_8:
        v126 = v14;
        v15 = *(__int64 (**)(void))(*(_QWORD *)v14 + 32LL);
        if ( (char *)v15 == (char *)sub_A01140 )
          v16 = sub_B70A60(v14);
        else
          v16 = v15();
        v17 = *(_QWORD *)(a2 + 8);
        v126 = v16;
        v123 = *(_DWORD *)(a2 + 24);
        if ( v17 )
        {
          v81 = v122;
          v82 = *(_DWORD *)(v122 + 14976);
          if ( v82 )
          {
            v94 = (unsigned int)(v82 - 1);
            *(_DWORD *)(v122 + 14976) = v94;
            v83 = *(__m128i **)(v81 + 8 * v94 + 14848);
            v95 = v83[33].m128i_u32[2];
            v83->m128i_i8[0] = 0;
            v96 = v83[33].m128i_i64[0];
            v83[26].m128i_i32[2] = 0;
            v97 = v96 + (v95 << 6);
            while ( v96 != v97 )
            {
              while ( 1 )
              {
                v97 -= 64;
                v98 = *(void **)(v97 + 24);
                if ( v98 == (void *)(v97 + 40) )
                  break;
                operator delete(v98);
                if ( v96 == v97 )
                  goto LABEL_159;
              }
            }
LABEL_159:
            v83[33].m128i_i32[2] = 0;
            v84 = v83 + 6;
          }
          else
          {
            v83 = (__m128i *)operator new(0x3A0u);
            v83->m128i_i8[0] = 0;
            v84 = v83 + 6;
            v83[6].m128i_i64[0] = (__int64)v83[7].m128i_i64;
            v83[8].m128i_i64[0] = (__int64)v83[9].m128i_i64;
            v83[10].m128i_i64[0] = (__int64)v83[11].m128i_i64;
            v83[12].m128i_i64[0] = (__int64)v83[13].m128i_i64;
            v83[14].m128i_i64[0] = (__int64)v83[15].m128i_i64;
            v83[16].m128i_i64[0] = (__int64)v83[17].m128i_i64;
            v83[18].m128i_i64[0] = (__int64)v83[19].m128i_i64;
            v83[20].m128i_i64[0] = (__int64)v83[21].m128i_i64;
            v83[22].m128i_i64[0] = (__int64)v83[23].m128i_i64;
            v83[24].m128i_i64[0] = (__int64)v83[25].m128i_i64;
            v83[26].m128i_i64[0] = (__int64)v83[27].m128i_i64;
            v83[6].m128i_i64[1] = 0;
            v83[7].m128i_i8[0] = 0;
            v83[8].m128i_i64[1] = 0;
            v83[9].m128i_i8[0] = 0;
            v83[10].m128i_i64[1] = 0;
            v83[11].m128i_i8[0] = 0;
            v83[12].m128i_i64[1] = 0;
            v83[13].m128i_i8[0] = 0;
            v83[14].m128i_i64[1] = 0;
            v83[15].m128i_i8[0] = 0;
            v83[16].m128i_i64[1] = 0;
            v83[17].m128i_i8[0] = 0;
            v83[18].m128i_i64[1] = 0;
            v83[19].m128i_i8[0] = 0;
            v83[20].m128i_i64[1] = 0;
            v83[21].m128i_i8[0] = 0;
            v83[22].m128i_i64[1] = 0;
            v83[23].m128i_i8[0] = 0;
            v83[24].m128i_i64[1] = 0;
            v83[25].m128i_i8[0] = 0;
            v83[26].m128i_i64[1] = 0x800000000LL;
            v83[33].m128i_i64[0] = (__int64)v83[34].m128i_i64;
            v83[33].m128i_i64[1] = 0x600000000LL;
          }
          v121 = v83;
          v85 = *(const __m128i **)(a2 + 8);
          v83->m128i_i8[0] = v85->m128i_i8[0];
          v83->m128i_i8[1] = v85->m128i_i8[1];
          v83->m128i_i8[2] = v85->m128i_i8[2];
          v83->m128i_i8[3] = v85->m128i_i8[3];
          v83->m128i_i8[4] = v85->m128i_i8[4];
          v83->m128i_i8[5] = v85->m128i_i8[5];
          v83->m128i_i8[6] = v85->m128i_i8[6];
          v83->m128i_i8[7] = v85->m128i_i8[7];
          v83->m128i_i8[8] = v85->m128i_i8[8];
          v83->m128i_i8[9] = v85->m128i_i8[9];
          v83->m128i_i8[10] = v85->m128i_i8[10];
          if ( &v83[1] < &v85[2] && &v85[1] < &v83[2] )
          {
            v83[1].m128i_i64[0] = v85[1].m128i_i64[0];
            v83[1].m128i_i64[1] = v85[1].m128i_i64[1];
            v83[2].m128i_i64[0] = v85[2].m128i_i64[0];
            v83[2].m128i_i64[1] = v85[2].m128i_i64[1];
            v83[3].m128i_i64[0] = v85[3].m128i_i64[0];
            v83[3].m128i_i64[1] = v85[3].m128i_i64[1];
            v83[4].m128i_i64[0] = v85[4].m128i_i64[0];
            v83[4].m128i_i64[1] = v85[4].m128i_i64[1];
            v83[5].m128i_i64[0] = v85[5].m128i_i64[0];
            v83[5].m128i_i64[1] = v85[5].m128i_i64[1];
          }
          else
          {
            v83[1] = _mm_loadu_si128(v85 + 1);
            v83[2] = _mm_loadu_si128(v85 + 2);
            v83[3] = _mm_loadu_si128(v85 + 3);
            v83[4] = _mm_loadu_si128(v85 + 4);
            v83[5] = _mm_loadu_si128(v85 + 5);
          }
          v18 = v85 + 6;
          m128i_i64 = v84[1].m128i_i64;
          do
          {
            if ( v18 != (const __m128i *)(m128i_i64 - 2) )
            {
              v22 = (__int64 *)*(m128i_i64 - 2);
              v21 = v18->m128i_u64[1];
              if ( v22 == m128i_i64 )
                v23 = 15;
              else
                v23 = *m128i_i64;
              if ( v21 > v23 )
              {
                if ( (v21 & 0x8000000000000000LL) != 0LL )
                  goto LABEL_165;
                v24 = 2 * v23;
                if ( v21 < v24 )
                {
                  v25 = v24 + 1;
                  if ( v24 < 0 )
                  {
                    v25 = 0x8000000000000000LL;
                    v24 = 0x7FFFFFFFFFFFFFFFLL;
                  }
                }
                else
                {
                  v25 = v21 + 1;
                  v24 = v18->m128i_i64[1];
                }
                v111 = m128i_i64;
                v107 = v18->m128i_u64[1];
                v22 = (__int64 *)operator new(v25);
                m128i_i64 = v111;
                v21 = v107;
                v26 = (__int64 *)*(v111 - 2);
                if ( v26 != v111 )
                {
                  v115 = v111;
                  v112 = v22;
                  operator delete(v26);
                  m128i_i64 = v115;
                  v22 = v112;
                  v21 = v107;
                }
                *(m128i_i64 - 2) = (__int64)v22;
                *m128i_i64 = v24;
              }
              if ( v21 )
              {
                v20 = (_BYTE *)v18->m128i_i64[0];
                if ( v21 == 1 )
                {
                  *(_BYTE *)v22 = *v20;
                  v22 = (__int64 *)*(m128i_i64 - 2);
                }
                else
                {
                  v110 = m128i_i64;
                  v106 = v21;
                  memcpy(v22, v20, v21);
                  m128i_i64 = v110;
                  v21 = v106;
                  v22 = (__int64 *)*(v110 - 2);
                }
              }
              *(m128i_i64 - 1) = v21;
              *((_BYTE *)v22 + v21) = 0;
            }
            v18 += 2;
            m128i_i64 += 4;
          }
          while ( v18 != &v85[26] );
          if ( &v83[26] != v18 )
          {
            v40 = v85[26].m128i_u32[2];
            v41 = v83[26].m128i_u32[2];
            v42 = v85[26].m128i_i32[2];
            if ( v40 <= v41 )
            {
              if ( v85[26].m128i_i32[2] )
              {
                v74 = v83[26].m128i_i64[0];
                v75 = v85[26].m128i_i64[0];
                v76 = 0;
                do
                {
                  *(_QWORD *)(v74 + v76) = *(_QWORD *)(v75 + v76);
                  *(_BYTE *)(v74 + v76 + 8) = *(_BYTE *)(v75 + v76 + 8);
                  v76 += 12;
                }
                while ( 12 * v40 != v76 );
              }
            }
            else
            {
              if ( v40 > v83[26].m128i_u32[3] )
              {
                v83[26].m128i_i32[2] = 0;
                sub_2237220(&v83[26], &v83[27], v40, 12);
                v44 = (char *)v85[26].m128i_i64[0];
                v43 = (_BYTE *)v83[26].m128i_i64[0];
                v46 = 0;
                v40 = v85[26].m128i_u32[2];
                v45 = v44;
              }
              else
              {
                v43 = (_BYTE *)v83[26].m128i_i64[0];
                v44 = (char *)v85[26].m128i_i64[0];
                if ( v83[26].m128i_i32[2] )
                {
                  v78 = 3 * v41;
                  v79 = 0;
                  v80 = 4 * v78;
                  v46 = v80;
                  do
                  {
                    *(_QWORD *)&v43[v79] = *(_QWORD *)&v44[v79];
                    v43[v79 + 8] = v44[v79 + 8];
                    v79 += 12;
                  }
                  while ( v80 != v79 );
                  v43 += v80;
                  v40 = v85[26].m128i_u32[2];
                  v45 = &v44[v80];
                }
                else
                {
                  v45 = (char *)v85[26].m128i_i64[0];
                  v46 = 0;
                }
              }
              v47 = 12 * v40;
              if ( v45 != &v44[v47] )
                memcpy(v43, v45, v47 - v46);
            }
            v83[26].m128i_i32[2] = v42;
          }
          sub_9EED30((__int64)v83[33].m128i_i64, v85[33].m128i_i64);
        }
        sub_165D180(a1, v6, (__int64)v117);
        v48 = (void **)v121;
        if ( v121 )
        {
          v49 = v122;
          if ( v122 )
          {
            if ( (unsigned __int64)v121 >= v122 && (unsigned __int64)v121 <= v122 + 14848 )
            {
LABEL_32:
              v27 = *(unsigned int *)(v49 + 14976);
              *(_DWORD *)(v49 + 14976) = v27 + 1;
              *(_QWORD *)(v49 + 8 * v27 + 14848) = v48;
              return;
            }
            v50 = *((void ***)v121 + 66);
            v51 = &v50[8 * (unsigned __int64)*((unsigned int *)v121 + 134)];
            if ( v50 != v51 )
            {
              do
              {
                while ( 1 )
                {
                  v51 -= 8;
                  v52 = (void **)v51[3];
                  if ( v52 == v51 + 5 )
                    break;
                  operator delete(v52);
                  if ( v50 == v51 )
                    goto LABEL_76;
                }
              }
              while ( v50 != v51 );
LABEL_76:
              v51 = (void **)v48[66];
            }
            if ( v51 != v48 + 68 )
              free(v51);
            v53 = (void **)v48[52];
            if ( v53 != v48 + 54 )
              free(v53);
            v54 = v48 + 48;
            v55 = v48 + 8;
            do
            {
              while ( *v54 != v54 + 2 )
              {
                operator delete(*v54);
                v54 -= 4;
                if ( v54 == v55 )
                  goto LABEL_84;
              }
              v54 -= 4;
            }
            while ( v54 != v55 );
LABEL_84:
            operator delete(v48, 0x3A0u);
            return;
          }
        }
        return;
      }
    }
    else
    {
      v124 &= 0xFCu;
      v125 = 0;
    }
    v14 = sub_1654A20(v14);
    goto LABEL_8;
  }
  v127[1] = v10;
  v28 = a1[31];
  v127[2] = v9;
  v127[3] = 0;
  v131 &= 0xFCu;
  LOBYTE(v127[0]) = v127[0] & 0xF8 | v7;
  v132 = 0;
  v133 = v11;
  v128 = 0;
  v129 = v28 + 2448;
  v130 = 0;
  v29 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 32LL);
  if ( v29 == sub_A01140 )
    v30 = sub_B70A60(v11);
  else
    v30 = v29(v11);
  v133 = v30;
  v31 = *(_QWORD *)(a2 + 8);
  v130 = *(_DWORD *)(a2 + 24);
  if ( v31 )
  {
    v89 = v129;
    v90 = *(_DWORD *)(v129 + 14976);
    if ( v90 )
    {
      v99 = (unsigned int)(v90 - 1);
      *(_DWORD *)(v129 + 14976) = v99;
      v91 = *(_QWORD *)(v89 + 8 * v99 + 14848);
      v100 = *(unsigned int *)(v91 + 536);
      *(_BYTE *)v91 = 0;
      v101 = *(_QWORD *)(v91 + 528);
      *(_DWORD *)(v91 + 424) = 0;
      v102 = v101 + (v100 << 6);
      while ( v101 != v102 )
      {
        while ( 1 )
        {
          v102 -= 64;
          v103 = *(void **)(v102 + 24);
          if ( v103 == (void *)(v102 + 40) )
            break;
          operator delete(v103);
          if ( v101 == v102 )
            goto LABEL_164;
        }
      }
LABEL_164:
      *(_DWORD *)(v91 + 536) = 0;
      v92 = v91 + 96;
    }
    else
    {
      v91 = operator new(0x3A0u);
      *(_BYTE *)v91 = 0;
      v92 = v91 + 96;
      *(_QWORD *)(v91 + 96) = v91 + 112;
      *(_QWORD *)(v91 + 128) = v91 + 144;
      *(_QWORD *)(v91 + 160) = v91 + 176;
      *(_QWORD *)(v91 + 192) = v91 + 208;
      *(_QWORD *)(v91 + 224) = v91 + 240;
      *(_QWORD *)(v91 + 256) = v91 + 272;
      *(_QWORD *)(v91 + 288) = v91 + 304;
      *(_QWORD *)(v91 + 320) = v91 + 336;
      *(_QWORD *)(v91 + 352) = v91 + 368;
      *(_QWORD *)(v91 + 384) = v91 + 400;
      *(_QWORD *)(v91 + 416) = v91 + 432;
      *(_QWORD *)(v91 + 104) = 0;
      *(_BYTE *)(v91 + 112) = 0;
      *(_QWORD *)(v91 + 136) = 0;
      *(_BYTE *)(v91 + 144) = 0;
      *(_QWORD *)(v91 + 168) = 0;
      *(_BYTE *)(v91 + 176) = 0;
      *(_QWORD *)(v91 + 200) = 0;
      *(_BYTE *)(v91 + 208) = 0;
      *(_QWORD *)(v91 + 232) = 0;
      *(_BYTE *)(v91 + 240) = 0;
      *(_QWORD *)(v91 + 264) = 0;
      *(_BYTE *)(v91 + 272) = 0;
      *(_QWORD *)(v91 + 296) = 0;
      *(_BYTE *)(v91 + 304) = 0;
      *(_QWORD *)(v91 + 328) = 0;
      *(_BYTE *)(v91 + 336) = 0;
      *(_QWORD *)(v91 + 360) = 0;
      *(_BYTE *)(v91 + 368) = 0;
      *(_QWORD *)(v91 + 392) = 0;
      *(_BYTE *)(v91 + 400) = 0;
      *(_QWORD *)(v91 + 424) = 0x800000000LL;
      *(_QWORD *)(v91 + 528) = v91 + 544;
      *(_QWORD *)(v91 + 536) = 0x600000000LL;
    }
    v128 = v91;
    v93 = *(const __m128i **)(a2 + 8);
    *(_BYTE *)v91 = v93->m128i_i8[0];
    *(_BYTE *)(v91 + 1) = v93->m128i_i8[1];
    *(_BYTE *)(v91 + 2) = v93->m128i_i8[2];
    *(_BYTE *)(v91 + 3) = v93->m128i_i8[3];
    *(_BYTE *)(v91 + 4) = v93->m128i_i8[4];
    *(_BYTE *)(v91 + 5) = v93->m128i_i8[5];
    *(_BYTE *)(v91 + 6) = v93->m128i_i8[6];
    *(_BYTE *)(v91 + 7) = v93->m128i_i8[7];
    *(_BYTE *)(v91 + 8) = v93->m128i_i8[8];
    *(_BYTE *)(v91 + 9) = v93->m128i_i8[9];
    *(_BYTE *)(v91 + 10) = v93->m128i_i8[10];
    if ( v91 + 16 < (unsigned __int64)&v93[2] && (unsigned __int64)&v93[1] < v91 + 32 )
    {
      *(_QWORD *)(v91 + 16) = v93[1].m128i_i64[0];
      *(_QWORD *)(v91 + 24) = v93[1].m128i_i64[1];
      *(_QWORD *)(v91 + 32) = v93[2].m128i_i64[0];
      *(_QWORD *)(v91 + 40) = v93[2].m128i_i64[1];
      *(_QWORD *)(v91 + 48) = v93[3].m128i_i64[0];
      *(_QWORD *)(v91 + 56) = v93[3].m128i_i64[1];
      *(_QWORD *)(v91 + 64) = v93[4].m128i_i64[0];
      *(_QWORD *)(v91 + 72) = v93[4].m128i_i64[1];
      *(_QWORD *)(v91 + 80) = v93[5].m128i_i64[0];
      *(_QWORD *)(v91 + 88) = v93[5].m128i_i64[1];
    }
    else
    {
      *(__m128i *)(v91 + 16) = _mm_loadu_si128(v93 + 1);
      *(__m128i *)(v91 + 32) = _mm_loadu_si128(v93 + 2);
      *(__m128i *)(v91 + 48) = _mm_loadu_si128(v93 + 3);
      *(__m128i *)(v91 + 64) = _mm_loadu_si128(v93 + 4);
      *(__m128i *)(v91 + 80) = _mm_loadu_si128(v93 + 5);
    }
    v32 = v93 + 6;
    v33 = v92;
    v105 = v93 + 26;
    do
    {
      if ( (const __m128i *)v33 != v32 )
      {
        v35 = *(_BYTE **)v33;
        v36 = v32->m128i_u64[1];
        if ( *(_QWORD *)v33 == v33 + 16 )
          v37 = 15;
        else
          v37 = *(_QWORD *)(v33 + 16);
        if ( v36 > v37 )
        {
          if ( (v36 & 0x8000000000000000LL) != 0LL )
LABEL_165:
            std::__throw_length_error("basic_string::_M_create");
          v38 = 2 * v37;
          if ( v36 < v38 )
          {
            v39 = v38 + 1;
            if ( v38 < 0 )
            {
              v39 = 0x8000000000000000LL;
              v38 = 0x7FFFFFFFFFFFFFFFLL;
            }
          }
          else
          {
            v39 = v36 + 1;
            v38 = v32->m128i_i64[1];
          }
          v114 = v32->m128i_u64[1];
          v109 = v32;
          v35 = (_BYTE *)operator new(v39);
          v32 = v109;
          v36 = v114;
          if ( *(_QWORD *)v33 != v33 + 16 )
          {
            v116 = v35;
            operator delete(*(void **)v33);
            v35 = v116;
            v36 = v114;
            v32 = v109;
          }
          *(_QWORD *)v33 = v35;
          *(_QWORD *)(v33 + 16) = v38;
        }
        if ( v36 )
        {
          v34 = (_BYTE *)v32->m128i_i64[0];
          if ( v36 == 1 )
          {
            *v35 = *v34;
            v35 = *(_BYTE **)v33;
          }
          else
          {
            v113 = v32;
            v108 = v36;
            memcpy(v35, v34, v36);
            v35 = *(_BYTE **)v33;
            v32 = v113;
            v36 = v108;
          }
        }
        *(_QWORD *)(v33 + 8) = v36;
        v35[v36] = 0;
      }
      v32 += 2;
      v33 += 32LL;
    }
    while ( v105 != v32 );
    if ( (const __m128i *)(v91 + 416) != v105 )
    {
      v56 = v93[26].m128i_u32[2];
      v57 = *(unsigned int *)(v91 + 424);
      v58 = v93[26].m128i_i32[2];
      if ( v56 <= v57 )
      {
        if ( v93[26].m128i_i32[2] )
        {
          v86 = *(_QWORD *)(v91 + 416);
          v87 = v93[26].m128i_i64[0];
          v88 = 0;
          do
          {
            *(_QWORD *)(v86 + v88) = *(_QWORD *)(v87 + v88);
            *(_BYTE *)(v86 + v88 + 8) = *(_BYTE *)(v87 + v88 + 8);
            v88 += 12;
          }
          while ( 12 * v56 != v88 );
        }
      }
      else
      {
        if ( v56 > *(unsigned int *)(v91 + 428) )
        {
          *(_DWORD *)(v91 + 424) = 0;
          sub_2237220(v91 + 416, v91 + 432, v56, 12);
          v60 = (char *)v93[26].m128i_i64[0];
          v59 = *(_BYTE **)(v91 + 416);
          v64 = 0;
          v56 = v93[26].m128i_u32[2];
          v65 = v60;
        }
        else
        {
          v59 = *(_BYTE **)(v91 + 416);
          v60 = (char *)v93[26].m128i_i64[0];
          if ( *(_DWORD *)(v91 + 424) )
          {
            v61 = 3 * v57;
            v62 = 0;
            v63 = 4 * v61;
            v64 = v63;
            do
            {
              *(_QWORD *)&v59[v62] = *(_QWORD *)&v60[v62];
              v59[v62 + 8] = v60[v62 + 8];
              v62 += 12;
            }
            while ( v63 != v62 );
            v56 = v93[26].m128i_u32[2];
            v59 += v63;
            v65 = &v60[v63];
          }
          else
          {
            v65 = (char *)v93[26].m128i_i64[0];
            v64 = 0;
          }
        }
        v66 = 12 * v56;
        if ( v65 != &v60[v66] )
          memcpy(v59, v65, v66 - v64);
      }
      *(_DWORD *)(v91 + 424) = v58;
    }
    sub_9EED30(v91 + 528, v93[33].m128i_i64);
  }
  sub_165D180(a1, v6, (__int64)v127);
  v48 = (void **)v128;
  if ( v128 )
  {
    v49 = v129;
    if ( v129 )
    {
      if ( v128 >= v129 && v128 <= v129 + 14848 )
        goto LABEL_32;
      v67 = *(void ***)(v128 + 528);
      v68 = &v67[8 * (unsigned __int64)*(unsigned int *)(v128 + 536)];
      if ( v67 != v68 )
      {
        do
        {
          while ( 1 )
          {
            v68 -= 8;
            v69 = (void **)v68[3];
            if ( v69 == v68 + 5 )
              break;
            operator delete(v69);
            if ( v67 == v68 )
              goto LABEL_108;
          }
        }
        while ( v67 != v68 );
LABEL_108:
        v68 = (void **)v48[66];
      }
      if ( v68 != v48 + 68 )
        free(v68);
      v70 = (void **)v48[52];
      if ( v70 != v48 + 54 )
        free(v70);
      v71 = v48 + 48;
      v72 = v48 + 8;
      while ( 1 )
      {
        v73 = *v71;
        if ( *v71 != v71 + 2 )
          break;
LABEL_117:
        v71 -= 4;
        if ( v71 == v72 )
          goto LABEL_84;
      }
      while ( 1 )
      {
        operator delete(v73);
        v71 -= 4;
        if ( v71 == v72 )
          goto LABEL_84;
        v73 = *v71;
        if ( *v71 == v71 + 2 )
          goto LABEL_117;
      }
    }
  }
}
