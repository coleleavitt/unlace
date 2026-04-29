unsigned __int64 __fastcall sub_1500(
        __int64 a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  __int64 v12; // r8
  unsigned int *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  int v16; // eax
  unsigned __int16 v17; // r12
  unsigned __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  _BYTE *v24; // r10
  unsigned int v25; // edx
  __int16 v26; // ax
  _BYTE *v27; // r10
  __int64 v28; // rbx
  __int64 v29; // rbp
  _BYTE *v30; // r13
  const char *v31; // r12
  __int64 v32; // rsi
  __m128i v33; // xmm0
  __m128 v34; // xmm3
  __int64 v35; // rcx
  char v36; // al
  __m128 v37; // xmm1
  unsigned int v38; // r12d
  unsigned int v39; // edi
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __m128 v44; // xmm4
  __m128 v45; // xmm5
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __m128 v50; // xmm4
  __m128 v51; // xmm5
  char *v52; // rdx
  __int64 v53; // rcx
  __m128 v54; // xmm4
  __m128 v55; // xmm5
  char v56; // di
  __int64 v57; // r8
  char *v58; // rax
  _BYTE *v59; // rax
  const char *v60; // rdi
  __int64 v62; // rax
  const char *v63; // rax
  unsigned int v64; // [rsp+0h] [rbp-5F8h]
  char v65; // [rsp+0h] [rbp-5F8h]
  __int64 v66; // [rsp+0h] [rbp-5F8h]
  _BYTE *v67; // [rsp+0h] [rbp-5F8h]
  _BYTE *v68; // [rsp+8h] [rbp-5F0h]
  int v69; // [rsp+8h] [rbp-5F0h]
  __m128 v70; // [rsp+10h] [rbp-5E8h] BYREF
  __int64 v71; // [rsp+20h] [rbp-5D8h]
  int v72; // [rsp+2Ch] [rbp-5CCh]
  _OWORD *v73; // [rsp+30h] [rbp-5C8h]
  unsigned int v74; // [rsp+38h] [rbp-5C0h]
  int v75; // [rsp+3Ch] [rbp-5BCh]
  __int16 v76; // [rsp+44h] [rbp-5B4h] BYREF
  unsigned int v77; // [rsp+46h] [rbp-5B2h]
  __int16 v78; // [rsp+4Ah] [rbp-5AEh] BYREF
  int v79; // [rsp+4Ch] [rbp-5ACh]
  __int64 v80; // [rsp+50h] [rbp-5A8h] BYREF
  __m128i si128; // [rsp+58h] [rbp-5A0h]
  __int64 v82; // [rsp+68h] [rbp-590h]
  __int64 v83; // [rsp+70h] [rbp-588h]
  _DWORD v84[8]; // [rsp+80h] [rbp-578h] BYREF
  _BYTE v85[2]; // [rsp+A0h] [rbp-558h] BYREF
  unsigned __int16 v86; // [rsp+A2h] [rbp-556h]
  unsigned __int8 v87; // [rsp+A6h] [rbp-552h]
  unsigned __int8 v88; // [rsp+A7h] [rbp-551h]
  unsigned __int16 v89; // [rsp+A8h] [rbp-550h]
  unsigned __int16 v90; // [rsp+AEh] [rbp-54Ah]
  unsigned __int16 v91; // [rsp+B4h] [rbp-544h]
  int v92; // [rsp+BEh] [rbp-53Ah]
  unsigned int v93; // [rsp+CAh] [rbp-52Eh]
  _DWORD v94[6]; // [rsp+D6h] [rbp-522h]
  _OWORD v95[2]; // [rsp+F0h] [rbp-508h] BYREF
  __int64 v96; // [rsp+110h] [rbp-4E8h]
  __int64 v97; // [rsp+118h] [rbp-4E0h]
  __int64 v98; // [rsp+120h] [rbp-4D8h]
  __int128 v99; // [rsp+128h] [rbp-4D0h]
  __int128 v100; // [rsp+138h] [rbp-4C0h]
  __int128 v101; // [rsp+148h] [rbp-4B0h]
  __int128 v102; // [rsp+158h] [rbp-4A0h]
  __int128 v103; // [rsp+168h] [rbp-490h]
  __int128 v104; // [rsp+178h] [rbp-480h]
  __int128 v105; // [rsp+188h] [rbp-470h]
  __int128 v106; // [rsp+198h] [rbp-460h]
  unsigned __int64 v107; // [rsp+1A8h] [rbp-450h]
  _BYTE v108[1023]; // [rsp+1B0h] [rbp-448h] BYREF
  char v109; // [rsp+5AFh] [rbp-49h] BYREF
  char v110[8]; // [rsp+5B0h] [rbp-48h] BYREF
  unsigned __int64 v111; // [rsp+5B8h] [rbp-40h]

  v111 = __readfsqword(0x28u);
  v71 = qlsize();
  set_processor_type("metapc", 1);
  qlseek(a1, 0, 0);
  lread(a1, v85, 70);
  v11 = ((unsigned __int64)v86 - 48) >> 2;
  if ( (unsigned int)v11 > 4 )
  {
    v14 = (unsigned int)v11;
    sub_1380((__int64)"QNX: a lot of segments %u\n", v11);
    goto LABEL_100;
  }
  if ( (_DWORD)v11 )
  {
    v12 = v93;
    v13 = v84;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 )
      {
        v15 = (v84[2 * (unsigned int)(v14 - 1) + 1] + 4095) & 0xFFFFF000;
        *v13 = v15;
      }
      else
      {
        v84[0] = v12;
        v15 = *v13;
      }
      v16 = v94[v14] & 0xFFFFFFF;
      v13[1] = v15 + v16;
      if ( __CFADD__((_DWORD)v15, v16) )
        break;
      ++v14;
      v13 += 2;
      if ( (unsigned int)v14 >= (unsigned int)v11 )
        goto LABEL_9;
    }
