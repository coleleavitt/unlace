__int64 __fastcall sub_153A000(
        const __m128i *a1,
        __int64 (__fastcall ***a2)(),
        __int64 a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128 a8)
{
  __int64 (__fastcall ***v8)(); // r15
  void *v9; // r10
  unsigned int v12; // ebp
  const __m128i *v13; // rbx
  int v14; // r14d
  void **v15; // r8
  __int64 (__fastcall **v16)(); // r9
  __int64 result; // rax
  __int64 v18; // rdi
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int16 v21; // cx
  __int64 v22; // rsi
  __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  int v25; // eax
  bool v26; // r14
  char v27; // al
  void *v28; // r10
  void **v29; // r8
  __int64 (__fastcall **v30)(); // r9
  char *v31; // rdx
  char v32; // al
  int v33; // eax
  __int64 v34; // rdi
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int16 v37; // r14
  char v38; // al
  __int64 (__fastcall **v39)(); // r14
  void *v40; // r10
  void **v41; // r8
  unsigned int *v42; // rsi
  __int64 (__fastcall **v43)(); // r9
  __int64 v44; // rcx
  _BYTE *v45; // rsi
  __int64 (__fastcall **v46)(); // r9
  void **v47; // r8
  __int64 (__fastcall **v48)(); // rdx
  void *v49; // r10
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 (__fastcall **v53)(); // r14
  __int64 (__fastcall **v54)(); // rdi
  __int64 (__fastcall *v55)(); // rax
  __int64 v56; // rsi
  int *m128i_i32; // r12
  char *v58; // rsi
  __int32 v59; // eax
  __int64 *v60; // rdi
  __int64 v61; // rsi
  __int64 v62; // rsi
  char *v63; // rsi
  __int32 v64; // eax
  __int64 *v65; // rdi
  __int64 v66; // rsi
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rsi
  const char *v70; // r12
  __int64 v71; // rbp
  size_t v72; // rax
  __int64 *v73; // rdi
  unsigned __int16 v74; // bp
  __int64 *v75; // rdi
  __int64 v76; // r12
  __int64 *v77; // rdi
  unsigned int v78; // eax
  __int64 *v79; // rbp
  __int64 v80; // r14
  __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 *v83; // rdi
  size_t v84; // rdx
  __int64 v85; // rdx
  int v86; // eax
  int v87; // eax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 (__fastcall *v90)(); // rdi
  __int64 (__fastcall *v91)(); // rax
  __int64 v92; // rbp
  const __m128i *v93; // r13
  __int64 (__fastcall *v94)(); // rbx
  char *v95; // rdi
  __int64 *v96; // rdi
  int *v97; // r9
  unsigned __int32 v98; // ebp
  __int64 v99; // rax
  unsigned int v100; // ecx
  unsigned int v101; // edx
  int v102; // [rsp+8h] [rbp-100h]
  void *v103; // [rsp+8h] [rbp-100h]
  __int64 *v104; // [rsp+8h] [rbp-100h]
  void *v105; // [rsp+10h] [rbp-F8h]
  void *v106; // [rsp+10h] [rbp-F8h]
  void *v107; // [rsp+10h] [rbp-F8h]
  void *v108; // [rsp+10h] [rbp-F8h]
  void *v109; // [rsp+10h] [rbp-F8h]
  void *v110; // [rsp+10h] [rbp-F8h]
  void *v111; // [rsp+10h] [rbp-F8h]
  void *v112; // [rsp+10h] [rbp-F8h]
  void *v113; // [rsp+10h] [rbp-F8h]
  void **v114; // [rsp+18h] [rbp-F0h]
  void **v115; // [rsp+18h] [rbp-F0h]
  void **v116; // [rsp+18h] [rbp-F0h]
  void *v117; // [rsp+18h] [rbp-F0h]
  void **v118; // [rsp+18h] [rbp-F0h]
  void *v119; // [rsp+18h] [rbp-F0h]
  void *v120; // [rsp+18h] [rbp-F0h]
  void **v121; // [rsp+18h] [rbp-F0h]
  void **v122; // [rsp+18h] [rbp-F0h]
  void **v123; // [rsp+18h] [rbp-F0h]
  void **v124; // [rsp+18h] [rbp-F0h]
  void **v125; // [rsp+18h] [rbp-F0h]
  void *v126; // [rsp+18h] [rbp-F0h]
  __int64 v127; // [rsp+18h] [rbp-F0h]
  void **v128; // [rsp+18h] [rbp-F0h]
  __int64 (__fastcall *v129)(); // [rsp+18h] [rbp-F0h]
  __int64 (__fastcall **srcc)(); // [rsp+20h] [rbp-E8h]
  __int64 (__fastcall **src)(); // [rsp+20h] [rbp-E8h]
  __int64 (__fastcall **srcd)(); // [rsp+20h] [rbp-E8h]
  void **srca; // [rsp+20h] [rbp-E8h]
  __int64 (__fastcall **srcb)(); // [rsp+20h] [rbp-E8h]
  void **srce; // [rsp+20h] [rbp-E8h]
  void **srcf; // [rsp+20h] [rbp-E8h]
  __int64 (__fastcall **srcg)(); // [rsp+20h] [rbp-E8h]
  __int64 (__fastcall **srch)(); // [rsp+20h] [rbp-E8h]
  __int64 (__fastcall **srci)(); // [rsp+20h] [rbp-E8h]
  __int64 (__fastcall **srcj)(); // [rsp+20h] [rbp-E8h]
  __int64 (__fastcall **srck)(); // [rsp+20h] [rbp-E8h]
  void *srcl; // [rsp+20h] [rbp-E8h]
  __int64 (__fastcall **srcm)(); // [rsp+20h] [rbp-E8h]
  void *srcn; // [rsp+20h] [rbp-E8h]
  __int64 (__fastcall **v145)(); // [rsp+28h] [rbp-E0h]
  void *v146; // [rsp+28h] [rbp-E0h]
  void *v147; // [rsp+28h] [rbp-E0h]
  __int64 (__fastcall **v148)(); // [rsp+28h] [rbp-E0h]
  void **v149; // [rsp+28h] [rbp-E0h]
  void *v150; // [rsp+28h] [rbp-E0h]
  void **v151; // [rsp+28h] [rbp-E0h]
  __int64 (__fastcall **v152)(); // [rsp+30h] [rbp-D8h]
  __int64 (__fastcall **v153)(); // [rsp+38h] [rbp-D0h]
  unsigned int v154; // [rsp+38h] [rbp-D0h]
  __int64 v155; // [rsp+48h] [rbp-C0h]
  __int32 v156; // [rsp+5Ch] [rbp-ACh] BYREF
  void *v157; // [rsp+60h] [rbp-A8h] BYREF
  size_t n; // [rsp+68h] [rbp-A0h]
  __int64 (__fastcall *v159)(); // [rsp+70h] [rbp-98h] BYREF
  __int64 (__fastcall **v160)(); // [rsp+80h] [rbp-88h] BYREF
  __int64 v161; // [rsp+88h] [rbp-80h]
  __int128 v162; // [rsp+90h] [rbp-78h]
  __int64 v163; // [rsp+A0h] [rbp-68h]
  __int64 v164; // [rsp+A8h] [rbp-60h]
  int v165; // [rsp+B0h] [rbp-58h]

  v8 = a2;
  v9 = a4;
  v12 = a3;
  v13 = a1;
  v14 = a1[2].m128i_u16[0];
  v156 = 0;
  v15 = &v157;
  v102 = a3 & 1;
  v16 = &v159;
LABEL_2:
  while ( 2 )
  {
    switch ( v14 )
    {
      case 3:
        v67 = v13->m128i_i64[1];
        if ( *(_QWORD *)(v67 + 760) )
        {
          *(_BYTE *)(v67 + 968) = 1;
          *(_BYTE *)(*(_QWORD *)(v67 + 48) + 6LL) = 1;
        }
        v68 = v13[6].m128i_i64[0];
        v13[2].m128i_i16[0] = 1;
        sub_172A9A0(*(_QWORD *)(v68 + 656), *(_QWORD *)(v68 + 608), 8);
        return 1;
      case 5:
        goto LABEL_6;
      case 24:
        return sub_1533380((__int64)v13, 0, 0x400008u);
      case 63:
        v74 = v13[2].m128i_u16[1];
        v75 = (__int64 *)v13->m128i_i64[1];
        v76 = v13[6].m128i_i64[0];
        v13[2].m128i_i32[2] = v13[1].m128i_i32[0];
        sub_14634E0(v75, v13[1].m128i_i32);
        return sub_1C36210(v76, v13[2].m128i_u32[2], (v74 >> 4) & 1);
      case 73:
        v73 = (__int64 *)v13->m128i_i64[1];
        v13[2].m128i_i32[2] = v13[1].m128i_i32[0];
        sub_14634E0(v73, v13[1].m128i_i32);
        return sub_14F7130(v13, v13[2].m128i_u32[2], v12, a7);
      case 77:
        v70 = "break";
        v71 = sub_1534900((__int64)v13);
        goto LABEL_75;
      case 78:
        return sub_1537F40(v13, v12, 0, 0, (__int64)v15, a7);
      case 81:
        v70 = "continue";
        v71 = sub_15348D0((__int64)v13);
        goto LABEL_75;
      case 82:
        return sub_1540BB0(v13, v12, a3, a4, v15, v16);
      case 83:
        v70 = "do/while";
        v71 = sub_153FCE0(v13, a2, a3, a4, v15, v16);
        goto LABEL_75;
      case 89:
        return sub_153E260(v13, v9, a3, a4, v15, v16);
      case 90:
        v70 = "goto";
        v71 = sub_1534560((__int64)v13, a7);
        goto LABEL_75;
      case 91:
        return sub_153D8A0(v13, v9, a3, a4, v15, v16);
      case 97:
        v70 = "return";
        v71 = sub_1534930((__int64)v13, a7);
        goto LABEL_75;
      case 104:
        return sub_15408A0(v13, v9, a3, a4, v15, v16);
      case 110:
        return sub_15403A0(v13, v9, a3, a4, v15, v16);
      case 126:
        v79 = *(__int64 **)(a5 + 8);
        v104 = &v79[*(unsigned int *)(a5 + 16)];
        while ( v104 != v79 )
        {
          v80 = *v79;
          v81 = 1716;
          v82 = *(unsigned int *)(*v79 + 24);
          if ( (*(_BYTE *)(*v79 + 35) & 2) == 0 )
            v81 = 127;
          ++v79;
          sub_1564820(&v160, v13, v82, v81);
          sub_AE9DF0((unsigned __int8 **)&v160, v80, 0x10u);
          sub_AEA040((__int64)&v160);
        }
        *(_DWORD *)(a5 + 16) = 0;
        sub_15DCED0(*(_QWORD *)(a5 + 40), a5 + 40);
        *(_DWORD *)(a5 + 56) = 0;
        *(_QWORD *)a5 = 0;
        sub_1481E50((__int64)v13, a6, 0);
        LOBYTE(v160) = 0;
        result = sub_154A470(v13, &v160);
        v71 = result;
        if ( (_BYTE)v160 )
          return result;
        v70 = "asm";
LABEL_75:
        if ( v13[2].m128i_i16[0] == 63 )
        {
          v83 = (__int64 *)v13->m128i_i64[1];
          v13[2].m128i_i32[2] = v13[1].m128i_i32[0];
          sub_14634E0(v83, v13[1].m128i_i32);
        }
        else if ( v71 != 1 )
        {
          v72 = j__strlen(v70);
          sub_1569A00(v13, 63, 1646, v70, v72);
          LOWORD(v160) = 25;
          sub_15680D0(v13, &v160, 1, 3);
        }
        return v71;
      case 146:
        LODWORD(v160) = 0;
        v78 = sub_14A0B20((__int64)v13);
        sub_155BF10(v13, 8, &v160, v78);
        return 1;
      case 150:
        v77 = (__int64 *)v13->m128i_i64[1];
        v13[2].m128i_i32[2] = v13[1].m128i_i32[0];
        sub_14634E0(v77, v13[1].m128i_i32);
        return sub_1536E10(v13, v13[2].m128i_u32[2], 0, a7, a8);
      case 169:
        v70 = "co_return";
        v71 = sub_1534930((__int64)v13, a7);
        goto LABEL_75;
      case 189:
        a2 = (__int64 (__fastcall ***)())a6;
        srcg = v16;
        v121 = v15;
        v108 = v9;
        v156 = v13[1].m128i_i32[0];
        sub_1490230(v13, a6, 0, 0, a7, a8);
        v14 = v13[2].m128i_u16[0];
        v9 = v108;
        v15 = v121;
        v16 = srcg;
        continue;
      case 391:
        sub_1481E50((__int64)v13, a5, 0);
        sub_1481E50((__int64)v13, a6, 0);
        return sub_1533CA0((__int64)v13, a7);
      case 393:
        v70 = "__leave";
        v71 = sub_15332D0((__int64)v13);
        goto LABEL_75;
      case 395:
      case 396:
        sub_1481E50((__int64)v13, a5, 0);
        sub_1481E50((__int64)v13, a6, 0);
        sub_153C5C0(v13, v8);
        return 0;
      case 427:
        sub_1481E50((__int64)v13, a5, 0);
        sub_1481E50((__int64)v13, a6, 0);
        sub_1526F20((__int64)v13);
        return 0;
      case 428:
        sub_1481E50((__int64)v13, a5, 0);
        sub_1481E50((__int64)v13, a6, 0);
        sub_1526F60((__int64)v13);
        return 0;
      case 430:
        sub_1481E50((__int64)v13, a5, 0);
        sub_1481E50((__int64)v13, a6, 0);
        return sub_1527940((__int64)v13);
      case 431:
        sub_1481E50((__int64)v13, a5, 0);
        sub_1481E50((__int64)v13, a6, 0);
        sub_1527030((__int64)v13, a7);
        return 0;
      case 432:
        sub_1481E50((__int64)v13, a5, 0);
        sub_1481E50((__int64)v13, a6, 0);
        sub_1526FD0((__int64)v13);
        return 0;
      case 433:
        sub_1481E50((__int64)v13, a5, 0);
        sub_1481E50((__int64)v13, a6, 0);
        sub_1527000((__int64)v13);
        return 0;
      case 434:
        sub_1481E50((__int64)v13, a5, 0);
        sub_1481E50((__int64)v13, a6, 0);
        sub_1527550((__int64)v13);
        return 0;
      case 435:
        sub_1481E50((__int64)v13, a5, 0);
        sub_1481E50((__int64)v13, a6, 0);
        sub_15275C0((__int64)v13);
        return 0;
      case 436:
        sub_1481E50((__int64)v13, a5, 0);
        sub_1481E50((__int64)v13, a6, 0);
        sub_15276A0((__int64)v13);
        return 0;
      case 437:
        v66 = a5;
        m128i_i32 = v13[1].m128i_i32;
        sub_1481E50((__int64)v13, v66, 0);
        sub_1481E50((__int64)v13, a6, 0);
        sub_1564840(&v160, v13, &v13[1], 1859);
        v58 = "fp_contract";
        goto LABEL_48;
      case 438:
      case 439:
        sub_1481E50((__int64)v13, a5, 0);
        sub_1481E50((__int64)v13, a6, 0);
        sub_1564840(&v160, v13, &v13[1], 1859);
        v63 = "STDC FENV_ACCESS";
        if ( (_WORD)v14 != 438 )
          v63 = "fenv_access";
        sub_1533090((unsigned __int8 **)&v160, (__int64)v63);
        sub_AEA040((__int64)&v160);
        v64 = v13[1].m128i_i32[1];
        v65 = (__int64 *)v13->m128i_i64[1];
        if ( !v64 )
          v64 = v13[1].m128i_i32[0];
        v13[2].m128i_i32[2] = v64;
        sub_14634E0(v65, v13[1].m128i_i32);
        return 0;
      case 440:
        v62 = a5;
        m128i_i32 = v13[1].m128i_i32;
        sub_1481E50((__int64)v13, v62, 0);
        sub_1481E50((__int64)v13, a6, 0);
        sub_1564840(&v160, v13, &v13[1], 1859);
        v58 = "STDC FENV_ROUND";
        goto LABEL_48;
      case 441:
        v61 = a5;
        m128i_i32 = v13[1].m128i_i32;
        sub_1481E50((__int64)v13, v61, 0);
        sub_1481E50((__int64)v13, a6, 0);
        sub_1564840(&v160, v13, &v13[1], 1859);
        v58 = "STDC CX_LIMITED_RANGE";
        goto LABEL_48;
      case 442:
        v56 = a5;
        m128i_i32 = v13[1].m128i_i32;
        sub_1481E50((__int64)v13, v56, 0);
        sub_1481E50((__int64)v13, a6, 0);
        sub_1564840(&v160, v13, &v13[1], 1859);
        v58 = "float_control";
        goto LABEL_48;
      case 443:
        sub_1481E50((__int64)v13, a5, 0);
        sub_1481E50((__int64)v13, a6, 0);
        sub_1527CF0((__int64)v13);
        return 0;
      case 444:
        sub_1481E50((__int64)v13, a5, 0);
        sub_1481E50((__int64)v13, a6, 0);
        sub_1527D30((__int64)v13);
        return 0;
      case 445:
        sub_1481E50((__int64)v13, a5, 0);
        sub_1481E50((__int64)v13, a6, 0);
        sub_1527D90((__int64)v13);
        return 0;
      case 446:
        sub_1481E50((__int64)v13, a5, 0);
        sub_1481E50((__int64)v13, a6, 0);
        sub_1527A60((__int64)v13);
        return 0;
      case 447:
        return sub_151E160((__int64)v13, (int *)v12, 0, a7, a8);
      case 448:
        sub_1481E50((__int64)v13, a5, 0);
        sub_1481E50((__int64)v13, a6, 0);
        return sub_151E160((__int64)v13, (int *)v12, 0, a7, a8);
      case 450:
        return sub_157D1F0(v13, a2, a3, a4, v15, v16);
      case 452:
        v103 = v9;
        sub_1481E50((__int64)v13, a5, 0);
        sub_1481E50((__int64)v13, a6, 0);
        return sub_153B3A0(v13, v8, v12, v103, a5);
      case 453:
        v69 = a5;
        m128i_i32 = v13[1].m128i_i32;
        sub_1481E50((__int64)v13, v69, 0);
        sub_1481E50((__int64)v13, a6, 0);
        sub_1564840(&v160, v13, &v13[1], 1859);
        v58 = "clang fp";
LABEL_48:
        sub_1533090((unsigned __int8 **)&v160, (__int64)v58);
        sub_AEA040((__int64)&v160);
        v59 = v13[1].m128i_i32[1];
        v60 = (__int64 *)v13->m128i_i64[1];
        if ( !v59 )
          v59 = v13[1].m128i_i32[0];
        v13[2].m128i_i32[2] = v59;
        sub_14634E0(v60, m128i_i32);
        return 1;
      case 454:
        sub_1481E50((__int64)v13, a5, 0);
        sub_1481E50((__int64)v13, a6, 0);
        sub_1531FC0((__int64)v13, a7, a8);
        return 0;
      default:
        goto LABEL_16;
    }
  }
  while ( 1 )
  {
LABEL_16:
    if ( (*(_BYTE *)(*(_QWORD *)(v13->m128i_i64[1] + 56) + 1LL) & 8) != 0 )
    {
      if ( (unsigned __int16)(v13[2].m128i_i16[0] - 406) <= 8u
        || (a2 = nullptr,
            srcm = v16,
            v128 = v15,
            v113 = v9,
            v87 = sub_155CBC0(v13, 0, 1),
            v9 = v113,
            v15 = v128,
            v16 = srcm,
            v87) )
      {
        a2 = (__int64 (__fastcall ***)())a5;
        srcj = v16;
        v124 = v15;
        v111 = v9;
        sub_14AB020((__int64)v13, (unsigned int *)a5, a7, a8);
        v14 = v13[2].m128i_u16[0];
        v9 = v111;
        v15 = v124;
        v16 = srcj;
        goto LABEL_2;
      }
    }
    v26 = 1;
    if ( !*(_DWORD *)(a5 + 16) )
      v26 = *(_DWORD *)(a6 + 16) != 0;
    src = v16;
    v115 = v15;
    v106 = v9;
    v27 = sub_1532EC0(a5, (__int64)a2);
    v28 = v106;
    v29 = v115;
    v30 = src;
    if ( v27 )
    {
      v27 = sub_1532EC0(a6, (__int64)a2);
      v30 = src;
      v29 = v115;
      v28 = v106;
    }
    v31 = *(char **)(v13->m128i_i64[1] + 56);
    if ( (v31[1] & 8) != 0 )
      break;
    if ( *v31 < 0 || v102 )
    {
      if ( v156 && (!v26 || !v27) )
        goto LABEL_152;
      srcd = v30;
      v116 = v29;
      v107 = v28;
      v32 = sub_147EA80((__int64)v13, 0, 1);
      v30 = srcd;
      v29 = v116;
      v28 = v107;
      goto LABEL_28;
    }
LABEL_29:
    v33 = v13[2].m128i_u16[0];
    if ( (_WORD)v33 == 25 )
    {
      sub_1564840(&v160, v13, &v13[1], 1653);
      sub_AEA040((__int64)&v160);
      return 1;
    }
    if ( (unsigned int)(v33 - 258) > 0xF )
      return sub_1539E00(v13, v12);
    v34 = v13->m128i_i64[1];
    v35 = *(_QWORD *)(v34 + 2944);
    if ( v35 >= *(unsigned int *)(v34 + 2912) )
    {
      srck = v30;
      v125 = v29;
      v112 = v28;
      v36 = sub_14180A0(v34, 1u);
      v30 = srck;
      v29 = v125;
      v28 = v112;
    }
    else
    {
      v36 = *(_QWORD *)(v34 + 2904) + 24 * v35;
    }
    v145 = v30;
    srca = v29;
    v117 = v28;
    if ( *(_WORD *)(v36 + 16) != 47 )
      return sub_1539E00(v13, v12);
    v13[2].m128i_i16[0] = 5;
    sub_1564840(&v160, v13, &v13[1], 2001);
    v37 = v13[2].m128i_u16[0];
    v38 = sub_141A630(v37);
    if ( v37 == 1 || v38 )
      BUG();
    v39 = v160;
    v40 = v117;
    v41 = srca;
    v42 = *(unsigned int **)(v13[1].m128i_i64[1] + 16);
    v43 = v145;
    v44 = *v42;
    v45 = v42 + 4;
    if ( !v160 )
    {
      v85 = v161;
      v86 = *(_DWORD *)(v161 + 14976);
      if ( v86 )
      {
        v88 = (unsigned int)(v86 - 1);
        *(_DWORD *)(v161 + 14976) = v88;
        v39 = *(__int64 (__fastcall ***)())(v85 + 8 * v88 + 14848);
        v89 = *((unsigned int *)v39 + 134);
        *(_BYTE *)v39 = 0;
        v90 = v39[66];
        *((_DWORD *)v39 + 106) = 0;
        v91 = (__int64 (__fastcall *)())((char *)v90 + 64 * v89);
        v129 = v90;
        if ( v90 != v91 )
        {
          v154 = v12;
          v92 = v44;
          v155 = a6;
          v93 = v13;
          v94 = v91;
          do
          {
            while ( 1 )
            {
              v94 = (__int64 (__fastcall *)())((char *)v94 - 64);
              v95 = *((char **)v94 + 3);
              if ( v95 == (char *)v94 + 40 )
                break;
              v152 = v43;
              v151 = v41;
              srcn = v40;
              operator delete(v95);
              v40 = srcn;
              v41 = v151;
              v43 = v152;
              if ( v129 == v94 )
                goto LABEL_132;
            }
          }
          while ( v129 != v94 );
LABEL_132:
          v44 = v92;
          v13 = v93;
          v12 = v154;
          a6 = v155;
        }
        *((_DWORD *)v39 + 134) = 0;
      }
      else
      {
        v153 = v145;
        v150 = v117;
        v127 = v44;
        v39 = (__int64 (__fastcall **)())operator new(0x3A0u);
        *(_BYTE *)v39 = 0;
        v39[12] = (__int64 (__fastcall *)())(v39 + 14);
        v39[16] = (__int64 (__fastcall *)())(v39 + 18);
        v39[20] = (__int64 (__fastcall *)())(v39 + 22);
        v39[24] = (__int64 (__fastcall *)())(v39 + 26);
        v39[28] = (__int64 (__fastcall *)())(v39 + 30);
        v39[32] = (__int64 (__fastcall *)())(v39 + 34);
        v39[36] = (__int64 (__fastcall *)())(v39 + 38);
        v39[40] = (__int64 (__fastcall *)())(v39 + 42);
        v39[44] = (__int64 (__fastcall *)())(v39 + 46);
        v39[48] = (__int64 (__fastcall *)())(v39 + 50);
        v39[52] = (__int64 (__fastcall *)())(v39 + 54);
        v39[13] = nullptr;
        *((_BYTE *)v39 + 112) = 0;
        v39[17] = nullptr;
        *((_BYTE *)v39 + 144) = 0;
        v39[21] = nullptr;
        *((_BYTE *)v39 + 176) = 0;
        v39[25] = nullptr;
        *((_BYTE *)v39 + 208) = 0;
        v39[29] = nullptr;
        *((_BYTE *)v39 + 240) = 0;
        v39[33] = nullptr;
        *((_BYTE *)v39 + 272) = 0;
        v39[37] = nullptr;
        *((_BYTE *)v39 + 304) = 0;
        v39[41] = nullptr;
        *((_BYTE *)v39 + 336) = 0;
        v39[45] = nullptr;
        *((_BYTE *)v39 + 368) = 0;
        v39[49] = nullptr;
        *((_BYTE *)v39 + 400) = 0;
        v39[53] = (__int64 (__fastcall *)())0x800000000LL;
        v44 = v127;
        v39[66] = (__int64 (__fastcall *)())(v39 + 68);
        v39[67] = (__int64 (__fastcall *)())0x600000000LL;
        v40 = v150;
        v41 = srca;
        v43 = v153;
      }
      v160 = v39;
    }
    v146 = v40;
    srcb = v43;
    *((_BYTE *)v39 + *(unsigned __int8 *)v39 + 1) = 0;
    v118 = v41;
    v157 = v43;
    sub_1532FD0(v41, v45, (__int64)&v45[v44]);
    v46 = srcb;
    v47 = v118;
    v48 = v160;
    v49 = v146;
    v50 = *(unsigned __int8 *)v160;
    *(_BYTE *)v160 = v50 + 1;
    v51 = (unsigned __int8)v50;
    v52 = 4 * (v50 + 3);
    v53 = &v48[v52];
    v54 = (__int64 (__fastcall **)())v48[v52];
    if ( v157 == srcb )
    {
      v84 = n;
      if ( n )
      {
        if ( n == 1 )
        {
          *(_BYTE *)v54 = (_BYTE)v159;
          v84 = n;
          v54 = (__int64 (__fastcall **)())*v53;
        }
        else
        {
          v149 = v118;
          srcl = v49;
          v126 = v46;
          memcpy(v54, v46, n);
          v84 = n;
          v54 = (__int64 (__fastcall **)())*v53;
          v47 = v149;
          v49 = srcl;
          v46 = v126;
        }
      }
      v53[1] = (__int64 (__fastcall *)())v84;
      *((_BYTE *)v54 + v84) = 0;
      v54 = (__int64 (__fastcall **)())v157;
    }
    else
    {
      if ( v54 == &v48[v52 + 2] )
      {
        *v53 = (__int64 (__fastcall *)())v157;
        v53[1] = (__int64 (__fastcall *)())n;
        v53[2] = v159;
      }
      else
      {
        v55 = v48[4 * v51 + 14];
        *v53 = (__int64 (__fastcall *)())v157;
        v53[1] = (__int64 (__fastcall *)())n;
        v53[2] = v159;
        if ( v54 )
        {
          v157 = v54;
          v159 = v55;
          goto LABEL_41;
        }
      }
      v157 = srcb;
      v54 = srcb;
    }
LABEL_41:
    n = 0;
    *(_BYTE *)v54 = 0;
    if ( v157 != v46 )
    {
      v147 = v46;
      srce = v47;
      v119 = v49;
      operator delete(v157);
      v46 = v147;
      v47 = srce;
      v49 = v119;
    }
    a2 = nullptr;
    v148 = (__int64 (__fastcall **)())v46;
    srcf = v47;
    v120 = v49;
    sub_AE9DF0((unsigned __int8 **)&v160, 0, 2u);
    sub_AEA040((__int64)&v160);
    v9 = v120;
    v15 = srcf;
    v16 = v148;
LABEL_6:
    v18 = v13->m128i_i64[1];
    v19 = *(_QWORD *)(v18 + 2944);
    if ( *(unsigned int *)(v18 + 2912) <= v19 )
    {
      a2 = (__int64 (__fastcall ***)())(&dword_0 + 1);
      srch = v16;
      v122 = v15;
      v109 = v9;
      v20 = sub_14180A0(v18, 1u);
      v16 = srch;
      v15 = v122;
      v9 = v109;
    }
    else
    {
      v20 = *(_QWORD *)(v18 + 2904) + 24 * v19;
    }
    v21 = *(_WORD *)(v20 + 16);
    if ( v21 == 62 )
    {
      sub_15D8C80(a5, a6);
      return sub_1541780(v13, a5, v12);
    }
    if ( v21 != 72 )
    {
      v22 = *(_QWORD *)v20;
      v23 = *(_QWORD *)(v20 + 8);
      a7 = 0;
      LODWORD(v20) = *(_DWORD *)(v20 + 16);
      HIWORD(v161) = 0;
      v163 = v22;
      v165 = v20;
      BYTE3(v161) = 1;
      BYTE5(v161) = 0;
      LOBYTE(v20) = 0;
      v162 = 0;
      v160 = off_2BB3C40;
      v164 = v23;
      if ( v21 <= 0x3Fu )
        v20 = (0x8000000001400020LL >> v21) & 1;
      LOBYTE(v24) = 0;
      if ( v21 <= 0x2Fu )
        v24 = (0x800090500020uLL >> v21) & 1;
      BYTE4(v161) = v20;
      LOBYTE(v161) = v24;
      *(_WORD *)((char *)&v161 + 1) = (v21 & 0xFFDF) == 5 || ((v21 - 22) & 0xFFFB) == 0;
      a2 = &v160;
      srcc = v16;
      v114 = v15;
      v105 = v9;
      v25 = sub_1566470(v13, &v160, 0);
      v9 = v105;
      v15 = v114;
      v16 = srcc;
      if ( !v25 )
      {
        LOWORD(v157) = 25;
        sub_15680D0(v13, &v157, 1, 3);
        if ( v13[2].m128i_i16[0] == 63 )
        {
          v96 = (__int64 *)v13->m128i_i64[1];
          v13[2].m128i_i32[2] = v13[1].m128i_i32[0];
          sub_14634E0(v96, v13[1].m128i_i32);
        }
        return 1;
      }
      v14 = v13[2].m128i_u16[0];
      if ( (_WORD)v14 != 5 )
        goto LABEL_2;
    }
  }
  if ( v156 && (!v26 || !v27) )
  {
LABEL_152:
    LODWORD(v160) = 0;
    goto LABEL_153;
  }
  srci = v30;
  v123 = v29;
  v110 = v28;
  v32 = sub_1562A00(v13, 0);
  v28 = v110;
  v29 = v123;
  v30 = srci;
LABEL_28:
  if ( !v32 )
    goto LABEL_29;
  v97 = nullptr;
  v98 = v13[1].m128i_u32[0];
  LODWORD(v160) = 0;
  if ( !v156 )
    goto LABEL_143;
LABEL_153:
  v98 = v156;
  v97 = &v156;
LABEL_143:
  v99 = sub_14977F0((__int64)v13, 8u, &v160, a5, (__int64 *)a6, v97, a7, a8);
  v100 = *(_DWORD *)a5;
  v101 = *(_DWORD *)a6;
  if ( *(_DWORD *)a5 )
  {
    if ( v101 && v100 > v101 )
      v100 = *(_DWORD *)a6;
    v98 = v100;
  }
  else if ( v101 )
  {
    v98 = *(_DWORD *)a6;
  }
  return sub_1C36280(v13[6].m128i_i64[0], v99, v98, (unsigned int)v160);
}
