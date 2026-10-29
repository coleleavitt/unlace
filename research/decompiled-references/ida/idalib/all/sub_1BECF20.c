char __fastcall sub_1BECF20(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7,
        char a8,
        char a9,
        char a10)
{
  __int64 *v11; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(__int64); // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 *v18; // rdi
  __int64 v19; // r10
  __int64 *v20; // r9
  __int64 *v21; // rcx
  __int64 v22; // rdi
  __int64 *v23; // rax
  __int64 v24; // rax
  __int64 (__fastcall *v25)(__int64); // rax
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rdx
  __m128 v29; // xmm0
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rdx
  __m128i *v33; // rcx
  __m128i *v34; // rdx
  __m128 v35; // xmm1
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rax
  _QWORD *v40; // rdx
  _QWORD *v41; // r14
  _QWORD *v42; // rbx
  __int64 *v43; // r12
  _QWORD *v44; // rbp
  char *v45; // rdi
  __int64 v46; // r14
  unsigned int v47; // edx
  __int64 v48; // rax
  __int64 v49; // rcx
  unsigned __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 (__fastcall *v55)(__int64); // rax
  __int64 v56; // rax
  unsigned int v57; // eax
  unsigned __int64 v58; // r15
  __int64 v59; // rax
  _QWORD *v60; // r15
  __int64 v61; // rcx
  __int64 v62; // r8
  unsigned __int16 v63; // ax
  __int64 v64; // rax
  unsigned __int64 v65; // rax
  __int64 v66; // r8
  __int64 v67; // r9
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // rcx
  __int64 v70; // rsi
  int v71; // eax
  __int64 v72; // rsi
  unsigned __int64 v73; // rax
  __int64 v74; // rcx
  void *v75; // rdx
  __int64 v76; // rsi
  unsigned int v77; // eax
  __int64 v78; // rax
  __int64 v79; // r8
  unsigned int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rax
  unsigned int v86; // eax
  unsigned int v87; // eax
  unsigned int v88; // eax
  char v89; // al
  __int64 v90; // rsi
  int v91; // eax
  void *v92; // rax
  __int64 v93; // r9
  __int64 v94; // rax
  int v95; // edx
  __int64 v96; // r14
  unsigned int v97; // eax
  unsigned int v98; // eax
  unsigned int v99; // eax
  __int64 v103; // [rsp+18h] [rbp-190h]
  __int64 v104; // [rsp+18h] [rbp-190h]
  unsigned __int64 v105; // [rsp+18h] [rbp-190h]
  unsigned __int64 v106; // [rsp+18h] [rbp-190h]
  char v108; // [rsp+20h] [rbp-188h]
  __int64 v109; // [rsp+30h] [rbp-178h]
  __int64 v110; // [rsp+48h] [rbp-160h] BYREF
  __int64 v111; // [rsp+50h] [rbp-158h]
  unsigned __int64 v112; // [rsp+58h] [rbp-150h]
  _BYTE *v113; // [rsp+60h] [rbp-148h]
  _WORD v114[16]; // [rsp+70h] [rbp-138h] BYREF
  _BYTE v115[32]; // [rsp+90h] [rbp-118h] BYREF
  __m128i v116; // [rsp+B0h] [rbp-F8h] BYREF
  __m128i v117; // [rsp+C0h] [rbp-E8h] BYREF
  void *ptr[2]; // [rsp+D0h] [rbp-D8h] BYREF
  __m128i v119; // [rsp+E0h] [rbp-C8h] BYREF
  void *v120[2]; // [rsp+F0h] [rbp-B8h]
  __int64 v121; // [rsp+100h] [rbp-A8h]
  __int64 v122; // [rsp+108h] [rbp-A0h]
  char (__fastcall *v123)(__int64, __int64, __int64, unsigned int, __int64, __int64); // [rsp+110h] [rbp-98h]
  __int16 v124; // [rsp+118h] [rbp-90h]
  __int16 v125; // [rsp+130h] [rbp-78h]
  __int64 *v126; // [rsp+138h] [rbp-70h]
  __int64 v127; // [rsp+140h] [rbp-68h]
  __int64 v128; // [rsp+148h] [rbp-60h] BYREF

  v11 = (__int64 *)a2;
  v116.m128i_i64[0] = sub_AED600(a2, a2, a3, a4);
  v103 = sub_C1BEF0((__int64)&v116, a2, v13, v14);
  v15 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v15 == sub_B94CE0 )
    v16 = sub_B709C0(a2);
  else
    v16 = v15(a2);
  v17 = *(unsigned __int8 *)(a6 + 2724);
  if ( !(_BYTE)v17 )
    goto LABEL_12;
  v18 = *(__int64 **)(a6 + 2704);
  v19 = *(unsigned int *)(a6 + 2716);
  v20 = &v18[v19];
  if ( v18 != v20 )
  {
    v21 = *(__int64 **)(a6 + 2704);
    if ( v16 == *v18 )
    {
LABEL_55:
      v17 = 0;
      v23 = &v18[*(unsigned int *)(a6 + 2716)];
      goto LABEL_14;
    }
    while ( v20 != ++v21 )
    {
      if ( v16 == *v21 )
        goto LABEL_55;
    }
  }
  if ( (unsigned int)v19 < *(_DWORD *)(a6 + 2712) )
  {
    *(_DWORD *)(a6 + 2716) = v19 + 1;
    *v20 = v16;
    v22 = *(_QWORD *)(a6 + 2704);
    v21 = (__int64 *)(v22 + 8 * v19);
  }
  else
  {
LABEL_12:
    a2 = v16;
    v24 = sub_2236760(a6 + 2704, v16);
    v22 = *(_QWORD *)(a6 + 2704);
    v21 = (__int64 *)v24;
    if ( !*(_BYTE *)(a6 + 2724) )
    {
      v23 = (__int64 *)(v22 + 8LL * *(unsigned int *)(a6 + 2712));
      goto LABEL_14;
    }
  }
  v23 = (__int64 *)(v22 + 8LL * *(unsigned int *)(a6 + 2716));
