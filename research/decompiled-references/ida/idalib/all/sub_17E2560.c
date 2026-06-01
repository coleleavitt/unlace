void __fastcall sub_17E2560(__int64 a1, __m128i a2, __m128i a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  bool v8; // zf
  unsigned __int64 *v9; // r14
  unsigned __int64 *v10; // r12
  unsigned __int64 v11; // r15
  unsigned __int64 *v12; // rax
  __m128i *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // ecx
  __int64 *v18; // rsi
  __int64 v19; // r8
  _QWORD *v20; // rdx
  __int64 v21; // rbp
  char v22; // al
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  char v25; // dl
  __int64 v26; // rsi
  __int64 v27; // rax
  _BYTE *v28; // rbp
  int v29; // eax
  __int64 v30; // rbp
  _BYTE *v31; // r10
  _BYTE *v32; // r11
  __int64 v33; // rax
  __int64 v34; // rax
  _BYTE *v35; // r12
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rbp
  __int64 v41; // r15
  _BYTE *v42; // rsi
  _BYTE *v43; // rax
  size_t v44; // r13
  unsigned __int64 v45; // rbx
  __int64 v46; // rbx
  unsigned __int64 v47; // rdi
  _BYTE *v48; // rdi
  __int64 v49; // r10
  _BYTE *v50; // r8
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // rcx
  int v53; // ebx
  _BYTE *v54; // rdi
  char *v55; // rax
  char *v56; // rsi
  __int64 v57; // rcx
  __int64 v58; // rdx
  _BYTE *v59; // rax
  unsigned int v60; // edx
  __m128i *v61; // rcx
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rdx
  unsigned __int64 v66; // rax
  unsigned __int64 *v67; // rax
  __int64 v68; // rbp
  __int64 v69; // r12
  unsigned __int64 v70; // rax
  __int64 v71; // rbp
  __int64 *v72; // r13
  unsigned int v73; // edx
  __int64 v74; // rbp
  unsigned __int64 v75; // rsi
  unsigned __int64 v76; // rdi
  int v77; // eax
  __int64 i; // rbp
  int v79; // eax
  int v80; // eax
  __int64 v81; // rcx
  int v82; // esi
  unsigned int v83; // edx
  __int64 *v84; // rax
  __int64 v85; // rdi
  int v86; // esi
  int v87; // r8d
  __int64 v88; // r9
  int v89; // esi
  unsigned __int64 v90; // rbx
  __int64 v91; // rax
  __int64 v92; // rbx
  __int64 v93; // rdx
  __int64 v94; // rbx
  __int64 v95; // r13
  __int64 v96; // rbp
  void *v97; // rdi
  __int64 v98; // rsi
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rsi
  __int64 v103; // rsi
  int *m128i_i32; // rbp
  int *v105; // rdi
  unsigned __int64 v106; // rbp
  __int64 v107; // rcx
  __m128i *v108; // rax
  __m128i *v109; // r15
  __int64 v110; // rdx
  __int32 v111; // ecx
  __int64 v112; // rcx
  __int64 v113; // rbx
  unsigned __int64 v114; // rsi
  unsigned __int64 v115; // rdi
  __int32 v116; // eax
  int v117; // eax
  int v118; // r8d
  __int64 v119; // rdi
  _QWORD *v120; // [rsp+8h] [rbp-410h]
  unsigned __int64 v122; // [rsp+18h] [rbp-400h] BYREF
  _BYTE *v123; // [rsp+20h] [rbp-3F8h]
  __int64 v124; // [rsp+28h] [rbp-3F0h]
  __int64 v125; // [rsp+30h] [rbp-3E8h]
  unsigned __int64 v126; // [rsp+38h] [rbp-3E0h]
  unsigned __int64 *v127; // [rsp+40h] [rbp-3D8h]
  unsigned __int64 *v128; // [rsp+48h] [rbp-3D0h]
  __int64 v129; // [rsp+50h] [rbp-3C8h]
  _BYTE *v130; // [rsp+58h] [rbp-3C0h]
  __int64 v131; // [rsp+60h] [rbp-3B8h]
  __m128i **v132; // [rsp+68h] [rbp-3B0h]
  __m128i **v133; // [rsp+78h] [rbp-3A0h] BYREF
  __m128i v134; // [rsp+80h] [rbp-398h] BYREF
  __int32 v135; // [rsp+90h] [rbp-388h]
  _BYTE *v136; // [rsp+A0h] [rbp-378h] BYREF
  unsigned __int64 v137; // [rsp+A8h] [rbp-370h]
  int v138; // [rsp+B0h] [rbp-368h]
  __m128i v139; // [rsp+C0h] [rbp-358h] BYREF
  __m128i v140; // [rsp+D0h] [rbp-348h]
  int v141; // [rsp+E0h] [rbp-338h]
  __m128i *v142; // [rsp+150h] [rbp-2C8h] BYREF
  __int64 v143; // [rsp+158h] [rbp-2C0h]
  char v144; // [rsp+160h] [rbp-2B8h] BYREF

  sub_15ED6C0((__int64 *)a5);
  v7 = *(unsigned int *)(a5 + 92);
  if ( *(_DWORD *)(a5 + 96) == (_DWORD)v7 )
    return;
  v8 = *(_BYTE *)(a5 + 100) == 0;
  v132 = &v142;
  v142 = (__m128i *)&v144;
  v9 = *(unsigned __int64 **)(a5 + 80);
  v143 = 0x1000000000LL;
  v133 = &v142;
  if ( v8 )
    v7 = *(unsigned int *)(a5 + 88);
  v10 = &v9[v7];
  if ( v10 == v9 )
    goto LABEL_9;
  v11 = *v9;
  if ( *v9 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v12 = v9 + 1;
    while ( 1 )
    {
      v9 = v12;
      if ( v10 == v12 )
        break;
      v11 = *v12++;
      if ( v11 < 0xFFFFFFFFFFFFFFFELL )
        goto LABEL_14;
    }
LABEL_9:
    v13 = (__m128i *)(v132 + 2);
    goto LABEL_10;
  }
  while ( 1 )
  {
LABEL_14:
    if ( *(_DWORD *)(*(_QWORD *)(a5 + 400) + 200LL) <= *(_DWORD *)(a5 + 412) )
    {
      sub_17E1070(
        a1,
        v11,
        (void (__fastcall *)(__int64, _QWORD, _BYTE *))sub_179EA70,
        (__int64)&v133,
        a2,
        *(double *)a3.m128i_i64);
      v77 = *(_BYTE *)(v11 + 28) & 0x7F;
      if ( (unsigned int)(v77 - 58) <= 3 && (*(_BYTE *)(*(_QWORD *)(v11 + 48) + 17LL) & 4) == 0 )
      {
        for ( i = sub_B8E970(v11 + 64); i; i = *(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF8LL )
        {
          v79 = *(_BYTE *)(i + 28) & 0x7F;
          if ( (unsigned int)(v79 - 64) > 2 )
          {
            if ( (unsigned int)(v79 - 58) <= 3 )
              sub_17E24D0(
                a1,
                i,
                (void (__fastcall *)(__int64, _QWORD, _BYTE *))sub_179EA70,
                (__int64)&v133,
                a2,
                *(double *)a3.m128i_i64);
          }
          else
          {
            sub_17E1070(
              a1,
              i,
              (void (__fastcall *)(__int64, _QWORD, _BYTE *))sub_179EA70,
              (__int64)&v133,
              a2,
              *(double *)a3.m128i_i64);
          }
        }
        v77 = *(_BYTE *)(v11 + 28) & 0x7F;
      }
      if ( (unsigned int)(v77 - 40) <= 6 )
      {
        sub_17A9820(a1, v11, (void (__fastcall *)(__int64, __int64, __m128 *))sub_179EA70, (__int64)&v133);
        v80 = *(_DWORD *)(a1 + 4504);
        v81 = *(_QWORD *)(a1 + 4488);
        if ( v80 )
        {
          v82 = v80 - 1;
          v83 = (v80 - 1) & (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4));
          v84 = (__int64 *)(v81 + 16LL * v83);
          v85 = *v84;
          if ( *v84 == v11 )
            goto LABEL_99;
          v117 = 1;
          if ( v85 != -4096 )
          {
            while ( 1 )
            {
              v118 = v117 + 1;
              v83 = v82 & (v117 + v83);
              v84 = (__int64 *)(v81 + 16LL * v83);
              v119 = *v84;
              if ( *v84 == v11 )
                break;
              v117 = v118;
              if ( v119 == -4096 )
                goto LABEL_15;
            }
LABEL_99:
            *v84 = -8192;
            --*(_DWORD *)(a1 + 4496);
            ++*(_DWORD *)(a1 + 4500);
          }
        }
      }
    }
LABEL_15:
    if ( !*(_QWORD *)(v11 + 40) )
      goto LABEL_69;
    if ( (*(_BYTE *)(v11 + 28) & 0x7F) != 0x4E )
      goto LABEL_19;
    if ( *(_QWORD *)(v11 + 64) )
    {
      if ( *(_BYTE *)(v11 + 72) != 1 )
        goto LABEL_107;
    }
    else if ( !*(_QWORD *)(v11 + 48) )
    {
LABEL_107:
      sub_168B9B0((__int64)&v136, a1 + 8, 5344);
      sub_AE9DF0(&v136, v11, 0xAu);
      sub_1582CA0((__int64)&v134, &v136);
      v89 = *(_DWORD *)(v11 + 24);
      a3 = _mm_load_si128(&v134);
      v134.m128i_i64[0] = 0;
      v140.m128i_i32[0] = v135;
      v139 = a3;
      sub_179EA70((__int64 *)&v133, v89, &v139);
      if ( v139.m128i_i64[0] && v139.m128i_i64[1] )
        sub_1580C40(v139.m128i_u64[1], v139.m128i_u64[0]);
      if ( v134.m128i_i64[0] && v134.m128i_i64[1] )
        sub_1580C40(v134.m128i_u64[1], v134.m128i_u64[0]);
      if ( v136 && v137 )
        sub_1580C40(v137, (unsigned __int64)v136);
    }
LABEL_19:
    if ( !*(_BYTE *)(*(_QWORD *)(a1 + 240) + 744LL)
      || (v14 = *(_QWORD *)(a1 + 232), (*(_BYTE *)(v14 + 2) & 4) != 0)
      || (*(_BYTE *)(v14 + 1) & 8) != 0 )
    {
      sub_15C14A0(a1 + 2608, v11);
    }
    v15 = *(unsigned int *)(a1 + 3184);
    v16 = *(_QWORD *)(a1 + 3168);
    if ( (_DWORD)v15 )
    {
      v17 = (v15 - 1) & (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4));
      v18 = (__int64 *)(v16 + 16LL * v17);
      v19 = *v18;
      if ( *v18 == v11 )
        goto LABEL_25;
      v86 = 1;
      if ( v19 != -4096 )
      {
        while ( 1 )
        {
          v87 = v86 + 1;
          v17 = (v15 - 1) & (v86 + v17);
          v18 = (__int64 *)(v16 + 16LL * v17);
          v88 = *v18;
          if ( *v18 == v11 )
            break;
          v86 = v87;
          if ( v88 == -4096 )
            goto LABEL_105;
        }
LABEL_25:
        sub_17A93C0((__m128 *)&v139, v18, (_QWORD *)(16 * v15 + v16), a1 + 3168, 1);
        v120 = (_QWORD *)v139.m128i_i64[0];
        goto LABEL_26;
      }
    }
LABEL_105:
    sub_17A93C0(
      (__m128 *)&v139,
      (_QWORD *)(v16 + 16LL * (unsigned int)v15),
      (_QWORD *)(v16 + 16LL * (unsigned int)v15),
      a1 + 3168,
      1);
    v120 = (_QWORD *)v139.m128i_i64[0];
LABEL_26:
    v20 = (_QWORD *)(*(_QWORD *)(a1 + 3168) + 16LL * *(unsigned int *)(a1 + 3184));
    sub_17A93C0((__m128 *)&v139, v20, v20, a1 + 3168, 1);
    if ( (_QWORD *)v139.m128i_i64[0] == v120 )
      goto LABEL_69;
    v21 = v120[1];
    v22 = *(_BYTE *)(v21 + 28);
    v123 = (_BYTE *)v21;
    if ( (v22 & 0x7Fu) - 49 <= 2 )
    {
      sub_168B9B0((__int64)&v136, a1 + 8, 6721);
      sub_AE9DF0(&v136, v11, 0xAu);
      sub_AE9DF0(&v136, v21, 0xAu);
      v23 = *(_QWORD *)(v21 + 16);
      if ( (v23 & 4) != 0 )
        v24 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v24 = v23 & 0xFFFFFFFFFFFFFFF8LL;
      v25 = *(_BYTE *)(v24 + 8);
      v26 = 0;
      v27 = v24 - 64;
      if ( (v25 & 0x7Fu) - 58 < 4 )
        v26 = v27;
      sub_AE9DF0(&v136, v26, 0xAu);
      v28 = v136;
      LODWORD(v124) = v138;
      v122 = v137;
      if ( v136 )
      {
        v29 = *(_DWORD *)(v137 + 14976);
        if ( v29 )
        {
          v90 = v122;
          v91 = (unsigned int)(v29 - 1);
          *(_DWORD *)(v122 + 14976) = v91;
          v30 = *(_QWORD *)(v90 + 8 * v91 + 14848);
          v92 = *(unsigned int *)(v30 + 536);
          *(_BYTE *)v30 = 0;
          v93 = *(_QWORD *)(v30 + 528);
          *(_DWORD *)(v30 + 424) = 0;
          v94 = v93 + (v92 << 6);
          if ( v93 != v94 )
          {
            v125 = a1;
            v95 = v30;
            v96 = v93;
            do
            {
              while ( 1 )
              {
                v94 -= 64;
                v97 = *(void **)(v94 + 24);
                if ( v97 == (void *)(v94 + 40) )
                  break;
                operator delete(v97);
                if ( v96 == v94 )
                {
                  v30 = v95;
                  a1 = v125;
                  goto LABEL_126;
                }
              }
            }
            while ( v96 != v94 );
            v30 = v95;
            a1 = v125;
          }
LABEL_126:
          *(_DWORD *)(v30 + 536) = 0;
        }
        else
        {
          v30 = operator new(0x3A0u);
          *(_BYTE *)v30 = 0;
          *(_QWORD *)(v30 + 96) = v30 + 112;
          *(_QWORD *)(v30 + 128) = v30 + 144;
          *(_QWORD *)(v30 + 160) = v30 + 176;
          *(_QWORD *)(v30 + 192) = v30 + 208;
          *(_QWORD *)(v30 + 224) = v30 + 240;
          *(_QWORD *)(v30 + 256) = v30 + 272;
          *(_QWORD *)(v30 + 288) = v30 + 304;
          *(_QWORD *)(v30 + 320) = v30 + 336;
          *(_QWORD *)(v30 + 352) = v30 + 368;
          *(_QWORD *)(v30 + 384) = v30 + 400;
          *(_QWORD *)(v30 + 416) = v30 + 432;
          *(_QWORD *)(v30 + 104) = 0;
          *(_BYTE *)(v30 + 112) = 0;
          *(_QWORD *)(v30 + 136) = 0;
          *(_BYTE *)(v30 + 144) = 0;
          *(_QWORD *)(v30 + 168) = 0;
          *(_BYTE *)(v30 + 176) = 0;
          *(_QWORD *)(v30 + 200) = 0;
          *(_BYTE *)(v30 + 208) = 0;
          *(_QWORD *)(v30 + 232) = 0;
          *(_BYTE *)(v30 + 240) = 0;
          *(_QWORD *)(v30 + 264) = 0;
          *(_BYTE *)(v30 + 272) = 0;
          *(_QWORD *)(v30 + 296) = 0;
          *(_BYTE *)(v30 + 304) = 0;
          *(_QWORD *)(v30 + 328) = 0;
          *(_BYTE *)(v30 + 336) = 0;
          *(_QWORD *)(v30 + 360) = 0;
          *(_BYTE *)(v30 + 368) = 0;
          *(_QWORD *)(v30 + 392) = 0;
          *(_BYTE *)(v30 + 400) = 0;
          *(_QWORD *)(v30 + 424) = 0x800000000LL;
          *(_QWORD *)(v30 + 528) = v30 + 544;
          *(_QWORD *)(v30 + 536) = 0x600000000LL;
        }
        v31 = v136;
        v32 = v136 + 96;
        *(_BYTE *)v30 = *v136;
        *(_BYTE *)(v30 + 1) = v31[1];
        *(_BYTE *)(v30 + 2) = v31[2];
        *(_BYTE *)(v30 + 3) = v31[3];
        *(_BYTE *)(v30 + 4) = v31[4];
        *(_BYTE *)(v30 + 5) = v31[5];
        *(_BYTE *)(v30 + 6) = v31[6];
        *(_BYTE *)(v30 + 7) = v31[7];
        *(_BYTE *)(v30 + 8) = v31[8];
        *(_BYTE *)(v30 + 9) = v31[9];
        *(_BYTE *)(v30 + 10) = v31[10];
        *(_QWORD *)(v30 + 16) = *((_QWORD *)v31 + 2);
        *(_QWORD *)(v30 + 24) = *((_QWORD *)v31 + 3);
        *(_QWORD *)(v30 + 32) = *((_QWORD *)v31 + 4);
        *(_QWORD *)(v30 + 40) = *((_QWORD *)v31 + 5);
        *(_QWORD *)(v30 + 48) = *((_QWORD *)v31 + 6);
        v33 = *((_QWORD *)v31 + 7);
        v126 = v11;
        *(_QWORD *)(v30 + 56) = v33;
        v34 = *((_QWORD *)v31 + 8);
        v128 = v10;
        v35 = v32;
        *(_QWORD *)(v30 + 64) = v34;
        v36 = *((_QWORD *)v31 + 9);
        v129 = v30;
        *(_QWORD *)(v30 + 72) = v36;
        v37 = *((_QWORD *)v31 + 10);
        v127 = v9;
        *(_QWORD *)(v30 + 80) = v37;
        v38 = *((_QWORD *)v31 + 11);
        v130 = v31;
        *(_QWORD *)(v30 + 88) = v38;
        v39 = v30 + 416;
        v40 = v30 + 96;
        v131 = a1;
        v41 = v39;
        do
        {
          if ( (_BYTE *)v40 != v35 )
          {
            v43 = *(_BYTE **)v40;
            v44 = *((_QWORD *)v35 + 1);
            if ( *(_QWORD *)v40 == v40 + 16 )
              v45 = 15;
            else
              v45 = *(_QWORD *)(v40 + 16);
            if ( v44 > v45 )
            {
              if ( (v44 & 0x8000000000000000LL) != 0LL )
                std::__throw_length_error("basic_string::_M_create");
              v46 = 2 * v45;
              if ( v44 < v46 )
              {
                v47 = v46 + 1;
                if ( v46 < 0 )
                {
                  v47 = 0x8000000000000000LL;
                  v46 = 0x7FFFFFFFFFFFFFFFLL;
                }
              }
              else
              {
                v47 = v44 + 1;
                v46 = *((_QWORD *)v35 + 1);
              }
              v43 = (_BYTE *)operator new(v47);
              v48 = *(_BYTE **)v40;
              if ( *(_QWORD *)v40 != v40 + 16 )
              {
                v125 = (__int64)v43;
                operator delete(v48);
                v43 = (_BYTE *)v125;
              }
              *(_QWORD *)v40 = v43;
              *(_QWORD *)(v40 + 16) = v46;
            }
            if ( v44 )
            {
              v42 = *(_BYTE **)v35;
              if ( v44 == 1 )
                *v43 = *v42;
              else
                memcpy(v43, v42, v44);
              v43 = *(_BYTE **)v40;
            }
            *(_QWORD *)(v40 + 8) = v44;
            v43[v44] = 0;
          }
          v40 += 32;
          v35 += 32;
        }
        while ( v40 != v41 );
        v49 = (__int64)v130;
        v50 = (_BYTE *)v40;
        v11 = v126;
        v9 = v127;
        v10 = v128;
        v28 = (_BYTE *)v129;
        a1 = v131;
        if ( v50 != v130 + 416 )
        {
          v51 = *((unsigned int *)v130 + 106);
          v52 = *(unsigned int *)(v129 + 424);
          v53 = *((_DWORD *)v130 + 106);
          if ( v51 <= v52 )
          {
            if ( !*((_DWORD *)v130 + 106) )
              goto LABEL_59;
            v98 = *(_QWORD *)(v129 + 416);
            v99 = *((_QWORD *)v130 + 52);
            v100 = 0;
            do
            {
              *(_QWORD *)(v98 + v100) = *(_QWORD *)(v99 + v100);
              *(_BYTE *)(v98 + v100 + 8) = *(_BYTE *)(v99 + v100 + 8);
              v100 += 12;
            }
            while ( 12 * v51 != v100 );
            *((_DWORD *)v28 + 106) = v53;
          }
          else
          {
            if ( v51 > *(unsigned int *)(v129 + 428) )
            {
              v103 = v129 + 432;
              v125 = (__int64)v130;
              *(_DWORD *)(v129 + 424) = 0;
              sub_2237220(v50, v103, v51, 12);
              v49 = v125;
              v54 = *((_BYTE **)v28 + 52);
              v57 = 0;
              v55 = *(char **)(v125 + 416);
              v51 = *(unsigned int *)(v125 + 424);
              v56 = v55;
            }
            else
            {
              v54 = *(_BYTE **)(v129 + 416);
              v55 = *((char **)v130 + 52);
              if ( *(_DWORD *)(v129 + 424) )
              {
                v101 = 0;
                v102 = 12 * v52;
                v57 = 12 * v52;
                do
                {
                  *(_QWORD *)&v54[v101] = *(_QWORD *)&v55[v101];
                  v54[v101 + 8] = v55[v101 + 8];
                  v101 += 12;
                }
                while ( v102 != v101 );
                v54 += v102;
                v51 = *(unsigned int *)(v49 + 424);
                v56 = &v55[v102];
              }
              else
              {
                v56 = *((char **)v130 + 52);
                v57 = 0;
              }
            }
            v58 = 12 * v51;
            if ( v56 != &v55[v58] )
            {
              v125 = v49;
              memcpy(v54, v56, v58 - v57);
              v49 = v125;
            }
LABEL_59:
            *((_DWORD *)v28 + 106) = v53;
          }
        }
        sub_9EED30((__int64)(v28 + 528), (__int64 *)(v49 + 528));
      }
      v59 = v123;
      v60 = *(_DWORD *)(v11 + 24);
      v123 = v28;
      v61 = &v139;
      v139.m128i_i64[0] = __PAIR64__(*((_DWORD *)v59 + 6), v60);
      a2 = (__m128i)_mm_loadh_ps((const double *)&v122);
      v139.m128i_i8[8] = 1;
      v140 = a2;
      v141 = v124;
      v62 = (unsigned int)v143 + 1LL;
      v63 = (unsigned __int64)v142 + 40 * (unsigned int)v143;
      if ( v62 > HIDWORD(v143) )
      {
        v106 = -1;
        LOBYTE(v123) = 0;
        if ( v142 <= &v139 && v63 > (unsigned __int64)&v139 )
        {
          LOBYTE(v123) = 1;
          v106 = 0xCCCCCCCCCCCCCCCDLL * (((char *)&v139 - (char *)v142) >> 3);
        }
        v107 = sub_2237400(v132, v132 + 2, v62, 40, &v134);
        v124 = v107;
        v108 = v142;
        v109 = (__m128i *)((char *)v142 + 40 * (unsigned int)v143);
        if ( v142 != v109 )
        {
          v110 = v107;
          do
          {
            v111 = v108->m128i_i32[0];
            v108 = (__m128i *)((char *)v108 + 40);
            v110 += 40;
            *(_DWORD *)(v110 - 40) = v111;
            v112 = *(__int64 *)((char *)&v108[-3].m128i_i64[1] + 4);
            *(_QWORD *)(v110 - 16) = 0;
            *(_QWORD *)(v110 - 36) = v112;
            LODWORD(v112) = v108[-1].m128i_i32[2];
            *(_QWORD *)(v110 - 24) = 0;
            *(_DWORD *)(v110 - 8) = v112;
            *(_QWORD *)(v110 - 16) = v108[-1].m128i_i64[0];
            *(_QWORD *)(v110 - 24) = v108[-2].m128i_i64[1];
            v108[-2].m128i_i64[1] = 0;
          }
          while ( v109 != v108 );
          v113 = (__int64)v142;
          v109 = (__m128i *)((char *)v142 + 40 * (unsigned int)v143);
          if ( v142 != v109 )
          {
            do
            {
              v109 = (__m128i *)((char *)v109 - 40);
              v114 = v109[1].m128i_u64[0];
              if ( v114 )
              {
                v115 = v109[1].m128i_u64[1];
                if ( v115 )
                  sub_1580C40(v115, v114);
              }
            }
            while ( (__m128i *)v113 != v109 );
            v109 = v142;
          }
        }
        v116 = v134.m128i_i32[0];
        if ( v109 != (__m128i *)(v132 + 2) )
        {
          v125 = v134.m128i_i64[0];
          free(v109);
          v116 = v125;
        }
        HIDWORD(v143) = v116;
        v61 = &v139;
        v142 = (__m128i *)v124;
        v63 = v124 + 40LL * (unsigned int)v143;
        if ( (_BYTE)v123 )
          v61 = (__m128i *)(v124 + 40 * v106);
      }
      *(_DWORD *)v63 = v61->m128i_i32[0];
      v64 = *(__int64 *)((char *)v61->m128i_i64 + 4);
      *(_QWORD *)(v63 + 24) = 0;
      *(_QWORD *)(v63 + 4) = v64;
      LODWORD(v64) = v61[2].m128i_i32[0];
      *(_QWORD *)(v63 + 16) = 0;
      *(_DWORD *)(v63 + 32) = v64;
      v65 = v61[1].m128i_i64[1];
      LODWORD(v143) = v143 + 1;
      *(_QWORD *)(v63 + 24) = v65;
      *(_QWORD *)(v63 + 16) = v61[1].m128i_i64[0];
      v66 = v122;
      v61[1].m128i_i64[0] = 0;
      if ( v66 && v140.m128i_i64[0] )
        sub_1580C40(v66, v140.m128i_u64[0]);
      if ( v136 && v137 )
        sub_1580C40(v137, (unsigned __int64)v136);
    }
    *v120 = -8192;
    --*(_DWORD *)(a1 + 3176);
    ++*(_DWORD *)(a1 + 3180);
LABEL_69:
    if ( v9 + 1 == v10 )
      goto LABEL_74;
    v11 = v9[1];
    if ( v11 >= 0xFFFFFFFFFFFFFFFELL )
      break;
    ++v9;
  }
  v67 = v9 + 2;
  while ( 1 )
  {
    v9 = v67;
    if ( v67 == v10 )
      break;
    v11 = *v67++;
    if ( v11 < 0xFFFFFFFFFFFFFFFELL )
      goto LABEL_14;
  }
