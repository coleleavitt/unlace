unsigned __int64 __fastcall sub_57FC40(__int64 a1, unsigned int a2, unsigned __int16 a3)
{
  unsigned int v3; // ecx
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rsi
  unsigned __int16 *v8; // rdx
  unsigned __int16 v9; // r11
  __int64 v10; // rcx
  __int64 *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __m128i v14; // xmm0
  __int64 v15; // rcx
  bool v16; // r12
  __int64 v17; // rsi
  unsigned int v18; // r13d
  __int64 v19; // r8
  char v20; // r15
  int v21; // r14d
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // rcx
  char v27; // bl
  unsigned __int64 v28; // rbp
  unsigned int v29; // ebx
  bool v30; // zf
  __int16 v31; // bp
  unsigned __int8 v32; // r10
  char v33; // r15
  __int64 v34; // rdi
  __m128i *v35; // rbx
  unsigned int v36; // eax
  unsigned __int32 v37; // edx
  unsigned int v38; // r9d
  __int64 v39; // r8
  unsigned int v40; // r11d
  unsigned int v41; // esi
  unsigned int v42; // ecx
  unsigned __int32 v43; // r12d
  unsigned __int32 v44; // edx
  unsigned int v45; // r14d
  __int64 v46; // rcx
  unsigned __int32 v47; // esi
  unsigned __int32 v48; // edx
  __int64 v49; // r9
  int v50; // r13d
  __m128i *v51; // r12
  _DWORD *v52; // rax
  unsigned __int64 v53; // rbp
  _QWORD *v54; // rax
  unsigned __int64 v55; // rdi
  unsigned __int16 *v56; // rax
  char v57; // bl
  char v58; // al
  unsigned int v59; // eax
  size_t v60; // rdx
  const void *v61; // rdi
  int v62; // eax
  __int16 v63; // bp
  char *v64; // rax
  unsigned int v65; // esi
  unsigned int v66; // r8d
  unsigned int v67; // ecx
  unsigned int v68; // edx
  unsigned int v69; // r9d
  _DWORD *v70; // rax
  __m128i *v71; // r12
  unsigned __int16 v72; // si
  char *v73; // rax
  char v74; // dl
  char *v75; // rcx
  int v76; // r9d
  _WORD *v77; // rax
  int v78; // kr00_4
  __int64 v79; // rsi
  __int64 v80; // rdi
  __int64 v81; // rdx
  __int64 v82; // rax
  int v83; // eax
  unsigned int v84; // esi
  int v86; // r9d
  int v87; // edx
  int v88; // r11d
  __int16 v89; // dx
  __int64 v90; // rsi
  __int64 v91; // rdx
  char v92; // al
  __int16 v93; // r8
  char v94; // al
  unsigned int v95; // eax
  unsigned __int16 *v96; // rax
  int v97; // r12d
  __int16 *v98; // rdx
  int i; // edi
  int v100; // ecx
  __int16 *v101; // rax
  __int16 *v102; // rcx
  __int16 v103; // ax
  char v104; // al
  __int16 v105; // r11
  __int16 v106; // cx
  int v107; // [rsp+8h] [rbp-E0h]
  unsigned int v108; // [rsp+8h] [rbp-E0h]
  unsigned int v109; // [rsp+8h] [rbp-E0h]
  __int16 v110; // [rsp+8h] [rbp-E0h]
  unsigned __int16 v111; // [rsp+Ch] [rbp-DCh]
  unsigned __int8 v112; // [rsp+Ch] [rbp-DCh]
  unsigned __int8 v113; // [rsp+Ch] [rbp-DCh]
  unsigned __int64 v114; // [rsp+10h] [rbp-D8h]
  unsigned int v115; // [rsp+18h] [rbp-D0h]
  int v116; // [rsp+1Ch] [rbp-CCh]
  unsigned __int64 v117; // [rsp+20h] [rbp-C8h]
  unsigned __int16 v118; // [rsp+28h] [rbp-C0h]
  char v119; // [rsp+2Ah] [rbp-BEh]
  char v120; // [rsp+2Bh] [rbp-BDh]
  unsigned int v121; // [rsp+2Ch] [rbp-BCh]
  unsigned int v122; // [rsp+38h] [rbp-B0h]
  unsigned int v123; // [rsp+3Ch] [rbp-ACh]
  unsigned int v124; // [rsp+40h] [rbp-A8h]
  unsigned int v125; // [rsp+44h] [rbp-A4h]
  unsigned int v126; // [rsp+48h] [rbp-A0h]
  unsigned int v127; // [rsp+4Ch] [rbp-9Ch]
  unsigned int v128; // [rsp+58h] [rbp-90h]
  unsigned int v129; // [rsp+5Ch] [rbp-8Ch]
  void *s2; // [rsp+60h] [rbp-88h]
  char v131; // [rsp+68h] [rbp-80h]
  unsigned int v132; // [rsp+70h] [rbp-78h]
  unsigned int v133; // [rsp+74h] [rbp-74h]
  char v134; // [rsp+79h] [rbp-6Fh]
  unsigned int v136; // [rsp+7Ch] [rbp-6Ch]
  unsigned int v137; // [rsp+84h] [rbp-64h] BYREF
  unsigned __int64 v138; // [rsp+88h] [rbp-60h]
  unsigned int v139; // [rsp+90h] [rbp-58h]
  __int64 v140; // [rsp+94h] [rbp-54h]
  unsigned int v141; // [rsp+9Ch] [rbp-4Ch]
  unsigned __int64 v142; // [rsp+A0h] [rbp-48h]
  int v143; // [rsp+A8h] [rbp-40h]

  v3 = a3;
  v5 = a2;
  v6 = *(_QWORD *)(a1 + 1256);
  v132 = v3;
  v7 = *(_QWORD *)(v6 + 136);
  if ( *(_DWORD *)v6 > 0xEu )
  {
    v8 = (unsigned __int16 *)(v7 + 6LL * a3);
    v9 = *v8;
    v111 = v8[1];
    if ( *v8 != 0xFFFF )
      goto LABEL_3;
LABEL_116:
    if ( *(_QWORD *)(a1 + 152) || *(_QWORD *)(a1 + 1400) )
    {
      *(__m128i *)(a1 + 192) = _mm_load_si128((const __m128i *)&xmmword_5DE070);
      *(__m128i *)(a1 + 208) = _mm_load_si128((const __m128i *)&xmmword_5DE080);
      *(_QWORD *)(a1 + 222) = 0x61727478655F6CLL;
      sub_55D530(a1);
    }
    return 0;
  }
  v8 = (unsigned __int16 *)(v7 + 4LL * a3);
  v9 = *v8;
  v111 = v8[1];
  if ( *v8 == 0xFFFF )
    goto LABEL_116;
LABEL_3:
  v10 = *(_QWORD *)(a1 + 1216);
  if ( (unsigned int)v5 >= *(_DWORD *)(v10 + 8) )
    sub_55D310(a1, v7, v8, v10);
  v137 = 0;
  v11 = (__int64 *)(*(_QWORD *)v10 + 48LL * (unsigned int)v5);
  v12 = *v11;
  v13 = v11[3];
  v14 = _mm_loadl_epi64((const __m128i *)(v12 + 4));
  v15 = *(unsigned int *)(v12 + 12);
  v131 = v13 & 1;
  v16 = a3 == 0;
  v17 = (unsigned int)_mm_cvtsi128_si32(v14);
  v128 = v15;
  v117 = v13;
  v18 = v17;
  v143 = v15;
  v133 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v14, 229));
  v125 = _mm_cvtsi128_si32(v14);
  v142 = v14.m128i_i64[0];
  if ( (_DWORD)v17 != *(_DWORD *)(a1 + 56) )
  {
    v17 = v142;
    v108 = v5;
    sub_55C7B0(a1, v142, v15);
    v18 = *(_DWORD *)(a1 + 56);
    v5 = v108;
  }
  v19 = *(unsigned int *)(a1 + 60);
  v20 = v16;
  v121 = 0;
  v122 = 0;
  v21 = *(_DWORD *)(a1 + 64);
  v115 = 0;
  v126 = 0;
  v123 = 0;
  v124 = 0;
  v129 = 0;
  v127 = 0;
  v120 = 0;
  v118 = v9;
  v107 = *(_DWORD *)(a1 + 60);
  v136 = v5;
  while ( 1 )
  {
    v116 = *(_DWORD *)(a1 + 184);
    v119 = *(_BYTE *)(a1 + 188);
    if ( !v111 )
    {
      if ( *(_QWORD *)(a1 + 152) )
        goto LABEL_8;
      goto LABEL_41;
    }
    if ( *(_QWORD *)(a1 + 152) || *(_QWORD *)(a1 + 1400) )
    {
      v17 = 1024;
      snprintf((char *)(a1 + 192), 0x400u, "lex_external state:%d, row:%u, column:%u", v111, v107, v21);
      sub_55D530(a1);
    }
    sub_565AB0(a1, v17, v13, v15, v19, v5);
    v28 = v131 & 1 | v117 & 0xFFFFFFFFFFFFFFFELL;
    v117 = v28;
    if ( v28 )
    {
      v29 = *(_DWORD *)(v28 + 72);
      v114 = v28 + 48;
      if ( v29 > 0x18 )
        v114 = *(_QWORD *)(v28 + 48);
    }
    else
    {
      v114 = 0;
      v29 = 0;
    }
    if ( !(unsigned __int8)sub_57C4D0(*(_QWORD *)(a1 + 1256)) )
      (*(void (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(*(_QWORD *)(a1 + 1256) + 216LL))(
        *(_QWORD *)(a1 + 1392),
        v114,
        v29);
    if ( (unsigned __int8)sub_57C4D0(*(_QWORD *)(a1 + 1256)) )
    {
      if ( *(_BYTE *)(a1 + 1508) )
        return 0;
      sub_565BC0(a1, &v137);
      goto LABEL_38;
    }
    v57 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(a1 + 1256) + 200LL))(
            *(_QWORD *)(a1 + 1392),
            a1,
            *(_QWORD *)(*(_QWORD *)(a1 + 1256) + 168LL)
          + *(_DWORD *)(*(_QWORD *)(a1 + 1256) + 16LL) * (unsigned int)v111);
    v134 = *(_BYTE *)(a1 + 1508);
    if ( v134 )
      return 0;
    sub_565BC0(a1, &v137);
    if ( v57 )
    {
      v58 = sub_57C4D0(*(_QWORD *)(a1 + 1256));
      s2 = (void *)(a1 + 192);
      if ( !v58 )
      {
        v59 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 1256) + 208LL))(*(_QWORD *)(a1 + 1392));
        v129 = v59;
        if ( v59 > 0x400 )
          __assert_fail("length <= 1024", "lib/src/./parser.c", 0x19Au, "ts_parser__external_scanner_serialize");
        if ( v28 && !v131 && (*(_BYTE *)(v28 + 44) & 0x40) != 0 && !*(_DWORD *)(v28 + 36) )
        {
          if ( *(_DWORD *)(v28 + 72) != v59 )
            goto LABEL_79;
          v60 = v59;
          if ( v59 > 0x18 )
          {
            v61 = *(const void **)(v28 + 48);
LABEL_73:
            v62 = memcmp(v61, s2, v60);
            v34 = *(_QWORD *)(a1 + 1256);
            if ( v62 )
            {
              v33 = v57;
              v35 = (__m128i *)a1;
              v134 = v33;
              goto LABEL_80;
            }
            if ( v18 < *(_DWORD *)(a1 + 80) )
            {
              v33 = v57;
              v35 = (__m128i *)a1;
              goto LABEL_80;
            }
            v63 = sub_562F50(v34, v132, *(_WORD *)(*(_QWORD *)(v34 + 176) + 2LL * *(unsigned __int16 *)(a1 + 4)));
            if ( !v20 && (unsigned __int8)sub_56A510(*(_QWORD *)(a1 + 1216), v136) == 1 && a3 != v63 )
            {
              v33 = v57;
              v34 = *(_QWORD *)(a1 + 1256);
              v35 = (__m128i *)a1;
              goto LABEL_80;
            }
            if ( *(_QWORD *)(a1 + 152) || *(_QWORD *)(a1 + 1400) )
            {
              v64 = sub_563060(
                      *(_QWORD *)(a1 + 1256),
                      *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1256) + 176LL) + 2LL * *(unsigned __int16 *)(a1 + 4)));
              snprintf((char *)s2, 0x400u, "ignore_empty_external_token symbol:%s", v64);
              sub_55D530(a1);
            }
            goto LABEL_38;
          }
          v84 = v59;