LABEL_100:
    sub_1450((__int64)"Bad file header format", v14, v15, v10, v12);
  }
LABEL_9:
  v17 = v89;
  setinf(12, 0);
  if ( (v89 & 0x10) != 0 )
  {
    setinf_flag(3, 4, 0);
    setinf_flag(3, 2, 1);
  }
  else
  {
    setinf_flag(3, 2, 0);
  }
  v18 = v92;
  setinf(15, v92);
  v23 = v90;
  v24 = v85;
  if ( v90 >= (unsigned int)v11 )
LABEL_70:
    sub_1450((__int64)"Corrupted file", v18, v19, v20);
  if ( (v89 & 0x10) != 0 )
  {
    v62 = getinf(15, v18, v19, v20, v21, v22, v85);
    setinf(15, (unsigned int)v84[2 * v90] + v62);
    v23 = v90;
    v24 = v67;
  }
  v68 = v24;
  v75 = (v17 >> 2) & 3;
  setinf(14, (unsigned int)(v75 + 4 + 8 * v23));
  v70.m128_i32[0] = v75 + 4;
  v76 = -1;
  v64 = v86 + 6;
  do
  {
    while ( 1 )
    {
      v18 = v64;
      if ( v64 != qlseek(a1, v64, 0) )
        goto LABEL_70;
      lread(a1, &v76, 6);
      v26 = v76;
      if ( v76 == 2 )
        break;
      if ( v76 == 3 )
      {
        v80 = 2;
        v82 = 0;
        si128 = _mm_load_si128((const __m128i *)&xmmword_3110);
        v83 = 0;
        v38 = v77 / 6;
        if ( v77 > 5 )
        {
          do
          {
            v18 = (unsigned __int64)v95;
            lread(a1, v95, 6);
            if ( LOWORD(v95[0]) >= (unsigned int)v11 )
              goto LABEL_70;
            v39 = v84[2 * LOWORD(v95[0])] + *(_DWORD *)((char *)v95 + 2);
            if ( __CFADD__(v84[2 * LOWORD(v95[0])], *(_DWORD *)((char *)v95 + 2)) || v84[2 * LOWORD(v95[0]) + 1] < v39 )
              goto LABEL_70;
            si128.m128i_i64[1] = (unsigned __int16)get_word(v39);
            set_fixup(v39, &v80);
            --v38;
          }
          while ( v38 );
          v25 = v77;
          v26 = v76;
          goto LABEL_17;
        }
        v64 += v77 + 6;
      }
      else
      {
        v25 = v77;
LABEL_17:
        v64 += v25 + 6;
        if ( v26 == 5 )
          goto LABEL_24;
      }
    }
    v18 = (unsigned __int64)&v78;
    lread(a1, &v78, 6);
    if ( v78 >= (unsigned int)v11 )
      goto LABEL_70;
    v19 = (unsigned int)(v84[2 * v78] + v79);
    v20 = (unsigned int)v19 + v77 - 6;
    if ( __CFADD__((_DWORD)v19, v77 - 6) || v84[2 * v78 + 1] < (unsigned int)v20 )
      goto LABEL_70;
    file2base(a1, v64 + 12LL, v19, (unsigned int)v20, 1);
    v64 += v77 + 6;
  }
  while ( v76 != 5 );
