char __fastcall sub_1BEE590(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        __int64 *a7,
        unsigned __int8 a8,
        char a9,
        char a10,
        char a11)
{
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  char result; // al
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 (__fastcall *v19)(__int64); // rax
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rdx
  __m128 v23; // xmm0
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rdx
  __m128i *v27; // rcx
  __m128i *v28; // rdx
  __m128 v29; // xmm1
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rax
  _QWORD *v34; // r14
  _QWORD *v35; // rax
  _QWORD *v36; // r15
  _QWORD *v37; // rbx
  char *v38; // rdi
  __int64 v39; // r15
  unsigned int v40; // edx
  __int64 v41; // rax
  __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 (__fastcall *v48)(__int64); // rax
  __int64 v49; // rax
  unsigned int v50; // eax
  __int64 v51; // rax
  __int64 v52; // r8
  unsigned int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  unsigned __int64 v59; // r14
  __int64 v60; // rax
  _QWORD *v61; // r14
  __int64 v62; // rcx
  __int64 v63; // r8
  unsigned __int16 v64; // ax
  __int64 v65; // rax
  unsigned __int64 v66; // rax
  __int64 v67; // r8
  __int64 v68; // r9
  unsigned __int64 v69; // rdx
  unsigned __int64 v70; // rcx
  __int64 v71; // rsi
  int v72; // eax
  __int64 v73; // rsi
  unsigned __int64 v74; // rax
  __int64 v75; // rcx
  void *v76; // rdx
  __int64 v77; // rsi
  unsigned int v78; // eax
  unsigned int v79; // eax
  unsigned int v80; // eax
  unsigned int v81; // eax
  char v82; // al
  __int64 v83; // rsi
  int v84; // eax
  void *v85; // rax
  __int64 v86; // r9
  __int64 v87; // rax
  int v88; // edx
  __int64 v89; // r15
  unsigned int v90; // eax
  unsigned int v91; // eax
  unsigned int v92; // eax
  __int64 v95; // [rsp+10h] [rbp-188h]
  __int64 v96; // [rsp+10h] [rbp-188h]
  unsigned __int64 v97; // [rsp+10h] [rbp-188h]
  unsigned __int64 v98; // [rsp+10h] [rbp-188h]
  char v100; // [rsp+18h] [rbp-180h]
  __int64 v101; // [rsp+38h] [rbp-160h] BYREF
  __int64 v102; // [rsp+40h] [rbp-158h]
  unsigned __int64 v103; // [rsp+48h] [rbp-150h]
  _BYTE *v104; // [rsp+50h] [rbp-148h]
  _WORD v105[16]; // [rsp+60h] [rbp-138h] BYREF
  _BYTE v106[32]; // [rsp+80h] [rbp-118h] BYREF
  __m128i v107; // [rsp+A0h] [rbp-F8h] BYREF
  __m128i v108; // [rsp+B0h] [rbp-E8h] BYREF
  void *ptr[2]; // [rsp+C0h] [rbp-D8h] BYREF
  __m128i v110; // [rsp+D0h] [rbp-C8h] BYREF
  void *v111[2]; // [rsp+E0h] [rbp-B8h]
  __int64 v112; // [rsp+F0h] [rbp-A8h]
  __int64 v113; // [rsp+F8h] [rbp-A0h]
  char (__fastcall *v114)(__int64, __int64, __int64, unsigned int, __int64, __int64); // [rsp+100h] [rbp-98h]
  __int16 v115; // [rsp+108h] [rbp-90h]
  __int16 v116; // [rsp+120h] [rbp-78h]
  __int64 *v117; // [rsp+128h] [rbp-70h]
  __int64 v118; // [rsp+130h] [rbp-68h]
  __int64 v119; // [rsp+138h] [rbp-60h] BYREF

  v13 = (__int64)a7;
  v107.m128i_i64[0] = sub_AED600((__int64)a2, (__int64)a2, a3, a4);
  v95 = sub_C1BEF0((__int64)&v107, (__int64)a2, v14, v15);
  result = sub_1BCD280((__int64)a7, (__int64)a2, 0);
  if ( result )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x20) != 0 )
    {
      v51 = sub_F57E80(*(_QWORD *)(v95 & 0xFFFFFFFFFFFFFFF0LL));
      if ( v51 )
      {
        if ( (*(_QWORD *)(v51 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0 && (*(_BYTE *)(v51 + 17) & 4) == 0 )
        {
          v53 = sub_C00A40(a5, (__int64)a2, v17, v18, v52);
          result = sub_1D3EC30(a1, a2, v53, 1);
          if ( result )
            return result;
          v107.m128i_i64[0] = sub_AED600((__int64)a2, (__int64)a2, v54, v55);
          v95 = sub_C1BEF0((__int64)&v107, (__int64)a2, v56, v57);
        }
      }
    }
    if ( a10 || (v58 = sub_AED600((__int64)a2, (__int64)a2, v17, v18), (result = sub_1BC70C0(v58, a6)) != 0) )
    {
      v19 = *(__int64 (__fastcall **)(__int64))(*a2 + 32);
      if ( v19 == sub_B94CE0 )
      {
        if ( (*(_QWORD *)(sub_B709C0((__int64)a2) + 168) & 3LL) != 1 )
          goto LABEL_6;
      }
      else if ( (*(_QWORD *)(v19((__int64)a2) + 168) & 3LL) != 1 )
      {
        goto LABEL_6;
      }
      result = sub_1BD5990(a1, v95, a6, a8);
      if ( !result )
        return result;
LABEL_6:
      sub_18C74E0(a1, 0, 0, 4);
      v22 = *((unsigned int *)a7 + 3);
      v23 = 0;
      v108 = 0u;
      v114 = sub_19E7200;
      v24 = *((unsigned int *)a7 + 2);
      v25 = v24 + 1;
      ptr[0] = nullptr;
      v110 = 0u;
      *(_OWORD *)v111 = 0;
      v112 = 0;
      v113 = 0;
      v115 &= 0xFC03u;
      if ( v24 + 1 > v22 )
      {
        v89 = *a7;
        if ( *a7 > (unsigned __int64)&v107 || (unsigned __int64)&v107 >= v89 + 168 * v24 )
        {
          sub_1BD93E0((__int64)a7, v25);
          v26 = *a7;
          v24 = *((unsigned int *)a7 + 2);
          v27 = &v107;
        }
        else
        {
          sub_1BD93E0((__int64)a7, v25);
          v26 = *a7;
          v24 = *((unsigned int *)a7 + 2);
          v27 = (__m128i *)((char *)&v107 + *a7 - v89);
        }
      }
      else
      {
        v26 = *a7;
        v27 = &v107;
      }
      v28 = (__m128i *)(v26 + 168 * v24);
      v28->m128i_i64[0] = v27->m128i_i64[0];
      v28->m128i_i64[1] = v27->m128i_i64[1];
      v28[1].m128i_i64[0] = v27[1].m128i_i64[0];
      v28[1].m128i_i64[1] = v27[1].m128i_i64[1];
      v28[2].m128i_i64[0] = v27[2].m128i_i64[0];
      v28[2].m128i_i64[1] = v27[2].m128i_i64[1];
      v29 = (__m128)_mm_loadu_si128(v27 + 3);
      v28[4].m128i_i64[1] = 0;
      v28[3] = (__m128i)v29;
      v28[5].m128i_i64[0] = 0;
      v28[4].m128i_i64[0] = 0;
      v28[4].m128i_i64[0] = v27[4].m128i_i64[0];
      v30 = v27[4].m128i_i64[1];
      v27[4].m128i_i64[0] = 0;
      v31 = v28[4].m128i_i64[1];
      v28[4].m128i_i64[1] = v30;
      v32 = v27[5].m128i_i64[0];
      v27[4].m128i_i64[1] = v31;
      v33 = v28[5].m128i_i64[0];
      v28[5].m128i_i64[0] = v32;
      v27[5].m128i_i64[0] = v33;
      v28[5].m128i_i32[2] = v27[5].m128i_i32[2];
      v28[5].m128i_i32[3] = v27[5].m128i_i32[3];
      v28[6].m128i_i64[0] = v27[6].m128i_i64[0];
      LOBYTE(v33) = v27[6].m128i_i8[8] & 1 | v28[6].m128i_i8[8] & 0xFE;
      v28[6].m128i_i8[8] = v33;
      LOBYTE(v33) = v27[6].m128i_i8[8] & 2 | v33 & 0xFD;
      v28[6].m128i_i8[8] = v33;
      LOBYTE(v33) = v27[6].m128i_i8[8] & 4 | v33 & 0xFB;
      v28[6].m128i_i8[8] = v33;
      LOBYTE(v33) = v27[6].m128i_i8[8] & 8 | v33 & 0xF7;
      v28[6].m128i_i8[8] = v33;
      LOBYTE(v33) = v27[6].m128i_i8[8] & 0x10 | v33 & 0xEF;
      v28[6].m128i_i8[8] = v33;
      LOBYTE(v33) = v27[6].m128i_i8[8] & 0x20 | v33 & 0xDF;
      v28[6].m128i_i8[8] = v33;
      LOBYTE(v33) = v27[6].m128i_i8[8] & 0x40 | v33 & 0xBF;
      v28[6].m128i_i8[8] = v33;
      v28[6].m128i_i8[8] = v27[6].m128i_i8[8] & 0x80 | v33 & 0x7F;
      v28[6].m128i_i8[9] = v27[6].m128i_i8[9] & 3 | v28[6].m128i_i8[9] & 0xFC;
      v28[6].m128i_i32[2] = v27[6].m128i_i32[2] & 0x3FC00 | v28[6].m128i_i32[2] & 0xFFFC03FF;
      v28[6].m128i_i32[3] = v27[6].m128i_i32[3];
      v28[7] = _mm_loadu_si128(v27 + 7);
      v28[8] = _mm_loadu_si128(v27 + 8);
      v28[9] = _mm_loadu_si128(v27 + 9);
      v28[10].m128i_i64[0] = v27[10].m128i_i64[0];
      v34 = v111[0];
      v35 = v111[1];
      ++*((_DWORD *)a7 + 2);
      v36 = v34;
      if ( v35 != v34 )
      {
        v37 = v35;
        do
        {
          while ( 1 )
          {
            v38 = (char *)v36[3];
            if ( v38 == (char *)(v36 + 5) )
              break;
            operator delete(v38);
            v36 += 8;
            if ( v37 == v36 )
              goto LABEL_12;
          }
          v36 += 8;
        }
        while ( v37 != v36 );
LABEL_12:
        v13 = (__int64)a7;
      }
      if ( v34 )
        operator delete(v34);
      v39 = *(_QWORD *)v13 + 168LL * *(unsigned int *)(v13 + 8) - 168;
      v40 = *(_DWORD *)(v13 + 2988);
      if ( 4864 - v40 <= 0x97 )
      {
        v41 = sub_9C3B30((__int64 *)(v13 + 2872), 152, 3u);
      }
      else
      {
        *(_DWORD *)(v13 + 2988) = v40 + 152;
        v41 = v13 + v40 + 2992;
      }
      v42 = *(_QWORD *)(v41 + 16);
      *(_DWORD *)v41 = 6;
      *(_QWORD *)(v41 + 8) = 0;
      *(_QWORD *)(v41 + 56) = 0;
      *(_QWORD *)(v41 + 16) = v42 & 0xFFFFF80400000000LL | 0x2000000000LL;
      v43 = *(_QWORD *)(v39 + 112) & 0xFFFFF80400000000LL;
      v44 = 0x100000081LL;
      *(_QWORD *)(v39 + 48) = v41;
      *(_QWORD *)(v39 + 112) = v43 | 0x2000000000LL;
      *(_QWORD *)(v39 + 8) = a3;
      *(_QWORD *)v39 = a2;
      *(_QWORD *)(v39 + 120) = v95;
      v45 = 32 * (a11 & 1u);
      *(_QWORD *)(v39 + 56) = 1;
      *(_QWORD *)(v39 + 128) = a6;
      *(_QWORD *)(v39 + 136) = a6;
      *(_QWORD *)(v39 + 144) = a6;
      v46 = *(_QWORD *)(v39 + 104);
      *(_QWORD *)(v39 + 152) = 0;
      v47 = (unsigned int)v46 & 0xFFFFFF7E | 0x100000081LL;
      *(_QWORD *)(v39 + 104) = v47;
      *(_BYTE *)(v39 + 104) = (32 * (a11 & 1)) | v47 & 0xDF;
      if ( !a9 )
      {
        v48 = *(__int64 (__fastcall **)(__int64))(*a2 + 32);
        v49 = v48 == sub_B94CE0 ? sub_B709C0((__int64)a2) : v48((__int64)a2);
        if ( (*(_QWORD *)(v49 + 168) & 3LL) == 1 )
        {
          v50 = *(_DWORD *)(v39 + 104) & 0xFFFC03FE;
          BYTE1(v50) |= 0x28u;
          *(_DWORD *)(v39 + 104) = v50;
          return sub_190D5E0(a1, v23);
        }
      }
      v96 = *(_QWORD *)(a5 + 8);
      v59 = v96 & 0xFFFFFFFFFFFFFFF0LL;
      v60 = *(_QWORD *)(v96 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v60 + 16) == 42
        || (v60 = sub_1BC7590(*(_QWORD *)(v96 & 0xFFFFFFFFFFFFFFF0LL), 0x2000000000LL, v45, v44)) != 0 )
      {
        v59 = *(_QWORD *)(v60 + 32) & 0xFFFFFFFFFFFFFFF0LL;
      }
      v61 = sub_F60F10(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v59 + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
              0x2000000000LL,
              v45,
              v44,
              v20,
              v21);
      v64 = sub_C0EB40(a5, *(_QWORD *)(a1 + 248), nullptr, v62, v63);
      sub_1BEC760(
        &v107,
        a1,
        *(unsigned int *)(v13 + 2968),
        *(_QWORD *)(a5 + 8),
        v64,
        (__int64)a2,
        (__m128)0LL,
        v29,
        (__int64)v61,
        0,
        1u);
      sub_1BD9390(*(__m128i **)(v39 + 48), &v107);
      if ( (v107.m128i_i32[0] & 0x7FFFFFFF) == 3 && ptr[0] != &v110 )
        free(ptr[0]);
      if ( (**(_DWORD **)(v39 + 48) & 0x7FFFFFFF) == 5 )
      {
        v81 = *(_DWORD *)(v39 + 104) & 0xFFFC03FE;
        BYTE1(v81) |= 8u;
        *(_DWORD *)(v39 + 104) = v81;
        return sub_190D5E0(a1, v23);
      }
      v65 = a2[7];
      if ( (v65 & 4) != 0 && *(_QWORD *)((v65 & 0xFFFFFFFFFFFFFFF8LL) + 40) )
      {
        v23 = 0;
        v108.m128i_i64[0] = (__int64)ptr;
        v116 = 0;
        v117 = &v119;
        v107 = 0;
        v108.m128i_i64[1] = 0x400000000LL;
        v118 = 0x400000000LL;
        if ( (unsigned __int8)sub_17516B0(a1, (unsigned __int64)a2, (__int64)&v107, 0, 0, 0.0) || !(_BYTE)v116 )
        {
          v80 = *(_DWORD *)(v39 + 104) & 0xFFFC03FE;
          BYTE1(v80) |= 0x3Cu;
          *(_DWORD *)(v39 + 104) = v80;
          sub_1BCD1D0(&v107);
          return sub_190D5E0(a1, v23);
        }
        sub_1BCD1D0(&v107);
      }
      v107.m128i_i64[0] = *(_QWORD *)(a5 + 8);
      v66 = sub_6D5440(&v107);
      v69 = *(_QWORD *)&byte_8[v66 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)&byte_8[v66 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v66) & 7;
      v70 = *(_QWORD *)(*(_QWORD *)&byte_8[a6 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL;
      if ( v70 == v69
        || (v71 = *(unsigned int *)(v13 + 2968), (unsigned __int8)sub_183BD10(a1, v71, v69, v70, v67, v68)) )
      {
        v79 = *(_DWORD *)(v39 + 104) & 0xFFFC03FE;
        BYTE1(v79) |= 0x10u;
        *(_DWORD *)(v39 + 104) = v79;
        return sub_190D5E0(a1, v23);
      }
      v107.m128i_i64[0] = 0;
      v72 = sub_EEB7E0(a5, v71, *(double *)v23.m128_u64);
      sub_BF7BD0((__int64)v106, *(_QWORD *)(a1 + 248), (__int64)a2, 0, a2[6], 1, v72, &v107, 0);
      v73 = a2[6];
      v74 = sub_A70010(*(_QWORD *)(a1 + 248), v73);
      LOWORD(v102) = v102 & 0xFE00 | 0x4F;
      v76 = &unk_2CD7484;
      if ( unk_2CD7484 )
      {
        v98 = v74;
        sub_EE9B50(79);
        v74 = v98;
      }
      *(_WORD *)((char *)&v102 + 1) &= 0xF801u;
      v103 = v74;
      v104 = v106;
      v102 = (unsigned int)v102 & 0xF007FFFF | 0x600000LL;
      v101 = sub_AED600((__int64)a2, v73, (__int64)v76, v75);
      v77 = (unsigned int)sub_EEB7E0(a5, v73, *(double *)v23.m128_u64);
      if ( (unsigned __int8)sub_1E63330(a1, v77, v101, 1, 0) )
      {
        v78 = *(_DWORD *)(v39 + 104) & 0xFFFC03FE;
        BYTE1(v78) |= 0x18u;
        *(_DWORD *)(v39 + 104) = v78;
        return sub_190D5E0(a1, v23);
      }
      v82 = sub_18C0240(v101, v77);
      v83 = *(_QWORD *)(a1 + 248);
      v100 = v82;
      v97 = sub_F67970(&v101, v83);
      v84 = sub_EEB7E0(a5, v83, *(double *)v23.m128_u64);
      sub_1AF2350((__int64)v105, v84, v97, v100, 0, 0);
      sub_1BEC520(&v107, a1, v105, a6, 1u, 0, v23, v29, 0, 0);
      if ( (v107.m128i_i32[0] & 0x7FFFFFFF) == 0 )
      {
        *(__m128i *)(v39 + 112) = _mm_load_si128(&v108);
        *(__m128i *)(v39 + 128) = _mm_load_si128((const __m128i *)ptr);
        *(__m128i *)(v39 + 144) = _mm_load_si128(&v110);
        v85 = v111[0];
        *(_BYTE *)(v39 + 104) |= 0x80u;
        *(_QWORD *)(v39 + 160) = v85;
        if ( sub_B77AF0((__int64)a2) && dword_265F680[v108.m128i_u8[1]] )
        {
          v91 = *(_DWORD *)(v39 + 104) & 0xFFFC03FE;
          BYTE1(v91) |= 0x1Cu;
          *(_DWORD *)(v39 + 104) = v91;
LABEL_67:
          if ( (v107.m128i_i32[0] & 0x7FFFFFFF) == 3 && ptr[0] != &v110 )
            free(ptr[0]);
          return sub_190D5E0(a1, v23);
        }
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a6 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) != 44
          || v108.m128i_i8[0] != 1 )
        {
          v87 = sub_1BCB950(a1, (unsigned __int64)a2, *(unsigned int *)(v13 + 2968), 0, 0, v86, v23, v29);
          if ( v87 )
          {
            v88 = *(_DWORD *)(v39 + 104);
            *(_QWORD *)(v39 + 120) = v87;
            v88 &= 0xFFFC03FE;
            BYTE1(v88) |= 0x24u;
            *(_DWORD *)(v39 + 104) = v88;
          }
          else if ( sub_1BC6D50(a2) )
          {
            v92 = *(_DWORD *)(v39 + 104) & 0xFFFC03FE;
            BYTE1(v92) |= 0x34u;
            *(_DWORD *)(v39 + 104) = v92;
          }
          goto LABEL_67;
        }
      }
      v90 = *(_DWORD *)(v39 + 104) & 0xFFFC03FE;
      BYTE1(v90) |= 0x18u;
      *(_DWORD *)(v39 + 104) = v90;
      goto LABEL_67;
    }
  }
  return result;
}