LABEL_114:
          v129 = v84;
          v61 = (const void *)(v28 + 48);
          goto LABEL_73;
        }
        if ( v59 )
        {
LABEL_79:
          v33 = v57;
          v34 = *(_QWORD *)(a1 + 1256);
          v35 = (__m128i *)a1;
          v134 = v33;
          goto LABEL_80;
        }
LABEL_120:
        v129 = 0;
        v61 = &unk_6D5800;
        v60 = 0;
        goto LABEL_73;
      }
      if ( !v28 )
        goto LABEL_120;
      if ( v131 )
        goto LABEL_120;
      if ( (*(_BYTE *)(v28 + 44) & 0x40) == 0 )
        goto LABEL_120;
      v129 = *(_DWORD *)(v28 + 36);
      if ( v129 )
        goto LABEL_120;
      v84 = *(_DWORD *)(v28 + 72);
      if ( !v84 )
      {
        v60 = 0;
        goto LABEL_114;
      }
      v33 = v57;
      v134 = v58;
      v34 = *(_QWORD *)(a1 + 1256);
      v35 = (__m128i *)a1;
LABEL_80:
      v31 = v35[11].m128i_u8[4];
      v32 = 1;
      if ( !v120 )
        goto LABEL_45;
LABEL_81:
      v65 = v124 - v125;
      if ( v124 < v125 )
        v65 = 0;
      if ( v133 < v123 )
      {
        v67 = v126;
        v66 = v123 - v133;
      }
      else if ( v126 < v128 )
      {
        v67 = 0;
        v66 = 0;
      }
      else
      {
        v66 = 0;
        v67 = v126 - v128;
      }
      v68 = v115 - v124;
      if ( v115 < v124 )
        v68 = 0;
      if ( v123 >= v122 )
      {
        if ( v121 < v126 )
        {
          v121 = 0;
          v69 = 0;
        }
        else
        {
          v69 = 0;
          v121 -= v126;
        }
      }
      else
      {
        v69 = v122 - v123;
      }
      v140 = __PAIR64__(v66, v65);
      v142 = __PAIR64__(v69, v68);
      v141 = v67;
      v143 = v121;
      v70 = sub_56B600(
              &v35[76].m128i_i64[1],
              0xFFFFu,
              __PAIR64__(v66, v65),
              v67,
              __SPAIR64__(v69, v68),
              v121,
              v137 - v115,
              v132,
              0,
              0,
              0,
              v34);
      *((_BYTE *)v70 + 44) |= 0x18u;
      v53 = (unsigned __int64)v70;
      v70[12] = v127;
