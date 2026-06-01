__int64 __fastcall sub_1EFA880(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // r15
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // r14d
  __int64 v12; // rdi
  unsigned int v13; // ebx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // edx
  __int64 *v23; // rsi
  __int64 v24; // r8
  unsigned __int64 v25; // r12
  _QWORD *v26; // rdx
  unsigned __int64 *v27; // rdx
  unsigned __int64 *v28; // r13
  unsigned __int64 v29; // r14
  unsigned __int64 v30; // rbx
  unsigned __int64 *v31; // r15
  unsigned __int64 *v32; // rbp
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rdi
  int v36; // r12d
  unsigned int v37; // r12d
  int k; // r13d
  unsigned __int64 *v39; // r14
  int v40; // r13d
  _BYTE *v41; // rsi
  __int64 v42; // rdx
  _BYTE *v43; // rax
  signed __int64 v44; // rdx
  unsigned __int64 *v45; // rcx
  int v46; // eax
  int v47; // esi
  __int64 v48; // r8
  unsigned __int64 v49; // rdi
  bool v50; // r12
  __int64 v51; // rax
  unsigned __int64 v52; // rsi
  __int64 i; // rax
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rax
  __int64 j; // rax
  unsigned __int64 v57; // rax
  unsigned __int64 *v58; // rax
  size_t v59; // rax
  size_t v60; // r13
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // rax
  __m128i *v63; // rax
  int v64; // esi
  int v65; // r9d
  __int64 v66; // r8
  unsigned __int64 v67; // r12
  __int64 v68; // rax
  unsigned __int64 v69; // rax
  _BYTE *v70; // rax
  _QWORD *v71; // r14
  void *v72; // r15
  unsigned int v73; // r12d
  size_t v74; // rax
  unsigned __int64 v75; // r12
  __int64 v76; // rax
  unsigned __int64 v77; // rax
  __int64 v80; // [rsp+8h] [rbp-150h]
  unsigned int v81; // [rsp+10h] [rbp-148h]
  __int64 v82; // [rsp+18h] [rbp-140h]
  int v83; // [rsp+20h] [rbp-138h]
  __int64 v84; // [rsp+20h] [rbp-138h]
  __int64 v85; // [rsp+28h] [rbp-130h]
  _QWORD *v86; // [rsp+38h] [rbp-120h]
  __int64 v87; // [rsp+40h] [rbp-118h]
  __int64 v88; // [rsp+48h] [rbp-110h]
  unsigned int v89; // [rsp+54h] [rbp-104h] BYREF
  __int64 v90; // [rsp+58h] [rbp-100h] BYREF
  __int64 v91; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v92; // [rsp+68h] [rbp-F0h] BYREF
  __int64 v93; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v94; // [rsp+78h] [rbp-E0h]
  unsigned int v95; // [rsp+80h] [rbp-D8h]
  void *v96; // [rsp+90h] [rbp-C8h] BYREF
  size_t v97; // [rsp+98h] [rbp-C0h]
  _BYTE v98[16]; // [rsp+A0h] [rbp-B8h] BYREF
  void *src; // [rsp+B0h] [rbp-A8h] BYREF
  signed __int64 v100; // [rsp+B8h] [rbp-A0h]
  _QWORD v101[2]; // [rsp+C0h] [rbp-98h] BYREF
  __m128 v102; // [rsp+D0h] [rbp-88h] BYREF
  _OWORD v103[7]; // [rsp+E0h] [rbp-78h] BYREF

  v5 = a3;
  v7 = a1;
  v8 = *(_QWORD *)(a3 + 72);
  v9 = *(_QWORD *)(v5 + 80);
  v89 = 0;
  sub_1EAC880((__int64)&v102, a1, v8, v9, a2, &v89);
  sub_A0AAD0(v5 + 176, &v102);
  if ( (_OWORD *)v102.m128_u64[0] != v103 )
    operator delete((void *)v102.m128_u64[0]);
  v10 = *(_QWORD *)(a1 + 136);
  if ( !*(_BYTE *)(*(_QWORD *)(v10 + 40) + 72LL)
    || (v11 = *(_DWORD *)(v5 + 4)) != 0
    || *(_DWORD *)(**(_QWORD **)(a1 + 160) + 4LL) == 4 )
  {
LABEL_5:
    v12 = *(_QWORD *)(v7 + 56);
    v13 = 0;
    if ( v12 )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v12 + 32LL))(
        v12,
        *(_QWORD *)(v5 + 176),
        *(_QWORD *)(v5 + 184));
    return v13;
  }
  v15 = sub_13C9950(
          *(__int64 **)(v10 + 104),
          *(_QWORD *)(v5 + 40),
          *(_QWORD *)(v5 + 48),
          *(unsigned int *)(v5 + 812),
          1,
          0);
  v88 = v15;
  v16 = *(_QWORD *)(a1 + 136);
  v87 = *(_QWORD *)(v16 + 104);
  if ( !v15 )
  {
    v90 = 0;
    if ( (*(_BYTE *)(*(_QWORD *)(v16 + 40) + 168LL) & 2) != 0 )
      goto LABEL_12;
    if ( (unsigned __int8)sub_1EAB290(a1, *(_QWORD *)(v5 + 8), *(_QWORD *)(v5 + 16), a5) )
      return 3;
LABEL_46:
    sub_FC70B0((__int64)&v102, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 504), 926);
    sub_AEC220((unsigned __int8 **)&v102, *(_BYTE **)(v5 + 40), *(_QWORD *)(v5 + 48));
    sub_AEC220((unsigned __int8 **)&v102, *(_BYTE **)(v5 + 8), *(_QWORD *)(v5 + 16));
    if ( a4 )
    {
      v41 = *(_BYTE **)(a4 + 8);
      v42 = *(_QWORD *)(a4 + 16);
      src = v101;
      sub_1EA9CC0(&src, v41, (__int64)&v41[v42]);
    }
    else
    {
      src = v101;
      v74 = j__strlen(&byte_22F0C30);
      sub_1EA9D80(&src, &byte_22F0C30, (__int64)(&byte_22F0C30 + v74));
    }
    sub_AEC220((unsigned __int8 **)&v102, src, v100);
    sub_AEC220((unsigned __int8 **)&v102, *(_BYTE **)(v5 + 176), *(_QWORD *)(v5 + 184));
    sub_AE9DF0((unsigned __int8 **)&v102, a4 == 0, 2u);
    if ( src != v101 )
      operator delete(src);
    sub_AEA040((__int64)&v102);
    if ( a4 && *(_DWORD *)(a4 + 4) == 2 )
    {
      sub_FC70B0((__int64)&v102, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 504), 938);
      v43 = (_BYTE *)sub_228A4B0(*(_QWORD *)(v5 + 176), *(_QWORD *)(v5 + 184), 0);
      sub_AEC220((unsigned __int8 **)&v102, v43, v44);
      sub_AEA040((__int64)&v102);
    }
    return 3;
  }
  v90 = sub_13FC270((_QWORD **)(*(_QWORD *)(v16 + 104) + 632LL), v15);
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 40LL) + 168LL) & 2) == 0 && !v90 )
  {
    if ( (unsigned __int8)sub_1EAB290(a1, *(_QWORD *)(v5 + 8), *(_QWORD *)(v5 + 16), a5) )
      return 3;
    v75 = *(_QWORD *)(sub_FEEE40(v15) + 304);
    if ( v75 )
    {
      sub_FC70B0((__int64)&v102, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 504), 929);
      sub_AEC220((unsigned __int8 **)&v102, *(_BYTE **)(v5 + 40), *(_QWORD *)(v5 + 48));
      sub_AEC220((unsigned __int8 **)&v102, *(_BYTE **)(v5 + 8), *(_QWORD *)(v5 + 16));
      while ( 1 )
      {
        v76 = *(_QWORD *)(v75 + 8);
        if ( !v76 )
          break;
        if ( (v76 & 4) == 0 )
          break;
        v77 = v76 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v77 )
          break;
        v75 = v77;
      }
      sub_AEC220((unsigned __int8 **)&v102, (_BYTE *)(v75 + 32), *(_QWORD *)v75);
      sub_AEA040((__int64)&v102);
      return 3;
    }
    goto LABEL_46;
  }
