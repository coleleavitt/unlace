__int64 __fastcall sub_1E0F650(__int64 *a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // r14
  _QWORD *v5; // r12
  __int64 *v6; // rbx
  __int16 v7; // ax
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // r13
  __m128 *v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // rbp
  unsigned int v15; // edi
  __int64 *v16; // rsi
  __int64 v17; // r9
  __int64 v18; // r15
  _QWORD *v19; // rdx
  unsigned __int64 v20; // rcx
  char *v21; // rdi
  unsigned int v22; // r9d
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned __int64 v28; // r12
  unsigned __int8 v29; // al
  unsigned __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rdi
  __int32 v33; // ebp
  __int64 v34; // rax
  __int64 v35; // r15
  unsigned __int64 v36; // rax
  char v37; // r9
  unsigned __int64 v38; // rax
  char v39; // dl
  unsigned int v40; // eax
  __int64 v41; // rax
  bool v42; // r9
  __int64 v43; // rcx
  __int64 v44; // rsi
  __int64 v45; // rcx
  __int64 v46; // r15
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rax
  char v51; // dl
  __int64 v52; // rdx
  unsigned __int64 *v53; // r9
  __int64 v54; // r11
  unsigned __int64 *v55; // rbx
  __int64 v56; // rbp
  __int64 v57; // r15
  unsigned __int64 v58; // rcx
  __m128 *v59; // r12
  unsigned __int64 v60; // r14
  __int64 v61; // rax
  unsigned __int64 v62; // rcx
  __int64 v63; // r13
  int v64; // eax
  unsigned __int64 v65; // rsi
  unsigned __int64 v66; // rax
  __int64 v67; // rcx
  int v68; // esi
  int v69; // eax
  __int64 v70; // r9
  __int64 *v71; // rsi
  __int8 v72; // r9
  bool v73; // bl
  _BOOL8 v74; // rsi
  __int64 v75; // rbx
  __int64 v76; // rsi
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rbp
  __int64 v83; // rax
  _QWORD *v84; // rax
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rbp
  __int64 v91; // rax
  _QWORD *v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rax
  __int64 v98; // rdx
  __m128i v99; // [rsp+0h] [rbp-168h] BYREF
  __int64 v100; // [rsp+18h] [rbp-150h]
  __int64 v101; // [rsp+20h] [rbp-148h]
  _QWORD *v102; // [rsp+28h] [rbp-140h]
  _QWORD *v103; // [rsp+30h] [rbp-138h]
  __int64 *v104; // [rsp+38h] [rbp-130h]
  __m128 *v105; // [rsp+40h] [rbp-128h]
  __int64 v106; // [rsp+48h] [rbp-120h]
  char v107; // [rsp+53h] [rbp-115h]
  int v108; // [rsp+54h] [rbp-114h]
  unsigned __int64 v109; // [rsp+58h] [rbp-110h]
  bool v110; // [rsp+67h] [rbp-101h] BYREF
  __int64 v111; // [rsp+68h] [rbp-100h] BYREF
  __int64 v112; // [rsp+70h] [rbp-F8h] BYREF
  unsigned __int64 v113; // [rsp+78h] [rbp-F0h] BYREF
  __m128i v114; // [rsp+80h] [rbp-E8h] BYREF
  __m128 v115; // [rsp+90h] [rbp-D8h] BYREF
  _QWORD v116[2]; // [rsp+A0h] [rbp-C8h] BYREF
  _QWORD *v117; // [rsp+B0h] [rbp-B8h]
  unsigned __int8 *v118[11]; // [rsp+C0h] [rbp-A8h] BYREF
  char v119; // [rsp+118h] [rbp-50h]
  unsigned int v120; // [rsp+120h] [rbp-48h]
  char v121; // [rsp+124h] [rbp-44h]

  v4 = a4;
  v5 = (_QWORD *)(a2 + 80);
  v6 = a1;
  v7 = *(_WORD *)a2;
  v108 = a3;
  v99.m128i_i16[0] = v7;
  v8 = (v7 & 0x1FF) == 24;
  v9 = *(unsigned int *)(a2 + 4);
  v106 = a2;
  if ( v8 )
    v5 = (_QWORD *)(a2 + 64);
  v102 = &v5[v9];
  if ( v102 != v5 )
  {
    v107 = 1;
    v99.m128i_i64[0] = (__int64)(a1 + 1);
    v100 = a4 + 24;
    v101 = a4 + 8;
    v105 = &v115;
    v10 = a4;
    v11 = (__m128 *)v116;
    while ( 1 )
    {
      v12 = *((unsigned int *)v6 + 6);
      v13 = v6[1];
      v14 = *v5 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (_DWORD)v12 )
      {
        v15 = (v12 - 1) & (((unsigned int)v14 >> 9) ^ ((unsigned int)v14 >> 4));
        v16 = (__int64 *)(v13 + 16LL * v15);
        v17 = *v16;
        if ( v14 == *v16 )
          goto LABEL_7;
        v68 = 1;
        if ( v17 != -4096 )
          break;
      }
LABEL_66:
      sub_AEAAD0(v11, (_QWORD *)(v13 + 16 * v12), (_QWORD *)(v13 + 16 * v12), v99.m128i_i64[0], 1);
      v18 = v116[0];
LABEL_8:
      v19 = (_QWORD *)(v6[1] + 16LL * *((unsigned int *)v6 + 6));
      sub_AEAAD0(v11, v19, v19, v99.m128i_i64[0], 1);
      v20 = v14;
      if ( v116[0] != v18 )
        v20 = *(_QWORD *)(v18 + 8);
      if ( v20 )
      {
        v115.m128_u64[0] = v20;
        v51 = *(_BYTE *)(v20 + 28) & 0x7F;
        if ( v51 != 55 )
        {
          v53 = (unsigned __int64 *)v105;
          v107 = 0;
          v54 = (__int64)&v105->m128_i64[1];
          goto LABEL_51;
        }
        v52 = *(unsigned int *)(v20 + 56);
        v53 = (unsigned __int64 *)(v20 + 64);
        v54 = v20 + 64 + 8 * v52;
        v107 &= v52 == 0;
        if ( v20 + 64 != v54 )
        {
          v51 = *(_BYTE *)(*(_QWORD *)(v20 + 64) + 28LL) & 0x7F;
LABEL_51:
          v104 = v6;
          v55 = v53;
          v56 = v54;
          v57 = v10;
          v103 = v5;
          v58 = *v53;
          v59 = v11;
          if ( v51 == 81 )
          {
LABEL_52:
            v60 = *(_QWORD *)(v58 + 48) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v60 )
            {
              v61 = *(unsigned int *)(v57 + 16);
              do
              {
                v62 = *(unsigned int *)(v57 + 20);
                v59->m128_u64[0] = v60 | (*(_BYTE *)(v60 + 29) >> 5) & 3;
                v63 = v116[0];
                if ( v61 + 1 > v62 )
                {
                  sub_2237220(v101, v100, v61 + 1, 8);
                  v61 = *(unsigned int *)(v57 + 16);
                }
                *(_QWORD *)(*(_QWORD *)(v57 + 8) + 8 * v61) = v63;
                v64 = *(_DWORD *)(v57 + 16);
                *(_DWORD *)v57 = 2;
                v61 = (unsigned int)(v64 + 1);
                *(_DWORD *)(v57 + 16) = v61;
                v60 = *(_QWORD *)(v60 + 72);
              }
              while ( v60 && (*(_BYTE *)(v60 + 28) & 0x7Fu) - 53 <= 1 );
            }
            goto LABEL_58;
          }
          while ( 1 )
          {
            v65 = *(unsigned int *)(v57 + 20);
            v66 = v58 | (*(_BYTE *)(v58 + 29) >> 5) & 3;
            v67 = *(unsigned int *)(v57 + 16);
            v116[0] = v66;
            if ( v67 + 1 > v65 )
            {
              v109 = v66;
              sub_2237220(v101, v100, v67 + 1, 8);
              v67 = *(unsigned int *)(v57 + 16);
              v66 = v109;
            }
            *(_QWORD *)(*(_QWORD *)(v57 + 8) + 8 * v67) = v66;
            *(_DWORD *)v57 = 2;
            ++*(_DWORD *)(v57 + 16);
LABEL_58:
            if ( ++v55 == (unsigned __int64 *)v56 )
              break;
            v58 = *v55;
            if ( (*(_BYTE *)(*v55 + 28) & 0x7F) == 0x51 )
              goto LABEL_52;
          }
          v11 = v59;
          v6 = v104;
          v5 = v103;
          v10 = v57;
        }
      }
      else if ( (*(_BYTE *)(v14 + 28) & 0x7Fu) - 53 > 1 )
      {
        v21 = *(char **)(v10 + 88);
        *(_DWORD *)v10 = 0;
        *(_DWORD *)(v10 + 16) = 0;
        if ( v21 )
          sub_1A39780(v21);
        *(_BYTE *)(v10 + 166) = 0;
        v22 = 1;
        *(_OWORD *)(v10 + 88) = 0;
        return v22;
      }
      if ( v102 == ++v5 )
      {
        v4 = v10;
        goto LABEL_19;
      }
    }
    while ( 1 )
    {
      v69 = v68 + 1;
      v15 = (v12 - 1) & (v68 + v15);
      v16 = (__int64 *)(v13 + 16LL * v15);
      v70 = *v16;
      if ( v14 == *v16 )
        break;
      v68 = v69;
      if ( v70 == -4096 )
        goto LABEL_66;
    }