LABEL_91:
      if ( !v35[9].m128i_i64[1] )
        goto LABEL_143;
LABEL_92:
      v71 = v35 + 12;
      if ( (v53 & 1) != 0 )
        goto LABEL_93;
LABEL_145:
      v72 = *(_WORD *)(v53 + 40);
LABEL_94:
      v73 = sub_563060(v35[78].m128i_i64[1], v72);
      v35[12] = _mm_load_si128((const __m128i *)&xmmword_5DE0B0);
      *(__int64 *)((char *)&v71->m128i_i64[1] + 5) = 0x3A6D7973206461LL;
      v74 = *v73;
      if ( !*v73 )
      {
LABEL_130:
        v142 = sub_55C590(v53);
        v143 = v87;
        snprintf(&v71->m128i_i8[v86], 1024 - v86, ", size:%u", v142);
        sub_55D530((__int64)v35);
        return v53;
      }
      v75 = v73 + 1;
      v76 = 20;
      while ( 1 )
      {
        v77 = (__int16 *)((char *)v71->m128i_i16 + v76);
        if ( v74 > 13 )
        {
          if ( v74 == 92 )
          {
            *v77 = 23644;
            v76 += 2;
            goto LABEL_128;
          }
        }
        else if ( v74 > 8 )
        {
          v78 = v76;
          v76 += 2;
          switch ( v74 )
          {
            case 10:
              *v77 = 28252;
              break;
            case 11:
              *v77 = 30300;
              break;
            case 12:
              *v77 = 26204;
              break;
            case 13:
              *v77 = 29276;
              break;
            default:
              *v77 = 29788;
              v76 = v78 + 2;
              break;
          }
          goto LABEL_128;
        }
        *(_BYTE *)v77 = v74;
        ++v76;
LABEL_128:
        v74 = *v75++;
        if ( v76 > 1023 || !v74 )
          goto LABEL_130;
      }
    }
