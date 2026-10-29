__int64 __fastcall sub_1CBDF60(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        signed __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 si128)
{
  int v7; // eax
  __int64 v8; // rbx
  unsigned __int64 *v9; // rax
  unsigned __int64 *v10; // r14
  _BOOL4 v11; // edx
  __int64 *v12; // rbx
  _BOOL4 v13; // eax
  signed __int64 v14; // rdx
  __int64 v15; // r13
  char v16; // al
  char v17; // al
  __int64 *v18; // r12
  _QWORD *v19; // rax
  __int64 v20; // rbx
  unsigned int v21; // r9d
  __int64 v22; // rax
  __int64 v23; // rbx
  char v24; // al
  __int64 *v25; // rsi
  __int64 v26; // rax
  unsigned int v27; // r9d
  unsigned __int64 v28; // rdx
  char v29; // al
  __int64 v30; // r12
  __int64 v31; // rax
  __int32 v32; // eax
  __int64 *v33; // r12
  __int64 v34; // rcx
  __int64 v35; // rdx
  char v37; // al
  unsigned __int64 v38; // rdx
  __int64 *v39; // rdi
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rax
  __int32 v45; // eax
  unsigned __int64 v46; // rdx
  __int64 *v47; // rdi
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  char v51; // al
  __int64 v52; // rax
  __int64 v53; // rsi
  __int64 v54; // rdx
  unsigned __int64 v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 *v58; // rax
  __int32 v59; // eax
  __int64 *v60; // rax
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rbx
  __int64 v63; // rcx
  __int64 v64; // rdx
  _QWORD *v65; // rdi
  __int64 v66; // rax
  unsigned __int64 v67; // rdx
  unsigned __int64 v68; // rax
  __int64 v69; // r8
  __int64 v70; // rdx
  __int64 v71; // rax
  _QWORD *v72; // rdi
  __int64 v73; // rax
  unsigned __int64 v74; // rdx
  unsigned __int64 v75; // rax
  __int64 *v76; // rax
  __int64 *v77; // rax
  __int32 v78; // eax
  __int64 v79; // r8
  __int64 v80; // rax
  char v81; // al
  __int64 v82; // rax
  unsigned __int64 v83; // rax
  __int64 v84; // rax
  _QWORD *v85; // rdi
  __int64 v86; // rax
  unsigned __int64 v87; // rcx
  unsigned __int64 v88; // rdx
  unsigned __int64 v89; // rax
  __int64 *v90; // rax
  __int32 v91; // eax
  __int64 v92; // rax
  char v93; // al
  __int64 *v94; // rsi
  __int64 v95; // rax
  bool v96; // zf
  unsigned __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // r12
  __int64 v103; // rax
  _QWORD *v104; // rax
  __int64 *v106; // [rsp+10h] [rbp-168h]
  __m128 v108; // [rsp+20h] [rbp-158h] BYREF
  __m128i v109; // [rsp+30h] [rbp-148h] BYREF
  unsigned int v110; // [rsp+44h] [rbp-134h]
  unsigned int v111; // [rsp+48h] [rbp-130h]
  unsigned __int8 v112; // [rsp+4Ch] [rbp-12Ch]
  char v113; // [rsp+4Dh] [rbp-12Bh]
  bool v114; // [rsp+4Eh] [rbp-12Ah]
  char v115; // [rsp+4Fh] [rbp-129h]
  __int64 *v116; // [rsp+50h] [rbp-128h]
  _BYTE *v117; // [rsp+58h] [rbp-120h]
  __int64 v118; // [rsp+60h] [rbp-118h]
  __int64 *v119; // [rsp+68h] [rbp-110h]
  __int64 *v120; // [rsp+70h] [rbp-108h]
  __int64 v121; // [rsp+78h] [rbp-100h]
  __int64 v122; // [rsp+88h] [rbp-F0h] BYREF
  void *v123; // [rsp+90h] [rbp-E8h] BYREF
  signed __int64 v124; // [rsp+98h] [rbp-E0h]
  _BYTE v125[16]; // [rsp+A0h] [rbp-D8h] BYREF
  void *v126[2]; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v127; // [rsp+C0h] [rbp-B8h] BYREF
  unsigned __int8 *v128; // [rsp+D0h] [rbp-A8h] BYREF
  char v129; // [rsp+128h] [rbp-50h]
  unsigned int v130; // [rsp+130h] [rbp-48h]
  char v131; // [rsp+134h] [rbp-44h]

  v7 = *(_DWORD *)(a2 + 20);
  v109.m128i_i32[0] = 0;
  v8 = a2 + 8LL * (v7 & 0x1FFFFFFF) + 24;
  v9 = (unsigned __int64 *)(a3 + 24);
  v106 = (__int64 *)v8;
  if ( !a3 )
    v9 = (unsigned __int64 *)v8;
  if ( a2 + 24 == v8 )
    return 0;
  v10 = v9;
  v11 = 1;
  v111 = a4;
  v12 = (__int64 *)(a2 + 24);
  v117 = (_BYTE *)a5;
  v13 = ((0x49uLL >> a4) & 1) == 0;
  v118 = a2;
  if ( (unsigned int)a4 <= 6 )
    v11 = ((0x49uLL >> a4) & 1) == 0;
  v115 = 0;
  v114 = v11;
  LOBYTE(v11) = (_DWORD)a4 == 0;
  LOBYTE(v13) = (_DWORD)a4 == 6;
  LOBYTE(v110) = 0;
  v14 = v13 | (unsigned int)v11;
  v112 = 0;
  v119 = &v122;
  v113 = v14;
  v120 = &v127;
  v116 = (__int64 *)(a2 + 24);
  do
  {
    v15 = *v12;
    v124 = 0;
    v123 = v125;
    v16 = *(_BYTE *)(v15 + 28);
    v125[0] = 0;
    v17 = v16 & 0x7F;
    if ( v17 == 67 )
    {
      if ( (*(_QWORD *)(v15 + 72) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        goto LABEL_9;
      if ( !(_BYTE)byte_2CCC480 && __cxa_guard_acquire(&byte_2CCC480) )
      {
        a2 = 0xFFFFFFFE00000000LL;
        qword_2CCC4A0 &= 0xFFFFFFFE00000000LL;
        qword_2CCC4A8 = 0;
        qword_2CCC4B8 = 0;
        __cxa_guard_release(&byte_2CCC480);
      }
      v38 = *(_QWORD *)(v15 + 72) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v38 )
      {
        v39 = (__int64 *)(*(_QWORD *)(v15 + 72) & 0xFFFFFFFFFFFFFFF8LL);
        v49 = (*(__int64 *)(v15 + 72) >> 1) & 3;
        if ( v49 == 1 )
        {
          v50 = *(_QWORD *)(v38 + 72);
          v39 = nullptr;
          if ( v50 )
          {
            v39 = (__int64 *)(*(_QWORD *)(v38 + 72) & 0xFFFFFFFFFFFFFFF8LL);
            if ( ((v50 >> 1) & 3) == 2 )
            {
              if ( v39 )
                v39 = (__int64 *)v39[1];
            }
          }
        }
        else if ( v49 == 2 )
        {
          v39 = *(__int64 **)(v38 + 8);
        }
      }
      else
      {
        v39 = &qword_2CCC4A0;
      }
      v40 = sub_F1E510((__int64)v39, a2, *(double *)si128.m128_u64);
      a2 = v111;
      if ( (unsigned __int8)sub_1CBC980(a1, v111, *(_DWORD *)(v15 + 24), v40) )
      {
        *(_QWORD *)(v15 + 72) = 0;
        v18 = v12 + 1;
        if ( !a3 )
        {
LABEL_75:
          if ( sub_BBE5D0(v15) )
          {
LABEL_76:
            if ( v106 == v18 )
            {
              v12 = v106;
              goto LABEL_68;
            }
            if ( !v113 )
            {
LABEL_78:
              v12 = v18;
              goto LABEL_68;
            }
            goto LABEL_84;
          }
LABEL_92:
          if ( (*(_QWORD *)(v15 + 72) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            goto LABEL_93;
          goto LABEL_89;
        }
      }
      else
      {
LABEL_9:
        v18 = v12 + 1;
        if ( !a3 )
          goto LABEL_75;
      }
      v108.m128_u64[0] = *v10;
      if ( !sub_BBE5D0(v15) )
      {
        if ( !v108.m128_u64[0] )
          goto LABEL_92;
        a2 = v108.m128_u64[0];
        if ( !sub_1A434F0(a1, v108.m128_u64[0], 0, a4, a5, a6) )
        {
          v14 = *(_QWORD *)(v15 + 72);
          a4 = *(_QWORD *)(v108.m128_u64[0] + 72);
          v19 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
          a2 = a4 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (a4 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          {
            if ( v19 )
            {
LABEL_93:
              v12 = v18;
              v45 = sub_BBE470(v15);
              LOBYTE(v110) = 1;
              v109.m128i_i32[0] = v45;
              goto LABEL_85;
            }
LABEL_89:
            if ( (_BYTE)v110 )
              goto LABEL_90;
LABEL_50:
            v12 = v18;
            goto LABEL_85;
          }
          v62 = v108.m128_u64[0];
          v63 = (a4 >> 1) & 3;
          if ( v63 != 1 )
          {
LABEL_136:
            if ( v19 )
              goto LABEL_137;
LABEL_147:
            *(_QWORD *)(v15 + 72) = v62 & 0xFFFFFFFFFFFFFFF9LL | 2;
LABEL_148:
            v12 = v18;
            v109.m128i_i32[0] = sub_BBE470(v108.m128_i64[0]);
            goto LABEL_67;
          }
LABEL_135:
          v62 = a2;
          goto LABEL_136;
        }
        v14 = *(_QWORD *)(v15 + 72);
        v19 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v14 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          if ( !v117 || !*v117 )
          {
            v20 = v108.m128_u64[0];
            v110 = sub_BBE470(v108.m128_i64[0]);
            v21 = sub_BBE470(v15);
            if ( *(char *)(v20 + 29) < 0 )
            {
              v96 = (*(_BYTE *)(v20 + 8) & 7) == 0;
              v109.m128i_i32[0] = v21;
              if ( !v96 )
              {
                v22 = sub_B8C660(v108.m128_i64[0]);
                v21 = v109.m128i_i32[0];
LABEL_19:
                v109.m128i_i32[0] = v21;
                if ( v22 )
                {
                  v23 = v108.m128_u64[0];
                  a2 = v108.m128_u64[0];
                  v24 = sub_AB8410(*(_QWORD **)(a1 + 248), v108.m128_i64[0], v15);
                  a6 = v109.m128i_u32[0];
                  if ( !v24 )
                  {
                    v25 = nullptr;
                    if ( *(char *)(v23 + 29) < 0 && (*(_BYTE *)(v23 + 8) & 7) != 0 )
                    {
                      v108.m128_i32[0] = v109.m128i_i32[0];
                      v26 = sub_B8C660(v23);
                      LODWORD(a6) = v108.m128_i32[0];
                      v25 = (__int64 *)v26;
                    }
                    v108.m128_i32[0] = a6;
LABEL_25:
                    sub_FEEE60((__int64)v126, v25, 0);
                    sub_A0AAD0((__int64)&v123, v126);
                    v27 = v108.m128_i32[0];
                    if ( v126[0] != v120 )
                    {
                      operator delete(v126[0]);
                      v27 = v108.m128_i32[0];
                    }
                    v109.m128i_i32[0] = v27;
                    v12 = v18;
LABEL_28:
                    sub_168B9F0((__int64)v126, (__int64 *)(a1 + 8), v27, 0x1414u, 0);
                    sub_15F7200(v126);
                    a2 = a1 + 8;
                    sub_168B9F0((__int64)v126, (__int64 *)(a1 + 8), v110, 0x1905u, 0);
                    if ( v129 )
                    {
                      a2 = (__int64)v123;
                      sub_AEC220(&v128, v123, v124);
                    }
                    else if ( v131 )
                    {
                      v102 = sub_168B9E0(v126);
                      v103 = v127;
                      if ( v127 )
                        v103 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v127 + 32LL))(v127);
                      v122 = v103;
                      v104 = sub_1587BC0(v102, v119, v98, v99, v100, v101);
                      a2 = (__int64)v123;
                      sub_AEC220((unsigned __int8 **)(*v104 + 32LL * v130 + 8), v123, v124);
                    }
                    sub_15F7200(v126);
                    LOBYTE(v110) = 1;
                    v112 = 1;
LABEL_85:
                    if ( !a3 )
                    {
LABEL_68:
                      if ( v123 != v125 )
                        operator delete(v123);
                      continue;
                    }
LABEL_67:
                    ++v10;
                    goto LABEL_68;
                  }
LABEL_173:
                  v109.m128i_i32[0] = a6;
                  v12 = v18;
                  goto LABEL_174;
                }
              }
LABEL_206:
              v12 = v18;
LABEL_207:
              sub_168B9F0((__int64)v126, (__int64 *)(a1 + 8), v21, 0x1416u, 0);
              sub_15F7200(v126);
              a2 = a1 + 8;
              sub_168B9F0((__int64)v126, (__int64 *)(a1 + 8), v110, 0x1904u, 0);
              sub_15F7200(v126);
              LOBYTE(v110) = 1;
              v112 = 1;
              goto LABEL_85;
            }
            if ( (*(_BYTE *)(v108.m128_u64[0] + 8) & 7) != 0 )
            {
              v22 = *(_QWORD *)(v108.m128_u64[0] - 8);
              goto LABEL_19;
            }
LABEL_205:
            v109.m128i_i32[0] = v21;
            goto LABEL_206;
          }
          a2 = *(_QWORD *)(v108.m128_u64[0] + 72) & 0xFFFFFFFFFFFFFFF8LL;
          if ( !a2 )
            goto LABEL_93;
          v63 = (*(__int64 *)(v108.m128_u64[0] + 72) >> 1) & 3;
          if ( v63 != 1 )
          {
            v62 = v108.m128_u64[0];
LABEL_137:
            a2 = a1;
            v64 = (v14 >> 1) & 3;
            v65 = *(_QWORD **)(a1 + 248);
            if ( v64 == 1 )
            {
              v66 = v19[9];
              v67 = v66 & 0xFFFFFFFFFFFFFFF8LL;
              v109.m128i_i64[0] = v66 & 0xFFFFFFFFFFFFFFF8LL;
              if ( v66 )
              {
                if ( ((v66 >> 1) & 3) == 2 )
                {
                  v109.m128i_i64[0] = 0;
                  if ( v67 )
                    v109.m128i_i64[0] = *(_QWORD *)(v67 + 8);
                }
              }
              v68 = sub_BC1A70(v65, a1, v67, v63, a5, a6);
              v121 = v62;
              si128 = _mm_loadh_ps((const double *)v109.m128i_i64);
              *(__m128 *)v68 = si128;
              *(_QWORD *)(v15 + 72) = v68 & 0xFFFFFFFFFFFFFFF9LL | 4;
            }
            else if ( v64 == 2 )
            {
              *v19 = v62;
            }
            else
            {
              v109.m128i_i64[0] = (__int64)v19;
              v109 = (__m128i)_mm_loadh_ps((const double *)v109.m128i_i64);
              v83 = sub_BC1A70(v65, a1, v64, v63, a5, a6);
              si128 = (__m128)_mm_load_si128(&v109);
              *(__m128 *)v83 = si128;
              *(_QWORD *)(v15 + 72) = v83 & 0xFFFFFFFFFFFFFFF9LL | 4;
            }
            goto LABEL_148;
          }
          goto LABEL_135;
        }
        v14 = *(_QWORD *)(v108.m128_u64[0] + 72) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v14 )
        {
          v62 = *(_QWORD *)(v108.m128_u64[0] + 72) & 0xFFFFFFFFFFFFFFF8LL;
          if ( ((*(__int64 *)(v108.m128_u64[0] + 72) >> 1) & 3) != 1 )
            v62 = v108.m128_u64[0];
          goto LABEL_147;
        }
LABEL_117:
        if ( !(_BYTE)v110 )
          goto LABEL_66;
LABEL_90:
        if ( v114 )
        {
          v12 = v18;
          LOBYTE(v110) = v114;
        }
        else
        {
          v44 = *v12;
          v12 = v18;
          sub_168B9F0((__int64)v126, (__int64 *)(a1 + 8), *(_DWORD *)(v44 + 24), 0x1415u, 0);
          sub_15F7200(v126);
          a2 = a1 + 8;
          sub_168B9F0((__int64)v126, (__int64 *)(a1 + 8), v109.m128i_u32[0], 0x1904u, 0);
          sub_15F7200(v126);
          LOBYTE(v110) = 1;
          v115 = 1;
          v112 = 1;
        }
        goto LABEL_85;
      }
LABEL_64:
      if ( v106 == v18 )
      {
        v12 = v106;
        goto LABEL_67;
      }
      if ( v113 )
        goto LABEL_84;
LABEL_66:
      v12 = v18;
      goto LABEL_67;
    }
    if ( v17 != 47 )
    {
      a2 = v15;
      if ( (unsigned __int8)sub_1CAED30(a1, v15) )
        goto LABEL_51;
      if ( (*(_QWORD *)(v15 + 72) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v60 = sub_A5EFB0(v15);
        v61 = sub_F1E510((__int64)v60, v15, *(double *)si128.m128_u64);
        a2 = v111;
        if ( (unsigned __int8)sub_1CBC980(a1, v111, *(_DWORD *)(v15 + 24), v61) )
          *(_QWORD *)(v15 + 72) = 0;
      }
      v18 = v12 + 1;
      v37 = *(_BYTE *)(v15 + 80) & 2;
      if ( a3 )
      {
        if ( v37 )
        {
          if ( sub_BBD670(*(_QWORD *)(v15 + 56)) )
            goto LABEL_66;
          goto LABEL_64;
        }
        a5 = *v10;
        if ( *v10 )
        {
          v108.m128_u64[0] = *v10;
          a2 = v108.m128_u64[0];
          v51 = sub_1A434F0(a1, v108.m128_u64[0], 0, a4, a5, a6);
          a5 = v108.m128_u64[0];
          if ( v51 )
          {
            v52 = *(_QWORD *)(v15 + 72);
            a4 = v52 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v52 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
            {
              v14 = *(_QWORD *)(v108.m128_u64[0] + 72) & 0xFFFFFFFFFFFFFFF8LL;
              if ( !v14 )
                goto LABEL_117;
              v55 = *(_QWORD *)(v108.m128_u64[0] + 72) & 0xFFFFFFFFFFFFFFF8LL;
              if ( ((*(__int64 *)(v108.m128_u64[0] + 72) >> 1) & 3) != 1 )
                v55 = v108.m128_u64[0];
              goto LABEL_213;
            }
            v53 = (__int64)v117;
            if ( !v117 || !*v117 )
            {
              v76 = sub_A5EFB0(v108.m128_i64[0]);
              v110 = sub_1CB2FB0((__int64)v76, v53, *(double *)si128.m128_u64);
              v77 = sub_A5EFB0(v15);
              v78 = sub_1CB2FB0((__int64)v77, v53, *(double *)si128.m128_u64);
              v79 = v108.m128_u64[0];
              v21 = v78;
              if ( *(char *)(v108.m128_u64[0] + 29) < 0 )
              {
                v96 = (*(_BYTE *)(v108.m128_u64[0] + 8) & 7) == 0;
                v109.m128i_i32[0] = v78;
                if ( v96 )
                  goto LABEL_206;
                v80 = sub_B8C660(v108.m128_i64[0]);
                v79 = v108.m128_u64[0];
                v21 = v109.m128i_i32[0];
              }
              else
              {
                if ( (*(_BYTE *)(v108.m128_u64[0] + 8) & 7) == 0 )
                  goto LABEL_205;
                v80 = *(_QWORD *)(v108.m128_u64[0] - 8);
              }
              if ( v80 )
              {
                a2 = v79;
                v108.m128_i32[0] = v21;
                v109.m128i_i64[0] = v79;
                v81 = sub_AB8410(*(_QWORD **)(a1 + 248), v79, v15);
                a6 = v108.m128_u32[0];
                if ( !v81 )
                {
                  v82 = 0;
                  if ( *(char *)(v109.m128i_i64[0] + 29) < 0 && (*(_BYTE *)(v109.m128i_i64[0] + 8) & 7) != 0 )
                  {
                    v82 = sub_B8C660(v109.m128i_i64[0]);
                    LODWORD(a6) = v108.m128_i32[0];
                  }
                  v108.m128_i32[0] = a6;
                  v25 = (__int64 *)v82;
                  goto LABEL_25;
                }
                goto LABEL_173;
              }
              goto LABEL_205;
            }
            a2 = *(_QWORD *)(v108.m128_u64[0] + 72) & 0xFFFFFFFFFFFFFFF8LL;
            if ( a2 )
            {
              v54 = (*(__int64 *)(v108.m128_u64[0] + 72) >> 1) & 3;
              if ( v54 != 1 )
              {
                v55 = v108.m128_u64[0];
                goto LABEL_194;
              }
LABEL_192:
              v55 = a2;
LABEL_193:
              if ( a4 )
              {
LABEL_194:
                a2 = a1;
                v84 = (v52 >> 1) & 3;
                v85 = *(_QWORD **)(a1 + 248);
                if ( v84 == 1 )
                {
                  v86 = *(_QWORD *)(a4 + 72);
                  v87 = v86 & 0xFFFFFFFFFFFFFFF8LL;
                  v88 = v86 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( v86 )
                  {
                    if ( ((v86 >> 1) & 3) == 2 )
                    {
                      v88 = 0;
                      if ( v87 )
                        v88 = *(_QWORD *)(v87 + 8);
                    }
                  }
                  v121 = v88;
                  v109.m128i_i64[0] = v108.m128_u64[0];
                  v89 = sub_BC1A70(v85, a1, v88, v87, v108.m128_i64[0], a6);
                  v108.m128_u64[0] = v121;
                  si128 = _mm_loadh_ps((const double *)v108.m128_u64);
                }
                else
                {
                  if ( v84 == 2 )
                  {
                    *(_QWORD *)a4 = v55;
                    goto LABEL_214;
                  }
                  v108.m128_u64[0] = a4;
                  v109.m128i_i64[0] = a5;
                  v108 = _mm_loadh_ps((const double *)v108.m128_u64);
                  v89 = sub_BC1A70(v85, a1, v54, a4, a5, a6);
                  si128 = (__m128)_mm_load_si128((const __m128i *)&v108);
                }
                *(__m128 *)v89 = si128;
                a5 = v109.m128i_i64[0];
                *(_QWORD *)(v15 + 72) = v89 & 0xFFFFFFFFFFFFFFF9LL | 4;
LABEL_214:
                v12 = v18;
                v90 = sub_A5EFB0(a5);
                v109.m128i_i32[0] = sub_1CB2FB0((__int64)v90, a2, *(double *)si128.m128_u64);
                goto LABEL_67;
              }
LABEL_213:
              *(_QWORD *)(v15 + 72) = v55 & 0xFFFFFFFFFFFFFFF9LL | 2;
              goto LABEL_214;
            }
LABEL_128:
            ++v12;
            v58 = sub_A5EFB0(v15);
            v59 = sub_1CB2FB0((__int64)v58, a2, *(double *)si128.m128_u64);
            LOBYTE(v110) = 1;
            v109.m128i_i32[0] = v59;
            goto LABEL_85;
          }
          v14 = *(_QWORD *)(v108.m128_u64[0] + 72);
          v52 = *(_QWORD *)(v15 + 72);
          a4 = v52 & 0xFFFFFFFFFFFFFFF8LL;
          a2 = v14 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v14 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            v55 = v108.m128_u64[0];
            v54 = (v14 >> 1) & 3;
            if ( v54 != 1 )
              goto LABEL_193;
            goto LABEL_192;
          }
LABEL_127:
          if ( !a4 )
            goto LABEL_89;
          goto LABEL_128;
        }
      }
      else if ( v37 )
      {
        if ( sub_BBD670(*(_QWORD *)(v15 + 56)) )
          goto LABEL_78;
        goto LABEL_76;
      }
      a4 = *(_QWORD *)(v15 + 72) & 0xFFFFFFFFFFFFFFF8LL;
      goto LABEL_127;
    }
    if ( v111 == 6 || *(_BYTE *)(v15 + 80) )
      goto LABEL_37;
    v28 = *(_QWORD *)(v15 + 56) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v15 + 56) & 4) != 0 )
      v28 = *(_QWORD *)(v28 + 32);
    a2 = *(unsigned int *)(v15 + 24);
    if ( !(unsigned __int8)sub_1E535C0(a1, a2, v28, 13) )
    {
LABEL_37:
      if ( (*(_QWORD *)(v15 + 72) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        goto LABEL_38;
      if ( !(_BYTE)byte_2CCC440 && __cxa_guard_acquire(&byte_2CCC440) )
      {
        qword_2CCC460 &= 0xFFFFFFFE00000000LL;
        qword_2CCC468 = 0;
        qword_2CCC478 = 0;
        __cxa_guard_release(&byte_2CCC440);
      }
      v46 = *(_QWORD *)(v15 + 72) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v46 )
      {
        v47 = &qword_2CCC460;
        goto LABEL_98;
      }
      v47 = (__int64 *)(*(_QWORD *)(v15 + 72) & 0xFFFFFFFFFFFFFFF8LL);
      v56 = (*(__int64 *)(v15 + 72) >> 1) & 3;
      if ( v56 == 1 )
      {
        v57 = *(_QWORD *)(v46 + 72);
        v47 = nullptr;
        if ( !v57 || (v47 = (__int64 *)(*(_QWORD *)(v46 + 72) & 0xFFFFFFFFFFFFFFF8LL), ((v57 >> 1) & 3) != 2) || !v47 )
        {
LABEL_98:
          v48 = sub_F1E510((__int64)v47, a2, *(double *)si128.m128_u64);
          a2 = v111;
          if ( (unsigned __int8)sub_1CBC980(a1, v111, *(_DWORD *)(v15 + 24), v48) )
            *(_QWORD *)(v15 + 72) = 0;
LABEL_38:
          v29 = *(_BYTE *)(v15 + 80);
          if ( a3 )
          {
            if ( !v29 )
            {
              v30 = *v10;
              if ( *v10 )
              {
                a2 = *v10;
                if ( sub_1A434F0(a1, *v10, 0, a4, a5, a6) )
                {
                  v31 = *(_QWORD *)(v15 + 72);
                  a4 = v31 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (v31 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
                  {
                    v14 = *(_QWORD *)(v30 + 72) & 0xFFFFFFFFFFFFFFF8LL;
                    if ( !v14 )
                    {
                      v18 = v12 + 1;
                      if ( !(_BYTE)v110 )
                        goto LABEL_66;
                      goto LABEL_90;
                    }
                    if ( ((*(__int64 *)(v30 + 72) >> 1) & 3) != 1 )
                      v14 = v30;
                    v69 = v14;
                    goto LABEL_187;
                  }
                  if ( v117 && *v117 )
                  {
                    a2 = *(_QWORD *)(v30 + 72) & 0xFFFFFFFFFFFFFFF8LL;
                    if ( !a2 )
                    {
LABEL_46:
                      ++v12;
                      v32 = sub_BBEB00(v15);
                      LOBYTE(v110) = 1;
                      v109.m128i_i32[0] = v32;
                      goto LABEL_85;
                    }
                    v70 = (*(__int64 *)(v30 + 72) >> 1) & 3;
                    if ( v70 != 1 )
                    {
                      v69 = v30;
LABEL_155:
                      a2 = a1;
                      v71 = (v31 >> 1) & 3;
                      v72 = *(_QWORD **)(a1 + 248);
                      if ( v71 == 1 )
                      {
                        v73 = *(_QWORD *)(a4 + 72);
                        v74 = v73 & 0xFFFFFFFFFFFFFFF8LL;
                        v108.m128_u64[0] = v73 & 0xFFFFFFFFFFFFFFF8LL;
                        if ( v73 )
                        {
                          if ( ((v73 >> 1) & 3) == 2 )
                          {
                            v108.m128_u64[0] = 0;
                            if ( v74 )
                              v108.m128_u64[0] = *(_QWORD *)(v74 + 8);
                          }
                        }
                        v109.m128i_i64[0] = v69;
                        v75 = sub_BC1A70(v72, a1, v74, a4, v69, a6);
                        si128 = _mm_loadh_ps((const double *)v108.m128_u64);
                        *(__m128 *)v75 = si128;
                        *(_QWORD *)(v15 + 72) = v75 & 0xFFFFFFFFFFFFFFF9LL | 4;
                      }
                      else if ( v71 == 2 )
                      {
                        *(_QWORD *)a4 = v69;
                      }
                      else
                      {
                        v108.m128_u64[0] = a4;
                        v108 = _mm_loadh_ps((const double *)v108.m128_u64);
                        v97 = sub_BC1A70(v72, a1, v70, a4, v69, a6);
                        si128 = (__m128)_mm_load_si128((const __m128i *)&v108);
                        *(__m128 *)v97 = si128;
                        *(_QWORD *)(v15 + 72) = v97 & 0xFFFFFFFFFFFFFFF9LL | 4;
                      }
                      goto LABEL_188;
                    }
LABEL_153:
                    v69 = a2;
LABEL_154:
                    if ( a4 )
                      goto LABEL_155;
LABEL_187:
                    *(_QWORD *)(v15 + 72) = v69 & 0xFFFFFFFFFFFFFFF9LL | 2;
LABEL_188:
                    ++v12;
                    v109.m128i_i32[0] = sub_BBEB00(v30);
                    goto LABEL_67;
                  }
                  ++v12;
                  v110 = sub_BBEB00(v30);
                  v91 = sub_BBEB00(v15);
                  v21 = v91;
                  if ( *(char *)(v30 + 29) < 0 )
                  {
                    if ( (*(_BYTE *)(v30 + 8) & 7) != 0 )
                    {
                      v108.m128_i32[0] = v91;
                      v92 = sub_B8C660(v30);
                      v21 = v108.m128_i32[0];
LABEL_218:
                      if ( v92 )
                      {
                        a2 = v30;
                        v108.m128_i32[0] = v21;
                        v93 = sub_AB8410(*(_QWORD **)(a1 + 248), v30, v15);
                        a6 = v108.m128_u32[0];
                        if ( !v93 )
                        {
                          v94 = nullptr;
                          if ( *(char *)(v30 + 29) < 0 && (*(_BYTE *)(v30 + 8) & 7) != 0 )
                          {
                            v95 = sub_B8C660(v30);
                            LODWORD(a6) = v108.m128_i32[0];
                            v94 = (__int64 *)v95;
                          }
                          v108.m128_i32[0] = a6;
                          sub_FEEE60((__int64)v126, v94, 0);
                          sub_A0AAD0((__int64)&v123, v126);
                          v27 = v108.m128_i32[0];
                          if ( v126[0] != v120 )
                          {
                            operator delete(v126[0]);
                            v27 = v108.m128_i32[0];
                          }
                          v109.m128i_i32[0] = v27;
                          goto LABEL_28;
                        }
                        v109.m128i_i32[0] = v108.m128_i32[0];
LABEL_174:
                        LOBYTE(v110) = 1;
                        goto LABEL_67;
                      }
                    }
                  }
                  else if ( (*(_BYTE *)(v30 + 8) & 7) != 0 )
                  {
                    v92 = *(_QWORD *)(v30 - 8);
                    goto LABEL_218;
                  }
                  v109.m128i_i32[0] = v21;
                  goto LABEL_207;
                }
                v14 = *(_QWORD *)(v30 + 72);
                v31 = *(_QWORD *)(v15 + 72);
                a4 = v31 & 0xFFFFFFFFFFFFFFF8LL;
                a2 = v14 & 0xFFFFFFFFFFFFFFF8LL;
                if ( (v14 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                {
                  v69 = v30;
                  v70 = (v14 >> 1) & 3;
                  if ( v70 != 1 )
                    goto LABEL_154;
                  goto LABEL_153;
                }
                if ( a4 )
                  goto LABEL_46;
LABEL_49:
                v18 = v12 + 1;
                if ( (_BYTE)v110 )
                  goto LABEL_90;
                goto LABEL_50;
              }
LABEL_114:
              a4 = *(_QWORD *)(v15 + 72) & 0xFFFFFFFFFFFFFFF8LL;
              if ( a4 )
                goto LABEL_46;
              goto LABEL_49;
            }
          }
          else if ( !v29 )
          {
            goto LABEL_114;
          }
          v18 = v12 + 1;
          v41 = *(_QWORD *)(v15 + 48) & 0xFFFFFFFFFFFFFFF0LL;
          v42 = *(_QWORD *)v41;
          if ( *(_BYTE *)(*(_QWORD *)v41 + 16LL) != 38 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 38
              && sub_F63050(v42, a2, v14, a4) )
            {
              ++v12;
              goto LABEL_85;
            }
            if ( v106 == v18 )
            {
              v12 = v106;
              goto LABEL_85;
            }
            if ( v113 )
            {
LABEL_84:
              v43 = *v12;
              v12 = v18;
              a2 = a1 + 8;
              sub_168B9F0((__int64)v126, (__int64 *)(a1 + 8), *(_DWORD *)(v43 + 24), 0x141Bu, 0);
              sub_15F7200(v126);
              v112 = 1;
              goto LABEL_85;
            }
          }
          goto LABEL_50;
        }
      }
      else if ( v56 != 2 )
      {
        goto LABEL_98;
      }
      v47 = (__int64 *)v47[1];
      goto LABEL_98;
    }
LABEL_51:
    if ( v123 != v125 )
      operator delete(v123);
    v112 = 1;
    ++v12;
  }
  while ( v106 != v12 );
  v33 = v116;
  if ( v115 )
  {
    v34 = v118 + 8LL * (*(_DWORD *)(v118 + 20) & 0x1FFFFFFF) + 24;
    if ( v116 != (__int64 *)v34 )
    {
      do
      {
        v35 = *v33++;
        *(_QWORD *)(v35 + 72) = 0;
      }
      while ( v33 != (__int64 *)v34 );
    }
  }
  return v112;
}
