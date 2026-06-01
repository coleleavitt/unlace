void __fastcall sub_1453E20(__m128i a1, __int64 a2, __int64 a3)
{
  char v4; // r12
  bool v5; // r12
  char v6; // bp
  bool v7; // zf
  __int64 v8; // r14
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rsi
  int v12; // edx
  int v13; // ecx
  unsigned int *v14; // rax
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  unsigned __int8 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rdi
  unsigned __int16 v21; // bp
  char v22; // al
  __int64 v23; // r12
  __int64 *v24; // rbp
  __int64 v25; // r13
  char *v26; // rsi
  void *v27; // rdi
  size_t v28; // r12
  size_t v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // edx
  __int64 v34; // rdx
  __int64 v35; // rdi
  unsigned __int64 v36; // r13
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rax
  __m128i *v41; // r12
  __m128i *v42; // rcx
  void **v43; // r9
  const __m128i *v44; // r15
  __int64 v45; // rdi
  unsigned int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // r8
  __int64 v52; // rax
  void **v53; // r9
  __int64 v54; // rdi
  unsigned int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // rax
  const __m128i *v58; // rbp
  const void *v59; // r15
  __int64 v60; // r13
  unsigned __int8 v61; // r12
  unsigned __int64 v62; // rdi
  unsigned __int16 v63; // bp
  char v64; // al
  __int64 v65; // rbp
  unsigned int *v66; // rax
  __int64 v67; // rsi
  unsigned __int8 **v68; // rax
  unsigned __int64 v69; // rdi
  unsigned __int16 v70; // bp
  char v71; // al
  __int64 v72; // rsi
  char *v73; // rbp
  __int64 v74; // rsi
  char *v75; // rbp
  __int64 v76; // rsi
  __int64 v77; // rcx
  int v78; // eax
  char v79; // al
  unsigned int *v80; // rsi
  char v81; // r15
  __m128i v82; // xmm0
  unsigned __int64 v83; // rdx
  __int64 v84; // r13
  char *v85; // r15
  unsigned __int8 **v86; // rax
  __int64 v87; // r13
  unsigned int *v88; // rsi
  __int64 v89; // rdx
  unsigned int *v90; // rax
  __int64 v91; // rcx
  __int32 v92; // ebp
  __int64 v93; // rbp
  __int64 v94; // r13
  __int64 v95; // rax
  __int64 v96; // r15
  __int64 v97; // rax
  const char *v98; // rsi
  __int64 v99; // rdi
  __int64 v100; // rdi
  __int64 v101; // r15
  __int64 v102; // rsi
  __int64 v103; // rax
  __m128i v104; // [rsp+0h] [rbp-378h] BYREF
  __int64 v105; // [rsp+10h] [rbp-368h]
  char *v106; // [rsp+18h] [rbp-360h]
  __int64 v107; // [rsp+28h] [rbp-350h] BYREF
  unsigned int v108; // [rsp+30h] [rbp-348h] BYREF
  __int64 v109; // [rsp+38h] [rbp-340h]
  __int16 v110; // [rsp+40h] [rbp-338h]
  __m128i v111; // [rsp+50h] [rbp-328h] BYREF
  unsigned __int16 v112; // [rsp+60h] [rbp-318h]
  char v113; // [rsp+62h] [rbp-316h]
  void *ptr[2]; // [rsp+A0h] [rbp-2D8h] BYREF
  _QWORD v115[3]; // [rsp+B0h] [rbp-2C8h] BYREF
  __int128 v116; // [rsp+C8h] [rbp-2B0h]
  __int64 v117; // [rsp+D8h] [rbp-2A0h]
  __int64 v118; // [rsp+E0h] [rbp-298h]
  __int64 v119; // [rsp+E8h] [rbp-290h]
  char *v120; // [rsp+F0h] [rbp-288h]
  __int64 v121; // [rsp+F8h] [rbp-280h]
  char v122; // [rsp+100h] [rbp-278h] BYREF
  char *v123; // [rsp+110h] [rbp-268h]
  __int64 v124; // [rsp+118h] [rbp-260h]
  char v125; // [rsp+120h] [rbp-258h] BYREF
  __int16 v126; // [rsp+130h] [rbp-248h]
  __int128 v127; // [rsp+138h] [rbp-240h]
  __int64 v128; // [rsp+148h] [rbp-230h]
  __int64 v129; // [rsp+2E8h] [rbp-90h]
  char v130; // [rsp+334h] [rbp-44h]

  v4 = *(_BYTE *)(a3 + 544);
  *(_BYTE *)(a3 + 544) = v4 | 0x20;
  v5 = (v4 & 0x20) != 0;
  sub_14634E0(a3, &v108);
  v6 = (32 * v5) | *(_BYTE *)(a3 + 544) & 0xDF;
  v7 = v110 == 5;
  *(_BYTE *)(a3 + 544) = v6;
  if ( !v7 )
  {
    sub_FC70B0((__int64)ptr, *(_QWORD *)(a3 + 48), v108, 1389);
    sub_AEA040((__int64)ptr);
    return;
  }
  v8 = v109;
  v9 = *(__int64 **)(v109 + 16);
  v10 = *v9;
  if ( (unsigned int)*v9 == 6 )
  {
    if ( *((_DWORD *)v9 + 4) == 1702064993 && *((_WORD *)v9 + 10) == 29810 )
      goto LABEL_10;
    goto LABEL_6;
  }
  if ( (_DWORD)v10 != 5 )
  {
    switch ( (_DWORD)v10 )
    {
      case 0xC:
        if ( v9[2] != 0x635F726573726170LL || *((_DWORD *)v9 + 6) != 1752392050 )
        {
          if ( v9[2] == 0x70616D5F67616964LL && *((_DWORD *)v9 + 6) == 1735289200 )
          {
            *(_BYTE *)(a3 + 544) = v6 | 0x20;
            sub_14634E0(a3, &v111);
            *(_BYTE *)(a3 + 544) = (32 * v5) | *(_BYTE *)(a3 + 544) & 0xDF;
            if ( v112 == 2 )
            {
              sub_FD2BE0(*(_QWORD *)(a3 + 48));
            }
            else if ( v112 == 14 && (v113 & 0x20) == 0 )
            {
              sub_13EE5A0((__int64)ptr, v111.m128i_i32, 1, (_QWORD *)a3, 1);
              if ( v130 )
              {
                sub_14420A0(ptr);
                return;
              }
              sub_FD2BC0(*(_QWORD *)(a3 + 48), *((const void **)&v116 + 1), (unsigned int)(v129 - DWORD2(v116)));
              sub_14420A0(ptr);
            }
            else
            {
              sub_FC70B0((__int64)ptr, *(_QWORD *)(a3 + 48), v111.m128i_i32[0], 150);
              sub_AEC220((unsigned __int8 **)ptr, (_BYTE *)(*(_QWORD *)(v8 + 16) + 16LL), **(unsigned int **)(v8 + 16));
              sub_AEA040((__int64)ptr);
            }
            goto LABEL_10;
          }
          goto LABEL_6;
        }
        if ( *(_BYTE *)(*(_QWORD *)(a3 + 40) + 321LL) )
          goto LABEL_10;
        v33 = *(_DWORD *)(a3 + 1012);
        ptr[1] = nullptr;
        LODWORD(v115[0]) = 429;
        LODWORD(ptr[0]) = v108;
        HIDWORD(ptr[0]) = v108;
        if ( v33 )
          goto LABEL_21;
        sub_1417F90((_QWORD *)a3);
        v49 = *(unsigned int *)(a3 + 2912);
        v35 = a3 + 2904;
        v36 = *(_QWORD *)(a3 + 2904);
        v50 = 3 * v49;
        v38 = v49 + 1;
        v51 = 24LL * *(_QWORD *)(a3 + 2944);
        v52 = 8 * v50;
        v41 = (__m128i *)(v36 + v51);
        v42 = (__m128i *)(v36 + v52);
        if ( v36 + v51 != v36 + v52 )
        {
          v53 = ptr;
          v44 = (const __m128i *)ptr;
          if ( v38 > *(unsigned int *)(a3 + 2916) )
          {
            v74 = a3 + 2920;
            if ( v36 > (unsigned __int64)ptr || v42 <= (__m128i *)ptr )
            {
              v105 = 24LL * *(_QWORD *)(a3 + 2944);
              v44 = (const __m128i *)ptr;
              v104.m128i_i64[0] = (__int64)ptr;
              sub_2237220(v35, v74, v38, 24);
              v36 = *(_QWORD *)(a3 + 2904);
              v53 = ptr;
              v52 = 24LL * *(unsigned int *)(a3 + 2912);
              v41 = (__m128i *)(v36 + v105);
              v42 = (__m128i *)(v36 + v52);
            }
            else
            {
              v104.m128i_i64[0] = 24LL * *(_QWORD *)(a3 + 2944);
              v75 = (char *)ptr - v36;
              sub_2237220(v35, v74, v38, 24);
              v36 = *(_QWORD *)(a3 + 2904);
              v52 = 24LL * *(unsigned int *)(a3 + 2912);
              v44 = (const __m128i *)&v75[v36];
              v41 = (__m128i *)(v36 + v104.m128i_i64[0]);
              v53 = (void **)&v75[v36];
              v42 = (__m128i *)(v36 + v52);
            }
          }
          *v42 = _mm_loadu_si128((const __m128i *)(v36 + v52 - 24));
          v42[1].m128i_i64[0] = *(_QWORD *)(v36 + v52 - 8);
          v54 = *(_QWORD *)(a3 + 2904);
          v55 = *(_DWORD *)(a3 + 2912);
          v56 = 24LL * v55;
          if ( (__m128i *)(v54 + v56 - 24) != v41 )
          {
            v104.m128i_i64[0] = (__int64)v53;
            memmove(&v41[1].m128i_u64[1], v41, v54 + v56 - 24 - (_QWORD)v41);
            v55 = *(_DWORD *)(a3 + 2912);
            v54 = *(_QWORD *)(a3 + 2904);
            v53 = (void **)v104.m128i_i64[0];
          }
          v57 = v55 + 1;
          *(_DWORD *)(a3 + 2912) = v57;
          if ( v41 <= (__m128i *)v53 && v54 + 24 * v57 > (unsigned __int64)v53 )
            v44 = (const __m128i *)((char *)v44 + 24);
          goto LABEL_59;
        }
        break;
      case 4:
        if ( *((_DWORD *)v9 + 4) != 1886221668 )
          goto LABEL_6;
        ptr[1] = nullptr;
        LODWORD(v115[0]) = 431;
        LODWORD(ptr[0]) = v108;
        HIDWORD(ptr[0]) = v108;
        if ( *(_DWORD *)(a3 + 1012) )
        {
LABEL_21:
          v16 = operator new[](0x18u);
          v17 = 1;
          *(__m128i *)v16 = _mm_load_si128((const __m128i *)ptr);
          *(_DWORD *)(v16 + 16) = v115[0];
          goto LABEL_22;
        }
        sub_1417F90((_QWORD *)a3);
        v34 = *(unsigned int *)(a3 + 2912);
        v35 = a3 + 2904;
        v36 = *(_QWORD *)(a3 + 2904);
        v37 = 3 * v34;
        v38 = v34 + 1;
        v39 = 24LL * *(_QWORD *)(a3 + 2944);
        v40 = 8 * v37;
        v41 = (__m128i *)(v36 + v39);
        v42 = (__m128i *)(v36 + v40);
        if ( v36 + v39 != v36 + v40 )
        {
          v43 = ptr;
          v44 = (const __m128i *)ptr;
          if ( v38 > *(unsigned int *)(a3 + 2916) )
          {
            v72 = a3 + 2920;
            if ( v36 > (unsigned __int64)ptr || v42 <= (__m128i *)ptr )
            {
              v105 = 24LL * *(_QWORD *)(a3 + 2944);
              v44 = (const __m128i *)ptr;
              v104.m128i_i64[0] = (__int64)ptr;
              sub_2237220(v35, v72, v38, 24);
              v36 = *(_QWORD *)(a3 + 2904);
              v43 = ptr;
              v40 = 24LL * *(unsigned int *)(a3 + 2912);
              v41 = (__m128i *)(v36 + v105);
              v42 = (__m128i *)(v36 + v40);
            }
            else
            {
              v104.m128i_i64[0] = 24LL * *(_QWORD *)(a3 + 2944);
              v73 = (char *)ptr - v36;
              sub_2237220(v35, v72, v38, 24);
              v36 = *(_QWORD *)(a3 + 2904);
              v40 = 24LL * *(unsigned int *)(a3 + 2912);
              v44 = (const __m128i *)&v73[v36];
              v41 = (__m128i *)(v36 + v104.m128i_i64[0]);
              v43 = (void **)&v73[v36];
              v42 = (__m128i *)(v36 + v40);
            }
          }
          *v42 = _mm_loadu_si128((const __m128i *)(v36 + v40 - 24));
          v42[1].m128i_i64[0] = *(_QWORD *)(v36 + v40 - 8);
          v45 = *(_QWORD *)(a3 + 2904);
          v46 = *(_DWORD *)(a3 + 2912);
          v47 = 24LL * v46;
          if ( (__m128i *)(v45 + v47 - 24) != v41 )
          {
            v104.m128i_i64[0] = (__int64)v43;
            memmove(&v41[1].m128i_u64[1], v41, v45 + v47 - 24 - (_QWORD)v41);
            v46 = *(_DWORD *)(a3 + 2912);
            v45 = *(_QWORD *)(a3 + 2904);
            v43 = (void **)v104.m128i_i64[0];
          }
          v48 = v46 + 1;
          *(_DWORD *)(a3 + 2912) = v48;
          if ( v41 <= (__m128i *)v43 && (unsigned __int64)v43 < v45 + 24 * v48 )
            v44 = (const __m128i *)((char *)v44 + 24);
LABEL_59:
          *v41 = _mm_loadu_si128(v44);
          v41[1].m128i_i32[0] = v44[1].m128i_i32[0];
          goto LABEL_10;
        }
        break;
      case 0x10:
        if ( !(v9[2] ^ 0x7461665F6D766C6CLL | v9[3] ^ 0x726F7272655F6C61LL) )
        {
          if ( !*(_BYTE *)(*(_QWORD *)(a3 + 40) + 321LL) )
            sub_2221C70("#pragma clang __debug llvm_fatal_error", 1);
          goto LABEL_10;
        }
        if ( !(v9[2] ^ 0x726E755F6D766C6CLL | v9[3] ^ 0x656C626168636165LL) )
          goto LABEL_10;
        goto LABEL_6;
      case 0xA:
        v59 = v9 + 2;
        if ( v9[2] == 0x6D5F656C75646F6DLL && *((_WORD *)v9 + 12) == 28769 )
        {
          ptr[1] = (void *)0x800000000LL;
          v78 = 0;
          ptr[0] = v115;
          v105 = (__int64)v115;
          while ( 1 )
          {
            v111.m128i_i32[0] = 0;
            v111.m128i_i64[1] = 0;
            if ( (unsigned __int8)sub_1453A80(a3, (__int64)&v108, (__int64)&v111, v78 == 0) )
              goto LABEL_128;
            v82 = _mm_load_si128(&v111);
            v83 = LODWORD(ptr[1]) + 1LL;
            if ( v83 > HIDWORD(ptr[1]) )
            {
              v104 = v82;
              sub_2237220(ptr, v105, v83, 16);
              v82 = _mm_load_si128(&v104);
            }
            *((__m128i *)ptr[0] + LODWORD(ptr[1])) = v82;
            v79 = *(_BYTE *)(a3 + 544);
            v80 = &v108;
            ++LODWORD(ptr[1]);
            *(_BYTE *)(a3 + 544) = v79 | 0x20;
            v81 = 32 * ((v79 & 0x20) != 0);
            sub_14634E0(a3, &v108);
            v7 = v110 == 26;
            *(_BYTE *)(a3 + 544) = v81 | *(_BYTE *)(a3 + 544) & 0xDF;
            if ( !v7 )
              break;
            v78 = (int)ptr[1];
          }
          v84 = 16LL * LODWORD(ptr[1]);
          v104.m128i_i64[0] = *(_QWORD *)(a3 + 104) + 632LL;
          v106 = (char *)ptr[0] + v84;
          if ( ptr[0] != (char *)ptr[0] + v84 )
          {
            v85 = (char *)ptr[0];
            v86 = nullptr;
            while ( 1 )
            {
              v87 = *((_QWORD *)v85 + 1);
              v88 = *(unsigned int **)(v87 + 16);
              LODWORD(v105) = *(_DWORD *)v85;
              v89 = *v88;
              v80 = v88 + 4;
              v86 = (unsigned __int8 **)sub_13F8D70(v104.m128i_i64[0], (__int64)v80, v89, (__int64)v86);
              if ( !v86 )
                break;
              v85 += 16;
              if ( v106 == v85 )
                goto LABEL_131;
            }
            sub_FC70B0((__int64)&v111, *(_QWORD *)(a3 + 48), v105, 1392);
            sub_AEC220(
              (unsigned __int8 **)&v111,
              (_BYTE *)(*(_QWORD *)(v87 + 16) + 16LL),
              **(unsigned int **)(v87 + 16));
            sub_AEA040((__int64)&v111);
LABEL_128:
            if ( ptr[0] != v115 )
              free(ptr[0]);
            return;
          }
          v86 = nullptr;
LABEL_131:
          sub_FF1530(v86, (__int64)v80);
          if ( ptr[0] != v115 )
            free(ptr[0]);
          goto LABEL_10;
        }
        if ( !sub_B7BA30(v109, (__int64)"modules") )
        {
          if ( !memcmp(v59, "sloc_usage", 0xAu) )
          {
            v60 = 0;
            sub_14634E0(a3, &v111);
            if ( v112 == 7 && (unsigned __int8)sub_1463E50(a3, &v111, &v107) )
            {
              v60 = (unsigned int)v107;
              v61 = 1;
            }
            else
            {
              v61 = 0;
              if ( v112 != 2 )
              {
                sub_FC70B0((__int64)ptr, *(_QWORD *)(a3 + 48), v111.m128i_i32[0], 151);
                sub_AEA040((__int64)ptr);
              }
            }
            sub_FC70B0((__int64)ptr, *(_QWORD *)(a3 + 48), v108, 123);
            sub_AEA040((__int64)ptr);
            sub_10255F0(*(_QWORD *)(a3 + 88), *(_QWORD *)(a3 + 48), ((unsigned __int64)v61 << 32) | v60, a1);
            goto LABEL_10;
          }
          goto LABEL_7;
        }
        goto LABEL_38;
      case 0xD:
        if ( v9[2] == 0x6C5F656C75646F6DLL && *((_DWORD *)v9 + 6) == 1969975151 && *((_BYTE *)v9 + 28) == 112 )
        {
          *(_BYTE *)(a3 + 544) = v6 | 0x20;
          sub_14634E0(a3, &v111);
          v62 = v112;
          v63 = v112;
          *(_BYTE *)(a3 + 544) = (32 * v5) | *(_BYTE *)(a3 + 544) & 0xDF;
          v64 = sub_141A630(v62);
          if ( v63 == 1 || v64 || (v65 = v111.m128i_i64[1]) == 0 )
          {
            sub_FC70B0((__int64)ptr, *(_QWORD *)(a3 + 48), v111.m128i_i32[0], 150);
            v90 = *(unsigned int **)(v8 + 16);
          }
          else
          {
            v66 = *(unsigned int **)(v111.m128i_i64[1] + 16);
            v67 = (__int64)(v66 + 4);
            v68 = (unsigned __int8 **)sub_13C9950(*(__int64 **)(a3 + 104), (__int64)(v66 + 4), *v66, 0, 1, 0);
            if ( v68 )
            {
              sub_FF1530(v68, v67);
              goto LABEL_10;
            }
            sub_FC70B0((__int64)ptr, *(_QWORD *)(a3 + 48), v111.m128i_i32[0], 1390);
            v90 = *(unsigned int **)(v65 + 16);
          }
          sub_AEC220((unsigned __int8 **)ptr, (_BYTE *)v90 + 16, *v90);
          sub_AEA040((__int64)ptr);
          return;
        }
        goto LABEL_6;
      case 0xE:
        if ( v9[2] == 0x776F6C667265766FLL && *((_DWORD *)v9 + 6) == 1635021663 && *((_WORD *)v9 + 14) == 27491 )
        {
          if ( !*(_BYTE *)(*(_QWORD *)(a3 + 40) + 321LL) )
          {
            ptr[0] = sub_144E320;
            sub_144E320();
          }
          goto LABEL_10;
        }
        goto LABEL_6;
      default:
        if ( (_DWORD)v10 != 8 || v9[2] != 0x6465727574706163LL )
          goto LABEL_6;
        *(_BYTE *)(a3 + 544) = v6 | 0x20;
        sub_14634E0(a3, &v111);
        v7 = v112 == 2;
        *(_BYTE *)(a3 + 544) = (32 * v5) | *(_BYTE *)(a3 + 544) & 0xDF;
        if ( !v7 )
        {
          sub_FC70B0((__int64)ptr, *(_QWORD *)(a3 + 48), v111.m128i_i32[0], 1239);
          sub_AE9DF0((unsigned __int8 **)ptr, (__int64)"pragma clang __debug captured", 1u);
          sub_AEA040((__int64)ptr);
          goto LABEL_10;
        }
        v91 = *(_QWORD *)(a3 + 128);
        v92 = v111.m128i_i32[0];
        *(_QWORD *)(a3 + 208) += 24LL;
        v16 = (v91 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(a3 + 136) >= v16 + 24 && v91 )
          *(_QWORD *)(a3 + 128) = v16 + 24;
        else
          v16 = sub_986170(a3 + 128, 24, 24, 3, v18, v19);
        *(_DWORD *)v16 = v92;
        v17 = 0;
        *(_QWORD *)(v16 + 4) = 0;
        *(_QWORD *)(v16 + 12) = 0x1AE00000000LL;
LABEL_22:
        sub_14368B0(a3, (char *)v16, 1, 1u, v17, 0);
        goto LABEL_10;
    }
    v58 = (const __m128i *)ptr;
    if ( v38 > *(unsigned int *)(a3 + 2916) )
    {
      v76 = a3 + 2920;
      if ( v36 > (unsigned __int64)ptr || v42 <= (__m128i *)ptr )
      {
        sub_2237220(v35, v76, v38, 24);
        v42 = (__m128i *)(*(_QWORD *)(a3 + 2904) + 24LL * *(unsigned int *)(a3 + 2912));
      }
      else
      {
        sub_2237220(v35, v76, v38, 24);
        v77 = *(_QWORD *)(a3 + 2904);
        v58 = (const __m128i *)((char *)ptr + v77 - v36);
        v42 = (__m128i *)(24LL * *(unsigned int *)(a3 + 2912) + v77);
      }
    }
    *v42 = _mm_loadu_si128(v58);
    v42[1].m128i_i64[0] = v58[1].m128i_i64[0];
    ++*(_DWORD *)(a3 + 2912);
    goto LABEL_10;
  }
  if ( *((_DWORD *)v9 + 4) == 1935766115 && *((_BYTE *)v9 + 20) == 104 )
  {
    v28 = j__strlen("pragma crash");
    v29 = j__strlen("crash");
    v120 = &v122;
    *(_OWORD *)ptr = 0;
    v116 = 0;
    v123 = &v125;
    v126 = 0;
    v127 = 0;
    memset(v115, 0, sizeof(v115));
    v117 = 0;
    v118 = 0;
    v119 = 0;
    v121 = 0;
    v122 = 0;
    v124 = 0;
    v125 = 0;
    v128 = 0;
    sub_22532A0(ptr, "crash", v29, "pragma crash", v28);
    sub_224E010(ptr);
    if ( !*(_BYTE *)(*(_QWORD *)(a3 + 40) + 321LL) )
      BUG();
    sub_224E0F0(ptr, "crash", v30, v31, v32);
    sub_224F490(ptr);
    goto LABEL_10;
  }
  if ( *((_DWORD *)v9 + 4) == 1919115629 && *((_BYTE *)v9 + 20) == 111 )
  {
    *(_BYTE *)(a3 + 544) = v6 | 0x20;
    sub_14634E0(a3, &v111);
    v69 = v112;
    v70 = v112;
    *(_BYTE *)(a3 + 544) = (32 * v5) | *(_BYTE *)(a3 + 544) & 0xDF;
    v71 = sub_141A630(v69);
    if ( v70 != 1 && !v71 && v111.m128i_i64[1] )
    {
      sub_144CC80(a3, v111.m128i_i64[1]);
      goto LABEL_10;
    }
    goto LABEL_85;
  }
LABEL_6:
  if ( !sub_B7BA30(v109, (__int64)"modules") )
  {
LABEL_7:
    v11 = *(_QWORD *)(a3 + 48);
    v12 = v108;
    v13 = 1391;
LABEL_8:
    sub_FC70B0((__int64)ptr, v11, v12, v13);
    v14 = *(unsigned int **)(v8 + 16);
LABEL_9:
    sub_AEC220((unsigned __int8 **)ptr, (_BYTE *)v14 + 16, *v14);
    sub_AEA040((__int64)ptr);
    goto LABEL_10;
  }
LABEL_38:
  v107 = a3;
  *(_BYTE *)(a3 + 544) = v6 | 0x20;
  sub_14634E0(a3, &v111);
  v20 = v112;
  v21 = v112;
  *(_BYTE *)(a3 + 544) = (32 * v5) | *(_BYTE *)(a3 + 544) & 0xDF;
  v22 = sub_141A630(v20);
  if ( v21 == 1 || v22 || (v23 = v111.m128i_i64[1]) == 0 )
  {
LABEL_85:
    v11 = *(_QWORD *)(a3 + 48);
    v13 = 150;
    v12 = v111.m128i_i32[0];
    goto LABEL_8;
  }
  v24 = *(__int64 **)(v111.m128i_i64[1] + 16);
  v25 = *v24;
  if ( (unsigned int)*v24 != 3 )
  {
    v26 = "visible";
    v27 = (void *)v111.m128i_i64[1];
    if ( !sub_B7BA30(v111.m128i_i64[1], (__int64)"visible") )
    {
      if ( (_DWORD)v25 == 8 && v24[2] == 0x676E69646C697562LL )
      {
        v93 = *(_QWORD *)(a3 + 1328);
        v94 = v93 + 32LL * *(unsigned int *)(a3 + 1336);
        while ( v94 != v93 )
        {
          v95 = sub_227D6D0(v27, v26);
          v96 = sub_995540(v95, "in ");
          sub_FEEE60((__int64)ptr, *(__int64 **)v93, 0);
          v26 = (char *)ptr[0];
          sub_227BF10(v96, ptr[0], ptr[1]);
          v27 = ptr[0];
          if ( ptr[0] != v115 )
            operator delete(ptr[0]);
          if ( *(_DWORD *)(v93 + 8) )
          {
            v97 = sub_227D6D0(v27, v26);
            v98 = " imported ";
            v99 = v97;
            sub_995540(v97, " imported ");
            if ( *(_BYTE *)(v93 + 12) )
            {
              v98 = "via pragma ";
              v99 = sub_227D6D0(v99, " imported ");
              sub_995540(v99, "via pragma ");
            }
            v100 = sub_227D6D0(v99, v98);
            sub_995540(v100, "at ");
            v101 = *(_QWORD *)(a3 + 88);
            v102 = sub_227D6D0(v100, "at ");
            sub_101AC40((unsigned int *)(v93 + 8), v102, v101);
            v103 = sub_227D6D0(v93 + 8, v102);
            v26 = "\n";
            v27 = (void *)v103;
            sub_995540(v103, "\n");
          }
          v93 += 32;
        }
        goto LABEL_10;
      }
      goto LABEL_44;
    }
LABEL_143:
    sub_1452A40((__int64)&v107, 1);
    goto LABEL_10;
  }
  if ( memcmp(v24 + 2, "all", 3u) )
  {
    if ( !sub_B7BA30(v23, (__int64)"visible") )
    {
LABEL_44:
      sub_FC70B0((__int64)ptr, *(_QWORD *)(a3 + 48), v108, 1391);
      v14 = *(unsigned int **)(v23 + 16);
      goto LABEL_9;
    }
    goto LABEL_143;
  }
  sub_1452A40((__int64)&v107, 0);
LABEL_10:
  v15 = *(_QWORD *)(a3 + 1192);
  if ( v15 )
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v15 + 144LL))(
      v15,
      v108,
      *(_QWORD *)(v8 + 16) + 16LL,
      **(unsigned int **)(v8 + 16));
}