LABEL_14:
  if ( v23 != v21 && (unsigned __int64)*v21 >= 0xFFFFFFFFFFFFFFFELL )
  {
    ++v21;
    do
    {
      a2 = (__int64)v21;
      if ( v21 == v23 )
        break;
      ++v21;
    }
    while ( *(_QWORD *)a2 >= 0xFFFFFFFFFFFFFFFELL );
  }
  if ( (_BYTE)v17 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x20) != 0 )
    {
      v78 = sub_F57E80(*(_QWORD *)(v103 & 0xFFFFFFFFFFFFFFF0LL));
      if ( v78 )
      {
        if ( (*(_QWORD *)(v78 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0 && (*(_BYTE *)(v78 + 17) & 4) == 0 )
        {
          v80 = sub_C00A40(a4, a2, v17, (__int64)v21, v79);
          a2 = (__int64)v11;
          LOBYTE(v23) = sub_1D3EC30(a1, v11, v80, 1);
          if ( (_BYTE)v23 )
            return (char)v23;
          v116.m128i_i64[0] = sub_AED600((__int64)v11, (__int64)v11, v81, v82);
          v103 = sub_C1BEF0((__int64)&v116, (__int64)v11, v83, v84);
        }
      }
    }
    if ( a9 )
    {
      v25 = *(__int64 (__fastcall **)(__int64))(*v11 + 32);
      if ( v25 == sub_B94CE0 )
        goto LABEL_23;
    }
    else
    {
      v85 = sub_AED600((__int64)v11, a2, v17, (__int64)v21);
      a2 = a5;
      LOBYTE(v23) = sub_1BC70C0(v85, a5);
      if ( !(_BYTE)v23 )
        return (char)v23;
      v25 = *(__int64 (__fastcall **)(__int64))(*v11 + 32);
      if ( v25 == sub_B94CE0 )
      {
LABEL_23:
        if ( (*(_QWORD *)(sub_B709C0((__int64)v11) + 168) & 3LL) != 1 )
          goto LABEL_24;
LABEL_64:
        LOBYTE(v23) = sub_1BD5990(a1, v103, a5, a7);
        if ( !(_BYTE)v23 )
          return (char)v23;
LABEL_24:
        sub_18C74E0(a1, 0, 0, 4);
        v28 = *(unsigned int *)(a6 + 12);
        v29 = 0;
        v117 = 0u;
        v123 = sub_19E7200;
        v30 = *(unsigned int *)(a6 + 8);
        v31 = v30 + 1;
        ptr[0] = nullptr;
        v119 = 0u;
        *(_OWORD *)v120 = 0;
        v121 = 0;
        v122 = 0;
        v124 &= 0xFC03u;
        if ( v30 + 1 > v28 )
        {
          v96 = *(_QWORD *)a6;
          if ( *(_QWORD *)a6 > (unsigned __int64)&v116 || (unsigned __int64)&v116 >= v96 + 168 * v30 )
          {
            sub_1BD93E0(a6, v31);
            v32 = *(_QWORD *)a6;
            v30 = *(unsigned int *)(a6 + 8);
            v33 = &v116;
          }
          else
          {
            sub_1BD93E0(a6, v31);
            v32 = *(_QWORD *)a6;
            v30 = *(unsigned int *)(a6 + 8);
            v33 = (__m128i *)((char *)&v116 + *(_QWORD *)a6 - v96);
          }
        }
        else
        {
          v32 = *(_QWORD *)a6;
          v33 = &v116;
        }
        v34 = (__m128i *)(v32 + 168 * v30);
        v34->m128i_i64[0] = v33->m128i_i64[0];
        v34->m128i_i64[1] = v33->m128i_i64[1];
        v34[1].m128i_i64[0] = v33[1].m128i_i64[0];
        v34[1].m128i_i64[1] = v33[1].m128i_i64[1];
        v34[2].m128i_i64[0] = v33[2].m128i_i64[0];
        v34[2].m128i_i64[1] = v33[2].m128i_i64[1];
        v35 = (__m128)_mm_loadu_si128(v33 + 3);
        v34[4].m128i_i64[1] = 0;
        v34[3] = (__m128i)v35;
        v34[5].m128i_i64[0] = 0;
        v34[4].m128i_i64[0] = 0;
        v34[4].m128i_i64[0] = v33[4].m128i_i64[0];
        v36 = v33[4].m128i_i64[1];
        v33[4].m128i_i64[0] = 0;
        v37 = v34[4].m128i_i64[1];
        v34[4].m128i_i64[1] = v36;
        v38 = v33[5].m128i_i64[0];
        v33[4].m128i_i64[1] = v37;
        v39 = v34[5].m128i_i64[0];
        v34[5].m128i_i64[0] = v38;
        v33[5].m128i_i64[0] = v39;
        v34[5].m128i_i32[2] = v33[5].m128i_i32[2];
        v34[5].m128i_i32[3] = v33[5].m128i_i32[3];
        v34[6].m128i_i64[0] = v33[6].m128i_i64[0];
        LOBYTE(v39) = v33[6].m128i_i8[8] & 1 | v34[6].m128i_i8[8] & 0xFE;
        v34[6].m128i_i8[8] = v39;
        LOBYTE(v39) = v33[6].m128i_i8[8] & 2 | v39 & 0xFD;
        v34[6].m128i_i8[8] = v39;
        LOBYTE(v39) = v33[6].m128i_i8[8] & 4 | v39 & 0xFB;
        v34[6].m128i_i8[8] = v39;
        LOBYTE(v39) = v33[6].m128i_i8[8] & 8 | v39 & 0xF7;
        v34[6].m128i_i8[8] = v39;
        LOBYTE(v39) = v33[6].m128i_i8[8] & 0x10 | v39 & 0xEF;
        v34[6].m128i_i8[8] = v39;
        LOBYTE(v39) = v33[6].m128i_i8[8] & 0x20 | v39 & 0xDF;
        v34[6].m128i_i8[8] = v39;
        LOBYTE(v39) = v33[6].m128i_i8[8] & 0x40 | v39 & 0xBF;
        v34[6].m128i_i8[8] = v39;
        v34[6].m128i_i8[8] = v33[6].m128i_i8[8] & 0x80 | v39 & 0x7F;
        v34[6].m128i_i8[9] = v33[6].m128i_i8[9] & 3 | v34[6].m128i_i8[9] & 0xFC;
        v34[6].m128i_i32[2] = v33[6].m128i_i32[2] & 0x3FC00 | v34[6].m128i_i32[2] & 0xFFFC03FF;
        v34[6].m128i_i32[3] = v33[6].m128i_i32[3];
        v34[7] = _mm_loadu_si128(v33 + 7);
        v34[8] = _mm_loadu_si128(v33 + 8);
        v34[9] = _mm_loadu_si128(v33 + 9);
        v34[10].m128i_i64[0] = v33[10].m128i_i64[0];
        v40 = v120[1];
        v41 = v120[0];
        ++*(_DWORD *)(a6 + 8);
        if ( v40 != v41 )
        {
          v109 = a6;
          v42 = v41;
          v43 = v11;
          v44 = v40;
          do
          {
            while ( 1 )
            {
              v45 = (char *)v42[3];
              if ( v45 == (char *)(v42 + 5) )
                break;
              operator delete(v45);
              v42 += 8;
              if ( v44 == v42 )
                goto LABEL_30;
            }
            v42 += 8;
          }
          while ( v44 != v42 );
LABEL_30:
          v11 = v43;
          a6 = v109;
        }
        if ( v41 )
          operator delete(v41);
        v46 = *(_QWORD *)a6 + 168LL * *(unsigned int *)(a6 + 8) - 168;
        v47 = *(_DWORD *)(a6 + 2988);
        if ( 4864 - v47 <= 0x97 )
        {
          v48 = sub_9C3B30((__int64 *)(a6 + 2872), 152, 3u);
        }
        else
        {
          *(_DWORD *)(a6 + 2988) = v47 + 152;
          v48 = a6 + v47 + 2992;
        }
        v49 = *(_QWORD *)(v48 + 16);
        *(_DWORD *)v48 = 6;
        *(_QWORD *)(v48 + 8) = 0;
        *(_QWORD *)(v48 + 56) = 0;
        *(_QWORD *)(v48 + 16) = v49 & 0xFFFFF80400000000LL | 0x2000000000LL;
        v50 = *(_QWORD *)(v46 + 112) & 0xFFFFF80400000000LL;
        v51 = 0x100000081LL;
        *(_QWORD *)(v46 + 48) = v48;
        *(_QWORD *)(v46 + 112) = v50 | 0x2000000000LL;
        *(_QWORD *)(v46 + 8) = a3;
        *(_QWORD *)v46 = v11;
        *(_QWORD *)(v46 + 120) = v103;
        v52 = 32 * (a10 & 1u);
        *(_QWORD *)(v46 + 56) = 1;
        *(_QWORD *)(v46 + 128) = a5;
        *(_QWORD *)(v46 + 136) = a5;
        *(_QWORD *)(v46 + 144) = a5;
        v53 = *(_QWORD *)(v46 + 104);
        *(_QWORD *)(v46 + 152) = 0;
        v54 = (unsigned int)v53 & 0xFFFFFF7E | 0x100000081LL;
        *(_QWORD *)(v46 + 104) = v54;
        *(_BYTE *)(v46 + 104) = (32 * (a10 & 1)) | v54 & 0xDF;
        if ( !a8 )
        {
          v55 = *(__int64 (__fastcall **)(__int64))(*v11 + 32);
          v56 = v55 == sub_B94CE0 ? sub_B709C0((__int64)v11) : v55((__int64)v11);
          if ( (*(_QWORD *)(v56 + 168) & 3LL) == 1 )
          {
            v57 = *(_DWORD *)(v46 + 104) & 0xFFFC03FE;
            BYTE1(v57) |= 0x28u;
            *(_DWORD *)(v46 + 104) = v57;
LABEL_40:
            LOBYTE(v23) = sub_190D5E0(a1, v29);
            return (char)v23;
          }
        }
        v104 = *(_QWORD *)(a4 + 8);
        v58 = v104 & 0xFFFFFFFFFFFFFFF0LL;
        v59 = *(_QWORD *)(v104 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v59 + 16) == 42
          || (v59 = sub_1BC7590(*(_QWORD *)(v104 & 0xFFFFFFFFFFFFFFF0LL), 0x2000000000LL, v52, v51)) != 0 )
        {
          v58 = *(_QWORD *)(v59 + 32) & 0xFFFFFFFFFFFFFFF0LL;
        }
        v60 = sub_F60F10(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v58 + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
                0x2000000000LL,
                v52,
                v51,
                v26,
                v27);
        v63 = sub_C0EB40(a4, *(_QWORD *)(a1 + 248), nullptr, v61, v62);
        sub_1BEC760(
          &v116,
          a1,
          *(unsigned int *)(a6 + 2968),
          *(_QWORD *)(a4 + 8),
          v63,
          (__int64)v11,
          (__m128)0LL,
          v35,
          (__int64)v60,
          0,
          1u);
        sub_1BD9390(*(__m128i **)(v46 + 48), &v116);
        if ( (v116.m128i_i32[0] & 0x7FFFFFFF) == 3 && ptr[0] != &v119 )
          free(ptr[0]);
        if ( (**(_DWORD **)(v46 + 48) & 0x7FFFFFFF) == 5 )
        {
          v88 = *(_DWORD *)(v46 + 104) & 0xFFFC03FE;
          BYTE1(v88) |= 8u;
          *(_DWORD *)(v46 + 104) = v88;
          goto LABEL_40;
        }
        v64 = v11[7];
        if ( (v64 & 4) != 0 && *(_QWORD *)((v64 & 0xFFFFFFFFFFFFFFF8LL) + 40) )
        {
          v29 = 0;
          v117.m128i_i64[0] = (__int64)ptr;
          v125 = 0;
          v126 = &v128;
          v116 = 0;
          v117.m128i_i64[1] = 0x400000000LL;
          v127 = 0x400000000LL;
          if ( (unsigned __int8)sub_17516B0(a1, (unsigned __int64)v11, (__int64)&v116, 0, 0, 0.0) || !(_BYTE)v125 )
          {
            v87 = *(_DWORD *)(v46 + 104) & 0xFFFC03FE;
            BYTE1(v87) |= 0x3Cu;
            *(_DWORD *)(v46 + 104) = v87;
            sub_1BCD1D0(&v116);
            goto LABEL_40;
          }
          sub_1BCD1D0(&v116);
        }
        v116.m128i_i64[0] = *(_QWORD *)(a4 + 8);
        v65 = sub_6D5440(&v116);
        v68 = *(_QWORD *)&byte_8[v65 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
            | ((unsigned __int8)*(_QWORD *)&byte_8[v65 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v65) & 7;
        v69 = *(_QWORD *)(*(_QWORD *)&byte_8[a5 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL;
        if ( v68 == v69
          || (v70 = *(unsigned int *)(a6 + 2968), (unsigned __int8)sub_183BD10(a1, v70, v68, v69, v66, v67)) )
        {
          v86 = *(_DWORD *)(v46 + 104) & 0xFFFC03FE;
          BYTE1(v86) |= 0x10u;
          *(_DWORD *)(v46 + 104) = v86;
          goto LABEL_40;
        }
        v116.m128i_i64[0] = 0;
        v71 = sub_EEB7E0(a4, v70, *(double *)v29.m128_u64);
        sub_BF7BD0((__int64)v115, *(_QWORD *)(a1 + 248), (__int64)v11, 0, v11[6], 1, v71, &v116, 0);
        v72 = v11[6];
        v73 = sub_A70010(*(_QWORD *)(a1 + 248), v72);
        LOWORD(v111) = v111 & 0xFE00 | 0x4F;
        v75 = &unk_2CD7484;
        if ( unk_2CD7484 )
        {
          v106 = v73;
          sub_EE9B50(79);
          v73 = v106;
        }
        *(_WORD *)((char *)&v111 + 1) &= 0xF801u;
        v112 = v73;
        v113 = v115;
        v111 = (unsigned int)v111 & 0xF007FFFF | 0x600000LL;
        v110 = sub_AED600((__int64)v11, v72, (__int64)v75, v74);
        v76 = (unsigned int)sub_EEB7E0(a4, v72, *(double *)v29.m128_u64);
        if ( (unsigned __int8)sub_1E63330(a1, v76, v110, 1, 0) )
        {
          v77 = *(_DWORD *)(v46 + 104) & 0xFFFC03FE;
          BYTE1(v77) |= 0x18u;
          *(_DWORD *)(v46 + 104) = v77;
          goto LABEL_40;
        }
        v89 = sub_18C0240(v110, v76);
        v90 = *(_QWORD *)(a1 + 248);
        v108 = v89;
        v105 = sub_F67970(&v110, v90);
        v91 = sub_EEB7E0(a4, v90, *(double *)v29.m128_u64);
        sub_1AF2350((__int64)v114, v91, v105, v108, 0, 0);
        sub_1BEC520(&v116, a1, v114, a5, 1u, 0, v29, v35, 0, 0);
        if ( (v116.m128i_i32[0] & 0x7FFFFFFF) == 0 )
        {
          *(__m128i *)(v46 + 112) = _mm_load_si128(&v117);
          *(__m128i *)(v46 + 128) = _mm_load_si128((const __m128i *)ptr);
          *(__m128i *)(v46 + 144) = _mm_load_si128(&v119);
          v92 = v120[0];
          *(_BYTE *)(v46 + 104) |= 0x80u;
          *(_QWORD *)(v46 + 160) = v92;
          if ( sub_B77AF0((__int64)v11) && dword_265F680[v117.m128i_u8[1]] )
          {
            v98 = *(_DWORD *)(v46 + 104) & 0xFFFC03FE;
            BYTE1(v98) |= 0x1Cu;
            *(_DWORD *)(v46 + 104) = v98;
            goto LABEL_87;
          }
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a5 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) != 44
            || v117.m128i_i8[0] != 1 )
          {
            v94 = sub_1BCB950(a1, (unsigned __int64)v11, *(unsigned int *)(a6 + 2968), 0, 0, v93, v29, v35);
            if ( v94 )
            {
              v95 = *(_DWORD *)(v46 + 104);
              *(_QWORD *)(v46 + 120) = v94;
              v95 &= 0xFFFC03FE;
              BYTE1(v95) |= 0x24u;
              *(_DWORD *)(v46 + 104) = v95;
            }
            else if ( sub_1BC6D50(v11) )
            {
              v99 = *(_DWORD *)(v46 + 104) & 0xFFFC03FE;
              BYTE1(v99) |= 0x34u;
              *(_DWORD *)(v46 + 104) = v99;
            }
            goto LABEL_87;
          }
        }
        v97 = *(_DWORD *)(v46 + 104) & 0xFFFC03FE;
        BYTE1(v97) |= 0x18u;
        *(_DWORD *)(v46 + 104) = v97;
LABEL_87:
        if ( (v116.m128i_i32[0] & 0x7FFFFFFF) == 3 && ptr[0] != &v119 )
          free(ptr[0]);
        goto LABEL_40;
      }
    }
    if ( (*(_QWORD *)(((__int64 (__fastcall *)(__int64 *, __int64, __int64, __int64 *))v25)(v11, a2, v17, v21) + 168)
        & 3LL) != 1 )
      goto LABEL_24;
    goto LABEL_64;
  }
  return (char)v23;
}