LABEL_74:
  v13 = v142;
  v68 = 10LL * (unsigned int)v143;
  v69 = (__int64)&v142->m128i_i64[(unsigned __int64)v68 / 2];
  if ( v142 == (__m128i *)&v142->m128i_i8[v68 * 4] )
    goto LABEL_10;
  _BitScanReverse64(&v70, 0xCCCCCCCCCCCCCCCDLL * ((v68 * 4) >> 3));
  sub_179F4C0((__int64)v142, &v142->m128i_i32[v68], 2LL * (int)(63 - (v70 ^ 0x3F)));
  if ( (unsigned __int64)v68 > 160 )
  {
    m128i_i32 = v13[40].m128i_i32;
    sub_179ED30((__int64)v13, (__int64)v13[40].m128i_i64);
    if ( (__m128i *)v69 != &v13[40] )
    {
      do
      {
        v105 = m128i_i32;
        m128i_i32 += 10;
        sub_179ECA0(v105);
      }
      while ( (int *)v69 != m128i_i32 );
    }
  }
  else
  {
    sub_179ED30((__int64)v13, v69);
  }
  v71 = (__int64)v142;
  v13 = (__m128i *)((char *)v142 + 40 * (unsigned int)v143);
  if ( v142 == v13 )
    goto LABEL_10;
  v72 = (__int64 *)(a1 + 8);
  do
  {
    while ( 1 )
    {
      sub_168CDE0((__int64)&v139, v72, *(_DWORD *)v71, v71 + 16, 0);
      sub_15F7200(&v139);
      if ( *(_BYTE *)(v71 + 8) )
        break;
      v71 += 40;
      if ( v13 == (__m128i *)v71 )
        goto LABEL_82;
    }
    v73 = *(_DWORD *)(v71 + 4);
    v71 += 40;
    sub_168B9F0((__int64)&v139, v72, v73, 0x70u, 0);
    sub_15F7200(&v139);
  }
  while ( v13 != (__m128i *)v71 );
LABEL_82:
  v74 = (__int64)v142;
  v13 = (__m128i *)((char *)v142 + 40 * (unsigned int)v143);
  if ( v142 == v13 )
  {
LABEL_10:
    if ( v13 == (__m128i *)(v132 + 2) )
      return;
    goto LABEL_11;
  }
  do
  {
    v13 = (__m128i *)((char *)v13 - 40);
    v75 = v13[1].m128i_u64[0];
    if ( v75 )
    {
      v76 = v13[1].m128i_u64[1];
      if ( v76 )
        sub_1580C40(v76, v75);
    }
  }
  while ( (__m128i *)v74 != v13 );
  v13 = v142;
  if ( v142 != (__m128i *)(v132 + 2) )
LABEL_11:
    free(v13);
}