LABEL_38:
    v142 = __PAIR64__(v107, v18);
    v143 = v21;
    if ( v18 != *(_DWORD *)(a1 + 56) )
      sub_55C7B0(a1, v142, v21);
    v30 = *(_QWORD *)(a1 + 152) == 0;
    *(_DWORD *)(a1 + 184) = v116;
    *(_BYTE *)(a1 + 188) = v119;
    if ( !v30 )
    {
LABEL_8:
      snprintf((char *)(a1 + 192), 0x400u, "lex_internal state:%d, row:%u, column:%u", v118, v107, v21);
      sub_55D530(a1);
      goto LABEL_9;
    }
LABEL_41:
    if ( *(_QWORD *)(a1 + 1400) )
      goto LABEL_8;
LABEL_9:
    v23 = *(_QWORD *)(a1 + 56);
    v24 = 0;
    *(_QWORD *)(a1 + 80) = 0;
    *(_DWORD *)(a1 + 88) = 1;
    *(_QWORD *)(a1 + 68) = v23;
    LODWORD(v23) = *(_DWORD *)(a1 + 64);
    *(_WORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 76) = v23;
    LODWORD(v23) = *(_DWORD *)(a1 + 160);
    *(_BYTE *)(a1 + 180) = 0;
    if ( *(_DWORD *)(a1 + 164) != (_DWORD)v23 )
    {
      v25 = *(unsigned int *)(a1 + 172);
      if ( !(_DWORD)v25 )
      {
        v79 = *(unsigned int *)(a1 + 56);
        v80 = *(_QWORD *)(a1 + 112);
        v81 = *(_QWORD *)(a1 + 60);
        *(_DWORD *)(a1 + 168) = v79;
        v82 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(a1 + 120))(v80, v79, v81, a1 + 172);
        LODWORD(v80) = *(_DWORD *)(a1 + 172);
        *(_QWORD *)(a1 + 104) = v82;
        if ( !(_DWORD)v80 )
        {
          v83 = *(_DWORD *)(a1 + 160);
          *(_QWORD *)(a1 + 104) = 0;
          *(_DWORD *)(a1 + 164) = v83;
        }
      }
      if ( !*(_DWORD *)(a1 + 176) )
        sub_55D080((unsigned int *)a1);
      v26 = *(unsigned int *)(a1 + 56);
      if ( !(_DWORD)v26 )
      {
        if ( *(_DWORD *)a1 == 65279 )
          sub_55DFE0((unsigned int *)a1, 1, v13, v26, v25, v24);
        *(_BYTE *)(a1 + 188) = 1;
        *(_DWORD *)(a1 + 184) = 0;
      }
    }
    v27 = sub_57C4D0(*(_QWORD *)(a1 + 1256));
    if ( v27 )
    {
      v17 = (__int64)&v137;
      sub_565BC0(a1, &v137);
      goto LABEL_19;
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 1256) + 144LL))(a1, v118);
    v17 = (__int64)&v137;
    sub_565BC0(a1, &v137);
    if ( (_BYTE)v19 )
      break;
