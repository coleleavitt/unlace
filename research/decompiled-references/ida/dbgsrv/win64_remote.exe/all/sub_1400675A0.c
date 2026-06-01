/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400675A0
// Address: 0x00000001400675A0

//----- (00000001400675A0) ----------------------------------------------------
__int64 __fastcall sub_1400675A0(struct __crt_locale_pointers *a1, __int64 a2, __m128i *a3, int a4)
{
  struct __crt_locale_pointers *v5; // r12
  __int16 v6; // di
  __int64 v7; // r15
  __int64 result; // rax
  int v9; // edi
  int i; // ecx
  bool v11; // zf
  unsigned int v12; // r13d
  int v13; // eax
  int v14; // esi
  unsigned __int64 v15; // rax
  int v16; // ecx
  __int16 v17; // ax
  const char *v18; // rdx
  int v19; // eax
  __int64 *v20; // r14
  unsigned int v21; // ebx
  __m128i v22; // xmm6
  signed __int64 v23; // r15
  unsigned int v24; // eax
  int v25; // r9d
  __m128i *p_j; // rcx
  __m128i *v27; // rdi
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  __int64 *v31; // rbx
  unsigned int v32; // edi
  __int16 v33; // r14
  __m128i v34; // xmm0
  int v35; // edi
  int v36; // ebx
  unsigned __int16 v37; // bx
  unsigned __int16 epi16; // r12
  unsigned __int16 v39; // r15
  unsigned __int16 v40; // r14
  int v41; // edi
  int v42; // eax
  __m128i v43; // xmm0
  unsigned __int16 v44; // r11
  unsigned int v45; // edx
  unsigned int v46; // ecx
  unsigned int v47; // edx
  unsigned int v48; // ecx
  unsigned int v49; // edx
  int v50; // edx
  unsigned int v51; // ecx
  int v52; // ecx
  unsigned __int16 v53; // cx
  __int16 v54; // dx
  __int16 v55; // di
  __int16 v56; // cx
  int v57; // r12d
  int v58; // edx
  __int64 v59; // rcx
  __m128i v60; // xmm0
  unsigned int v61; // edx
  unsigned int v62; // ecx
  unsigned int v63; // edx
  unsigned int v64; // ecx
  unsigned int v65; // edx
  unsigned int v66; // ecx
  unsigned int v67; // edx
  int v68; // ecx
  __int16 v69; // ax
  char *v70; // r14
  __int64 v71; // r15
  _BYTE *v72; // rdi
  __m128i v73; // xmm0
  unsigned int v74; // edx
  unsigned int v75; // ecx
  unsigned int v76; // edx
  unsigned int v77; // ecx
  unsigned int v78; // edx
  unsigned int v79; // ecx
  unsigned int v80; // edx
  int v81; // ecx
  unsigned __int16 v82; // ax
  _BYTE *v83; // rcx
  __int64 v84; // rdx
  char v85; // al
  _BYTE *v86; // rdi
  int v87; // eax
  unsigned int v88; // eax
  int v89; // eax
  unsigned int v90; // edi
  __int64 v91; // rbx
  __int64 v92; // r14
  unsigned int v93; // r15d
  size_t v94; // rax
  int v95; // eax
  unsigned int v96; // edi
  unsigned int v97; // eax
  unsigned int v98; // esi
  unsigned int v99; // esi
  unsigned __int64 v100; // rcx
  __int64 v101; // rbx
  int v102; // r15d
  __int64 v103; // rbx
  signed int v104; // r15d
  unsigned int v105; // ecx
  __int64 v106; // rdi
  unsigned int v107; // ecx
  unsigned __int64 v108; // rax
  unsigned __int16 v109; // [rsp+38h] [rbp-D0h]
  __m128i v110; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int16 v111; // [rsp+58h] [rbp-B0h]
  unsigned int v112; // [rsp+5Ch] [rbp-ACh]
  __m128i v113; // [rsp+60h] [rbp-A8h]
  int v114; // [rsp+70h] [rbp-98h]
  __int16 v115; // [rsp+78h] [rbp-90h]
  __m128i v116; // [rsp+88h] [rbp-80h] BYREF
  int v117; // [rsp+98h] [rbp-70h]
  _DWORD Size[3]; // [rsp+9Ch] [rbp-6Ch]
  const char *v119; // [rsp+A8h] [rbp-60h]
  struct __crt_locale_pointers *v120; // [rsp+B0h] [rbp-58h]
  __m128i v121; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v122; // [rsp+C8h] [rbp-40h]
  unsigned __int16 v123; // [rsp+CCh] [rbp-3Ch]
  __m128i v124; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v125; // [rsp+E8h] [rbp-20h]
  unsigned __int16 v126; // [rsp+ECh] [rbp-1Ch]
  __m128i j; // [rsp+F8h] [rbp-10h] BYREF
  int v128; // [rsp+108h] [rbp+0h]
  __int16 v129; // [rsp+10Ch] [rbp+4h]
  char Src[48]; // [rsp+118h] [rbp+10h] BYREF

  *(_QWORD *)&Size[1] = a2;
  v120 = a1;
  v5 = a1;
  if ( a2 < 0 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(1225);
  }
  v6 = a3->m128i_i16[7];
  v7 = 0;
  if ( (v6 & 0x7FFF) != 0 && (v6 & 0x7FFF) == 0x7FFF )
  {
    result = (__int64)&a3->m128i_i64[1] + 4;
    v9 = v6 & 0x8000;
    if ( (a3->m128i_i16[6] & 0x7FFF) != 0 )
      return (__int64)sub_1400621E0(v5, (char *)&dword_1400ACD44, a2);
    for ( i = 1; i < 7; ++i )
    {
      v11 = *(_WORD *)(result - 2) == 0;
      result -= 2;
      if ( !v11 )
        return (__int64)sub_1400621E0(v5, (char *)&dword_1400ACD44, a2);
    }
    if ( (v9 != 0) == -3 )
      return result;
    if ( (v9 != 0) == -1 )
      return (__int64)sub_1400621E0(v5, (char *)&dword_1400ACD44, a2);
    if ( !v9 )
      return (__int64)sub_1400621E0(v5, "+Inf", a2);
    if ( v9 != 0 )
      return (__int64)sub_1400621E0(v5, "-Inf", a2);
  }
  v12 = BYTE2(a4);
  v112 = BYTE2(a4);
  Size[0] = BYTE1(a4);
  if ( BYTE2(a4) && (BYTE1(a4) < (unsigned int)BYTE2(a4) + 3 || (unsigned int)BYTE1(a4) + 3 >= (unsigned __int64)a2) )
  {
    Size[0] = 0;
    v12 = 0;
    v112 = 0;
  }
  v13 = (unsigned __int8)a4;
  v14 = 0;
  v110 = *a3;
  if ( (unsigned __int8)a4 > 0x21u )
    v13 = 33;
  v116 = (__m128i)xmmword_1400ACB48;
  v117 = v13;
  v15 = HIWORD(a3->m128i_i64[1]);
  v16 = v15 & 0x8000;
  if ( (v15 & 0x8000) != 0 )
  {
    v17 = v15 & 0x7FFF;
    v110.m128i_i16[7] = v17;
  }
  else
  {
    v17 = v110.m128i_i16[7];
  }
  v18 = "-";
  if ( !v16 )
    v18 = pNodeName;
  v119 = v18;
  if ( !v17 )
  {
    if ( v12 )
    {
      *(_DWORD *)Src = 3157552;
      goto LABEL_108;
    }
    return sub_14005B0A0(v5, a2, "%s0.0", v18);
  }
  v19 = sub_140066BD0(&xmmword_1400ACB48, &v110);
  if ( !v19 )
    goto LABEL_58;
  if ( v19 >= 0 )
  {
    v33 = v110.m128i_i16[7];
    if ( v110.m128i_i16[7] )
    {
      v37 = v110.m128i_u16[5];
      epi16 = v110.m128i_u16[3];
      v113.m128i_i16[0] = v110.m128i_i16[7] >> 15;
      v113.m128i_i16[3] = v110.m128i_i16[6];
      *(__int32 *)((char *)v113.m128i_i32 + 2) = v110.m128i_i16[7] & 0x7FFF;
      v39 = v110.m128i_u16[4];
      v40 = v110.m128i_u16[2];
      v41 = 0;
      v115 = 0;
      v112 = v110.m128i_u16[1];
      LOWORD(v114) = v110.m128i_i16[1];
      v109 = v110.m128i_i16[0];
      HIWORD(v114) = v110.m128i_i16[0];
      v42 = v114;
      v113.m128i_i16[4] = v110.m128i_i16[5];
      v113.m128i_i16[5] = v110.m128i_i16[4];
      v113.m128i_i16[6] = v110.m128i_i16[3];
      v113.m128i_i16[7] = v110.m128i_i16[2];
      v43 = v113;
      while ( 1 )
      {
        v123 = 0;
        v111 = v40;
        v121 = v43;
        v122 = v42;
        sub_140065870(&v121);
        sub_140065870(&v121);
        v45 = v109 + HIWORD(v122);
        HIWORD(v122) += v109;
        v46 = (unsigned __int16)v112 + HIWORD(v45) + (unsigned __int16)v122;
        LOWORD(v122) = v112 + HIWORD(v45) + v122;
        v47 = v40 + (HIWORD(v46) & 1) + v121.m128i_u16[7];
        v121.m128i_i16[7] += v40 + (BYTE2(v46) & 1);
        v48 = epi16 + (HIWORD(v47) & 1) + v121.m128i_u16[6];
        v121.m128i_i16[6] += epi16 + (BYTE2(v47) & 1);
        v49 = v39 + (HIWORD(v48) & 1) + v121.m128i_u16[5];
        v121.m128i_i16[5] += v39 + (BYTE2(v48) & 1);
        v50 = HIWORD(v49) & 1;
        v51 = v37 + v50 + v121.m128i_u16[4];
        v121.m128i_i16[4] += v37 + v50;
        v52 = v44 + v121.m128i_u16[3] + (HIWORD(v51) & 1);
        v121.m128i_i16[3] = v52;
        v53 = v121.m128i_i16[1] + 3;
        v121.m128i_i16[2] += v115 + (BYTE2(v52) & 1);
        for ( v121.m128i_i16[1] += 3; v121.m128i_i16[2]; ++v121.m128i_i16[1] )
        {
          sub_140065870(&v121);
          v53 = v121.m128i_i16[1] + 1;
        }
        if ( v123 || v53 >= 0x3FFFu )
          break;
        v43 = v121;
        v42 = v122;
        ++v41;
        --v14;
        v114 = v122;
        v113 = v121;
        epi16 = _mm_extract_epi16(v121, 6);
        v39 = _mm_extract_epi16(v121, 5);
        v37 = _mm_extract_epi16(v121, 4);
        v44 = _mm_extract_epi16(v121, 3);
        if ( v41 >= 34 )
        {
          v54 = HIWORD(v114);
          v55 = v114;
          v56 = _mm_extract_epi16(v121, 7);
          goto LABEL_74;
        }
        v109 = HIWORD(v114);
        v112 = v122;
        v40 = _mm_extract_epi16(v121, 7);
        v115 = _mm_extract_epi16(v121, 2);
      }
      v55 = v112;
      v54 = v109;
      v56 = v111;
LABEL_74:
      if ( (unsigned __int16)_mm_cvtsi128_si32(v43) )
      {
        v33 = v43.m128i_i16[1] | 0x8000;
        v110.m128i_i16[7] = v43.m128i_i16[1] | 0x8000;
      }
      else
      {
        v33 = v43.m128i_i16[1];
        v110.m128i_i16[7] = v43.m128i_i16[1];
      }
      v110.m128i_i16[4] = v39;
      v7 = 0;
      v110.m128i_i16[1] = v55;
      v110.m128i_i16[6] = v44;
      v110.m128i_i16[5] = v37;
      v110.m128i_i16[3] = epi16;
      v110.m128i_i16[2] = v56;
      v110.m128i_i16[0] = v54;
    }
    else if ( (v110.m128i_i16[6] & 0x8000) == 0 )
    {
      do
      {
        sub_140067280(v110.m128i_i16, (__int16 *)&qword_1400ACC40, (__int64)&v110);
        --v14;
      }
      while ( (v110.m128i_i16[6] & 0x8000) == 0 );
      v33 = v110.m128i_i16[7];
    }
    v57 = -4096;
    v116 = (__m128i)xmmword_1400ACB48;
    for ( j = v110; (int)sub_140066BD0(&xmmword_1400ACB48, &j) > 0; v7 += 2 )
    {
      if ( (int)sub_140066BD0(&qword_1400ACC50[v7], &j) >= 0 )
      {
        sub_140067280(j.m128i_i16, (__int16 *)&qword_1400ACB80[v7], (__int64)&j);
        sub_140067280(v116.m128i_i16, (__int16 *)&qword_1400ACB80[v7], (__int64)&v116);
        v14 += v57;
      }
      v57 /= 2;
      if ( !v57 )
        break;
    }
    sub_140066D00((__int16 *)&xmmword_1400ACB48, &v116, (__int64)&v116);
    goto LABEL_59;
  }
  v20 = &qword_1400ACC00;
  v124 = v110;
  v124.m128i_i16[7] = 16494;
  v21 = 16;
  do
  {
    sub_140066D00(v124.m128i_i16, v20, (__int64)&v116);
    v22 = v116;
    v121 = v116;
    v23 = _mm_srli_si128(v116, 8).m128i_u64[0];
    v24 = HIWORD(v23) & 0x7FFF;
    if ( v24 > 0x3FFE )
    {
      j = v116;
      v25 = 16494 - v24;
      if ( (int)(16494 - v24) <= 0 )
        goto LABEL_48;
      p_j = &j;
      if ( v25 >= 16 )
      {
        v27 = &j;
        v28 = (unsigned __int64)(unsigned int)v25 >> 4;
        v29 = (2 * v28) >> 1;
        v25 += -16 * v28;
        while ( v29 )
        {
          v27->m128i_i16[0] = 0;
          v27 = (__m128i *)((char *)v27 + 2);
          --v29;
        }
        p_j = (__m128i *)((char *)&j + 2 * v28);
      }
      p_j->m128i_i16[0] &= word_1400ACD20[v25];
    }
    else
    {
      j = 0;
    }
    if ( v23 < 0 )
    {
      v30 = 0;
      while ( v121.m128i_i16[v30] == j.m128i_i16[v30] )
      {
        if ( ++v30 >= 7 )
          goto LABEL_48;
      }
      sub_140066690(j.m128i_i16, &xmmword_1400ACB48, (__int64)&j, 1);
    }
LABEL_48:
    if ( v22.m128i_i64[0] == j.m128i_i64[0]
      && (_DWORD)v23 == j.m128i_i32[2]
      && (unsigned __int16)_mm_extract_epi16(v22, 6) == j.m128i_i16[6] )
    {
      v124 = v22;
      v14 += v21;
    }
    v20 += 2;
    v21 >>= 1;
  }
  while ( v21 );
  v31 = qword_1400ACB80;
  v32 = 4096;
  v12 = v112;
  v124.m128i_i16[7] = v110.m128i_i16[7] + v124.m128i_i16[7] - 16494;
  v110 = v124;
  v116 = (__m128i)xmmword_1400ACB48;
  do
  {
    if ( (int)sub_140066BD0(&qword_1400ACC40, &v124) > 0 )
      break;
    if ( (int)sub_140066BD0(v31, &v124) <= 0 )
    {
      sub_140066D00(v124.m128i_i16, v31, (__int64)&v124);
      sub_140067280(v116.m128i_i16, (__int16 *)v31, (__int64)&v116);
      v14 += v32;
    }
    v31 += 2;
    v32 >>= 1;
  }
  while ( v32 );
LABEL_58:
  v33 = v110.m128i_i16[7];
LABEL_59:
  v113.m128i_i16[0] = v116.m128i_i16[7] >> 15;
  v113.m128i_i16[3] = v116.m128i_i16[6];
  v113.m128i_i16[4] = v116.m128i_i16[5];
  v113.m128i_i16[5] = v116.m128i_i16[4];
  v113.m128i_i16[6] = v116.m128i_i16[3];
  v113.m128i_i16[7] = v116.m128i_i16[2];
  LOWORD(v114) = v116.m128i_i16[1];
  HIWORD(v114) = v116.m128i_i16[0];
  v128 = v114;
  *(__int32 *)((char *)v113.m128i_i32 + 2) = v116.m128i_i16[7] & 0x7FFF;
  v34 = v113;
  v113.m128i_i16[0] = v33 >> 15;
  v113.m128i_i16[3] = v110.m128i_i16[6];
  v113.m128i_i16[4] = v110.m128i_i16[5];
  v113.m128i_i16[5] = v110.m128i_i16[4];
  v113.m128i_i16[6] = v110.m128i_i16[3];
  v113.m128i_i16[7] = v110.m128i_i16[2];
  LOWORD(v114) = v110.m128i_i16[1];
  j = v34;
  HIWORD(v114) = v110.m128i_i16[0];
  v113.m128i_i16[1] = v33 & 0x7FFF;
  v125 = v114;
  v129 = 0;
  v124 = v113;
  v126 = 0;
  v35 = (unsigned __int16)sub_140065330(&j, (__int64)&v124);
  v36 = 2;
  if ( v35 == 10 )
  {
    LOBYTE(v35) = 1;
    ++v14;
  }
  else if ( !v35 )
  {
    do
    {
      v58 = 2;
      v59 = 0;
      while ( v124.m128i_i16[v59 + 2] == *(_WORD *)((char *)&qword_1400ACB60[1] + v59 * 2 + 4) )
      {
        ++v58;
        ++v59;
        if ( v58 >= 11 )
          goto LABEL_90;
      }
      sub_140065AC0(&v124);
      v60 = v124;
      v122 = v125;
      v123 = 0;
      v121 = v124;
      sub_140065AC0(&v121);
      sub_140065AC0(&v121);
      v61 = v123 + v126;
      v126 += v123;
      v62 = HIWORD(v122) + HIWORD(v61) + HIWORD(v125);
      HIWORD(v125) += HIWORD(v122) + HIWORD(v61);
      v63 = (unsigned __int16)v122 + (HIWORD(v62) & 1) + (unsigned __int16)v125;
      LOWORD(v125) = v122 + (BYTE2(v62) & 1) + v125;
      v64 = v121.m128i_u16[7] + (HIWORD(v63) & 1) + _mm_extract_epi16(v60, 7);
      v124.m128i_i16[7] = v64;
      v65 = v121.m128i_u16[6] + (HIWORD(v64) & 1) + v124.m128i_u16[6];
      v124.m128i_i16[6] += v121.m128i_i16[6] + (BYTE2(v64) & 1);
      v66 = v121.m128i_u16[5] + (HIWORD(v65) & 1) + v124.m128i_u16[5];
      v124.m128i_i16[5] += v121.m128i_i16[5] + (BYTE2(v65) & 1);
      v67 = v121.m128i_u16[4] + (HIWORD(v66) & 1) + v124.m128i_u16[4];
      v124.m128i_i16[4] += v121.m128i_i16[4] + (BYTE2(v66) & 1);
      v68 = v121.m128i_u16[3] + (HIWORD(v67) & 1) + v124.m128i_u16[3];
      v124.m128i_i16[3] += v121.m128i_i16[3] + (BYTE2(v67) & 1);
      v124.m128i_i16[2] += v121.m128i_i16[2] + (BYTE2(v68) & 1);
      v69 = sub_140065330(&j, (__int64)&v124);
      LOBYTE(v35) = v69;
      --v14;
    }
    while ( !v69 );
  }
LABEL_90:
  v70 = &Src[2];
  Src[1] = 46;
  v71 = (unsigned int)(v117 + 1);
  Src[0] = v35 + 48;
  do
  {
    v72 = v70;
    sub_140065AC0(&v124);
    v73 = v124;
    v122 = v125;
    v123 = 0;
    v121 = v124;
    sub_140065AC0(&v121);
    sub_140065AC0(&v121);
    v74 = v123 + v126;
    v126 += v123;
    v75 = HIWORD(v122) + HIWORD(v74) + HIWORD(v125);
    HIWORD(v125) += HIWORD(v122) + HIWORD(v74);
    v76 = (unsigned __int16)v122 + (HIWORD(v75) & 1) + (unsigned __int16)v125;
    LOWORD(v125) = v122 + (BYTE2(v75) & 1) + v125;
    v77 = v121.m128i_u16[7] + (HIWORD(v76) & 1) + _mm_extract_epi16(v73, 7);
    v124.m128i_i16[7] = v77;
    v78 = v121.m128i_u16[6] + (HIWORD(v77) & 1) + v124.m128i_u16[6];
    v124.m128i_i16[6] += v121.m128i_i16[6] + (BYTE2(v77) & 1);
    v79 = v121.m128i_u16[5] + (HIWORD(v78) & 1) + v124.m128i_u16[5];
    v124.m128i_i16[5] += v121.m128i_i16[5] + (BYTE2(v78) & 1);
    v80 = v121.m128i_u16[4] + (HIWORD(v79) & 1) + v124.m128i_u16[4];
    v124.m128i_i16[4] += v121.m128i_i16[4] + (BYTE2(v79) & 1);
    v81 = v121.m128i_u16[3] + (HIWORD(v80) & 1) + v124.m128i_u16[3];
    v124.m128i_i16[3] += v121.m128i_i16[3] + (BYTE2(v80) & 1);
    v124.m128i_i16[2] += v121.m128i_i16[2] + (BYTE2(v81) & 1);
    v82 = sub_140065330(&j, (__int64)&v124);
    *v70++ = v82 + 48;
    --v71;
  }
  while ( v71 );
  v5 = v120;
  v83 = v72;
  if ( v82 > 4u )
  {
    if ( v82 == 5 )
    {
      v84 = 0;
      while ( v124.m128i_i16[v84 + 2] == *(_WORD *)((char *)&qword_1400ACB60[1] + v84 * 2 + 4) )
      {
        ++v36;
        ++v84;
        if ( v36 >= 11 )
        {
          if ( (*(v72 - 1) & 1) == 0 )
            goto LABEL_103;
          break;
        }
      }
    }
    v85 = *(v72 - 1);
    v86 = v72 - 1;
    v87 = v85 & 0x7F;
    if ( v87 == 46 )
    {
LABEL_101:
      v89 = (char)(*(v86 - 1))++ + 1;
      if ( v89 > 57 )
      {
        ++v14;
        *(v86 - 1) = 49;
      }
    }
    else
    {
      while ( 1 )
      {
        v88 = v87 + 1;
        *v86 = v88;
        if ( v88 <= 0x39 )
          break;
        *v86-- = 48;
        v87 = *v86 & 0x7F;
        if ( v87 == 46 )
          goto LABEL_101;
      }
    }
  }
LABEL_103:
  while ( *(v83 - 1) == 48 )
    --v83;
  if ( *(v83 - 1) == 46 )
    *v83++ = 48;
  *v83 = 0;
LABEL_108:
  v90 = Size[0];
  v91 = 0;
  LODWORD(v92) = 0;
  if ( !Size[0] )
    goto LABEL_163;
  v92 = v12;
  if ( v12 )
    v90 = Size[0] - (v14 >= 0) - v12 - 2;
  v93 = -v14;
  if ( v14 > 0 )
    v93 = v14;
  if ( !v93 || v93 > v90 )
  {
    if ( v12 )
    {
      v107 = strlen(&Src[2]);
      if ( v12 < v107 )
      {
        v107 = v12;
        do
        {
          if ( Src[v107 + 1] != 48 )
            break;
          --v107;
        }
        while ( v107 );
        v108 = (int)v107 + 2LL;
        if ( v108 >= 0x30 )
          goto LABEL_171;
        Src[v108] = 0;
      }
      LODWORD(v92) = v12 - v107;
      if ( v90 )
      {
        if ( v14 >= 0 || (--v90, v90) )
        {
          v91 = v90;
          memset(v5, 32, v90);
          *((_BYTE *)&v5->locinfo + v90) = 0;
        }
      }
    }
LABEL_163:
    v106 = *(_QWORD *)&Size[1];
    result = sub_14005B0A0(
               (struct __crt_locale_pointers *)((char *)v5 + v91),
               *(_QWORD *)&Size[1] - v91,
               "%s%s",
               v119,
               Src);
    v103 = (int)result + v91;
    goto LABEL_164;
  }
  if ( *(_WORD *)&Src[2] == 48 )
  {
    Src[1] = 0;
  }
  else
  {
    v94 = strlen(&Src[2]);
    memcpy(&Src[1], &Src[2], v94 + 1);
  }
  if ( v12 )
  {
    v95 = v93;
    if ( v14 <= 0 )
      v95 = 1;
    v96 = v90 - v95;
    if ( v96 )
    {
      v91 = v96;
      memset(v5, 32, v96);
      *((_BYTE *)&v5->locinfo + v96) = 0;
    }
  }
  if ( v14 <= 0 )
  {
    if ( *v119 )
      *((_BYTE *)&v5->locinfo + v91++) = *v119;
    *((_BYTE *)&v5->locinfo + v91) = 48;
    *((_BYTE *)&v5->locinfo + v91 + 1) = 46;
    v103 = v91 + 2;
    if ( v12 && (int)v93 > (int)v12 )
    {
      v106 = *(_QWORD *)&Size[1];
      result = 0;
      v14 = 0;
      goto LABEL_164;
    }
    v104 = v93 - 1;
    if ( v104 )
    {
      memset((char *)v5 + v103, 48, v104);
      v103 += v104;
      if ( !v12 )
        goto LABEL_149;
      v92 = v12 - v104;
    }
    else if ( !v12 )
    {
      goto LABEL_149;
    }
    v105 = strlen(Src);
    if ( v105 > (unsigned int)v92 )
    {
      v105 = v92;
      if ( (unsigned int)v92 >= 0x30 )
        goto LABEL_171;
      Src[v92] = 0;
    }
    LODWORD(v92) = v92 - v105;
LABEL_149:
    v98 = 0;
    goto LABEL_150;
  }
  v97 = strlen(Src);
  v98 = v97;
  if ( v97 <= v93 )
    goto LABEL_131;
  if ( !v12 )
    goto LABEL_130;
  v99 = -1 - v93 + v97;
  if ( v99 <= v12 )
    goto LABEL_129;
  v99 = v12;
  v100 = (int)(v93 + v12) + 1LL;
  if ( v100 >= 0x30 )
LABEL_171:
    sub_14006AED4();
  Src[v100] = 0;
LABEL_129:
  LODWORD(v92) = v12 - v99;
LABEL_130:
  v98 = v93 + 1;
LABEL_131:
  v101 = (int)sub_14005B0A0(
                (struct __crt_locale_pointers *)((char *)v5 + v91),
                *(_QWORD *)&Size[1] - v91,
                "%s%.*s",
                v119,
                v98,
                Src)
       + v91;
  if ( !v12 && !Src[v98] )
    LODWORD(v92) = v92 + 1;
  if ( v98 <= v93 )
  {
    v102 = v93 - v98 + 1;
    memset((char *)v5 + v101, 48, v102);
    v101 += v102;
  }
  *((_BYTE *)&v5->locinfo + v101) = 46;
  v103 = v101 + 1;
LABEL_150:
  v106 = *(_QWORD *)&Size[1];
  v103 += (int)sub_14005B0A0(
                 (struct __crt_locale_pointers *)((char *)v5 + v103),
                 *(_QWORD *)&Size[1] - v103,
                 (char *)&dword_140091764,
                 &Src[v98]);
  result = 0;
  v14 = 0;
LABEL_164:
  if ( (_DWORD)v92 )
  {
    result = (unsigned int)(v106 - v103);
    if ( (unsigned int)v92 <= (unsigned int)result || (LODWORD(v92) = v106 - v103, (_DWORD)result) )
    {
      result = (__int64)memset((char *)v5 + v103, 48, (int)v92);
      v103 += (int)v92;
      v106 = *(_QWORD *)&Size[1];
      *((_BYTE *)&v5->locinfo + v103) = 0;
    }
  }
  if ( v14 )
    return sub_14005B0A0((struct __crt_locale_pointers *)((char *)v5 + v103), v106 - v103, "e%d", v14);
  return result;
}
// 140067C12: variable 'v44' is possibly undefined
// 140091764: using guessed type int dword_140091764;
// 1400ACB48: using guessed type __int128 xmmword_1400ACB48;
// 1400ACB60: using guessed type __int64[4];
// 1400ACB80: using guessed type __int64 qword_1400ACB80[16];
// 1400ACC00: using guessed type __int64 qword_1400ACC00;
// 1400ACC40: using guessed type __int64 qword_1400ACC40;
// 1400ACC50: using guessed type __int64 qword_1400ACC50[26];
// 1400ACD20: using guessed type __int16 word_1400ACD20[];
// 1400ACD44: using guessed type int dword_1400ACD44;
// 1400CB61C: using guessed type char byte_1400CB61C;