LABEL_24:
  v27 = v68;
  v74 = v11;
  v28 = 0;
  v69 = 0;
  v72 = 0;
  v29 = v70.m128_u32[0];
  v30 = v27;
  v73 = v95;
  do
  {
    while ( 1 )
    {
      if ( *(_DWORD *)&v30[4 * v28 + 54] >> 28 == 2 )
      {
        ++v72;
        v31 = "CODE";
        qsnprintf(v108, 8, "cseg_%.02u", v72);
      }
      else
      {
        ++v69;
        v31 = "DATA";
        qsnprintf(v108, 8, "dseg_%.02u", v69);
      }
      v32 = 0;
      if ( (v89 & 0x10) == 0 )
        v32 = v84[2 * v28] >> 4;
      set_selector(v29, v32);
      v95[1] = 0;
      v107 = 0xFFFFFFFF00000000LL;
      v97 = 0;
      v96 = 0;
      v99 = -1;
      v100 = -1;
      v101 = -1;
      v102 = -1;
      v103 = -1;
      v104 = -1;
      v105 = -1;
      v106 = -1;
      v33 = _mm_loadl_epi64((const __m128i *)&v84[2 * v28]);
      LOWORD(v97) = 513;
      v98 = v29;
      v34 = (__m128)_mm_unpacklo_epi32(v33, (__m128i)0LL);
      v95[0] = v34;
      *(_DWORD *)((char *)&v97 + 3) = ((int)v89 >> 1) & 1;
      v70 = v34;
      v35 = 1;
      if ( (unsigned int)(_mm_cvtsi128_si32(_mm_shuffle_epi32(v33, 229)) - _mm_cvtsi128_si32(v33)) > v71 )
        v35 = 33;
      v36 = add_segm_ex(v73, v108, v31, v35);
      v37 = (__m128)_mm_load_si128((const __m128i *)&v70);
      if ( !v36 )
        sub_1450(0, *(double *)v33.m128i_i64, *(double *)v37.m128_u64);
      if ( (v89 & 2) != 0 )
        break;
      ++v28;
      v29 += 8;
      if ( (unsigned int)v28 >= v74 )
        goto LABEL_43;
    }
    ++v28;
    v29 += 8;
    v40 = getseg(v37.m128_u64[0]);
    set_segm_addressing(v40, 1);
  }
  while ( (unsigned int)v28 < v74 );