LABEL_19:
    if ( v20 )
    {
      if ( !v120 )
      {
        if ( *(_QWORD *)(a1 + 152) || *(_QWORD *)(a1 + 1400) )
        {
          *(__m128i *)(a1 + 192) = _mm_load_si128((const __m128i *)&xmmword_5DE090);
          *(__m128i *)(a1 + 204) = _mm_load_si128((const __m128i *)&xmmword_5DE0A0);
          sub_55D530(a1);
        }
        v15 = *(unsigned int *)(a1 + 72);
        v17 = *(unsigned int *)(a1 + 76);
        v124 = *(_DWORD *)(a1 + 68);
        v122 = *(_DWORD *)(a1 + 72);
        v121 = *(_DWORD *)(a1 + 76);
        v127 = *(_DWORD *)a1;
        v115 = v124;
        v126 = v121;
        v123 = v122;
      }
      v18 = *(_DWORD *)(a1 + 56);
      if ( v18 == v115 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(a1 + 40))(a1) )
        {
          v34 = *(_QWORD *)(a1 + 1256);
          v35 = (__m128i *)a1;
          *(_WORD *)(a1 + 4) = -1;
          goto LABEL_81;
        }
        v17 = 0;
        (*(void (__fastcall **)(__int64, _QWORD))(a1 + 8))(a1, 0);
        v18 = *(_DWORD *)(a1 + 56);
      }
      v115 = v18;
      v120 = v20;
      v122 = *(_DWORD *)(a1 + 60);
      v21 = *(_DWORD *)(a1 + 64);
      v121 = v21;
      v107 = v122;
    }
    else
    {
      v13 = v128;
      v56 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 1256) + 136LL);
      v143 = v128;
      v111 = v56[1];
      v118 = *v56;
      v142 = v14.m128i_i64[0];
      v18 = v125;
      if ( v125 != *(_DWORD *)(a1 + 56) )
      {
        v17 = v142;
        sub_55C7B0(a1, v142, v128);
        v18 = *(_DWORD *)(a1 + 56);
      }
      v21 = *(_DWORD *)(a1 + 64);
      v107 = *(_DWORD *)(a1 + 60);
    }
    v20 = 1;
  }
  v31 = 0;
  v32 = 0;
  v33 = v27;
  v134 = 0;
  v34 = *(_QWORD *)(a1 + 1256);
  v35 = (__m128i *)a1;
  if ( v120 )
    goto LABEL_81;
