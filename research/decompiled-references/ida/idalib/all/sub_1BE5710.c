bool __fastcall sub_1BE5710(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, _BYTE *a5)
{
  __int64 v9; // r10
  bool v10; // r14
  __int64 *v11; // r15
  __int64 v12; // r10
  unsigned __int64 v13; // rbx
  unsigned __int8 v14; // cl
  __int64 v15; // r11
  int v16; // eax
  _QWORD *v18; // rbx
  _QWORD *v19; // rax
  __int64 *v20; // rdx
  bool v21; // al
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int16 v24; // dx
  __int64 v25; // rax
  __int64 v26; // r13
  __m128i v27; // xmm2
  __m128i v28; // xmm3
  __m128i v29; // xmm4
  __m128i v30; // xmm5
  __m128i v31; // xmm6
  __m128i v32; // xmm7
  unsigned __int64 v33; // rax
  int v34; // eax
  __int64 v35; // r10
  __int64 v36; // r11
  __int64 v37; // rbp
  __int64 v38; // rdi
  char v39; // al
  __int64 v40; // r11
  bool v41; // r15
  __int64 v42; // r10
  __int64 v43; // rsi
  void *v44; // rax
  __int64 v45; // rsi
  unsigned __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  char v50; // r15
  __m128i v51; // xmm2
  __int64 v52; // rdi
  __int64 v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // rcx
  unsigned __int64 v56; // rbp
  __int64 v57; // rbp
  __m128i v58; // xmm2
  __m128i v59; // xmm3
  __m128i v60; // xmm4
  __m128i v61; // xmm5
  __m128i v62; // xmm6
  __m128i v63; // xmm7
  unsigned __int64 v64; // rax
  __int64 v65; // rdi
  int v66; // eax
  __int64 v67; // rdi
  unsigned __int64 v68; // rsi
  unsigned __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  char v72; // dl
  _QWORD *v73; // rax
  _QWORD *v74; // rcx
  _QWORD *v75; // rdx
  __int64 *v76; // [rsp+0h] [rbp-198h]
  __int64 v77; // [rsp+0h] [rbp-198h]
  __int64 v78; // [rsp+0h] [rbp-198h]
  __int64 v79; // [rsp+0h] [rbp-198h]
  __int64 v80; // [rsp+0h] [rbp-198h]
  __int64 v81; // [rsp+0h] [rbp-198h]
  __int64 v82; // [rsp+0h] [rbp-198h]
  __int64 v83; // [rsp+0h] [rbp-198h]
  __int64 v84; // [rsp+0h] [rbp-198h]
  __int64 v85; // [rsp+0h] [rbp-198h]
  __int64 v86; // [rsp+8h] [rbp-190h]
  __int64 v87; // [rsp+8h] [rbp-190h]
  __int64 v88; // [rsp+8h] [rbp-190h]
  __int64 v89; // [rsp+8h] [rbp-190h]
  __int64 v90; // [rsp+8h] [rbp-190h]
  __int64 v91; // [rsp+8h] [rbp-190h]
  __int64 v92; // [rsp+8h] [rbp-190h]
  bool v93; // [rsp+1Eh] [rbp-17Ah] BYREF
  char v94; // [rsp+1Fh] [rbp-179h] BYREF
  void *ptr; // [rsp+20h] [rbp-178h] BYREF
  __m128i si128; // [rsp+28h] [rbp-170h]
  __int64 v97; // [rsp+38h] [rbp-160h] BYREF
  _BYTE *v98; // [rsp+40h] [rbp-158h] BYREF
  __int64 v99; // [rsp+48h] [rbp-150h]
  _QWORD *v100; // [rsp+50h] [rbp-148h]
  __int64 v101; // [rsp+58h] [rbp-140h]
  __m128 v102; // [rsp+60h] [rbp-138h] BYREF
  __m128i v103; // [rsp+70h] [rbp-128h] BYREF
  __m128i v104; // [rsp+80h] [rbp-118h] BYREF
  __m128i v105; // [rsp+90h] [rbp-108h] BYREF
  __m128i v106; // [rsp+A0h] [rbp-F8h] BYREF
  __m128i v107; // [rsp+B0h] [rbp-E8h] BYREF
  __m128i v108; // [rsp+C0h] [rbp-D8h] BYREF
  __int64 v109; // [rsp+D0h] [rbp-C8h]
  __m128 v110[3]; // [rsp+E0h] [rbp-B8h] BYREF
  __m128i v111; // [rsp+110h] [rbp-88h]
  __m128i v112; // [rsp+120h] [rbp-78h]
  _BYTE v113[40]; // [rsp+130h] [rbp-68h]

  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *a5 = 0;
  v10 = sub_1BC70C0(a2, a3);
  if ( v10 )
    return 0;
  v11 = (__int64 *)(*(_QWORD *)&byte_8[v9 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
  v12 = *v11;
  v13 = *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a3) & 7;
  v14 = *(_BYTE *)(*v11 + 16);
  v15 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
  v16 = *(unsigned __int8 *)(v15 + 16);
  if ( v16 != v14 )
    return 0;
  if ( (unsigned int)(v16 - 25) > 1 )
  {
    if ( v16 == 42 || v16 == 11 )
    {
      v13 = *(_QWORD *)(v15 + 32);
      v22 = *(_QWORD *)(v12 + 32);
    }
    else
    {
      if ( v16 != 33 )
        return 0;
      v76 = (__int64 *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
      v18 = sub_F61C10(*v11);
      v19 = sub_F61C10(*v76);
      if ( !v19 )
        return 0;
      if ( !v18 )
        return 0;
      v20 = v76;
      if ( v19 != v18 )
      {
        v21 = sub_1BE56A0((__int64)v19, (__int64)v18);
        v20 = v76;
        if ( !v21 )
          return 0;
      }
      v13 = *(_QWORD *)(*v20 + 32);
      v22 = *(_QWORD *)(*v11 + 32);
    }
    v23 = v22 & 0xFFFFFFFFFFFFFFF0LL;
    v12 = *(_QWORD *)v23;
    v15 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
    v14 = *(_BYTE *)(*(_QWORD *)v23 + 16LL);
    if ( v14 != *(_BYTE *)(v15 + 16) || (unsigned int)v14 - 25 > 1 )
      return 0;
  }
  v24 = *(_WORD *)(v12 + 20) >> 2;
  if ( (v24 & 0x40) == 0 || (*(_BYTE *)(v15 + 21) & 1) != 0 )
  {
    if ( v14 != 26 )
      return 0;
LABEL_23:
    if ( *(_BYTE *)(v15 + 16) != 26 )
    {
      v15 = 0;
      goto LABEL_29;
    }
    v25 = *(_QWORD *)(v12 + 16);
    if ( (v25 & 0x200000000LL) == 0 || (*(_BYTE *)(v15 + 20) & 2) != 0 )
    {
      if ( (v25 & 0x200000000LL) != 0 || (*(_BYTE *)(v15 + 20) & 2) == 0 )
      {
LABEL_29:
        v87 = v15;
        v78 = v12;
        v34 = sub_F63060(v12);
        v35 = v78;
        v36 = v87;
        v37 = v78;
        if ( !v34 )
        {
          v65 = v87;
          v91 = v78;
          v83 = v36;
          v66 = sub_F63060(v65);
          v35 = v91;
          v36 = v83;
          v37 = v91;
          if ( v66 )
          {
            v67 = *(_QWORD *)(a1 + 248);
            v68 = v91 & 0xFFFFFFFFFFFFFFF0LL;
            v92 = v83;
            v10 = 1;
            v84 = v35;
            v110[0].m128_i32[0] = 0;
            v110[0].m128_u64[1] = 0;
            memset(&v110[1], 0, 32);
            v69 = sub_A823B0(v67, v68);
            v36 = v92;
            v35 = v84;
            v37 = *(_QWORD *)(v69 & 0xFFFFFFFFFFFFFFF0LL);
          }
        }
        v79 = v36;
        v38 = *(_QWORD *)(a1 + 248);
        ptr = &v97;
        v88 = v35;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8870);
        v39 = sub_A641E0(v38, v36, v35, &v93, &v94, (__int64)&ptr);
        v40 = v79;
        if ( v39 )
        {
          v41 = v93;
          if ( v93 )
          {
            v42 = v88;
            if ( !v94 )
            {
              v43 = v88;
              v89 = v79;
              v80 = v42;
              sub_A5E110(v110, v43);
              v44 = nullptr;
              if ( si128.m128i_i64[0] )
                v44 = ptr;
              v112.m128i_i64[1] = (__int64)v44;
              v45 = *(_QWORD *)(v80 + 24);
              v46 = sub_A73610(
                      *(_QWORD *)(a1 + 248),
                      v45,
                      (__int64 *)(v80 + 48),
                      *(unsigned __int16 *)(v80 + 22),
                      (const __m128i *)v110,
                      0);
              v40 = v89;
              v37 = *(_QWORD *)(v46 & 0xFFFFFFFFFFFFFFF0LL);
              if ( (unsigned int)*(unsigned __int8 *)(v37 + 16) - 25 > 1 )
              {
                v49 = sub_1BC7560(v37, v45, v47, v48);
                v40 = v89;
                v37 = v49;
              }
              v10 = v41;
            }
          }
        }
        v50 = *(_BYTE *)(*(_QWORD *)(a1 + 248) + 17441LL);
        if ( v50 && (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 )
        {
          v81 = v40;
          sub_A5DD60(&v98, v37);
          sub_A5DD60(&v102, v81);
          if ( v99 != v102.m128_u64[1] )
          {
LABEL_41:
            sub_A5E110(v110, v37);
            v51 = _mm_load_si128(&v103);
            v52 = *(_QWORD *)(a1 + 248);
            *(__m128i *)&v113[8] = _mm_load_si128((const __m128i *)&v102);
            *(__m128i *)&v113[24] = v51;
            v53 = *(_QWORD *)(v37 + 24);
            v37 = *(_QWORD *)(sub_A73610(
                                v52,
                                v53,
                                (__int64 *)(v37 + 48),
                                *(unsigned __int16 *)(v37 + 22),
                                (const __m128i *)v110,
                                0)
                            & 0xFFFFFFFFFFFFFFF0LL);
            if ( (unsigned int)*(unsigned __int8 *)(v37 + 16) - 25 > 1 )
              v37 = sub_1BC7560(v37, v53, v54, v55);
            v10 = v50;
            goto LABEL_44;
          }
          if ( v98 != &v98[v99] )
          {
            if ( *v98 != *(_BYTE *)v102.m128_u64[0] )
              goto LABEL_41;
            v71 = 1;
            while ( v71 != v99 )
            {
              v72 = v98[v71++];
              if ( v72 != *(_BYTE *)(v102.m128_u64[0] + v71 - 1) )
                goto LABEL_41;
            }
          }
          if ( v101 != v103.m128i_i64[1] )
            goto LABEL_41;
          v73 = v100;
          v74 = &v100[v101];
          if ( v100 == v74 )
            goto LABEL_44;
          v75 = (_QWORD *)v103.m128i_i64[0];
          if ( *v100 != *(_QWORD *)v103.m128i_i64[0] )
            goto LABEL_41;
          while ( 1 )
          {
            ++v73;
            ++v75;
            if ( v74 == v73 )
              break;
            if ( *v73 != *v75 )
              goto LABEL_41;
          }
        }
LABEL_44:
        if ( ptr != &v97 )
          free(ptr);
        if ( v10 )
          goto LABEL_47;
        return 0;
      }
      v82 = v12;
      v57 = *(_QWORD *)(a1 + 248);
      v90 = v15;
      sub_A5E110(&v102, v12);
      v58 = _mm_load_si128(&v103);
      v59 = _mm_load_si128(&v104);
      v60 = _mm_load_si128(&v105);
      v110[0] = (__m128)_mm_load_si128((const __m128i *)&v102);
      v61 = _mm_load_si128(&v106);
      v62 = _mm_load_si128(&v107);
      v110[0].m128_i8[2] |= 4u;
      v63 = _mm_load_si128(&v108);
      v110[1] = (__m128)v58;
      v110[2] = (__m128)v59;
      v111 = v60;
      v112 = v61;
      *(__m128i *)v113 = v62;
      *(__m128i *)&v113[16] = v63;
      *(_QWORD *)&v113[32] = v109;
      v64 = sub_A73610(
              v57,
              *(_QWORD *)(v82 + 24),
              (__int64 *)(v82 + 48),
              *(unsigned __int16 *)(v82 + 22),
              (const __m128i *)v110,
              0);
      v15 = v90;
      v12 = *(_QWORD *)(v64 & 0xFFFFFFFFFFFFFFF0LL);
      if ( a5 )
      {
        *a5 = 1;
        v10 = 1;
        if ( v12 )
          goto LABEL_29;
        goto LABEL_53;
      }
    }
    else
    {
      v77 = v12;
      v26 = *(_QWORD *)(a1 + 248);
      v86 = v15;
      sub_A5E110(&v102, v12);
      v27 = _mm_load_si128(&v103);
      v28 = _mm_load_si128(&v104);
      v29 = _mm_load_si128(&v105);
      v110[0] = (__m128)_mm_load_si128((const __m128i *)&v102);
      v30 = _mm_load_si128(&v106);
      v31 = _mm_load_si128(&v107);
      v110[0].m128_i8[2] &= ~4u;
      v32 = _mm_load_si128(&v108);
      v110[1] = (__m128)v27;
      v110[2] = (__m128)v28;
      v111 = v29;
      v112 = v30;
      *(__m128i *)v113 = v31;
      *(__m128i *)&v113[16] = v32;
      *(_QWORD *)&v113[32] = v109;
      v33 = sub_A73610(
              v26,
              *(_QWORD *)(v77 + 24),
              (__int64 *)(v77 + 48),
              *(unsigned __int16 *)(v77 + 22),
              (const __m128i *)v110,
              0);
      v15 = v86;
      v12 = *(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFF0LL);
      if ( a4 )
        *a4 = 1;
    }
    v10 = 1;
    if ( v12 )
      goto LABEL_29;
LABEL_53:
    v56 = 0;
    return v13 == v56;
  }
  v85 = v15;
  v70 = sub_A74120(*(_QWORD *)(a1 + 248), v12, v24 & 0x3FBF);
  v12 = v70;
  if ( *(_BYTE *)(v70 + 16) == 26 )
  {
    v10 = 1;
    v15 = v85;
    goto LABEL_23;
  }
  v37 = v70;
LABEL_47:
  v56 = v37 & 0xFFFFFFFFFFFFFFF0LL;
  return v13 == v56;
}
