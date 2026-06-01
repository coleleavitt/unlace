__m128i **__fastcall sub_20665F0(__m128i **a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v5; // r11
  _BYTE *v7; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdx
  __m128i v20; // xmm2
  __m128i v21; // xmm3
  __m128i v22; // xmm4
  __m128i **v23; // rdi
  char v24; // dl
  __m128i v25; // xmm1
  __m128i v26; // xmm0
  __m128i v27; // xmm5
  __m128i v28; // xmm7
  char *v29; // rsi
  __m128i v30; // xmm2
  __m128i v31; // xmm3
  __m128i v32; // xmm6
  __m128i v33; // xmm7
  __m128i v34; // xmm6
  __int64 v35; // r9
  __int64 v36; // rsi
  __int64 v37; // rdx
  unsigned __int64 v38; // rax
  void *v39; // r15
  int v40; // r14d
  __int64 v41; // rax
  __int64 v42; // r14
  char v43; // al
  char *v45; // rax
  __m128i *v46; // rax
  char v47; // al
  unsigned int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // r13
  unsigned int v51; // r14d
  __m128i *v52; // rax
  __m128i v53; // xmm0
  __m128i *v54; // rdi
  __m128i v55; // xmm4
  __m128i v56; // xmm5
  __m128i v57; // xmm4
  unsigned __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rdi
  __int64 v61; // rsi
  __int64 v62; // rdx
  unsigned __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rdi
  __int64 v66; // rsi
  __int64 v67; // rdx
  __m128i v68; // xmm1
  __m128i v69; // xmm1
  __m128i v70; // xmm1
  __m128i **v71; // rdi
  char v72; // dl
  __m128i v73; // xmm1
  __m128i v74; // xmm0
  __m128i v75; // xmm5
  __m128i v76; // xmm1
  char *v77; // rsi
  __m128i v78; // xmm5
  __m128i v79; // xmm1
  __m128i v80; // xmm5
  __m128i v81; // xmm1
  __m128i v82; // xmm5
  __int64 v83; // rdx
  __int64 v84; // rdi
  __int64 v85; // rcx
  unsigned __int64 v86; // rax
  void *v87; // r13
  __int64 v88; // rax
  char v89; // r14
  __int64 v90; // r14
  _DWORD *v91; // rcx
  const char *v92; // rax
  unsigned int v93; // r13d
  __int64 v94; // rdx
  __int64 v95; // r12
  unsigned int v96; // eax
  __int64 v97; // rdx
  char v98; // al
  unsigned int v99; // r14d
  __int64 v100; // rdx
  __int64 v101; // r13
  __m128i *v102; // rax
  __m128i si128; // xmm0
  __m128i v104; // xmm5
  __m128i v105; // xmm5
  __int64 v106; // rdx
  __m128i *v107; // rax
  __int64 v108; // [rsp+10h] [rbp-168h]
  __int64 v109; // [rsp+10h] [rbp-168h]
  int v110; // [rsp+2Ch] [rbp-14Ch] BYREF
  void *v111[2]; // [rsp+30h] [rbp-148h] BYREF
  _QWORD v112[2]; // [rsp+40h] [rbp-138h] BYREF
  __int64 v113; // [rsp+50h] [rbp-128h] BYREF
  __m128i v114; // [rsp+58h] [rbp-120h] BYREF
  __m128i v115; // [rsp+68h] [rbp-110h] BYREF
  __m128i v116; // [rsp+78h] [rbp-100h] BYREF
  const char *v117; // [rsp+90h] [rbp-E8h] BYREF
  __m128i v118; // [rsp+98h] [rbp-E0h] BYREF
  __m128i v119; // [rsp+A8h] [rbp-D0h] BYREF
  __m128i v120; // [rsp+B8h] [rbp-C0h] BYREF
  __m128i *v121; // [rsp+D0h] [rbp-A8h] BYREF
  __m128i v122; // [rsp+D8h] [rbp-A0h] BYREF
  __m128i v123; // [rsp+E8h] [rbp-90h] BYREF
  __m128i v124; // [rsp+F8h] [rbp-80h] BYREF
  char v125; // [rsp+108h] [rbp-70h] BYREF
  __m128i v126; // [rsp+110h] [rbp-68h] BYREF
  __m128i v127; // [rsp+120h] [rbp-58h] BYREF
  __m128i v128; // [rsp+130h] [rbp-48h] BYREF

  v5 = a4;
  v7 = (_BYTE *)a3;
  if ( a4 <= 1 || *(_WORD *)a3 != 26990 )
  {
    v43 = *(_BYTE *)a3;
    if ( (*(_BYTE *)a3 & 0xEF) == 0x66 || v43 == 105 )
    {
      sub_2065BC0(a1, a2, (char *)a3, a4);
      return a1;
    }
    if ( v43 == 97 )
    {
      sub_2065700(a1, a2, a3, a4);
      return a1;
    }
    if ( v43 == 112 )
    {
      sub_2066270(a1, a2, a3, a4);
      return a1;
    }
    if ( a4 )
    {
      v5 = a4 - 1;
      v7 = (_BYTE *)(a3 + 1);
    }
    a3 = (unsigned __int8)(v43 - 65);
    switch ( v43 )
    {
      case 'A':
        v45 = "A<address space>";
        if ( !v5 )
          goto LABEL_44;
        v91 = (_DWORD *)(a2 + 4);
        goto LABEL_100;
      case 'E':
      case 'e':
        if ( !v5 )
        {
          *(_BYTE *)a2 = v43 == 69;
          goto LABEL_49;
        }
        v99 = sub_2220490();
        v101 = v100;
        v102 = (__m128i *)operator new(0x31u);
        v122.m128i_i64[1] = 48;
        v121 = v102;
        *v102 = _mm_load_si128((const __m128i *)&xmmword_23AB0D0);
        v122.m128i_i64[0] = 48;
        v102[1] = _mm_load_si128((const __m128i *)&xmmword_23AB0E0);
        si128 = _mm_load_si128((const __m128i *)&xmmword_23AB0F0);
        v102[3].m128i_i8[0] = 0;
        v102[2] = si128;
        goto LABEL_131;
      case 'F':
        v45 = "F<type><abi>";
        if ( !v5 )
          goto LABEL_44;
        if ( *v7 == 105 )
        {
          *(_DWORD *)(a2 + 20) = 0;
        }
        else
        {
          if ( *v7 != 110 )
          {
            LOBYTE(v113) = *v7;
            v92 = "unknown function pointer alignment type '";
LABEL_112:
            v117 = v92;
            v123.m128i_i16[4] = 770;
            v118.m128i_i64[1] = v113;
            v119.m128i_i16[4] = 2051;
            v121 = (__m128i *)&v117;
            v122.m128i_i64[1] = (__int64)"'";
            v93 = sub_2220490();
            v95 = v94;
            sub_2253560(v111, &v121);
            sub_22205D0(a1, v111, v93, v95);
            v54 = (__m128i *)v111[0];
            if ( v111[0] != v112 )
              goto LABEL_55;
            return a1;
          }
          *(_DWORD *)(a2 + 20) = 1;
        }
        LOBYTE(v117) = 0;
        sub_2065400(&v121, (__int64)(v7 + 1), v5 - 1, &v117, (__int64)"ABI", 3, 0);
        v46 = v121;
        if ( v121 )
          goto LABEL_101;
        v47 = (char)v117;
        *(_BYTE *)(a2 + 19) = 1;
        *(_BYTE *)(a2 + 18) = v47;
        goto LABEL_49;
      case 'G':
        v45 = "G<address space>";
        if ( !v5 )
          goto LABEL_44;
        v91 = (_DWORD *)(a2 + 12);
        goto LABEL_100;
      case 'P':
        v45 = "P<address space>";
        if ( !v5 )
          goto LABEL_44;
        v91 = (_DWORD *)(a2 + 8);
LABEL_100:
        sub_2065270(&v121, (__int64)v7, v5, v91);
        v46 = v121;
        if ( v121 )
          goto LABEL_101;
        goto LABEL_49;
      case 'S':
        if ( !v5 )
        {
          v45 = "S<size>";
          goto LABEL_44;
        }
        LOBYTE(v117) = 0;
        sub_2065400(&v121, (__int64)v7, v5, &v117, (__int64)"stack natural", 13, 0);
        v46 = v121;
        if ( v121 )
        {
LABEL_101:
          *a1 = v46;
          return a1;
        }
        v98 = (char)v117;
        *(_BYTE *)(a2 + 17) = 1;
        *(_BYTE *)(a2 + 16) = v98;
        goto LABEL_49;
      case 'm':
        if ( !v5 || *v7 != 58 || v5 == 1 )
        {
          v45 = "m:<mangling>";
          goto LABEL_44;
        }
        if ( v5 == 2 )
        {
          switch ( v7[1] )
          {
            case 'a':
              *(_DWORD *)(a2 + 24) = 7;
              goto LABEL_49;
            case 'e':
              *(_DWORD *)(a2 + 24) = 1;
              goto LABEL_49;
            case 'l':
              *(_DWORD *)(a2 + 24) = 5;
              goto LABEL_49;
            case 'm':
              *(_DWORD *)(a2 + 24) = 6;
              goto LABEL_49;
            case 'o':
              *(_DWORD *)(a2 + 24) = 2;
              goto LABEL_49;
            case 'w':
              *(_DWORD *)(a2 + 24) = 3;
              goto LABEL_49;
            case 'x':
              *(_DWORD *)(a2 + 24) = 4;
              goto LABEL_49;
            default:
              v96 = sub_2220490();
              sub_A09EA0((__int64)a1, v96, v97, "unknown mangling mode");
              break;
          }
          return a1;
        }
        v99 = sub_2220490();
        v101 = v106;
        v107 = (__m128i *)operator new(0x16u);
        v122.m128i_i64[1] = 21;
        v121 = v107;
        *v107 = _mm_load_si128((const __m128i *)&xmmword_23AB100);
        v107[1].m128i_i32[0] = 1685024032;
        v107[1].m128i_i8[4] = 101;
        v122.m128i_i64[0] = 21;
        v107[1].m128i_i8[5] = 0;
LABEL_131:
        sub_22205D0(a1, &v121, v99, v101);
        v54 = v121;
        if ( v121 == (__m128i *)&v122.m128i_u64[1] )
          return a1;
        goto LABEL_55;
      case 'n':
        v119.m128i_i64[0] = (__int64)v7;
        LOBYTE(v117) = 58;
        v118 = 0u;
        v119.m128i_i64[1] = v5;
        v120.m128i_i64[0] = (__int64)&v117;
        v120.m128i_i64[1] = 1;
        v58 = sub_2246AB0(&v119, &v117, 1, 0);
        if ( v58 == -1 )
        {
          v58 = v119.m128i_u64[1];
          v61 = v119.m128i_i64[0];
          v60 = 0;
          v62 = 0;
        }
        else
        {
          v59 = v58 + 1;
          if ( v58 + 1 > v119.m128i_i64[1] )
          {
            v59 = v119.m128i_i64[1];
            v60 = 0;
          }
          else
          {
            v60 = v119.m128i_i64[1] - v59;
          }
          v61 = v119.m128i_i64[0];
          v62 = v119.m128i_i64[0] + v59;
          if ( v58 > v119.m128i_i64[1] )
            v58 = v119.m128i_u64[1];
        }
        LOBYTE(v113) = 58;
        v118.m128i_i64[0] = v61;
        v119.m128i_i64[0] = v62;
        v119.m128i_i64[1] = v60;
        v118.m128i_i64[1] = v58;
        v114 = 0u;
        v115 = 0u;
        v116.m128i_i64[0] = (__int64)&v113;
        v116.m128i_i64[1] = 1;
        v63 = sub_2246AB0(&v115, &v113, 1, 0);
        if ( v63 == -1 )
        {
          v63 = v115.m128i_u64[1];
          v66 = v115.m128i_i64[0];
          v65 = 0;
          v67 = 0;
        }
        else
        {
          v64 = v63 + 1;
          if ( v63 + 1 > v115.m128i_i64[1] )
          {
            v64 = v115.m128i_i64[1];
            v65 = 0;
          }
          else
          {
            v65 = v115.m128i_i64[1] - v64;
          }
          v66 = v115.m128i_i64[0];
          v67 = v115.m128i_i64[0] + v64;
          if ( v63 > v115.m128i_i64[1] )
            v63 = v115.m128i_u64[1];
        }
        v68 = _mm_loadu_si128(&v118);
        v114.m128i_i64[0] = v66;
        v114.m128i_i64[1] = v63;
        v122 = v68;
        v69 = _mm_loadu_si128(&v119);
        v115.m128i_i64[0] = v67;
        v123 = v69;
        v70 = _mm_loadu_si128(&v120);
        v115.m128i_i64[1] = v65;
        LOBYTE(v121) = (_BYTE)v117;
        v124 = v70;
        if ( (const char **)v120.m128i_i64[0] == &v117 )
        {
          v124.m128i_i64[1] = 1;
          v124.m128i_i64[0] = (__int64)&v121;
          v71 = &v121;
        }
        else
        {
          v71 = (__m128i **)v124.m128i_i64[0];
        }
        v72 = v113;
        v73 = _mm_loadu_si128(&v114);
        v74 = _mm_loadu_si128(&v115);
        v75 = _mm_loadu_si128(&v116);
        v125 = v113;
        v126 = v73;
        v127 = v74;
        v128 = v75;
        if ( (__int64 *)v116.m128i_i64[0] == &v113 )
        {
          v104 = _mm_loadu_si128(&v122);
          v77 = &v125;
          LOBYTE(v113) = (_BYTE)v117;
          v128.m128i_i64[0] = (__int64)&v125;
          v114 = v104;
          v105 = _mm_loadu_si128(&v123);
          v128.m128i_i64[1] = 1;
          v115 = v105;
          v116 = _mm_loadu_si128(&v124);
          if ( v71 != &v121 )
          {
            LOBYTE(v117) = v72;
            v118 = v73;
            v119 = v74;
            goto LABEL_136;
          }
        }
        else
        {
          v76 = _mm_loadu_si128(&v122);
          v77 = (char *)v128.m128i_i64[0];
          LOBYTE(v113) = (_BYTE)v117;
          v78 = _mm_loadu_si128(&v123);
          v114 = v76;
          v79 = _mm_loadu_si128(&v124);
          v115 = v78;
          v116 = v79;
          if ( v71 != &v121 )
            goto LABEL_77;
        }
        v116.m128i_i64[0] = (__int64)&v113;
        v116.m128i_i64[1] = 1;
LABEL_77:
        v80 = _mm_load_si128(&v126);
        v81 = _mm_load_si128(&v127);
        LOBYTE(v117) = v72;
        v118 = v80;
        v82 = _mm_load_si128(&v128);
        v119 = v81;
        v120 = v82;
        if ( v77 != &v125 )
          goto LABEL_78;
LABEL_136:
        v120.m128i_i64[0] = (__int64)&v117;
        v120.m128i_i64[1] = 1;
LABEL_78:
        v109 = v118.m128i_i64[0];
        if ( v114.m128i_i64[0] == v118.m128i_i64[0] )
          goto LABEL_49;
        while ( 1 )
        {
          sub_2065000(v111, v114.m128i_i64[0], v114.m128i_i64[1], &v110, (__int64)"size", 4);
          v87 = v111[0];
          if ( v111[0] )
            break;
          v88 = *(_QWORD *)(a2 + 40);
          v89 = v110;
          if ( (unsigned __int64)(v88 + 1) > *(_QWORD *)(a2 + 48) )
          {
            sub_2236E10(a2 + 32, a2 + 56, v88 + 1, 1);
            v88 = *(_QWORD *)(a2 + 40);
          }
          *(_BYTE *)(*(_QWORD *)(a2 + 32) + v88) = v89;
          v90 = v116.m128i_i64[1];
          ++*(_QWORD *)(a2 + 40);
          v86 = sub_2246AB0(&v115, v116.m128i_i64[0], v90, 0);
          if ( v86 == -1 )
          {
            v86 = v115.m128i_u64[1];
            v85 = v115.m128i_i64[0];
            v84 = 0;
          }
          else
          {
            v83 = v86 + v90;
            if ( v86 + v90 > v115.m128i_i64[1] )
            {
              v83 = v115.m128i_i64[1];
              v84 = 0;
            }
            else
            {
              v84 = v115.m128i_i64[1] - v83;
            }
            v85 = v115.m128i_i64[0];
            if ( v86 > v115.m128i_i64[1] )
              v86 = v115.m128i_u64[1];
            v87 = (void *)(v115.m128i_i64[0] + v83);
          }
          v114.m128i_i64[0] = v85;
          v114.m128i_i64[1] = v86;
          v115.m128i_i64[0] = (__int64)v87;
          v115.m128i_i64[1] = v84;
          if ( v109 == v85 )
            goto LABEL_49;
        }
        *a1 = (__m128i *)v111[0];
        return a1;
      case 's':
        goto LABEL_49;
      default:
        LOBYTE(v113) = v43;
        v92 = "unknown specifier '";
        goto LABEL_112;
    }
  }
  if ( a4 == 2 || *(_BYTE *)(a3 + 2) != 58 )
  {
    v45 = "ni:<address space>[:<address space>]...";
LABEL_44:
    v121 = (__m128i *)v45;
    v123.m128i_i16[4] = 259;
    sub_2065130(
      (__int64)a1,
      (__int64)v7,
      a3,
      a4,
      a5,
      259,
      (__int64 *)v45,
      v122.m128i_i64[0],
      v122.m128i_i32[2],
      v123.m128i_i32[0],
      259);
    return a1;
  }
  LOBYTE(v117) = 58;
  v119.m128i_i64[0] = a3 + 3;
  v119.m128i_i64[1] = a4 - 3;
  v118 = 0u;
  v120.m128i_i64[0] = (__int64)&v117;
  v120.m128i_i64[1] = 1;
  v10 = sub_2246AB0(&v119, &v117, 1, 0);
  if ( v10 == -1 )
  {
    v10 = v119.m128i_u64[1];
    v13 = v119.m128i_i64[0];
    v12 = 0;
    v14 = 0;
  }
  else
  {
    v11 = v10 + 1;
    if ( v10 + 1 > v119.m128i_i64[1] )
    {
      v11 = v119.m128i_i64[1];
      v12 = 0;
    }
    else
    {
      v12 = v119.m128i_i64[1] - v11;
    }
    v13 = v119.m128i_i64[0];
    v14 = v119.m128i_i64[0] + v11;
    if ( v10 > v119.m128i_i64[1] )
      v10 = v119.m128i_u64[1];
  }
  LOBYTE(v113) = 58;
  v118.m128i_i64[0] = v13;
  v119.m128i_i64[0] = v14;
  v119.m128i_i64[1] = v12;
  v118.m128i_i64[1] = v10;
  v114 = 0u;
  v115 = 0u;
  v116.m128i_i64[0] = (__int64)&v113;
  v116.m128i_i64[1] = 1;
  v15 = sub_2246AB0(&v115, &v113, 1, 0);
  if ( v15 == -1 )
  {
    v15 = v115.m128i_u64[1];
    v18 = v115.m128i_i64[0];
    v17 = 0;
    v19 = 0;
  }
  else
  {
    v16 = v15 + 1;
    if ( v15 + 1 > v115.m128i_i64[1] )
    {
      v16 = v115.m128i_i64[1];
      v17 = 0;
    }
    else
    {
      v17 = v115.m128i_i64[1] - v16;
    }
    v18 = v115.m128i_i64[0];
    v19 = v115.m128i_i64[0] + v16;
    if ( v15 > v115.m128i_i64[1] )
      v15 = v115.m128i_u64[1];
  }
  v114.m128i_i64[0] = v18;
  v20 = _mm_loadu_si128(&v118);
  v114.m128i_i64[1] = v15;
  v21 = _mm_loadu_si128(&v119);
  v115.m128i_i64[0] = v19;
  v22 = _mm_loadu_si128(&v120);
  v115.m128i_i64[1] = v17;
  LOBYTE(v121) = (_BYTE)v117;
  v122 = v20;
  v123 = v21;
  v124 = v22;
  if ( (const char **)v120.m128i_i64[0] == &v117 )
  {
    v124.m128i_i64[1] = 1;
    v124.m128i_i64[0] = (__int64)&v121;
    v23 = &v121;
  }
  else
  {
    v23 = (__m128i **)v124.m128i_i64[0];
  }
  v24 = v113;
  v25 = _mm_loadu_si128(&v114);
  v26 = _mm_loadu_si128(&v115);
  v27 = _mm_loadu_si128(&v116);
  v125 = v113;
  v126 = v25;
  v127 = v26;
  v128 = v27;
  if ( (__int64 *)v116.m128i_i64[0] != &v113 )
  {
    v28 = _mm_loadu_si128(&v122);
    v29 = (char *)v128.m128i_i64[0];
    LOBYTE(v113) = (_BYTE)v117;
    v30 = _mm_loadu_si128(&v123);
    v31 = _mm_loadu_si128(&v124);
    v114 = v28;
    v115 = v30;
    v116 = v31;
    if ( v23 != &v121 )
      goto LABEL_19;
    goto LABEL_60;
  }
  v55 = _mm_loadu_si128(&v122);
  v29 = &v125;
  v56 = _mm_loadu_si128(&v123);
  v128.m128i_i64[1] = 1;
  v128.m128i_i64[0] = (__int64)&v125;
  v114 = v55;
  v57 = _mm_loadu_si128(&v124);
  LOBYTE(v113) = (_BYTE)v117;
  v115 = v56;
  v116 = v57;
  if ( v23 == &v121 )
  {
LABEL_60:
    v116.m128i_i64[0] = (__int64)&v113;
    v116.m128i_i64[1] = 1;
LABEL_19:
    v32 = _mm_load_si128(&v126);
    v33 = _mm_load_si128(&v127);
    LOBYTE(v117) = v24;
    v118 = v32;
    v34 = _mm_load_si128(&v128);
    v119 = v33;
    v120 = v34;
    if ( v29 != &v125 )
      goto LABEL_20;
    goto LABEL_58;
  }
  LOBYTE(v117) = v24;
  v118 = v25;
  v119 = v26;
LABEL_58:
  v120.m128i_i64[0] = (__int64)&v117;
  v120.m128i_i64[1] = 1;
LABEL_20:
  v108 = v118.m128i_i64[0];
  if ( v118.m128i_i64[0] == v114.m128i_i64[0] )
  {
LABEL_49:
    *a1 = nullptr;
  }
  else
  {
    while ( 1 )
    {
      sub_2065270(v111, v114.m128i_i64[0], v114.m128i_i64[1], &v110);
      v39 = v111[0];
      if ( v111[0] )
      {
        *a1 = (__m128i *)v111[0];
        return a1;
      }
      v40 = v110;
      if ( !v110 )
        break;
      v41 = *(unsigned int *)(a5 + 8);
      if ( v41 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
      {
        sub_2237220(a5, a5 + 16, v41 + 1, 4);
        v41 = *(unsigned int *)(a5 + 8);
      }
      *(_DWORD *)(*(_QWORD *)a5 + 4 * v41) = v40;
      v42 = v116.m128i_i64[1];
      ++*(_DWORD *)(a5 + 8);
      v38 = sub_2246AB0(&v115, v116.m128i_i64[0], v42, 0);
      if ( v38 == -1 )
      {
        v38 = v115.m128i_u64[1];
        v37 = v115.m128i_i64[0];
        v36 = 0;
      }
      else
      {
        v35 = v38 + v42;
        if ( v38 + v42 > v115.m128i_i64[1] )
        {
          v35 = v115.m128i_i64[1];
          v36 = 0;
        }
        else
        {
          v36 = v115.m128i_i64[1] - v35;
        }
        v37 = v115.m128i_i64[0];
        if ( v38 > v115.m128i_i64[1] )
          v38 = v115.m128i_u64[1];
        v39 = (void *)(v115.m128i_i64[0] + v35);
      }
      v114.m128i_i64[0] = v37;
      v114.m128i_i64[1] = v38;
      v115.m128i_i64[0] = (__int64)v39;
      v115.m128i_i64[1] = v36;
      if ( v37 == v108 )
        goto LABEL_49;
    }
    v48 = sub_2220490();
    v50 = v49;
    v51 = v48;
    v111[0] = v112;
    v52 = (__m128i *)operator new(0x27u);
    v53 = _mm_load_si128((const __m128i *)&xmmword_23AB0B0);
    strcpy(v52[2].m128i_i8, "tegral");
    *v52 = v53;
    v52[1] = _mm_load_si128((const __m128i *)&xmmword_23AB0C0);
    v111[0] = v52;
    v112[0] = 38;
    v111[1] = &qword_20 + 6;
    sub_22205D0(a1, v111, v51, v50);
    v54 = (__m128i *)v111[0];
    if ( v111[0] != v112 )
LABEL_55:
      operator delete(v54);
  }
  return a1;
}