LABEL_43:
  set_default_dataseg(v75 + 8 * (unsigned int)v91 + 4, *(double *)v33.m128i_i64, *(double *)v37.m128_u64);
  *(double *)v33.m128i_i64 = create_filename_cmt();
  sub_12B0(
    (__int64)"Version     : %d.%d",
    v88,
    v87,
    v41,
    v42,
    v43,
    (__m128)v33,
    v37,
    (__m128)0LL,
    v34,
    v44,
    v45,
    a8,
    a9,
    (char)v108);
  sub_12B0(
    (__int64)"Priv level  : %d",
    (v89 >> 2) & 3,
    v46,
    v47,
    v48,
    v49,
    (__m128)v33,
    v37,
    (__m128)0LL,
    v34,
    v50,
    v51,
    a8,
    a9,
    v65);
  v56 = v89;
  v57 = v89 & 2;
  if ( (v89 & 1) == 0 )
  {
    v58 = (char *)v66;
    if ( (v89 & 2) == 0 )
    {
LABEL_45:
      if ( (v56 & 0x10) == 0 )
        goto LABEL_54;
      if ( v58 == (char *)v66 )
        goto LABEL_51;
      if ( v58 >= v110 )
        goto LABEL_96;
      v52 = v58;
LABEL_49:
      v58 = v52 + 1;
      *v52 = 44;
      if ( v52 + 1 < v110 )
      {
        v52 = &v109;
        if ( v58 != &v109 )
        {
LABEL_51:
          v52 = " FLAT";
          do
          {
            v53 = (unsigned __int8)*v52++;
            *v58 = v53;
            if ( !(_BYTE)v53 )
              goto LABEL_54;
          }
          while ( ++v58 != &v109 );
        }
      }
LABEL_85:
      v109 = 0;
      if ( (v56 & 0x20) != 0 )
        goto LABEL_86;
      goto LABEL_67;
    }
LABEL_89:
    v58 = (char *)v66;
LABEL_79:
    v52 = " 32BIT";
    while ( 1 )
    {
      v53 = (unsigned __int8)*v52++;
      *v58 = v53;
      if ( !(_BYTE)v53 )
        goto LABEL_45;
      ++v58;
      v53 = (__int64)&v109;
      if ( v58 == &v109 )
        goto LABEL_82;
    }
  }
  v63 = " LONG_LIVED";
  v52 = (char *)v66;
  while ( 2 )
  {
    v53 = *(unsigned __int8 *)v63++;
    *v52 = v53;
    if ( !(_BYTE)v53 )
    {
      if ( !(_WORD)v57 )
      {
        v58 = v52;
        goto LABEL_45;
      }
      if ( v52 == (char *)v66 )
        goto LABEL_89;
      if ( v52 < v110 )
      {
        v58 = v52 + 1;
        *v52 = 44;
        v53 = (__int64)&v109;
        if ( v52 + 1 < v110 )
          goto LABEL_78;
        goto LABEL_88;
      }
LABEL_94:
      while ( !under_debugger )
      {
        interr(518, v110, v52);
LABEL_96:
        ;
      }
      BUG();
    }
    ++v52;
    v53 = (__int64)&v109;
    if ( v52 != &v109 )
      continue;
    break;
  }
  v109 = 0;
  if ( (_WORD)v57 )
  {
LABEL_88:
    v109 = 0;
    v58 = &v109;
LABEL_78:
    if ( v58 != &v109 )
      goto LABEL_79;
LABEL_82:
    v109 = 0;
    if ( (v56 & 0x10) != 0 )
      goto LABEL_85;
    v58 = &v109;
    if ( (v56 & 0x20) != 0 )
      goto LABEL_58;
LABEL_63:
    if ( v58 == (char *)v66 )
    {
      v52 = " None";
      v59 = (_BYTE *)v66;
      while ( 1 )
      {
        v53 = (unsigned __int8)*v52++;
        *v59 = v53;
        if ( !(_BYTE)v53 )
          break;
        if ( ++v59 == &v109 )
          goto LABEL_86;
      }
    }
    goto LABEL_67;
  }
  v58 = v52;
  if ( (v56 & 0x10) != 0 )
    goto LABEL_49;
LABEL_54:
  if ( (v56 & 0x20) == 0 )
    goto LABEL_63;
  if ( v58 == (char *)v66 )
    goto LABEL_60;
  if ( v58 >= v110 )
    goto LABEL_94;
  v53 = (__int64)v58;
LABEL_58:
  v58 = (char *)(v53 + 1);
  *(_BYTE *)v53 = 44;
  if ( v53 + 1 < (unsigned __int64)v110 )
  {
    v52 = &v109;
    if ( v58 != &v109 )
    {
LABEL_60:
      v52 = " NOSHARE";
      do
      {
        v53 = (unsigned __int8)*v52++;
        *v58 = v53;
        if ( !(_BYTE)v53 )
          goto LABEL_63;
      }
      while ( ++v58 != &v109 );
    }
  }
LABEL_86:
  v109 = 0;
LABEL_67:
  sub_12B0(
    (__int64)"Code flags  :%s",
    v66,
    (__int64)v52,
    v53,
    v57,
    v66,
    (__m128)v33,
    v37,
    (__m128)0LL,
    v34,
    v54,
    v55,
    a8,
    a9,
    v66);
  v60 = "wa16qnx";
  if ( (v89 & 0x10) != 0 )
    v60 = "wa32qnx";
  plan_to_apply_idasgn(v60);
  return v111 - __readfsqword(0x28u);
}
