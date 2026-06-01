unsigned __int16 *__fastcall sub_1DC71F0(
        __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rax
  unsigned __int64 v12; // rbx
  unsigned __int16 *result; // rax
  _QWORD *v14; // rsi
  void **v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rdi
  _QWORD *v20; // rdx
  unsigned int v21; // esi
  __int64 v22; // rbp
  unsigned __int8 v23; // al
  __int64 v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // rcx
  unsigned int v27; // edi
  int v28; // eax
  __int64 v29; // rbp
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rbp
  __int64 v34; // r8
  __int32 v35; // eax
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // rbx
  __int64 v39; // rsi
  _QWORD *v40; // rsi
  void **v41; // rax
  __int64 v42; // rax
  __int64 v43; // r12
  __int64 v44; // rbp
  unsigned __int64 v45; // rax
  __int64 v46; // r12
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  int v51; // r13d
  int v52; // ebp
  unsigned int v53; // r12d
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rsi
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  unsigned __int64 v61; // r12
  int v62; // eax
  __int64 v63; // rbp
  __int32 v64; // eax
  __int64 v65; // rsi
  __int64 v66; // rcx
  __int64 v67; // r10
  void **v68; // rdi
  __int64 v69; // rbx
  __int64 v70; // rcx
  __int64 v71; // r8
  unsigned __int64 v72; // rdx
  __int64 v73; // rsi
  __int64 *v74; // r14
  __int64 v75; // r12
  unsigned __int64 v76; // rdx
  __int64 v77; // r13
  unsigned int v78; // eax
  void **v79; // rax
  __int64 v80; // rax
  char v81; // r12
  unsigned __int16 *v82; // rax
  __int64 v83; // rdi
  unsigned __int64 v84; // rsi
  const __m128i *v85; // rsi
  int v86; // edi
  __m128i v87; // xmm0
  bool v88; // zf
  __int64 v89; // rsi
  int v90; // r14d
  __int64 v91; // r13
  char v92; // r12
  unsigned __int64 v93; // r13
  char v94; // r12
  __int64 v95; // rcx
  unsigned __int64 v96; // r14
  __int16 v97; // bp
  __int64 v98; // rbx
  __m128i *v99; // rdi
  __int64 v100; // rcx
  __m128 *v101; // r13
  void **v102; // rdi
  __int64 i; // rcx
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // r8
  char v107; // r12
  unsigned int v108; // ebp
  int v109; // r13d
  int v110; // eax
  __int64 v111; // r14
  int v112; // r13d
  char v113; // dl
  __int64 v114; // rsi
  __int64 v115; // rdi
  __int64 v116; // rax
  __int64 v117; // rax
  unsigned __int64 v118; // rbx
  __int64 v119; // rsi
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r13
  const void *v124; // r14
  __int64 v125; // r12
  int v126; // eax
  unsigned __int64 v127; // rbx
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // [rsp-18h] [rbp-158h]
  __int64 v131; // [rsp-10h] [rbp-150h]
  __int64 v132; // [rsp+0h] [rbp-140h]
  unsigned __int16 *v133; // [rsp+0h] [rbp-140h]
  int v134; // [rsp+0h] [rbp-140h]
  unsigned int v135; // [rsp+0h] [rbp-140h]
  unsigned __int8 v136; // [rsp+8h] [rbp-138h]
  char v137; // [rsp+8h] [rbp-138h]
  char v138; // [rsp+10h] [rbp-130h]
  __int64 v139; // [rsp+10h] [rbp-130h]
  __m128i v140; // [rsp+18h] [rbp-128h] BYREF
  void *v141; // [rsp+28h] [rbp-118h]
  __m128i v142; // [rsp+38h] [rbp-108h] BYREF
  __int64 v143; // [rsp+48h] [rbp-F8h]
  __m128i si128; // [rsp+58h] [rbp-E8h] BYREF
  __int64 v145[2]; // [rsp+68h] [rbp-D8h] BYREF
  void *ptr[2]; // [rsp+78h] [rbp-C8h] BYREF
  void *v147[2]; // [rsp+88h] [rbp-B8h] BYREF
  __int128 v148; // [rsp+98h] [rbp-A8h]
  __int64 *v149; // [rsp+C8h] [rbp-78h] BYREF
  __int64 v150; // [rsp+D0h] [rbp-70h]
  __int64 v151; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v152; // [rsp+E0h] [rbp-60h]
  __int16 v153; // [rsp+E8h] [rbp-58h]
  char v154; // [rsp+EAh] [rbp-56h]
  __int64 v155; // [rsp+F0h] [rbp-50h]
  __int64 v156; // [rsp+110h] [rbp-30h]
  __int64 v157; // [rsp+138h] [rbp-8h]

  if ( !a2 )
    return nullptr;
  v10 = (*(_WORD *)a2 + 509) & 0x1FF;
  v157 = v9;
  v156 = v8;
  v12 = a2;
  switch ( (__int16)v10 )
  {
    case 0:
      return (unsigned __int16 *)sub_1DD2110();
    case 1:
      return (unsigned __int16 *)sub_1DF2740();
    case 2:
      return (unsigned __int16 *)sub_1DE8860();
    case 3:
      return (unsigned __int16 *)sub_1DECE10();
    case 4:
      result = (unsigned __int16 *)a2;
      if ( *(_DWORD *)(*a1 + 12632) )
      {
        sub_C95B30((__int64)&si128, a2);
        sub_1DB7720((__m128i *)ptr, *a1, v47, v48, v49, v50, (__m128i)a7, si128.m128i_i64[0]);
        v51 = *(_DWORD *)(a2 + 36);
        v52 = *(_DWORD *)(*a1 + 12632);
        v53 = (unsigned int)*(char *)(a2 + 33) >> 31;
        if ( v52 )
          v52 = si128.m128i_i32[1] + 1 - v52;
        v54 = sub_C95B10(a2);
        return (unsigned __int16 *)sub_1DD1DD0(
                                     (_DWORD)a1,
                                     *(_QWORD *)(a2 + 16),
                                     v54,
                                     v51,
                                     v52,
                                     v53,
                                     ptr[0],
                                     (__int64)ptr[1],
                                     (__int64)v147[0]);
      }
      return result;
    case 5:
      v44 = *(_QWORD *)(a2 + 16);
      if ( (*(_WORD *)(v44 & 0xFFFFFFFFFFFFFFFELL) & 0x1FF) != 0x3D )
        v44 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 16));
      if ( v44 == 1 )
        return (_WORD *)(&dword_0 + 1);
      v45 = sub_C959C0(a2, *(_QWORD *)(*a1 + 248));
      v46 = sub_1DD1AB0(a1, v45);
      if ( (v46 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return (_WORD *)(&dword_0 + 1);
      v99 = &si128;
      v100 = 6;
      v101 = (__m128 *)*a1;
      while ( v100 )
      {
        v99->m128i_i32[0] = 0;
        v99 = (__m128i *)((char *)v99 + 4);
        --v100;
      }
      v102 = ptr;
      for ( i = 6; i; --i )
      {
        *(_DWORD *)v102 = 0;
        v102 = (void **)((char *)v102 + 4);
      }
      v104 = sub_C95990(a2);
      if ( sub_1CC9760(
             v101,
             v104,
             v46,
             (__int64 *)(v44 & 0xFFFFFFFFFFFFFFFELL),
             &si128,
             (__m128i *)ptr,
             *(double *)a7.m128_u64,
             a8,
             0,
             0) == 1 )
        return (_WORD *)(&dword_0 + 1);
      v107 = *(_BYTE *)(a2 + 35);
      v108 = *(_DWORD *)(a2 + 32);
      v109 = sub_C00A40(a2, v131, v105, v130, v106);
      v110 = sub_C95990(a2);
      return (unsigned __int16 *)sub_1DD1DD0(
                                   (_DWORD)a1,
                                   *(_DWORD *)(a2 + 24) & 0xFFFFFFF8,
                                   v110,
                                   v109,
                                   (v108 >> 15) & 0x7FFF,
                                   (v107 & 0x40) != 0,
                                   si128.m128i_i32[0],
                                   si128.m128i_i64[1],
                                   v145[0]);
    case 6:
      return (unsigned __int16 *)sub_1DB7D00(a2);
    case 7:
      return (unsigned __int16 *)sub_1DF6FE0();
    case 8:
      return (unsigned __int16 *)sub_1DB7970(a1, a2);
    case 9:
      return (unsigned __int16 *)sub_1DE2E40();
    case 10:
      return (unsigned __int16 *)sub_1DDE1F0();
    case 11:
      return (unsigned __int16 *)sub_1DD21A0();
    case 12:
      v40 = (_QWORD *)*a1;
      ptr[1] = &dword_0 + 1;
      v41 = v147;
      ptr[0] = v40;
      do
      {
        *v41 = (void *)-4096LL;
        v41 += 2;
      }
      while ( v41 != (void **)&v149 );
      v149 = &v151;
      v150 = 0x100000000LL;
      v42 = v40[1410];
      v154 = 0;
      v152 = v42;
      v153 = 256;
      v155 = 0;
      v40[1410] = ptr;
      v43 = sub_1DE4900(a1, v12, -4096, &v149);
      if ( v43 != 1 && (unsigned __int8)sub_B8E180(*(_QWORD *)(v12 + 24) + 40LL) )
      {
        v111 = *a1;
        v135 = *(_DWORD *)(*a1 + 11200);
        v137 = *(_BYTE *)(*a1 + 12592);
        v138 = *(_BYTE *)(*a1 + 11248);
        v112 = *(_DWORD *)(*(_QWORD *)(*a1 + 264) + 204LL);
        if ( !v137 )
        {
          sub_1DB82A0(v111);
          if ( !v113 )
            *(_BYTE *)(v111 + 12592) = 1;
        }
        *(_BYTE *)(v111 + 11248) = 0;
        v114 = *(_QWORD *)(v12 + 24);
        v115 = *a1;
        if ( v114 )
          v114 += 40;
        sub_1E04EF0(v115, v114, a1[4]);
        if ( *(_DWORD *)(v111 + 11200) > v135 )
          *(_BYTE *)((v43 & 0xFFFFFFFFFFFFFFFELL) + 2) &= ~8u;
        *(_DWORD *)(v111 + 11200) = v135;
        *(_BYTE *)(v111 + 12592) = v137;
        *(_BYTE *)(v111 + 11248) = v138;
        v116 = *(_QWORD *)(v111 + 264);
        if ( *(_DWORD *)(v116 + 204) == 5 )
          *(_BYTE *)(v116 + 194) = 1;
        if ( v112 )
          v112 = 3;
        *(_DWORD *)(v116 + 204) = v112;
      }
      sub_1CB3BA0((__int64)ptr);
      return (unsigned __int16 *)v43;
    case 13:
      return (unsigned __int16 *)sub_1DCC260();
    case 14:
      return (unsigned __int16 *)sub_1DCC3C0();
    case 15:
      result = (unsigned __int16 *)a2;
      if ( (*(_DWORD *)a2 & 0x10000) != 0 )
        return (unsigned __int16 *)sub_18C69A0(*a1, *(_DWORD *)(a2 + 4), (*(_BYTE *)(a2 + 2) >> 3) & 0xF);
      return result;
    case 16:
      return (unsigned __int16 *)sub_1DDE890();
    case 17:
      return (unsigned __int16 *)sub_1DCC430();
    case 18:
      return (unsigned __int16 *)sub_1DE0390();
    case 19:
      return (unsigned __int16 *)sub_1DCC490();
    case 20:
      return (unsigned __int16 *)sub_1DE9660();
    case 21:
      return (unsigned __int16 *)sub_1DE95F0();
    case 22:
      return (unsigned __int16 *)sub_1DB79F0((__int64)a1, a2);
    case 23:
      return (unsigned __int16 *)sub_1DB7D10(a2);
    case 24:
      return (unsigned __int16 *)sub_1DD2210();
    case 25:
      return (unsigned __int16 *)sub_1DCC4F0();
    case 26:
      return sub_1DB7CF0(*a1, (unsigned __int16 *)a2, a3, a4, a5, a7, a8);
    case 27:
      return (unsigned __int16 *)sub_1DB7D20(a2);
    case 28:
      return (unsigned __int16 *)sub_1DB7D30(a2);
    case 29:
      return (unsigned __int16 *)sub_1DCC580();
    case 30:
      return (unsigned __int16 *)sub_1DDE930();
    case 31:
      return (unsigned __int16 *)sub_1DCC760();
    case 32:
      return (unsigned __int16 *)sub_1DCC860();
    case 33:
      return (unsigned __int16 *)sub_1DCCB40();
    case 34:
      return (unsigned __int16 *)sub_1DD24A0();
    case 35:
      return (unsigned __int16 *)sub_1DE0870();
    case 36:
      return (unsigned __int16 *)sub_1DCCB50();
    case 37:
      return (unsigned __int16 *)sub_1DB7D40(a2);
    case 38:
      return (unsigned __int16 *)sub_1DB7D50(a2);
    case 39:
      return (unsigned __int16 *)sub_1DDEDE0();
    case 40:
      return (unsigned __int16 *)sub_1DD2510();
    case 41:
      return (unsigned __int16 *)sub_1DCCBB0();
    case 42:
      sub_2EAD22(a1);
    case 43:
      return (unsigned __int16 *)sub_1DE9B70();
    case 44:
      return (unsigned __int16 *)sub_1DCCD40();
    case 45:
      return (unsigned __int16 *)sub_1DCCE00();
    case 46:
      return (unsigned __int16 *)sub_1DCCE20();
    case 47:
      return (unsigned __int16 *)sub_1DEA4B0();
    case 48:
      v39 = *a1;
      if ( !*(_BYTE *)(*a1 + 4600) )
      {
        ptr[0] = (void *)*a1;
        ptr[1] = &dword_0 + 1;
        v79 = v147;
        do
        {
          *v79 = (void *)-4096LL;
          v79 += 2;
        }
        while ( v79 != (void **)&v149 );
        v149 = &v151;
        v150 = 0x100000000LL;
        v80 = *(_QWORD *)(v39 + 11280);
        v153 = 256;
        v152 = v80;
        v154 = 1;
        v155 = 0;
        *(_QWORD *)(v39 + 11280) = ptr;
        v81 = *((_BYTE *)a1 + 56);
        *((_BYTE *)a1 + 56) = 0;
        v82 = sub_1DC55B0(a1, v12, *(double *)a7.m128_u64, a8);
        *((_BYTE *)a1 + 56) = v81;
        v12 = (unsigned __int64)v82;
        sub_1CB3BA0((__int64)ptr);
      }
      return (unsigned __int16 *)v12;
    case 49:
      return (unsigned __int16 *)sub_1DB7D60(a2);
    case 50:
      return (unsigned __int16 *)sub_1DDEEA0();
    case 51:
      return (unsigned __int16 *)sub_1DD1B20();
    case 52:
      return (unsigned __int16 *)sub_1DB7D70(a2);
    case 53:
      return (unsigned __int16 *)sub_1DCCEC0();
    case 54:
      return (unsigned __int16 *)sub_1DD29F0();
    case 55:
      return (unsigned __int16 *)sub_1DB7D80(a2);
    case 56:
      v28 = *(_DWORD *)(*a1 + 12632);
      if ( v28 )
      {
        v29 = *(_QWORD *)(a2 + 8LL * (unsigned int)(v28 - 1) + 32);
        v30 = (unsigned int)sub_C00A40(a2, a2, a3, a4, a5);
        v33 = sub_1DD8310(a1, v30, v29);
        if ( v33 )
        {
          v35 = sub_C00A40(v12, v30, v31, v32, v34);
          v36 = *(_QWORD *)(v33 + 40);
          si128.m128i_i32[2] = v35;
          si128.m128i_i64[0] = v36;
          sub_B85890(v145, v36);
          v37 = *a1;
          *(_OWORD *)ptr = 0;
          *(_OWORD *)v147 = 0;
          v148 = 0;
          v38 = sub_190AE60(v37, (__int64 *)ptr, (__int64)&si128, v33, 0, 0, (__m128i)0LL, a8, 0);
          if ( HIDWORD(v147[1]) )
            free(v147[0]);
          return (unsigned __int16 *)v38;
        }
        return (_WORD *)(&dword_0 + 1);
      }
      v132 = sub_1DD1AB0(a1, *(_QWORD *)(a2 + 8));
      if ( (v132 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return (_WORD *)(&dword_0 + 1);
      v72 = *(unsigned int *)(a2 + 28);
      v73 = (__int64)v147;
      ptr[1] = (void *)0x800000000LL;
      ptr[0] = v147;
      if ( v72 > 8 )
        sub_2237220(ptr, v147, v72, 8);
      v74 = (__int64 *)(v12 + 32);
      v75 = v12 + 8LL * *(unsigned int *)(v12 + 28) + 32;
      if ( v12 + 32 == v75 )
      {
LABEL_215:
        v118 = sub_C97290(
                 *(_QWORD **)(*a1 + 248),
                 v132,
                 *(_QWORD *)(v12 + 16),
                 *(_DWORD *)(v12 + 24),
                 ptr[0],
                 LODWORD(ptr[1]));
        sub_1911BF0((__m128 *)*a1, v118, a7, a8);
        result = (unsigned __int16 *)v118;
      }
      else
      {
        while ( 1 )
        {
          v77 = *v74;
          v78 = sub_C00A40(v12, v73, v72, v70, v71);
          v117 = sub_1DD8310(a1, v78, v77);
          if ( !v117 )
            break;
          v70 = LODWORD(ptr[1]);
          v73 = HIDWORD(ptr[1]);
          v76 = LODWORD(ptr[1]) + 1LL;
          if ( v76 > HIDWORD(ptr[1]) )
          {
            v73 = (__int64)v147;
            v139 = v117;
            sub_2237220(ptr, v147, v76, 8);
            v70 = LODWORD(ptr[1]);
            v117 = v139;
          }
          v72 = (unsigned __int64)ptr[0];
          ++v74;
          *((_QWORD *)ptr[0] + v70) = v117;
          ++LODWORD(ptr[1]);
          if ( (__int64 *)v75 == v74 )
            goto LABEL_215;
        }
        result = (_WORD *)(&dword_0 + 1);
      }
      if ( ptr[0] != v147 )
      {
        v133 = result;
        free(ptr[0]);
        return v133;
      }
      return result;
    case 57:
      return (unsigned __int16 *)sub_1DCCED0();
    case 58:
      return (unsigned __int16 *)sub_1DCCEE0();
    case 59:
      return (unsigned __int16 *)sub_1DB7D90(a2);
    case 60:
      return (unsigned __int16 *)sub_1DB7DA0(a2);
    case 61:
      return (unsigned __int16 *)sub_1DCCEF0();
    case 62:
      return (unsigned __int16 *)sub_1DCD010();
    case 63:
      return (unsigned __int16 *)sub_1DB7DB0(a2);
    case 64:
      sub_2EAD22(a1);
    case 65:
      return (unsigned __int16 *)sub_1DDA7F0();
    case 66:
      return (unsigned __int16 *)sub_1DE8850();
    case 67:
      return (unsigned __int16 *)sub_1DE9600();
    case 68:
      v22 = *(_QWORD *)(a2 + 16);
      v23 = *(_BYTE *)(v22 + 28) & 0x7F;
      if ( v23 != 47 )
      {
        if ( (unsigned int)v23 - 40 > 6 || !sub_B799A0(*(_QWORD *)(a2 + 16)) )
          return (unsigned __int16 *)sub_1DEA610(a1, a2);
        v57 = v22;
        v59 = *(_QWORD *)sub_1DBE240(*(_QWORD *)(*a1 + 11280), v22, v55, v56);
        if ( (v59 & 4) != 0 && (v61 = v59 & 0xFFFFFFFFFFFFFFF8LL, (v59 & 0xFFFFFFFFFFFFFFF8LL) != 0) )
        {
          v62 = *(_DWORD *)(*a1 + 12632);
          if ( !v62 )
          {
            v119 = *(_QWORD *)(v12 + 8);
            v123 = sub_1DD1AB0(a1, v119);
            result = (_WORD *)(&dword_0 + 1);
            if ( (v123 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
            {
              v124 = *(const void **)v61;
              v125 = *(unsigned int *)(v61 + 8);
              v126 = sub_C00A40(v12, v119, v120, v121, v122);
              v127 = sub_C97290(*(_QWORD **)(*a1 + 248), v123, v22, v126, v124, v125);
              sub_1911BF0((__m128 *)*a1, v127, a7, a8);
              return (unsigned __int16 *)v127;
            }
            return result;
          }
          v58 = (unsigned int)(v62 - 1);
          v63 = *(_QWORD *)(*(_QWORD *)v61 + 8 * v58);
        }
        else
        {
          v59 &= 0xFFFFFFFFFFFFFFF8LL;
          v63 = v59;
        }
        v64 = sub_C00A40(v12, v57, v58, v59, v60);
        v65 = *(_QWORD *)(v63 + 40);
        si128.m128i_i32[2] = v64;
        si128.m128i_i64[0] = v65;
        sub_B85890(v145, v65);
        v66 = 12;
        v67 = *a1;
        v68 = ptr;
        while ( v66 )
        {
          *(_DWORD *)v68 = 0;
          v68 = (void **)((char *)v68 + 4);
          --v66;
        }
        v69 = sub_190AE60(v67, (__int64 *)ptr, (__int64)&si128, v63, 0, 0, (__m128i)a7, a8, 0);
        if ( HIDWORD(v147[1]) )
          free(v147[0]);
        return (unsigned __int16 *)v69;
      }
      v24 = a1[4];
      v25 = *(_DWORD *)(v24 + 112);
      v26 = *(_DWORD *)(v22 + 68) & 0xFFFFF;
      v27 = v25 + *(_DWORD *)(v24 + 8);
      if ( (unsigned int)v26 >= v27 )
        return (unsigned __int16 *)sub_1DEA610(a1, a2);
      if ( (unsigned int)v26 >= v25
        && (v83 = *(_QWORD *)v24 + 24LL * (v27 - (unsigned int)v26 - 1),
            v84 = *(_WORD *)(v22 + 70) >> 4,
            v84 < *(_QWORD *)(v83 + 16))
        && (v85 = (const __m128i *)(*(_QWORD *)(v83 + 8) + 24 * v84), (v86 = v85->m128i_i32[0] & 0x7FFFFFFF) != 0) )
      {
        v87 = _mm_loadu_si128(v85);
        v88 = *(_BYTE *)(v24 + 116) == 1;
        v142 = v87;
        v89 = v85[1].m128i_i64[0];
        v143 = v89;
        if ( !v88 )
        {
          v90 = 0;
          v91 = *(_QWORD *)(*(_QWORD *)v24 + 24LL * (*(_DWORD *)(v24 + 8) + v25 - 1 - (unsigned int)v26));
          v92 = v91 >> 2;
          v93 = v91 & 0xFFFFFFFFFFFFFFF8LL;
          v94 = v92 & 1;
          if ( *(_BYTE *)(v22 + 80) )
          {
            v95 = *(unsigned int *)(*a1 + 12632);
            if ( !(_DWORD)v95 )
            {
              ptr[0] = (void *)sub_1DD1D30(
                                 *a1,
                                 *(_QWORD *)(v22 + 48),
                                 v24,
                                 *(unsigned int *)(v12 + 4),
                                 *(_QWORD *)(v22 + 40),
                                 0);
              result = (_WORD *)(&dword_0 + 1);
              if ( ((unsigned __int64)ptr[0] & 0xFFFFFFFFFFFFFFF0LL) != 0 )
              {
                v96 = sub_F67970(ptr, *(_QWORD *)(*a1 + 248));
                if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((unsigned __int64)ptr[0] & 0xFFFFFFFFFFFFFFF0LL)
                                                      + 8LL)
                                          & 0xFFFFFFFFFFFFFFF0LL)
                              + 16LL) == 48 )
                  v96 = v96 & 7 | 1 | v96 & 0xFFFFFFFFFFFFFFF8LL;
                v136 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((unsigned __int64)ptr[0] & 0xFFFFFFFFFFFFFFF0LL)
                                                        + 8LL)
                                            & 0xFFFFFFFFFFFFFFF0LL)
                                + 16LL);
                v134 = *(_DWORD *)(v12 + 4);
                v97 = *(_WORD *)(v22 + 70) >> 4;
                v98 = sub_EEE9A0(40, *(_QWORD **)(*a1 + 248), 8u);
                sub_C95A30(v98, v96, (unsigned int)v136 - 43 <= 1, v134, (__int64)&v142, v93, v97, v94);
                return (unsigned __int16 *)v98;
              }
              return result;
            }
            v90 = v142.m128i_i32[1] + 1 - v95;
            sub_1DB7720(&v140, *a1, v142.m128i_u32[1], v95, a5, a6, v87, v142.m128i_i64[0]);
            v142 = _mm_loadu_si128(&v140);
            v143 = (__int64)v141;
          }
          return (unsigned __int16 *)sub_1DD1DD0(
                                       (_DWORD)a1,
                                       v93,
                                       v22,
                                       *(_DWORD *)(v12 + 4),
                                       v90,
                                       v94 & 1,
                                       v142.m128i_i32[0],
                                       v142.m128i_i64[1],
                                       v143);
        }
        if ( v86 == 9 )
        {
          if ( *(_DWORD *)(*a1 + 12632) )
          {
            sub_1DB7720(&si128, *a1, v24, v26, a5, a6, v87, v142.m128i_i64[0]);
          }
          else
          {
            *(__m128i *)ptr = _mm_loadu_si128((const __m128i *)v142.m128i_i64[1]);
            v147[0] = *(void **)(v142.m128i_i64[1] + 16);
            if ( sub_F1D570((__int64)ptr) )
            {
              sub_F1DF30((__int64)&v140, (__int64 *)ptr, v128, v129);
              *(__m128i *)ptr = _mm_loadu_si128(&v140);
              v147[0] = v141;
            }
            si128 = _mm_load_si128((const __m128i *)ptr);
            v145[0] = (__int64)v147[0];
          }
        }
        else
        {
          v145[0] = v89;
          si128 = v87;
        }
        return (unsigned __int16 *)_mm_load_si128(&si128).m128i_i64[1];
      }
      else
      {
        v88 = *((_BYTE *)a1 + 58) == 0;
        result = (_WORD *)(&dword_0 + 1);
        *((_BYTE *)a1 + 57) = 1;
        if ( v88 )
          return (unsigned __int16 *)v12;
      }
      return result;
    case 69:
      return (unsigned __int16 *)sub_1DDC780();
    case 70:
      return (unsigned __int16 *)sub_1DDC7D0();
    case 71:
      return (unsigned __int16 *)sub_1DD2D20();
    case 72:
      return (unsigned __int16 *)sub_1DD7570();
    case 73:
      return (unsigned __int16 *)sub_1DD2DA0();
    case 74:
      return (unsigned __int16 *)sub_1DCD0B0();
    case 75:
      return (unsigned __int16 *)sub_1DB7DC0(a2);
    case 76:
      return (unsigned __int16 *)sub_1DCD170();
    case 77:
      return (unsigned __int16 *)sub_1DD2E50();
    case 78:
      return (unsigned __int16 *)sub_1DD3030();
    case 79:
      return (unsigned __int16 *)sub_1DD3040();
    case 80:
      return (unsigned __int16 *)sub_1DD3050();
    case 81:
      return (unsigned __int16 *)sub_1DD3060();
    case 82:
      return (unsigned __int16 *)sub_1DD3070();
    case 83:
      return (unsigned __int16 *)sub_1DD49D0();
    case 84:
      return (unsigned __int16 *)sub_1DD3080();
    case 85:
      return (unsigned __int16 *)sub_1DD3110();
    case 86:
      return (unsigned __int16 *)sub_1DDEF90();
    case 87:
      return (unsigned __int16 *)sub_1DDF150();
    case 88:
      return (unsigned __int16 *)sub_1DE8FF0();
    case 89:
      return (unsigned __int16 *)sub_1DDF160();
    case 90:
      return (unsigned __int16 *)sub_1DDF170();
    case 91:
      return (unsigned __int16 *)sub_1DD3170();
    case 92:
      return (unsigned __int16 *)sub_1DDF8D0();
    case 93:
      return (unsigned __int16 *)sub_1DD3270();
    case 94:
      return (unsigned __int16 *)sub_1DCD190();
    case 95:
      return (unsigned __int16 *)sub_1DD1C00();
    case 96:
      return (unsigned __int16 *)sub_1DCD200();
    case 97:
      return (unsigned __int16 *)sub_1DD3400();
    case 98:
      return (unsigned __int16 *)sub_1DDAFF0();
    case 99:
      return (unsigned __int16 *)sub_1DEC610();
    case 100:
      return (unsigned __int16 *)sub_1DDF2B0();
    case 101:
      return (unsigned __int16 *)sub_1DB7DD0(a2);
    case 102:
      return (unsigned __int16 *)sub_1DCD210();
    case 103:
      return (unsigned __int16 *)sub_1DDFA80();
    case 104:
      return (unsigned __int16 *)sub_1DDB320();
    case 105:
      return (unsigned __int16 *)sub_1DE0F40();
    case 106:
      return (unsigned __int16 *)sub_1DEAA60();
    case 107:
      return (unsigned __int16 *)sub_1DDB450();
    case 108:
      return (unsigned __int16 *)sub_1DDB570();
    case 109:
      v18 = *(_QWORD *)(a2 + 16);
      v19 = *a1;
      v20 = (_QWORD *)(*(_QWORD *)(v18 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v18 + 16) & 4) != 0 )
        v20 = (_QWORD *)*v20;
      v21 = *(_DWORD *)(a2 + 4);
      if ( v20 )
        v20 -= 9;
      return (unsigned __int16 *)sub_190FB60(v19, v21, (__int64)v20, v18, nullptr, *(double *)a7.m128_u64, a8);
    case 110:
      return (unsigned __int16 *)sub_1DDF390();
    case 111:
      return (unsigned __int16 *)sub_1DE0090();
    case 112:
      return (unsigned __int16 *)sub_1DB7DE0(a2);
    case 113:
      return (unsigned __int16 *)sub_1DCD2A0();
    case 114:
      v14 = (_QWORD *)*a1;
      ptr[1] = &dword_0 + 1;
      v15 = v147;
      ptr[0] = v14;
      do
      {
        *v15 = (void *)-4096LL;
        v15 += 2;
      }
      while ( v15 != (void **)&v149 );
      v149 = &v151;
      v150 = 0x100000000LL;
      v16 = v14[1410];
      v154 = 1;
      v152 = v16;
      v153 = 256;
      v155 = 0;
      v14[1410] = ptr;
      v17 = sub_1DFD4F0(a1, v12, -4096, &v149);
      sub_1CB3BA0((__int64)ptr);
      return (unsigned __int16 *)v17;
    case 115:
      return (unsigned __int16 *)sub_1DDC870();
    case 116:
      return (unsigned __int16 *)sub_1DDCA30();
    case 117:
      return (unsigned __int16 *)sub_1DDF760();
    case 118:
      return (unsigned __int16 *)sub_1DD1CD0();
    case 119:
      return (unsigned __int16 *)sub_1DD3490();
    case 120:
      return (unsigned __int16 *)sub_1DCD300();
    case 121:
      return (unsigned __int16 *)sub_1DCD3C0();
    case 122:
      sub_2EAD22(a1);
    case 123:
      sub_2EAD22(a1);
    case 124:
      return (unsigned __int16 *)sub_1DDB5F0();
    case 125:
      return (unsigned __int16 *)sub_1DCD610();
    case 126:
      return (unsigned __int16 *)sub_1DCD6D0();
    default:
      return (unsigned __int16 *)a2;
  }
}