LABEL_45:
  v36 = v35[4].m128i_u32[1];
  v37 = 0;
  v38 = v35[4].m128i_u32[2];
  v39 = v35->m128i_u16[2];
  v40 = v35[4].m128i_u32[3];
  if ( v36 >= v125 )
    v37 = v35[4].m128i_i32[1] - v125;
  if ( v133 < v38 )
  {
    v42 = v38 - v133;
    v41 = v35[4].m128i_u32[3];
  }
  else
  {
    if ( v40 < v128 )
      v41 = 0;
    else
      v41 = v40 - v128;
    v42 = 0;
  }
  v43 = v35[5].m128i_u32[0];
  v138 = __PAIR64__(v42, v37);
  v44 = v35[5].m128i_u32[1];
  v45 = v35[5].m128i_u32[2];
  v139 = v41;
  v46 = 0;
  v47 = v43 - v36;
  if ( v43 < v36 )
    v47 = 0;
  if ( v38 >= v44 )
  {
    if ( v45 < v40 )
      v45 = 0;
    else
      v45 -= v40;
    v48 = 0;
  }
  else
  {
    v48 = v44 - v38;
  }
  v141 = v45;
  v49 = v34;
  v140 = __PAIR64__(v48, v47);
  v50 = v137 - v43;
  if ( !v33 )
  {
    LOWORD(v88) = v39;
    v89 = 0;
    if ( *(_WORD *)(v34 + 160) == (_WORD)v39 )
    {
      LOWORD(v88) = 0;
      if ( (_WORD)v39 )
      {
        v90 = *(__int64 *)((char *)v35[4].m128i_i64 + 4);
        v91 = v35[4].m128i_u32[3];
        v142 = v90;
        v143 = v91;
        if ( v35[3].m128i_i32[2] != v36 )
        {
          v112 = v32;
          v109 = v39;
          sub_55C7B0((__int64)v35, v90, v91);
          v32 = v112;
          v39 = v109;
        }
        v113 = v32;
        v110 = v39;
        sub_565AB0((__int64)v35, v90, v91, v46, v39, v49);
        v92 = sub_57C4D0(v35[78].m128i_i64[1]);
        v93 = v110;
        v32 = v113;
        if ( v92
          || (v94 = (*(__int64 (__fastcall **)(__m128i *, _QWORD))(v35[78].m128i_i64[1] + 152))(v35, 0),
              v93 = v110,
              v32 = v113,
              !v94) )
        {
          v49 = v35[78].m128i_i64[1];
          LOWORD(v88) = v93;
          v89 = 0;
        }
        else
        {
          v49 = v35[78].m128i_i64[1];
          if ( v35[5].m128i_i32[0] == v43 )
          {
            v88 = v35->m128i_u16[2];
            v95 = *(_DWORD *)(v49 + 24);
            if ( v132 < v95 )
            {
              v103 = *(_WORD *)(*(_QWORD *)(v49 + 40) + 2LL * (v132 * *(_DWORD *)(v49 + 4) + v88));
LABEL_184:
              v89 = 1;
              if ( v103 )
                goto LABEL_153;
            }
            else
            {
              v96 = (unsigned __int16 *)(*(_QWORD *)(v49 + 48)
                                       + 2LL * *(unsigned int *)(*(_QWORD *)(v49 + 56) + 4LL * (v132 - v95)));
              v97 = *v96;
              v98 = (__int16 *)(v96 + 1);
              if ( (_WORD)v97 )
              {
                for ( i = 0; i != v97; ++i )
                {
                  v100 = (unsigned __int16)v98[1];
                  v101 = v98 + 2;
                  if ( (_WORD)v100 )
                  {
                    v102 = &v98[v100 + 2];
                    do
                    {
                      if ( v35->m128i_i16[2] == *v101++ )
                      {
                        v103 = *v98;
                        goto LABEL_184;
                      }
                    }
                    while ( v102 != v101 );
                    v98 = v102;
                  }
                  else
                  {
                    v98 += 2;
                  }
                }
              }
            }
            v104 = sub_562E30(v35[78].m128i_i64[1], v132, v35->m128i_i16[2]);
            v106 = v105;
            v89 = 1;
            if ( !v104 )
              v106 = v110;
            LOWORD(v88) = v106;
          }
          else
          {
            LOWORD(v88) = v110;
            v89 = 1;
          }
        }
      }
    }
LABEL_153:
    v53 = (unsigned __int64)sub_56B600(
                              &v35[76].m128i_i64[1],
                              v88,
                              v138,
                              v139,
                              v140,
                              v141,
                              v50,
                              v132,
                              v32,
                              v31,
                              v89,
                              v49);
    goto LABEL_91;
  }
  v51 = v35 + 12;
  v52 = sub_56B600(
          &v35[76].m128i_i64[1],
          *(_WORD *)(*(_QWORD *)(v34 + 176) + 2 * v39),
          v138,
          v139,
          v140,
          v141,
          v50,
          v132,
          v32,
          v31,
          0,
          v34);
  v53 = (unsigned __int64)v52;
  v52[18] = v129;
  if ( v129 > 0x18 )
  {
    v54 = off_8C52B8(v129);
    *(_QWORD *)(v53 + 48) = v54;
    v55 = (unsigned __int64)(v54 + 1);
    *v54 = v35[12].m128i_i64[0];
    *(_QWORD *)((char *)v54 + v129 - 8) = *(__int64 *)((char *)&v51->m128i_i64[-1] + v129);
    goto LABEL_58;
  }
  v54 = v52 + 12;
  if ( v129 < 8 )
  {
    if ( (v129 & 4) != 0 )
    {
      *(_DWORD *)v54 = v35[12].m128i_i32[0];
      *(_DWORD *)((char *)v54 + v129 - 4) = *(__int32 *)((char *)&v51->m128i_i32[-1] + v129);
    }
    else if ( v129 )
    {
      *(_BYTE *)v54 = v35[12].m128i_i8[0];
      if ( (v129 & 2) != 0 )
        *(_WORD *)((char *)v54 + v129 - 2) = *(__int16 *)((char *)&v51->m128i_i16[-1] + v129);
    }
  }
  else
  {
    v55 = v53 + 56;
    *(_QWORD *)(v53 + 48) = v35[12].m128i_i64[0];
    *(_QWORD *)((char *)v54 + v129 - 8) = *(__int64 *)((char *)&v51->m128i_i64[-1] + v129);
LABEL_58:
    qmemcpy(
      (void *)(v55 & 0xFFFFFFFFFFFFFFF8LL),
      (const void *)((char *)v51 - ((char *)v54 - (v55 & 0xFFFFFFFFFFFFFFF8LL))),
      8 * (((unsigned int)v54 - (v55 & 0xFFFFFFF8) + v129) >> 3));
  }
  v30 = v35[9].m128i_i64[1] == 0;
  *(_BYTE *)(v53 + 44) = (v134 << 7) | *(_BYTE *)(v53 + 44) & 0x7F;
  if ( !v30 )
    goto LABEL_92;
LABEL_143:
  if ( v35[87].m128i_i64[1] )
  {
    v71 = v35 + 12;
    if ( (v53 & 1) == 0 )
      goto LABEL_145;
LABEL_93:
    v72 = BYTE1(v53);
    goto LABEL_94;
  }
  return v53;
}