LABEL_7:
    sub_AEAAD0(v11, v16, (_QWORD *)(16 * v12 + v13), v99.m128i_i64[0], 1);
    v18 = v116[0];
    goto LABEL_8;
  }
  v107 = 1;
LABEL_19:
  LOBYTE(v100) = (v108 ^ 1) & v107;
  if ( (_BYTE)v100 )
  {
    v71 = (__int64 *)(*v6 + 8);
    sub_168B9F0((__int64)v116, v71, *(_DWORD *)(v106 + 24), 0x1527u, 0);
    v72 = v100;
    v99.m128i_i16[0] = *(_WORD *)v106;
    v73 = (v99.m128i_i16[0] & 0x1FF) == 23;
    if ( v119 )
    {
      v74 = v73;
      v99.m128i_i8[0] = v100;
      sub_AE9DF0(v118, v73, 2u);
      v72 = v100;
    }
    else
    {
      if ( !v121 )
      {
LABEL_71:
        v99.m128i_i8[0] = v72;
        sub_15F7200(v116);
        return v99.m128i_u8[0];
      }
      v99.m128i_i8[0] = v100;
      v77 = sub_168B9E0(v116);
      v81 = (unsigned __int8)v100;
      v82 = v77;
      v83 = (__int64)v117;
      if ( v117 )
      {
        v83 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *, _QWORD, __int64, __int64, _QWORD))(*v117 + 32LL))(
                v117,
                v71,
                *v117,
                v79,
                v80,
                (unsigned __int8)v100);
        v81 = v99.m128i_u8[0];
      }
      v99.m128i_i8[0] = v81;
      v115.m128_u64[0] = v83;
      v84 = sub_1587BC0(v82, (__int64 *)&v115, v78, v79, v80, v81);
      v74 = v73;
      sub_AE9DF0((unsigned __int8 **)(*v84 + 32LL * v120 + 8), v73, 2u);
      v72 = v99.m128i_i8[0];
    }
    v75 = *(_QWORD *)(v106 + 16);
    if ( v119 )
    {
      v76 = *(_QWORD *)(v106 + 16);
      v99.m128i_i8[0] = v72;
      sub_AE9DF0(v118, v76, 9u);
      v72 = v99.m128i_i8[0];
    }
    else if ( v121 )
    {
      v99.m128i_i8[0] = v72;
      v85 = sub_168B9E0(v116);
      v89 = v99.m128i_u8[0];
      v90 = v85;
      v91 = (__int64)v117;
      if ( v117 )
      {
        v91 = (*(__int64 (__fastcall **)(_QWORD *, _BOOL8, _QWORD, __int64, __int64, _QWORD))(*v117 + 32LL))(
                v117,
                v74,
                *v117,
                v87,
                v88,
                v99.m128i_u8[0]);
        v89 = v99.m128i_u8[0];
      }
      v99.m128i_i8[0] = v89;
      v115.m128_u64[0] = v91;
      v92 = sub_1587BC0(v90, (__int64 *)&v115, v86, v87, v88, v89);
      sub_AE9DF0((unsigned __int8 **)(*v92 + 32LL * v120 + 8), v75, 9u);
      v72 = v99.m128i_i8[0];
    }
    goto LABEL_71;
  }
  sub_1A43500(v4);
  v22 = 0;
  v8 = (*(_QWORD *)v106 & 0x80000) == 0;
  v99.m128i_i64[0] = *(_QWORD *)v106;
  if ( !v8 )
  {
    v24 = 8LL * *(unsigned int *)(v106 + 4);
    v99.m128i_i16[0] = *(_WORD *)v106;
    v25 = v106 + v24 + 64;
    v26 = v106 + v24 + 80;
    v27 = v25;
    if ( (v99.m128i_i16[0] & 0x1FF) != 0x18 )
      v27 = v26;
    if ( *(_DWORD *)(v27 + 8) && *(_DWORD *)(v4 + 16) )
    {
      v28 = **(_QWORD **)(v4 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v29 = *(_BYTE *)(v28 + 28) & 0x7F;
      if ( (unsigned int)v29 - 53 <= 1 || ((v29 + 52) & 0x7Fu) <= 1 )
      {
        v30 = **(_QWORD **)(v4 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v99.m128i_i8[0] = v100;
        v31 = sub_B72ED0(v30);
        LOBYTE(v22) = v100;
        v28 = v31;
      }
      v32 = *v6;
      v99.m128i_i8[0] = v22;
      sub_1CB3F20(v32, v4, 1, 1);
      v33 = *(_DWORD *)(v4 + 16);
      v22 = v99.m128i_u8[0];
      if ( !v33 )
      {
        v34 = *v6;
        LOBYTE(v101) = v99.m128i_i8[0];
        sub_168B9F0((__int64)v116, (__int64 *)(v34 + 8), *(_DWORD *)(v4 + 128), 0x1406u, 0);
        v111 = *(_QWORD *)(v4 + 120);
        v35 = sub_15894B0((__int64)v116, &v111);
        v99 = _mm_loadu_si128((const __m128i *)(v106 + 40));
        v114 = v99;
        v36 = sub_E90530(v114.m128i_i64);
        v37 = v101;
        v100 = HIDWORD(v36);
        if ( v114.m128i_i64[0] )
        {
          v115 = (__m128)_mm_load_si128(&v114);
          v38 = *(_QWORD *)(v114.m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v38 )
          {
            v99.m128i_i64[0] = v115.m128_i64[1];
            v39 = 0;
            v115 = _mm_loadh_ps((const double *)v99.m128i_i64);
            while ( (*(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v39 = 1;
              v38 = *(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            }
            if ( v39 )
              v115.m128_u64[0] = v38;
          }
          v99.m128i_i64[0] = (__int64)&v115;
          v40 = sub_E90530((__int64 *)&v115);
          v37 = v101;
        }
        else
        {
          v40 = 0;
          v99.m128i_i64[0] = (__int64)&v115;
        }
        v113 = __PAIR64__(v100, v40);
        LOBYTE(v101) = v37;
        v41 = sub_1587DB0(v35, (__int64 *)&v113);
        v42 = v101;
        v8 = (*(_QWORD *)v106 & 0x80000) == 0;
        v100 = *(_QWORD *)v106;
        if ( !v8 )
        {
          v43 = 8LL * *(unsigned int *)(v106 + 4);
          LOWORD(v100) = *(_WORD *)v106;
          v44 = v106 + v43 + 64;
          v45 = v106 + v43 + 80;
          if ( (v100 & 0x1FF) != 0x18 )
            v44 = v45;
          v42 = *(_DWORD *)(v44 + 8) != 0;
        }
        v110 = v42;
        v46 = sub_1588420(v41, (unsigned __int8 *)&v110);
        v100 = *(_QWORD *)v106;
        if ( (v100 & 0x80000) != 0 )
        {
          v47 = 8LL * *(unsigned int *)(v106 + 4);
          LOWORD(v100) = *(_WORD *)v106;
          v48 = v106 + v47 + 64;
          v49 = v106 + v47 + 80;
          v50 = v48;
          if ( (v100 & 0x1FF) != 0x18 )
            v50 = v49;
          v33 = *(_DWORD *)(v50 + 8);
        }
        if ( *(_BYTE *)(v46 + 120) )
        {
          v115.m128_i32[0] = v33;
          v115.m128_i32[1] = v33;
          v115.m128_i8[8] = 1;
          sub_AEC610((__int64 *)(v46 + 32), (__int64 *)v99.m128i_i64[0]);
        }
        else if ( *(_BYTE *)(v46 + 132) )
        {
          v100 = sub_168B9E0((_QWORD *)v46);
          v97 = *(_QWORD *)(v46 + 16);
          if ( v97 )
            v97 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v97 + 32LL))(*(_QWORD *)(v46 + 16));
          v112 = v97;
          v98 = *sub_1587BC0(v100, &v112, v93, v94, v95, v96) + 32LL * *(unsigned int *)(v46 + 128);
          v115.m128_i32[0] = v33;
          v115.m128_i32[1] = v33;
          v115.m128_i8[8] = 1;
          sub_AEC610((__int64 *)(v98 + 8), (__int64 *)v99.m128i_i64[0]);
        }
        sub_15F7200(v116);
        sub_168B9F0((__int64)v116, (__int64 *)(*v6 + 8), *(_DWORD *)(v28 + 24), 0x18FAu, 0);
        v115.m128_u64[0] = *(_QWORD *)(v4 + 120);
        sub_15894B0((__int64)v116, (__int64 *)v99.m128i_i64[0]);
        sub_15F7200(v116);
        return 1;
      }
    }
  }
  return v22;
}
