__int64 __fastcall sub_22A4CC0(__int64 a1)
{
  __m128i si128; // xmm0
  unsigned int v12; // r14d
  unsigned int v13; // r12d
  unsigned int v14; // r13d
  unsigned int v26; // eax
  unsigned int v27; // edx
  __int64 *v28; // r15
  __int64 *v29; // rax
  unsigned int v30; // eax
  unsigned int v31; // r15d
  __int64 *v32; // rbx
  __int64 *v33; // rax
  char v34; // bl
  __int64 v35; // rax
  int v36; // ebx
  int v37; // r15d
  unsigned int v38; // eax
  unsigned int v39; // edx
  __int64 *v40; // rcx
  __int64 *v41; // rax
  unsigned int v42; // eax
  unsigned int v43; // edx
  __int64 *v44; // rcx
  __int64 *v45; // rax
  unsigned int v46; // eax
  unsigned int v47; // r15d
  __int64 *v48; // rbx
  __int64 *v49; // rax
  char v69; // r15
  unsigned int v71; // eax
  unsigned int v72; // edx
  __int64 *v73; // rcx
  __int64 *v74; // rax
  int v75; // r15d
  unsigned int v76; // eax
  unsigned int v77; // edx
  __int64 *v78; // rcx
  __int64 *v79; // rax
  int v80; // r15d
  unsigned int v81; // eax
  unsigned int v82; // edx
  __int64 *v83; // rcx
  __int64 *v84; // rax
  int v85; // r15d
  unsigned int v86; // eax
  unsigned int v87; // edx
  __int64 *v88; // rcx
  _BYTE *v99; // rax
  _BYTE *v100; // rax
  char v101; // dl
  unsigned int v102; // ebx
  bool v113; // r15
  _BYTE *v114; // rax
  char v115; // bl
  unsigned int v126; // r12d
  unsigned int v127; // r13d
  _BYTE *v128; // rax
  int v129; // r13d
  _BYTE *v130; // rax
  __int16 v131; // dx
  int v132; // r12d
  unsigned int v143; // r12d
  int v144; // r12d
  bool v145; // r12
  unsigned int v176; // r12d
  int v177; // ebx
  __int16 v188; // r13
  unsigned int v189; // ebx
  __int64 v190; // rax
  unsigned int v191; // eax
  __int64 v192; // rax
  unsigned int v193; // eax
  __int64 v194; // rax
  unsigned int v195; // eax
  __int64 v196; // rax
  unsigned int v197; // eax
  __int64 v198; // rax
  unsigned int v199; // eax
  __int64 v200; // rax
  unsigned int v201; // eax
  __int64 v202; // rax
  unsigned int v203; // eax
  __int64 v204; // rax
  unsigned int v205; // eax
  __int64 v206; // rax
  unsigned int v207; // eax
  unsigned int v208; // [rsp+0h] [rbp-78h]
  unsigned int v209; // [rsp+Ch] [rbp-6Ch]
  int v210; // [rsp+10h] [rbp-68h]
  unsigned __int8 v211; // [rsp+15h] [rbp-63h]
  bool v212; // [rsp+16h] [rbp-62h]
  bool v213; // [rsp+17h] [rbp-61h]
  unsigned int v214; // [rsp+18h] [rbp-60h]
  bool v215; // [rsp+1Ch] [rbp-5Ch]
  unsigned int v216; // [rsp+1Ch] [rbp-5Ch]
  unsigned int v217; // [rsp+1Ch] [rbp-5Ch]
  unsigned int v218; // [rsp+1Ch] [rbp-5Ch]
  unsigned int v219; // [rsp+1Ch] [rbp-5Ch]
  __int64 *v220; // [rsp+20h] [rbp-58h]
  __int64 *v221; // [rsp+20h] [rbp-58h]
  __int64 *v222; // [rsp+20h] [rbp-58h]
  __int64 *v223; // [rsp+20h] [rbp-58h]
  unsigned int v224; // [rsp+20h] [rbp-58h]
  unsigned int v225; // [rsp+20h] [rbp-58h]
  __int64 *v226; // [rsp+28h] [rbp-50h]
  __int64 *v227; // [rsp+28h] [rbp-50h]
  __int64 *v228[8]; // [rsp+38h] [rbp-40h] BYREF

  _RAX = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  *(_QWORD *)a1 = 0;
  *(__m128i *)(a1 + 8) = si128;
  __asm { cpuid }
  if ( !(_DWORD)_RAX )
    return a1;
  _RAX = 0;
  __asm { cpuid }
  v209 = _RAX;
  v12 = _RBX;
  v13 = _RCX;
  v14 = _RDX;
  if ( !(_DWORD)_RAX )
    return a1;
  _RAX = 0;
  __asm { cpuid }
  v210 = _RAX;
  if ( (_DWORD)_RAX )
  {
    _RAX = 1;
    __asm { cpuid }
    v210 = _RAX;
    v12 = _RBX;
    v13 = _RCX;
    v14 = _RDX;
  }
  *(_BYTE *)sub_102FB20(a1, "cx8", 3u) = BYTE1(v14) & 1;
  *(_BYTE *)sub_102FB20(a1, "cmov", 4u) = (v14 & 0x8000) != 0;
  *(_BYTE *)sub_102FB20(a1, "mmx", 3u) = (v14 & 0x800000) != 0;
  *(_BYTE *)sub_102FB20(a1, "fxsr", 4u) = HIBYTE(v14) & 1;
  *(_BYTE *)sub_102FB20(a1, "sse", 3u) = (v14 & 0x2000000) != 0;
  *(_BYTE *)sub_102FB20(a1, "sse2", 4u) = (v14 & 0x4000000) != 0;
  v26 = sub_2244B30((__int64)"sse3", 4);
  v27 = sub_2244CB0(a1, "sse3", 4u, v26);
  v28 = (__int64 *)(*(_QWORD *)a1 + 8LL * v27);
  if ( *v28 )
  {
    if ( *v28 != -8 )
    {
      sub_10298F0(v228, v28, 0);
      v29 = v228[0];
      goto LABEL_9;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v208 = v27;
  v190 = sub_22300B0(21, 8);
  strcpy((char *)(v190 + 16), "sse3");
  *(_QWORD *)v190 = 4;
  *(_BYTE *)(v190 + 8) = 0;
  *v28 = v190;
  ++*(_DWORD *)(a1 + 12);
  v191 = sub_22450D0(a1, v208);
  sub_10298F0(v228, (__int64 *)(*(_QWORD *)a1 + 8LL * v191), 0);
  v29 = v228[0];
LABEL_9:
  *(_BYTE *)(*v29 + 8) = v13 & 1;
  *(_BYTE *)sub_102FB20(a1, "pclmul", 6u) = (v13 & 2) != 0;
  *(_BYTE *)sub_102FB20(a1, "ssse3", 5u) = (v13 & 0x200) != 0;
  *(_BYTE *)sub_102FB20(a1, "cx16", 4u) = (v13 & 0x2000) != 0;
  *(_BYTE *)sub_102FB20(a1, "sse4.1", 6u) = (v13 & 0x80000) != 0;
  *(_BYTE *)sub_102FB20(a1, "sse4.2", 6u) = (v13 & 0x100000) != 0;
  v30 = sub_2244B30((__int64)"sse4.2", 6);
  v31 = sub_2244CB0(a1, "sse4.2", 6u, v30);
  v32 = (__int64 *)(*(_QWORD *)a1 + 8LL * v31);
  if ( *v32 )
  {
    if ( *v32 != -8 )
    {
      sub_10298F0(v228, v32, 0);
      v33 = v228[0];
      goto LABEL_12;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v206 = sub_22300B0(23, 8);
  strcpy((char *)(v206 + 16), "sse4.2");
  *(_QWORD *)v206 = 6;
  *(_BYTE *)(v206 + 8) = 0;
  *v32 = v206;
  ++*(_DWORD *)(a1 + 12);
  v207 = sub_22450D0(a1, v31);
  sub_10298F0(v228, (__int64 *)(*(_QWORD *)a1 + 8LL * v207), 0);
  v33 = v228[0];
LABEL_12:
  v34 = *(_BYTE *)(*v33 + 8);
  *(_BYTE *)sub_102FB20(a1, "crc32", 5u) = v34;
  *(_BYTE *)sub_102FB20(a1, "movbe", 5u) = (v13 & 0x400000) != 0;
  *(_BYTE *)sub_102FB20(a1, "popcnt", 6u) = (v13 & 0x800000) != 0;
  *(_BYTE *)sub_102FB20(a1, "aes", 3u) = (v13 & 0x2000000) != 0;
  v35 = sub_102FB20(a1, "rdrnd", 5u);
  *(_BYTE *)v35 = (v13 & 0x40000000) != 0;
  if ( (v13 & 0x8000000) != 0 )
  {
    __asm { xgetbv }
    v210 = v35;
    v14 = (v13 >> 30) & 1;
    if ( (v13 & 0x10000000) != 0 && (v35 & 6) == 6 )
    {
      v211 = 1;
      v37 = (v13 >> 12) & 1;
      v36 = (v13 >> 26) & 1;
      v215 = (v13 & 0x20000000) != 0;
      v212 = (v35 & 0xE0) == 224;
    }
    else
    {
      v215 = 0;
      LOBYTE(v36) = 0;
      LOBYTE(v37) = 0;
      v211 = 0;
      v212 = 0;
    }
    v213 = (v35 & 0x60000) == 393216;
  }
  else
  {
    LOBYTE(v36) = 0;
    LOBYTE(v37) = 0;
    v215 = 0;
    v211 = 0;
    v212 = 0;
    v213 = 0;
  }
  v38 = sub_2244B30((__int64)"avx", 3);
  v39 = sub_2244CB0(a1, "avx", 3u, v38);
  v40 = (__int64 *)(*(_QWORD *)a1 + 8LL * v39);
  if ( *v40 )
  {
    if ( *v40 != -8 )
    {
      sub_10298F0(v228, v40, 0);
      v41 = v228[0];
      goto LABEL_20;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v227 = v40;
  v225 = v39;
  v204 = sub_22300B0(20, 8);
  *(_WORD *)(v204 + 16) = 30305;
  *(_BYTE *)(v204 + 18) = 120;
  *(_BYTE *)(v204 + 19) = 0;
  *(_QWORD *)v204 = 3;
  *(_BYTE *)(v204 + 8) = 0;
  *v227 = v204;
  ++*(_DWORD *)(a1 + 12);
  v205 = sub_22450D0(a1, v225);
  sub_10298F0(v228, (__int64 *)(*(_QWORD *)a1 + 8LL * v205), 0);
  v41 = v228[0];
LABEL_20:
  *(_BYTE *)(*v41 + 8) = v211;
  v42 = sub_2244B30((__int64)"fma", 3);
  v43 = sub_2244CB0(a1, "fma", 3u, v42);
  v44 = (__int64 *)(*(_QWORD *)a1 + 8LL * v43);
  if ( *v44 )
  {
    if ( *v44 != -8 )
    {
      sub_10298F0(v228, v44, 0);
      v45 = v228[0];
      goto LABEL_23;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v226 = v44;
  v224 = v43;
  v202 = sub_22300B0(20, 8);
  *(_WORD *)(v202 + 16) = 28006;
  *(_BYTE *)(v202 + 18) = 97;
  *(_BYTE *)(v202 + 19) = 0;
  *(_QWORD *)v202 = 3;
  *(_BYTE *)(v202 + 8) = 0;
  *v226 = v202;
  ++*(_DWORD *)(a1 + 12);
  v203 = sub_22450D0(a1, v224);
  sub_10298F0(v228, (__int64 *)(*(_QWORD *)a1 + 8LL * v203), 0);
  v45 = v228[0];
LABEL_23:
  *(_BYTE *)(*v45 + 8) = v37;
  *(_BYTE *)sub_102FB20(a1, "xsave", 5u) = v36;
  v46 = sub_2244B30((__int64)"f16c", 4);
  v47 = sub_2244CB0(a1, "f16c", 4u, v46);
  v48 = (__int64 *)(*(_QWORD *)a1 + 8LL * v47);
  if ( *v48 )
  {
    if ( *v48 != -8 )
    {
      sub_10298F0(v228, v48, 0);
      v49 = v228[0];
      goto LABEL_26;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v196 = sub_22300B0(21, 8);
  strcpy((char *)(v196 + 16), "f16c");
  *(_QWORD *)v196 = 4;
  *(_BYTE *)(v196 + 8) = 0;
  *v48 = v196;
  ++*(_DWORD *)(a1 + 12);
  v197 = sub_22450D0(a1, v47);
  sub_10298F0(v228, (__int64 *)(*(_QWORD *)a1 + 8LL * v197), 0);
  v49 = v228[0];
LABEL_26:
  *(_BYTE *)(*v49 + 8) = v215;
  _RAX = 0x80000000LL;
  __asm { cpuid }
  if ( (int)_RAX < 0 )
  {
    _RAX = 0x80000000LL;
    __asm { cpuid }
    v214 = _RAX;
    v12 = _RBX;
    v13 = _RCX;
    v14 = _RDX;
  }
  if ( v214 <= 0x80000000 )
    goto LABEL_85;
  _RAX = 0x80000000LL;
  __asm { cpuid }
  if ( (unsigned int)_RAX <= 0x80000000 )
  {
LABEL_85:
    LOBYTE(_RBX) = 0;
    v69 = 0;
  }
  else
  {
    _RAX = 2147483649LL;
    __asm { cpuid }
    v210 = _RAX;
    v12 = _RBX;
    v13 = _RCX;
    v14 = _RDX;
    v69 = _RCX & 1;
    LOBYTE(_RBX) = 1;
  }
  v71 = sub_2244B30((__int64)"sahf", 4);
  v72 = sub_2244CB0(a1, "sahf", 4u, v71);
  v73 = (__int64 *)(*(_QWORD *)a1 + 8LL * v72);
  if ( *v73 )
  {
    if ( *v73 != -8 )
    {
      sub_10298F0(v228, v73, 0);
      v74 = v228[0];
      goto LABEL_34;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v220 = v73;
  v216 = v72;
  v192 = sub_22300B0(21, 8);
  strcpy((char *)(v192 + 16), "sahf");
  *(_QWORD *)v192 = 4;
  *(_BYTE *)(v192 + 8) = 0;
  *v220 = v192;
  ++*(_DWORD *)(a1 + 12);
  v193 = sub_22450D0(a1, v216);
  sub_10298F0(v228, (__int64 *)(*(_QWORD *)a1 + 8LL * v193), 0);
  v74 = v228[0];
LABEL_34:
  *(_BYTE *)(*v74 + 8) = v69;
  v75 = (v13 >> 5) & 1;
  if ( !(_BYTE)_RBX )
    LOBYTE(v75) = 0;
  v76 = sub_2244B30((__int64)"lzcnt", 5);
  v77 = sub_2244CB0(a1, "lzcnt", 5u, v76);
  v78 = (__int64 *)(*(_QWORD *)a1 + 8LL * v77);
  if ( *v78 )
  {
    if ( *v78 != -8 )
    {
      sub_10298F0(v228, v78, 0);
      v79 = v228[0];
      goto LABEL_39;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v223 = v78;
  v219 = v77;
  v200 = sub_22300B0(22, 8);
  *(_DWORD *)(v200 + 16) = 1852013164;
  *(_BYTE *)(v200 + 20) = 116;
  *(_BYTE *)(v200 + 21) = 0;
  *(_QWORD *)v200 = 5;
  *(_BYTE *)(v200 + 8) = 0;
  *v223 = v200;
  ++*(_DWORD *)(a1 + 12);
  v201 = sub_22450D0(a1, v219);
  sub_10298F0(v228, (__int64 *)(*(_QWORD *)a1 + 8LL * v201), 0);
  v79 = v228[0];
LABEL_39:
  *(_BYTE *)(*v79 + 8) = v75;
  v80 = (v13 >> 6) & 1;
  if ( !(_BYTE)_RBX )
    LOBYTE(v80) = 0;
  v81 = sub_2244B30((__int64)"sse4a", 5);
  v82 = sub_2244CB0(a1, "sse4a", 5u, v81);
  v83 = (__int64 *)(*(_QWORD *)a1 + 8LL * v82);
  if ( *v83 )
  {
    if ( *v83 != -8 )
    {
      sub_10298F0(v228, v83, 0);
      v84 = v228[0];
      goto LABEL_44;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v222 = v83;
  v218 = v82;
  v198 = sub_22300B0(22, 8);
  *(_DWORD *)(v198 + 16) = 879063923;
  *(_BYTE *)(v198 + 20) = 97;
  *(_BYTE *)(v198 + 21) = 0;
  *(_QWORD *)v198 = 5;
  *(_BYTE *)(v198 + 8) = 0;
  *v222 = v198;
  ++*(_DWORD *)(a1 + 12);
  v199 = sub_22450D0(a1, v218);
  sub_10298F0(v228, (__int64 *)(*(_QWORD *)a1 + 8LL * v199), 0);
  v84 = v228[0];
LABEL_44:
  *(_BYTE *)(*v84 + 8) = v80;
  v85 = (v13 >> 8) & 1;
  if ( !(_BYTE)_RBX )
    LOBYTE(v85) = 0;
  v86 = sub_2244B30((__int64)"prfchw", 6);
  v87 = sub_2244CB0(a1, "prfchw", 6u, v86);
  v88 = (__int64 *)(*(_QWORD *)a1 + 8LL * v87);
  if ( !*v88 )
  {
LABEL_89:
    v221 = v88;
    v217 = v87;
    v194 = sub_22300B0(23, 8);
    strcpy((char *)(v194 + 16), "prfchw");
    *(_QWORD *)v194 = 6;
    *(_BYTE *)(v194 + 8) = 0;
    *v221 = v194;
    ++*(_DWORD *)(a1 + 12);
    v195 = sub_22450D0(a1, v217);
    sub_10298F0(v228, (__int64 *)(*(_QWORD *)a1 + 8LL * v195), 0);
    *(_BYTE *)(*v228[0] + 8) = v85;
    if ( (_BYTE)_RBX )
      goto LABEL_49;
LABEL_90:
    *(_BYTE *)sub_102FB20(a1, "xop", 3u) = 0;
    *(_BYTE *)sub_102FB20(a1, "lwp", 3u) = 0;
    *(_BYTE *)sub_102FB20(a1, "fma4", 4u) = 0;
    *(_BYTE *)sub_102FB20(a1, "tbm", 3u) = 0;
    *(_BYTE *)sub_102FB20(a1, "mwaitx", 6u) = 0;
    goto LABEL_50;
  }
  if ( *v88 == -8 )
  {
    --*(_DWORD *)(a1 + 16);
    goto LABEL_89;
  }
  sub_10298F0(v228, v88, 0);
  *(_BYTE *)(*v228[0] + 8) = v85;
  if ( !(_BYTE)_RBX )
    goto LABEL_90;
LABEL_49:
  *(_BYTE *)sub_102FB20(a1, "xop", 3u) = v211 & (v13 >> 11);
  *(_BYTE *)sub_102FB20(a1, "lwp", 3u) = (v13 & 0x8000) != 0;
  *(_BYTE *)sub_102FB20(a1, "fma4", 4u) = v211 & BYTE2(v13);
  LODWORD(_RBX) = (v14 >> 29) & 1;
  *(_BYTE *)sub_102FB20(a1, "tbm", 3u) = (v13 & 0x200000) != 0;
  *(_BYTE *)sub_102FB20(a1, "mwaitx", 6u) = (v13 & 0x20000000) != 0;
LABEL_50:
  *(_BYTE *)sub_102FB20(a1, "64bit", 5u) = _RBX;
  if ( v214 <= 0x80000007 )
    goto LABEL_105;
  _RAX = 0x80000000LL;
  __asm { cpuid }
  if ( (unsigned int)_RAX <= 0x80000007 )
  {
LABEL_105:
    LOBYTE(v102) = 0;
    *(_BYTE *)sub_102FB20(a1, "clzero", 6u) = 0;
    *(_BYTE *)sub_102FB20(a1, "rdpru", 5u) = 0;
  }
  else
  {
    _RAX = 2147483656LL;
    __asm { cpuid }
    v14 = _RDX;
    v13 = _RCX;
    v210 = _RAX;
    v12 = _RBX;
    v99 = (_BYTE *)sub_102FB20(a1, "clzero", 6u);
    *v99 = _RBX;
    *v99 &= 1u;
    v100 = (_BYTE *)sub_102FB20(a1, "rdpru", 5u);
    v101 = _RBX;
    v102 = ((unsigned int)_RBX >> 9) & 1;
    *v100 = (v101 & 0x10) != 0;
  }
  *(_BYTE *)sub_102FB20(a1, "wbnoinvd", 8u) = v102;
  if ( v209 <= 6 )
    goto LABEL_104;
  _RAX = 0;
  __asm { cpuid }
  if ( (unsigned int)_RAX <= 6 )
  {
LABEL_104:
    v113 = 0;
    v115 = 0;
    *(_BYTE *)sub_102FB20(a1, "fsgsbase", 8u) = 0;
    *(_BYTE *)sub_102FB20(a1, "sgx", 3u) = 0;
    *(_BYTE *)sub_102FB20(a1, "bmi", 3u) = 0;
    *(_BYTE *)sub_102FB20(a1, "avx2", 4u) = 0;
    *(_BYTE *)sub_102FB20(a1, "bmi2", 4u) = 0;
    *(_BYTE *)sub_102FB20(a1, "invpcid", 7u) = 0;
    *(_BYTE *)sub_102FB20(a1, "rtm", 3u) = 0;
  }
  else
  {
    _RAX = 7;
    __asm { cpuid }
    v14 = _RDX;
    v13 = _RCX;
    v210 = _RAX;
    v12 = _RBX;
    v113 = 1;
    v114 = (_BYTE *)sub_102FB20(a1, "fsgsbase", 8u);
    *v114 = _RBX;
    *v114 &= 1u;
    *(_BYTE *)sub_102FB20(a1, "sgx", 3u) = (_RBX & 4) != 0;
    *(_BYTE *)sub_102FB20(a1, "bmi", 3u) = (_RBX & 8) != 0;
    *(_BYTE *)sub_102FB20(a1, "avx2", 4u) = v211 & ((unsigned int)_RBX >> 5);
    *(_BYTE *)sub_102FB20(a1, "bmi2", 4u) = BYTE1(_RBX) & 1;
    *(_BYTE *)sub_102FB20(a1, "invpcid", 7u) = (_RBX & 0x400) != 0;
    v115 = v212 & BYTE2(_RBX);
    *(_BYTE *)sub_102FB20(a1, "rtm", 3u) = (v12 & 0x800) != 0;
  }
  *(_BYTE *)sub_102FB20(a1, "avx512f", 7u) = v115;
  if ( *(_BYTE *)sub_102FB20(a1, "avx512f", 7u) )
    *(_BYTE *)sub_102FB20(a1, "evex512", 7u) = 1;
  if ( v113 )
  {
    *(_BYTE *)sub_102FB20(a1, "avx512dq", 8u) = v212 & (v12 >> 17);
    *(_BYTE *)sub_102FB20(a1, "rdseed", 6u) = (v12 & 0x40000) != 0;
    *(_BYTE *)sub_102FB20(a1, "adx", 3u) = (v12 & 0x80000) != 0;
    *(_BYTE *)sub_102FB20(a1, "avx512ifma", 0xAu) = v212 & (v12 >> 21);
    *(_BYTE *)sub_102FB20(a1, "clflushopt", 0xAu) = (v12 & 0x800000) != 0;
    *(_BYTE *)sub_102FB20(a1, "clwb", 4u) = HIBYTE(v12) & 1;
    *(_BYTE *)sub_102FB20(a1, "avx512cd", 8u) = v212 & (v12 >> 28);
    *(_BYTE *)sub_102FB20(a1, "sha", 3u) = (v12 & 0x20000000) != 0;
    *(_BYTE *)sub_102FB20(a1, "avx512bw", 8u) = v212 & (v12 >> 30);
    *(_BYTE *)sub_102FB20(a1, "avx512vl", 8u) = v212 && (v12 & 0x80000000) != 0;
    *(_BYTE *)sub_102FB20(a1, "avx512vbmi", 0xAu) = v212 & (v13 >> 1);
    *(_BYTE *)sub_102FB20(a1, "pku", 3u) = (v13 & 0x10) != 0;
    *(_BYTE *)sub_102FB20(a1, "waitpkg", 7u) = (v13 & 0x20) != 0;
    *(_BYTE *)sub_102FB20(a1, "avx512vbmi2", 0xBu) = v212 & (v13 >> 6);
    *(_BYTE *)sub_102FB20(a1, "shstk", 5u) = (unsigned __int8)v13 >> 7;
    *(_BYTE *)sub_102FB20(a1, "gfni", 4u) = BYTE1(v13) & 1;
    *(_BYTE *)sub_102FB20(a1, "vaes", 4u) = v211 & (v13 >> 9);
    *(_BYTE *)sub_102FB20(a1, "vpclmulqdq", 0xAu) = v211 & (v13 >> 10);
    *(_BYTE *)sub_102FB20(a1, "avx512vnni", 0xAu) = v212 & (v13 >> 11);
    *(_BYTE *)sub_102FB20(a1, "avx512bitalg", 0xCu) = v212 & (v13 >> 12);
    *(_BYTE *)sub_102FB20(a1, "avx512vpopcntdq", 0xFu) = v212 & (v13 >> 14);
    *(_BYTE *)sub_102FB20(a1, "rdpid", 5u) = (v13 & 0x400000) != 0;
    *(_BYTE *)sub_102FB20(a1, "kl", 2u) = (v13 & 0x800000) != 0;
    *(_BYTE *)sub_102FB20(a1, "cldemote", 8u) = (v13 & 0x2000000) != 0;
    *(_BYTE *)sub_102FB20(a1, "movdiri", 7u) = (v13 & 0x8000000) != 0;
    *(_BYTE *)sub_102FB20(a1, "movdir64b", 9u) = (v13 & 0x10000000) != 0;
    *(_BYTE *)sub_102FB20(a1, "enqcmd", 6u) = (v13 & 0x20000000) != 0;
    *(_BYTE *)sub_102FB20(a1, "uintr", 5u) = (v14 & 0x20) != 0;
    *(_BYTE *)sub_102FB20(a1, "avx512vp2intersect", 0x12u) = v212 & BYTE1(v14);
    *(_BYTE *)sub_102FB20(a1, "serialize", 9u) = (v14 & 0x4000) != 0;
    *(_BYTE *)sub_102FB20(a1, "tsxldtrk", 8u) = BYTE2(v14) & 1;
    *(_BYTE *)sub_102FB20(a1, "pconfig", 7u) = (v14 & 0x40000) != 0;
    *(_BYTE *)sub_102FB20(a1, "amx-bf16", 8u) = v213 & (v14 >> 22);
    *(_BYTE *)sub_102FB20(a1, "avx512fp16", 0xAu) = v212 & (v14 >> 23);
    *(_BYTE *)sub_102FB20(a1, "amx-tile", 8u) = v213 & HIBYTE(v14);
    *(_BYTE *)sub_102FB20(a1, "amx-int8", 8u) = v213 & (v14 >> 25);
    if ( v210 )
    {
      _RAX = 0;
      __asm { cpuid }
      if ( (unsigned int)_RAX > 6 )
      {
        _RAX = 7;
        __asm { cpuid }
        v126 = _RDX;
        v127 = _RAX;
        LODWORD(_RBX) = _RAX;
        v128 = (_BYTE *)sub_102FB20(a1, "sha512", 6u);
        *v128 = v127;
        *v128 &= 1u;
        *(_BYTE *)sub_102FB20(a1, "sm3", 3u) = (v127 & 2) != 0;
        *(_BYTE *)sub_102FB20(a1, "sm4", 3u) = (v127 & 4) != 0;
        *(_BYTE *)sub_102FB20(a1, "raoint", 6u) = (v127 & 8) != 0;
        *(_BYTE *)sub_102FB20(a1, "avxvnni", 7u) = v211 & ((unsigned int)_RBX >> 4);
        *(_BYTE *)sub_102FB20(a1, "avx512bf16", 0xAu) = v212 & (v127 >> 5);
        *(_BYTE *)sub_102FB20(a1, "amx-fp16", 8u) = v213 & (v127 >> 21);
        *(_BYTE *)sub_102FB20(a1, "cmpccxadd", 9u) = (unsigned __int8)v127 >> 7;
        *(_BYTE *)sub_102FB20(a1, "hreset", 6u) = (v127 & 0x400000) != 0;
        *(_BYTE *)sub_102FB20(a1, "avxifma", 7u) = v211 & (v127 >> 23);
        *(_BYTE *)sub_102FB20(a1, "movrs", 5u) = (v127 & 0x80000000) != 0;
        *(_BYTE *)sub_102FB20(a1, "avxvnniint8", 0xBu) = v211 & (v126 >> 4);
        v129 = (v126 >> 19) & 1;
        *(_BYTE *)sub_102FB20(a1, "avxneconvert", 0xCu) = v211 & (v126 >> 5);
        *(_BYTE *)sub_102FB20(a1, "amx-complex", 0xBu) = v213 & BYTE1(v126);
        *(_BYTE *)sub_102FB20(a1, "avxvnniint16", 0xCu) = v211 & (v126 >> 10);
        *(_BYTE *)sub_102FB20(a1, "prefetchi", 9u) = (v126 & 0x4000) != 0;
        v130 = (_BYTE *)sub_102FB20(a1, "usermsr", 7u);
        v131 = v126;
        v132 = (v126 >> 21) & 1;
        *v130 = v131 < 0;
        goto LABEL_62;
      }
    }
  }
  else
  {
    *(_BYTE *)sub_102FB20(a1, "avx512dq", 8u) = 0;
    *(_BYTE *)sub_102FB20(a1, "rdseed", 6u) = 0;
    *(_BYTE *)sub_102FB20(a1, "adx", 3u) = 0;
    *(_BYTE *)sub_102FB20(a1, "avx512ifma", 0xAu) = 0;
    *(_BYTE *)sub_102FB20(a1, "clflushopt", 0xAu) = 0;
    *(_BYTE *)sub_102FB20(a1, "clwb", 4u) = 0;
    *(_BYTE *)sub_102FB20(a1, "avx512cd", 8u) = 0;
    *(_BYTE *)sub_102FB20(a1, "sha", 3u) = 0;
    *(_BYTE *)sub_102FB20(a1, "avx512bw", 8u) = 0;
    *(_BYTE *)sub_102FB20(a1, "avx512vl", 8u) = 0;
    *(_BYTE *)sub_102FB20(a1, "avx512vbmi", 0xAu) = 0;
    *(_BYTE *)sub_102FB20(a1, "pku", 3u) = 0;
    *(_BYTE *)sub_102FB20(a1, "waitpkg", 7u) = 0;
    *(_BYTE *)sub_102FB20(a1, "avx512vbmi2", 0xBu) = 0;
    *(_BYTE *)sub_102FB20(a1, "shstk", 5u) = 0;
    *(_BYTE *)sub_102FB20(a1, "gfni", 4u) = 0;
    *(_BYTE *)sub_102FB20(a1, "vaes", 4u) = 0;
    *(_BYTE *)sub_102FB20(a1, "vpclmulqdq", 0xAu) = 0;
    *(_BYTE *)sub_102FB20(a1, "avx512vnni", 0xAu) = 0;
    *(_BYTE *)sub_102FB20(a1, "avx512bitalg", 0xCu) = 0;
    *(_BYTE *)sub_102FB20(a1, "avx512vpopcntdq", 0xFu) = 0;
    *(_BYTE *)sub_102FB20(a1, "rdpid", 5u) = 0;
    *(_BYTE *)sub_102FB20(a1, "kl", 2u) = 0;
    *(_BYTE *)sub_102FB20(a1, "cldemote", 8u) = 0;
    *(_BYTE *)sub_102FB20(a1, "movdiri", 7u) = 0;
    *(_BYTE *)sub_102FB20(a1, "movdir64b", 9u) = 0;
    *(_BYTE *)sub_102FB20(a1, "enqcmd", 6u) = 0;
    *(_BYTE *)sub_102FB20(a1, "uintr", 5u) = 0;
    *(_BYTE *)sub_102FB20(a1, "avx512vp2intersect", 0x12u) = 0;
    *(_BYTE *)sub_102FB20(a1, "serialize", 9u) = 0;
    *(_BYTE *)sub_102FB20(a1, "tsxldtrk", 8u) = 0;
    *(_BYTE *)sub_102FB20(a1, "pconfig", 7u) = 0;
    *(_BYTE *)sub_102FB20(a1, "amx-bf16", 8u) = 0;
    *(_BYTE *)sub_102FB20(a1, "avx512fp16", 0xAu) = 0;
    *(_BYTE *)sub_102FB20(a1, "amx-tile", 8u) = 0;
    *(_BYTE *)sub_102FB20(a1, "amx-int8", 8u) = 0;
  }
  LOWORD(v129) = 0;
  LOBYTE(v132) = 0;
  *(_BYTE *)sub_102FB20(a1, "sha512", 6u) = 0;
  *(_BYTE *)sub_102FB20(a1, "sm3", 3u) = 0;
  *(_BYTE *)sub_102FB20(a1, "sm4", 3u) = 0;
  *(_BYTE *)sub_102FB20(a1, "raoint", 6u) = 0;
  *(_BYTE *)sub_102FB20(a1, "avxvnni", 7u) = 0;
  *(_BYTE *)sub_102FB20(a1, "avx512bf16", 0xAu) = 0;
  *(_BYTE *)sub_102FB20(a1, "amx-fp16", 8u) = 0;
  *(_BYTE *)sub_102FB20(a1, "cmpccxadd", 9u) = 0;
  *(_BYTE *)sub_102FB20(a1, "hreset", 6u) = 0;
  *(_BYTE *)sub_102FB20(a1, "avxifma", 7u) = 0;
  *(_BYTE *)sub_102FB20(a1, "movrs", 5u) = 0;
  *(_BYTE *)sub_102FB20(a1, "avxvnniint8", 0xBu) = 0;
  *(_BYTE *)sub_102FB20(a1, "avxneconvert", 0xCu) = 0;
  *(_BYTE *)sub_102FB20(a1, "amx-complex", 0xBu) = 0;
  *(_BYTE *)sub_102FB20(a1, "avxvnniint16", 0xCu) = 0;
  *(_BYTE *)sub_102FB20(a1, "prefetchi", 9u) = 0;
  *(_BYTE *)sub_102FB20(a1, "usermsr", 7u) = 0;
LABEL_62:
  *(_BYTE *)sub_102FB20(a1, "egpr", 4u) = v132;
  *(_BYTE *)sub_102FB20(a1, "push2pop2", 9u) = v132;
  *(_BYTE *)sub_102FB20(a1, "ppx", 3u) = v132;
  *(_BYTE *)sub_102FB20(a1, "ndd", 3u) = v132;
  *(_BYTE *)sub_102FB20(a1, "ccmp", 4u) = v132;
  *(_BYTE *)sub_102FB20(a1, "nf", 2u) = v132;
  *(_BYTE *)sub_102FB20(a1, "cf", 2u) = v132;
  *(_BYTE *)sub_102FB20(a1, "zu", 2u) = v132;
  if ( v209 <= 0xC )
    goto LABEL_106;
  _RAX = 0;
  __asm { cpuid }
  if ( (unsigned int)_RAX <= 0xC )
  {
LABEL_106:
    LOBYTE(v144) = 0;
    *(_BYTE *)sub_102FB20(a1, "xsaveopt", 8u) = 0;
    *(_BYTE *)sub_102FB20(a1, "xsavec", 6u) = 0;
  }
  else
  {
    _RAX = 13;
    __asm { cpuid }
    v143 = _RAX;
    *(_BYTE *)sub_102FB20(a1, "xsaveopt", 8u) = _RAX & v211;
    LODWORD(_RBX) = v143;
    v144 = v211 & (v143 >> 3);
    *(_BYTE *)sub_102FB20(a1, "xsavec", 6u) = v211 & ((unsigned int)_RBX >> 1);
  }
  *(_BYTE *)sub_102FB20(a1, "xsaves", 6u) = v144;
  v145 = 0;
  if ( v209 > 0x13 )
  {
    _RAX = 0;
    __asm { cpuid }
    if ( (unsigned int)_RAX > 0x13 )
    {
      _RAX = 20;
      __asm { cpuid }
      v145 = (_RBX & 0x10) != 0;
    }
  }
  *(_BYTE *)sub_102FB20(a1, "ptwrite", 7u) = v145;
  if ( v209 <= 0x18 )
    goto LABEL_83;
  _RAX = 0;
  __asm { cpuid }
  if ( (unsigned int)_RAX <= 0x18 )
  {
LABEL_83:
    v113 = 0;
  }
  else
  {
    _RAX = 25;
    __asm { cpuid }
    if ( v113 )
      v113 = (_RBX & 4) != 0;
  }
  *(_BYTE *)sub_102FB20(a1, "widekl", 6u) = v113;
  if ( v209 <= 0x1D )
    goto LABEL_107;
  _RAX = 0;
  __asm { cpuid }
  if ( (unsigned int)_RAX <= 0x1D )
  {
LABEL_107:
    LOBYTE(v177) = 0;
    *(_BYTE *)sub_102FB20(a1, "amx-fp8", 7u) = 0;
    *(_BYTE *)sub_102FB20(a1, "amx-transpose", 0xDu) = 0;
    *(_BYTE *)sub_102FB20(a1, "amx-tf32", 8u) = 0;
    *(_BYTE *)sub_102FB20(a1, "amx-avx512", 0xAu) = 0;
  }
  else
  {
    _RAX = 30;
    __asm { cpuid }
    v176 = _RAX;
    *(_BYTE *)sub_102FB20(a1, "amx-fp8", 7u) = v213 & ((unsigned int)_RAX >> 4);
    *(_BYTE *)sub_102FB20(a1, "amx-transpose", 0xDu) = v213 & (v176 >> 5);
    *(_BYTE *)sub_102FB20(a1, "amx-tf32", 8u) = v213 & (v176 >> 6);
    *(_BYTE *)sub_102FB20(a1, "amx-avx512", 0xAu) = v213 & ((unsigned __int8)v176 >> 7);
    v177 = v213 & (v176 >> 8);
  }
  *(_BYTE *)sub_102FB20(a1, "amx-movrs", 9u) = v177;
  if ( v209 <= 0x23 )
    goto LABEL_84;
  _RAX = 0;
  __asm { cpuid }
  if ( (unsigned int)_RAX <= 0x23 )
  {
LABEL_84:
    LOBYTE(v189) = 0;
    LOBYTE(v188) = 0;
  }
  else
  {
    _RAX = 36;
    __asm { cpuid }
    LOBYTE(_RAX) = (_BYTE)_RBX != 0;
    v188 = _RAX & v129;
    v189 = *(_DWORD *)&v188 & ((unsigned int)_RBX >> 18);
  }
  *(_BYTE *)sub_102FB20(a1, "avx10.1-256", 0xBu) = v188;
  *(_BYTE *)sub_102FB20(a1, "avx10.1-512", 0xBu) = v189;
  *(_BYTE *)sub_102FB20(a1, "avx10.2-256", 0xBu) = 0;
  *(_BYTE *)sub_102FB20(a1, "avx10.2-512", 0xBu) = 0;
  return a1;
}