LABEL_12:
  v91 = sub_12ED8B0(*(_QWORD *)(a1 + 88), *(const void **)(v5 + 176), *(_QWORD *)(v5 + 184), 0, 1u);
  if ( !v91 || !v90 || !sub_FEE430((unsigned __int64 *)&v91, (unsigned __int64 *)&v90) )
  {
    v40 = *(_DWORD *)(v5 + 4);
    if ( !(unsigned __int8)sub_1EAB290(a1, *(_QWORD *)(v5 + 8), *(_QWORD *)(v5 + 16), a5) )
    {
      v50 = v40 == 0 && a4 == 0;
      sub_FC70B0((__int64)&v102, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 504), 925);
      sub_AEC220((unsigned __int8 **)&v102, *(_BYTE **)(v5 + 40), *(_QWORD *)(v5 + 48));
      v51 = v5 + 8;
      if ( !v50 )
        v51 = a4 + 8;
      sub_AEC220((unsigned __int8 **)&v102, *(_BYTE **)v51, *(_QWORD *)(v51 + 8));
      v52 = v90;
      for ( i = *(_QWORD *)(v90 + 8); i; i = *(_QWORD *)(v54 + 8) )
      {
        if ( (i & 4) == 0 )
          break;
        v54 = i & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v54 )
          break;
        v52 = v54;
      }
      sub_AEC220((unsigned __int8 **)&v102, (_BYTE *)(v52 + 32), *(_QWORD *)v52);
      sub_AEC220((unsigned __int8 **)&v102, *(_BYTE **)(v5 + 176), *(_QWORD *)(v5 + 184));
      sub_AE9DF0((unsigned __int8 **)&v102, v50, 2u);
      sub_AEA040((__int64)&v102);
    }
    return 3;
  }
  v17 = v89;
  v93 = 0;
  v94 = 0;
  ++v89;
  v18 = *a2;
  v95 = 0;
  v83 = *(_QWORD *)(v18 + 8 * v17);
  if ( !v83 )
  {
LABEL_20:
    v20 = *(_QWORD *)(v87 + 1176);
    v21 = *(unsigned int *)(v87 + 1192);
    if ( (_DWORD)v21 )
    {
      v22 = (v21 - 1) & (((unsigned int)v88 >> 9) ^ ((unsigned int)v88 >> 4));
      v23 = (__int64 *)(v20 + 32LL * v22);
      v24 = *v23;
      if ( v88 == *v23 )
      {
LABEL_22:
        sub_1EC2700(&v102, v23, (_QWORD *)(v20 + 32 * v21), v87 + 1176, 1);
        v25 = v102.m128_u64[0];
        goto LABEL_23;
      }
      v64 = 1;
      if ( v24 != -4096 )
      {
        do
        {
          v65 = v64 + 1;
          v22 = (v21 - 1) & (v64 + v22);
          v23 = (__int64 *)(v20 + 32LL * v22);
          v66 = *v23;
          if ( v88 == *v23 )
            goto LABEL_22;
          v64 = v65;
        }
        while ( v66 != -4096 );
      }
    }
    sub_1EC2700(&v102, (_QWORD *)(v20 + 32 * v21), (_QWORD *)(v20 + 32 * v21), v87 + 1176, 1);
    v25 = v102.m128_u64[0];
LABEL_23:
    v26 = (_QWORD *)(*(_QWORD *)(v87 + 1176) + 32LL * *(unsigned int *)(v87 + 1192));
    sub_1EC2700(&v102, v26, v26, v87 + 1176, 1);
    if ( v102.m128_u64[0] != v25 && v25 != -8 )
    {
      v28 = (unsigned __int64 *)sub_1EB1600(v25 + 8);
      v80 = *(_QWORD *)(v25 + 8) + 8LL * *(unsigned int *)(v25 + 24);
      if ( (unsigned __int64 *)v80 != v28 )
      {
        v29 = *v28;
        if ( !v95 )
        {
LABEL_76:
          if ( !(unsigned __int8)sub_1EAB290(v7, *(_QWORD *)(v5 + 8), *(_QWORD *)(v5 + 16), a5) )
          {
            sub_FC70B0((__int64)&v102, *(_QWORD *)(v7 + 104), *(_DWORD *)(v7 + 504), 928);
            sub_AEC220((unsigned __int8 **)&v102, *(_BYTE **)(v5 + 40), *(_QWORD *)(v5 + 48));
            sub_AE9DF0((unsigned __int8 **)&v102, 0, 2u);
            for ( j = *(_QWORD *)(v29 + 8); j; j = *(_QWORD *)(v57 + 8) )
            {
              if ( (j & 4) == 0 )
                break;
              v57 = j & 0xFFFFFFFFFFFFFFF8LL;
              if ( !v57 )
                break;
              v29 = v57;
            }
            sub_AEC220((unsigned __int8 **)&v102, (_BYTE *)(v29 + 32), *(_QWORD *)v29);
            sub_AEA040((__int64)&v102);
          }
          goto LABEL_73;
        }
        v84 = v7;
        v30 = *v28;
        v81 = v95 - 1;
        v82 = v93;
        v85 = v5;
        v31 = v28;
        v32 = v27;
        while ( 2 )
        {
          v33 = v30;
          while ( 1 )
          {
            v34 = *(_QWORD *)(v33 + 8);
            if ( !v34 )
            {
LABEL_32:
              v36 = -1916529075;
              goto LABEL_33;
            }
            v35 = v34 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v34 & 4) == 0 )
              break;
            v33 = v34 & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v35 )
              goto LABEL_32;
          }
          v55 = 0x9DDFEA08EB382D69LL
              * (((0x9DDFEA08EB382D69LL * (HIDWORD(v35) ^ (((8 * v34) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL))) >> 47)
               ^ HIDWORD(v35)
               ^ (0x9DDFEA08EB382D69LL * (HIDWORD(v35) ^ (((8 * v34) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL))));
          v36 = -348639895 * (v55 ^ (HIDWORD(v55) >> 15));
LABEL_33:
          v37 = v81 & v36;
          for ( k = 1; ; ++k )
          {
            v39 = (unsigned __int64 *)(v82 + 8LL * v37);
            if ( sub_FEE490(v30, *v39) )
              break;
            if ( sub_FEE490(*v39, 0xFFFFFFFFFFFFF000LL) )
              goto LABEL_75;
            v73 = k + v37;
            v37 = v81 & v73;
          }
          if ( !v39 )
          {
LABEL_75:
            v29 = v30;
            v5 = v85;
            v7 = v84;
            goto LABEL_76;
          }
          *v39 = -8192;
          LODWORD(v94) = v94 - 1;
          ++HIDWORD(v94);
          do
            ++v31;
          while ( v32 != v31 && (*v31 == -4096 || *v31 == -8192) );
          if ( (unsigned __int64 *)v80 != v31 )
          {
            v30 = *v31;
            continue;
          }
          break;
        }
        v7 = v84;
        v5 = v85;
      }
    }
    v58 = (unsigned __int64 *)sub_1EB1600((__int64)&v93);
    if ( v58 != (unsigned __int64 *)(v93 + 8LL * v95) )
    {
      v67 = *v58;
      if ( !(unsigned __int8)sub_1EAB290(v7, *(_QWORD *)(v5 + 8), *(_QWORD *)(v5 + 16), a5) )
      {
        sub_FC70B0((__int64)&v102, *(_QWORD *)(v7 + 104), *(_DWORD *)(v7 + 504), 928);
        sub_AEC220((unsigned __int8 **)&v102, *(_BYTE **)(v5 + 40), *(_QWORD *)(v5 + 48));
        sub_AE9DF0((unsigned __int8 **)&v102, 1, 2u);
        while ( 1 )
        {
          v68 = *(_QWORD *)(v67 + 8);
          if ( !v68 )
            break;
          if ( (v68 & 4) == 0 )
            break;
          v69 = v68 & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v69 )
            break;
          v67 = v69;
        }
        sub_AEC220((unsigned __int8 **)&v102, (_BYTE *)(v67 + 32), *(_QWORD *)v67);
        sub_AEA040((__int64)&v102);
      }
      goto LABEL_73;
    }
    sub_1EAE620((__int64)&v93);
    goto LABEL_5;
  }
  while ( 1 )
  {
    sub_1EAC880((__int64)&v96, v7, *(_QWORD *)(v5 + 72), *(_QWORD *)(v5 + 80), a2, &v89);
    v92 = sub_12ED8B0(*(_QWORD *)(v7 + 88), v96, v97, 0, 0);
    if ( !v92 )
      break;
    if ( !(unsigned __int8)sub_FF2870(&v93, (unsigned __int64 *)&v92, (unsigned __int64 **)&src) )
    {
      v45 = (unsigned __int64 *)src;
      v46 = v94 + 1;
      v47 = 2 * v95;
      v48 = (unsigned int)(4 * (v94 + 1));
      v102.m128_u64[0] = (unsigned __int64)src;
      if ( (unsigned int)v48 < 3 * v95 )
      {
        if ( v95 - HIDWORD(v94) - v46 > v95 >> 3 )
        {
LABEL_57:
          v49 = *v45;
          v86 = v45;
          LODWORD(v94) = v46;
          if ( !sub_FEE490(v49, 0xFFFFFFFFFFFFF000LL) )
            --HIDWORD(v94);
          *v86 = v92;
          goto LABEL_18;
        }
        v47 = v95;
      }
      sub_FF6850((__int64)&v93, v47, v95, (__int64)src, v48, v19);
      sub_FF2870(&v93, (unsigned __int64 *)&v92, (unsigned __int64 **)&v102);
      v45 = (unsigned __int64 *)v102.m128_u64[0];
      v46 = v94 + 1;
      goto LABEL_57;
    }
LABEL_18:
    if ( v96 == v98 )
    {
      if ( v83 == ++v11 )
        goto LABEL_20;
    }
    else
    {
      operator delete(v96);
      if ( v83 == ++v11 )
        goto LABEL_20;
    }
  }
  if ( !(unsigned __int8)sub_1EAB290(v7, *(_QWORD *)(v5 + 8), *(_QWORD *)(v5 + 16), a5) )
  {
    v59 = j__strlen("could not find file '");
    v100 = 0;
    v60 = v59;
    LOBYTE(v101[0]) = 0;
    v61 = v59 + v97;
    src = v101;
    v62 = 0x7FFFFFFFFFFFFFFFLL;
    v102.m128_u64[0] = v61;
    if ( v61 > 0xF )
    {
      v70 = (_BYTE *)sub_1EA8460((__int64 *)&v102, 0xFu);
      v71 = src;
      v72 = v70;
      if ( v100 )
      {
        if ( v100 != -1 )
          memcpy(v70, src, v100 + 1);
      }
      else
      {
        *v70 = *(_BYTE *)src;
      }
      if ( v71 != v101 )
        operator delete(v71);
      src = v72;
      v101[0] = v102.m128_u64[0];
      v62 = 0x7FFFFFFFFFFFFFFFLL - v100;
    }
    if ( v60 > v62 )
      std::__throw_length_error("basic_string::append");
    sub_9EE560(&src, "could not find file '", v60);
    sub_9EE560(&src, v96, v97);
    v63 = (__m128i *)sub_9EE7C0(&src, "' referenced by AST file");
    v102.m128_u64[0] = (unsigned __int64)v103;
    if ( (__m128i *)v63->m128i_i64[0] == &v63[1] )
    {
      v103[0] = _mm_loadu_si128(v63 + 1);
    }
    else
    {
      v102.m128_u64[0] = v63->m128i_i64[0];
      *(_QWORD *)&v103[0] = v63[1].m128i_i64[0];
    }
    v102.m128_u64[1] = v63->m128i_u64[1];
    v63->m128i_i64[0] = (__int64)v63[1].m128i_i64;
    v63->m128i_i64[1] = 0;
    v63[1].m128i_i8[0] = 0;
    sub_1EAD680(v7, v102.m128_u64[0], v102.m128_i64[1]);
    if ( (_OWORD *)v102.m128_u64[0] != v103 )
      operator delete((void *)v102.m128_u64[0]);
    if ( src != v101 )
      operator delete(src);
  }
  if ( v96 != v98 )
    operator delete(v96);
LABEL_73:
  operator delete(v93, 8LL * v95, 8);
  return 3;
}
