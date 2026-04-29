unsigned __int64 __fastcall sub_1F3340(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rbx
  __int64 v7; // r12
  __int64 v8; // rax
  unsigned __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  bool v14; // cl
  __int64 v15; // rcx
  __int64 v16; // r9
  unsigned __int64 v17; // r10
  char v18; // al
  bool v19; // al
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  bool v22; // al
  __int64 v23; // rcx
  int v24; // r8d
  int v25; // r9d
  unsigned __int64 v26; // r12
  __int64 v27; // rax
  unsigned __int64 v28; // rsi
  bool v29; // dl
  __int64 v30; // rdx
  char v31; // dl
  __int64 v32; // rdx
  unsigned __int64 v33; // rsi
  bool v34; // dl
  __int64 v35; // rdi
  char v36; // cl
  __int64 v37; // rcx
  __int64 v38; // r9
  unsigned __int64 v39; // r8
  char v40; // al
  char v41; // dl
  __int64 v42; // rdx
  unsigned __int64 v43; // rsi
  bool v44; // al
  char v45; // dl
  __int64 v46; // rbp
  __int64 v47; // r12
  _QWORD *v48; // r13
  __int64 v49; // rdi
  __int64 v50; // rdi
  __int64 v51; // rax
  __m128i v52; // xmm0
  __int64 v53; // rax
  __m128i v54; // xmm1
  __int64 v55; // rax
  __m128i v56; // xmm0
  __int64 v57; // rbp
  __m128i v58; // xmm0
  __int64 v59; // rdi
  __int64 v60; // rax
  __m128i v61; // xmm3
  bool v62; // zf
  __int64 v63; // rbp
  __int64 v64; // r13
  _QWORD *v65; // r12
  __int64 v66; // rdi
  __m128i v67; // xmm4
  __int64 *v68; // rbp
  __int64 *v69; // rsi
  __int64 v70; // rax
  __m128i v71; // xmm0
  __m128i v72; // xmm1
  __m128i v73; // xmm0
  __int64 v74; // rdi
  __int64 v75; // rbp
  __int64 v76; // r13
  _QWORD *v77; // r12
  __int64 v78; // rdi
  __int64 v79; // rdi
  __int64 v80; // rbp
  __int64 v81; // r13
  _QWORD *v82; // r12
  __int64 v83; // rdi
  char v85; // al
  __int64 i; // rbp
  __int64 v87; // rax
  __int64 *v88; // rsi
  __m128i v89; // xmm0
  __int64 *v90; // r14
  __int64 v91; // rax
  __m128i v92; // xmm0
  __int64 v93; // rax
  __m128i v94; // xmm0
  __int64 v95; // rax
  __m128i v96; // xmm0
  __m128i v97; // xmm0
  __m128i v98; // xmm0
  __int64 v99; // rdi
  __int64 v100; // r13
  __int64 v101; // r12
  _QWORD *v102; // r14
  __int64 v103; // rdi
  __int64 v104; // r13
  __int64 v105; // r12
  _QWORD *v106; // rdx
  __int64 v107; // rdi
  __m128i v108; // [rsp+0h] [rbp-138h] BYREF
  __int64 *v109; // [rsp+10h] [rbp-128h]
  __int64 v110; // [rsp+18h] [rbp-120h]
  __int64 *v111; // [rsp+20h] [rbp-118h]
  __int64 v112; // [rsp+28h] [rbp-110h]
  __int64 v113; // [rsp+30h] [rbp-108h] BYREF
  int v114; // [rsp+38h] [rbp-100h]
  __int64 v115; // [rsp+40h] [rbp-F8h]
  __m128i v116; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v117; // [rsp+58h] [rbp-E0h]
  __m128i v118; // [rsp+60h] [rbp-D8h] BYREF
  __m128i v119; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v120; // [rsp+80h] [rbp-B8h]
  int v121; // [rsp+88h] [rbp-B0h]
  __int64 v122; // [rsp+90h] [rbp-A8h] BYREF
  int v123; // [rsp+98h] [rbp-A0h]
  __int64 v124; // [rsp+A0h] [rbp-98h]
  __m128i v125; // [rsp+A8h] [rbp-90h]
  __int64 v126; // [rsp+B8h] [rbp-80h]
  __m128i v127; // [rsp+C0h] [rbp-78h]
  __m128i v128; // [rsp+D0h] [rbp-68h]
  __int64 v129; // [rsp+E0h] [rbp-58h]
  int v130; // [rsp+E8h] [rbp-50h]
  __int64 v131; // [rsp+F0h] [rbp-48h]
  unsigned __int64 v132; // [rsp+F8h] [rbp-40h]

  v132 = __readfsqword(0x28u);
  v3 = a2 - a1;
  if ( a2 - a1 <= 1536 )
    return v132 - __readfsqword(0x28u);
  v5 = a2;
LABEL_3:
  v112 = 0xAAAAAAAAAAAAAAABLL * (v3 >> 5);
  v7 = v112 >> 1;
  if ( a3 )
  {
    v8 = *(_QWORD *)(a1 + 160);
    --a3;
    v9 = a1 + 96;
    v10 = a1 + 96 * v7;
    v11 = *(_QWORD *)(v10 + 64);
    if ( v8 != v11 )
    {
      v12 = *(_QWORD *)(v10 + 72);
      if ( !*(_QWORD *)(a1 + 168) )
      {
        v14 = v12 == 0;
        goto LABEL_9;
      }
      if ( !v12 )
      {
        v37 = *(_QWORD *)(v5 - 32);
        if ( v11 != v37 )
        {
          v38 = *(_QWORD *)(v5 - 24);
          goto LABEL_123;
        }
LABEL_57:
        v41 = *(_BYTE *)(v10 + 84);
        if ( v41 == *(_BYTE *)(v5 - 12) )
        {
          if ( *(_DWORD *)(v10 + 80) < *(_DWORD *)(v5 - 16) )
            goto LABEL_25;
        }
        else if ( !v41 )
        {
          goto LABEL_25;
        }
LABEL_59:
        if ( v37 == v8 )
          goto LABEL_53;
        goto LABEL_60;
      }
      v13 = *(_QWORD *)(v11 + 24);
      if ( *(_QWORD *)(v8 + 24) != v13 )
      {
        v14 = *(_QWORD *)(v8 + 24) < v13;
        goto LABEL_9;
      }
    }
    v36 = *(_BYTE *)(a1 + 180);
    if ( v36 != *(_BYTE *)(v10 + 84) )
    {
      if ( v36 )
        goto LABEL_10;
      goto LABEL_47;
    }
    v14 = *(_DWORD *)(a1 + 176) < *(_DWORD *)(v10 + 80);
LABEL_9:
    if ( !v14 )
    {
LABEL_10:
      v15 = *(_QWORD *)(v5 - 32);
      if ( v8 == v15 )
      {
LABEL_16:
        v18 = *(_BYTE *)(a1 + 180);
        if ( v18 != *(_BYTE *)(v5 - 12) )
        {
          if ( !v18 )
            goto LABEL_55;
          if ( v11 == v15 )
            goto LABEL_119;
LABEL_20:
          v20 = *(_QWORD *)(v5 - 24);
          if ( !*(_QWORD *)(v10 + 72) )
          {
            v22 = v20 == 0;
            goto LABEL_24;
          }
          if ( !v20 )
            goto LABEL_65;
          v21 = *(_QWORD *)(v15 + 24);
          if ( *(_QWORD *)(v11 + 24) != v21 )
          {
            v22 = *(_QWORD *)(v11 + 24) < v21;
            goto LABEL_24;
          }
LABEL_119:
          v85 = *(_BYTE *)(v10 + 84);
          if ( v85 != *(_BYTE *)(v5 - 12) )
          {
            if ( v85 )
              goto LABEL_25;
            goto LABEL_65;
          }
          v22 = *(_DWORD *)(v10 + 80) < *(_DWORD *)(v5 - 16);
LABEL_24:
          if ( !v22 )
          {
LABEL_25:
            sub_1F2F90(a1, v10);
            goto LABEL_26;
          }
LABEL_65:
          sub_1F2F90(a1, v5 - 96);
LABEL_26:
          v26 = v5;
LABEL_27:
          v27 = *(_QWORD *)(a1 + 64);
          while ( 1 )
          {
            v30 = *(_QWORD *)(v9 + 64);
            if ( v30 != v27 )
            {
              v23 = *(_QWORD *)(a1 + 72);
              if ( !*(_QWORD *)(v9 + 72) )
              {
                v29 = v23 == 0;
LABEL_32:
                if ( !v29 )
                  goto LABEL_37;
                goto LABEL_33;
              }
              if ( !v23 )
                goto LABEL_33;
              v28 = *(_QWORD *)(v27 + 24);
              if ( *(_QWORD *)(v30 + 24) != v28 )
              {
                v29 = *(_QWORD *)(v30 + 24) < v28;
                goto LABEL_32;
              }
            }
            v31 = *(_BYTE *)(v9 + 84);
            if ( v31 == *(_BYTE *)(a1 + 84) )
            {
              v29 = *(_DWORD *)(v9 + 80) < *(_DWORD *)(a1 + 80);
              goto LABEL_32;
            }
            if ( v31 )
            {
              while ( 1 )
              {
LABEL_37:
                v32 = *(_QWORD *)(v26 - 32);
                v26 -= 96LL;
                if ( v27 == v32 )
                  goto LABEL_66;
                v23 = *(_QWORD *)(v26 + 72);
                if ( !*(_QWORD *)(a1 + 72) )
                {
                  v34 = v23 == 0;
                  goto LABEL_42;
                }
                if ( v23 )
                {
                  v33 = *(_QWORD *)(v32 + 24);
                  if ( *(_QWORD *)(v27 + 24) == v33 )
                  {
LABEL_66:
                    v45 = *(_BYTE *)(a1 + 84);
                    if ( v45 == *(_BYTE *)(v26 + 84) )
                    {
                      v34 = *(_DWORD *)(a1 + 80) < *(_DWORD *)(v26 + 80);
                      goto LABEL_42;
                    }
                    if ( v45 )
                    {
                      if ( v9 < v26 )
                        goto LABEL_44;
LABEL_69:
                      sub_1F3340(
                        v9,
                        v5,
                        a3,
                        v23,
                        v24,
                        v25,
                        v108.m128i_i32[0],
                        v108.m128i_i64[1],
                        (_DWORD)v109,
                        v110,
                        (_DWORD)v111,
                        v112,
                        v113,
                        v114,
                        v115,
                        v116.m128i_i32[0],
                        v116.m128i_i8[8],
                        v117,
                        v118.m128i_i32[0],
                        v118.m128i_i32[2],
                        v119.m128i_i32[0],
                        v119.m128i_i32[2],
                        v120,
                        v121,
                        v122,
                        v123,
                        v124,
                        v125.m128i_i32[0],
                        v125.m128i_i8[8],
                        v126,
                        v127.m128i_i32[0],
                        v127.m128i_i32[2],
                        v128.m128i_i32[0],
                        v128.m128i_i32[2],
                        v129,
                        v130,
                        v131);
                      v3 = v9 - a1;
                      if ( (__int64)(v9 - a1) <= 1536 )
                        return v132 - __readfsqword(0x28u);
                      v5 = v9;
                      goto LABEL_3;
                    }
                  }
                  else
                  {
                    v34 = *(_QWORD *)(v27 + 24) < v33;
LABEL_42:
                    if ( !v34 )
                    {
                      if ( v9 >= v26 )
                        goto LABEL_69;
LABEL_44:
                      v35 = v9;
                      v9 += 96LL;
                      sub_1F2F90(v35, v26);
                      goto LABEL_27;
                    }
                  }
                }
              }
            }
LABEL_33:
            v9 += 96LL;
          }
        }
        v19 = *(_DWORD *)(a1 + 176) < *(_DWORD *)(v5 - 16);
        goto LABEL_18;
      }
      v16 = *(_QWORD *)(v5 - 24);
      if ( !*(_QWORD *)(a1 + 168) )
      {
        v19 = v16 == 0;
LABEL_18:
        if ( v19 )
          goto LABEL_55;
        goto LABEL_19;
      }
      if ( v16 )
      {
        v17 = *(_QWORD *)(v15 + 24);
        if ( *(_QWORD *)(v8 + 24) != v17 )
        {
          if ( *(_QWORD *)(v8 + 24) < v17 )
            goto LABEL_55;
LABEL_19:
          if ( v11 == v15 )
            goto LABEL_119;
          goto LABEL_20;
        }
        goto LABEL_16;
      }
LABEL_55:
      sub_1F2F90(a1, a1 + 96);
      goto LABEL_26;
    }
LABEL_47:
    v37 = *(_QWORD *)(v5 - 32);
    if ( v11 != v37 )
    {
      v38 = *(_QWORD *)(v5 - 24);
      if ( *(_QWORD *)(v10 + 72) )
      {
        if ( !v38 )
          goto LABEL_25;
        v39 = *(_QWORD *)(v37 + 24);
        if ( *(_QWORD *)(v11 + 24) != v39 )
        {
          if ( *(_QWORD *)(v11 + 24) < v39 )
            goto LABEL_25;
          if ( v37 == v8 )
            goto LABEL_53;
LABEL_60:
          v42 = *(_QWORD *)(v5 - 24);
          if ( !*(_QWORD *)(a1 + 168) )
          {
            v44 = v42 == 0;
            goto LABEL_64;
          }
          if ( !v42 )
            goto LABEL_65;
          v43 = *(_QWORD *)(v37 + 24);
          if ( *(_QWORD *)(v8 + 24) != v43 )
          {
            v44 = *(_QWORD *)(v8 + 24) < v43;
            goto LABEL_64;
          }
LABEL_53:
          v40 = *(_BYTE *)(a1 + 180);
          if ( v40 != *(_BYTE *)(v5 - 12) )
          {
            if ( !v40 )
              goto LABEL_65;
            goto LABEL_55;
          }
          v44 = *(_DWORD *)(a1 + 176) < *(_DWORD *)(v5 - 16);
LABEL_64:
          if ( !v44 )
            goto LABEL_55;
          goto LABEL_65;
        }
        goto LABEL_57;
      }
LABEL_123:
      if ( !v38 )
        goto LABEL_25;
      goto LABEL_59;
    }
    goto LABEL_57;
  }
  v110 = v7 - 1;
  v109 = &v113;
  v111 = &v122;
  for ( i = a1 + 96 * (v7 - 1); ; i -= 96 )
  {
    sub_5FE00(v109, i);
    v87 = *(_QWORD *)(i + 16);
    v88 = v109;
    v89 = _mm_loadu_si128((const __m128i *)(i + 24));
    v90 = v111;
    *(_OWORD *)(i + 24) = 0;
    v115 = v87;
    v91 = *(_QWORD *)(i + 40);
    v116 = v89;
    v92 = _mm_loadu_si128((const __m128i *)(i + 48));
    v117 = v91;
    v93 = *(_QWORD *)(i + 80);
    *(_QWORD *)(i + 16) = 0;
    *(_QWORD *)(i + 40) = 0;
    v120 = v93;
    LOBYTE(v93) = *(_BYTE *)(i + 88);
    v118 = v92;
    v94 = _mm_loadu_si128((const __m128i *)(i + 64));
    *(_OWORD *)(i + 48) = 0;
    LOBYTE(v121) = v93;
    v119 = v94;
    sub_5FE00(v90, (__int64)v88);
    v95 = v115;
    v96 = _mm_loadu_si128(&v116);
    v115 = 0;
    v124 = v95;
    v125 = v96;
    v97 = _mm_load_si128(&v118);
    v126 = v117;
    v127 = v97;
    v98 = _mm_load_si128(&v119);
    v129 = v120;
    v117 = 0;
    LOBYTE(v130) = v121;
    v116 = 0;
    v118 = 0;
    v128 = v98;
    sub_1EDC30(a1, v110, v112, (__int64)v90);
    v99 = v126;
    if ( v126 )
    {
      v100 = v127.m128i_i64[0];
      if ( v127.m128i_i64[0] )
      {
        v101 = 0;
        do
        {
          v102 = (_QWORD *)(v99 + 40 * v101);
          v103 = v102[2];
          if ( v103 )
          {
            v102[3] = 0;
            qfree(v103);
          }
          ++v101;
          qfree(*v102);
          v99 = v126;
        }
        while ( v100 != v101 );
      }
      v127.m128i_i64[0] = 0;
      qfree(v99);
    }
    if ( v124 )
    {
      v125.m128i_i64[0] = 0;
      qfree(v124);
    }
    qfree(v122);
    v50 = v117;
    if ( !v110 )
      break;
    --v110;
    if ( v117 )
    {
      v104 = v118.m128i_i64[0];
      if ( v118.m128i_i64[0] )
      {
        v105 = 0;
        do
        {
          v106 = (_QWORD *)(v50 + 40 * v105);
          v107 = v106[2];
          if ( v107 )
          {
            v106[3] = 0;
            v108.m128i_i64[0] = (__int64)v106;
            qfree(v107);
            v106 = (_QWORD *)v108.m128i_i64[0];
          }
          ++v105;
          qfree(*v106);
          v50 = v117;
        }
        while ( v104 != v105 );
      }
      v118.m128i_i64[0] = 0;
      qfree(v50);
    }
    if ( v115 )
    {
      v116.m128i_i64[0] = 0;
      qfree(v115);
    }
    qfree(v113);
  }
  if ( v117 )
  {
    v46 = v118.m128i_i64[0];
    if ( v118.m128i_i64[0] )
    {
      v47 = 0;
      do
      {
        v48 = (_QWORD *)(v50 + 40 * v47);
        v49 = v48[2];
        if ( v49 )
        {
          v48[3] = 0;
          qfree(v49);
        }
        ++v47;
        qfree(*v48);
        v50 = v117;
      }
      while ( v46 != v47 );
    }
    v118.m128i_i64[0] = 0;
    qfree(v50);
  }
  if ( v115 )
  {
    v116.m128i_i64[0] = 0;
    qfree(v115);
  }
  qfree(v113);
  if ( v5 - a1 > 96 )
  {
    do
    {
      v5 -= 96;
      sub_5FE00(v109, v5);
      v51 = *(_QWORD *)(v5 + 16);
      v52 = _mm_loadu_si128((const __m128i *)(v5 + 24));
      *(_QWORD *)(v5 + 16) = 0;
      v115 = v51;
      v53 = *(_QWORD *)(v5 + 40);
      v116 = v52;
      v54 = _mm_loadu_si128((const __m128i *)(v5 + 48));
      v117 = v53;
      v55 = *(_QWORD *)(v5 + 80);
      *(_QWORD *)(v5 + 40) = 0;
      v120 = v55;
      LOBYTE(v55) = *(_BYTE *)(v5 + 88);
      *(_OWORD *)(v5 + 24) = 0;
      *(_OWORD *)(v5 + 48) = 0;
      v56 = _mm_loadu_si128((const __m128i *)(v5 + 64));
      LOBYTE(v121) = v55;
      v118 = v54;
      v119 = v56;
      sub_606D0((__int64 *)v5, (__int64 *)a1);
      v57 = *(_QWORD *)(a1 + 16);
      v58 = _mm_loadu_si128((const __m128i *)(a1 + 24));
      *(_QWORD *)(a1 + 16) = 0;
      *(_OWORD *)(a1 + 24) = 0;
      v59 = *(_QWORD *)(v5 + 16);
      if ( v59 )
      {
        *(_QWORD *)(v5 + 24) = 0;
        v108 = v58;
        qfree(v59);
        v58 = _mm_load_si128(&v108);
      }
      *(__m128i *)(v5 + 24) = v58;
      *(_QWORD *)(v5 + 16) = v57;
      v60 = *(_QWORD *)(a1 + 40);
      v61 = _mm_loadu_si128((const __m128i *)(a1 + 48));
      *(_QWORD *)(a1 + 40) = 0;
      *(_OWORD *)(a1 + 48) = 0;
      v62 = *(_QWORD *)(v5 + 40) == 0;
      v110 = v60;
      v108 = v61;
      if ( !v62 )
      {
        v63 = *(_QWORD *)(v5 + 48);
        v64 = 0;
        if ( v63 )
        {
          do
          {
            v65 = (_QWORD *)(*(_QWORD *)(v5 + 40) + 40 * v64);
            v66 = v65[2];
            if ( v66 )
            {
              v65[3] = 0;
              qfree(v66);
            }
            ++v64;
            qfree(*v65);
          }
          while ( v63 != v64 );
        }
        *(_QWORD *)(v5 + 48) = 0;
        qfree(*(_QWORD *)(v5 + 40));
      }
      v67 = _mm_load_si128(&v108);
      v68 = v111;
      v69 = v109;
      *(_QWORD *)(v5 + 40) = v110;
      *(__m128i *)(v5 + 48) = v67;
      *(__m128i *)(v5 + 64) = _mm_loadu_si128((const __m128i *)(a1 + 64));
      *(_QWORD *)(v5 + 77) = *(_QWORD *)(a1 + 77);
      *(_BYTE *)(v5 + 88) = *(_BYTE *)(a1 + 88);
      sub_5FE00(v68, (__int64)v69);
      v70 = v115;
      v71 = _mm_loadu_si128(&v116);
      v72 = _mm_load_si128(&v118);
      v115 = 0;
      v124 = v70;
      v125 = v71;
      v126 = v117;
      v116 = 0;
      v129 = v120;
      v118 = 0;
      v73 = _mm_load_si128(&v119);
      LOBYTE(v130) = v121;
      v127 = v72;
      v108.m128i_i64[0] = v5 - a1;
      v128 = v73;
      v117 = 0;
      sub_1EDC30(a1, 0, 0xAAAAAAAAAAAAAAABLL * ((v5 - a1) >> 5), (__int64)v68);
      v74 = v126;
      if ( v126 )
      {
        v75 = v127.m128i_i64[0];
        if ( v127.m128i_i64[0] )
        {
          v76 = 0;
          do
          {
            v77 = (_QWORD *)(v74 + 40 * v76);
            v78 = v77[2];
            if ( v78 )
            {
              v77[3] = 0;
              qfree(v78);
            }
            ++v76;
            qfree(*v77);
            v74 = v126;
          }
          while ( v75 != v76 );
        }
        v127.m128i_i64[0] = 0;
        qfree(v74);
      }
      if ( v124 )
      {
        v125.m128i_i64[0] = 0;
        qfree(v124);
      }
      qfree(v122);
      v79 = v117;
      if ( v117 )
      {
        v80 = v118.m128i_i64[0];
        if ( v118.m128i_i64[0] )
        {
          v81 = 0;
          do
          {
            v82 = (_QWORD *)(v79 + 40 * v81);
            v83 = v82[2];
            if ( v83 )
            {
              v82[3] = 0;
              qfree(v83);
            }
            ++v81;
            qfree(*v82);
            v79 = v117;
          }
          while ( v80 != v81 );
        }
        v118.m128i_i64[0] = 0;
        qfree(v79);
      }
      if ( v115 )
      {
        v116.m128i_i64[0] = 0;
        qfree(v115);
      }
      qfree(v113);
    }
    while ( v108.m128i_i64[0] > 96 );
  }
  return v132 - __readfsqword(0x28u);
}
