__int64 *__fastcall sub_19AC70(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        int a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10)
{
  __int64 v12; // rax
  __m128i si128; // xmm1
  __m128i *v14; // rax
  __int64 v15; // rsi
  __int64 v16; // r15
  char tinfo_property; // al
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // r14
  __int64 *v21; // rax
  __int64 *v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // rdi
  __int64 v25; // rdi
  __m128i v26; // xmm0
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 *v30; // rax
  int v31; // eax
  __int64 *v32; // r14
  __int64 *v33; // rdi
  const char *v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rdi
  __int64 *v38; // rax
  unsigned __int64 v39; // r15
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 *v43; // rsi
  int v44; // eax
  __int64 v45; // r15
  int v46; // eax
  __int64 v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r14
  __int64 v51; // rax
  int v52; // edx
  __int64 *v53; // rcx
  __int64 *v54; // r14
  char v55; // al
  int v56; // edx
  __int64 *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 *v60; // r14
  __int64 v61; // r13
  __int64 v62; // rsi
  __m128i v63; // xmm0
  __int64 v64; // rsi
  int tinfo_size; // eax
  __int64 v66; // rdx
  __int64 *v67; // rax
  unsigned int v68; // esi
  __int64 v69; // rcx
  __int64 v70; // r14
  __int64 *v71; // r14
  _QWORD *v72; // rax
  __int64 v73; // r15
  __int64 v74; // [rsp-10h] [rbp-170h]
  __int64 v75; // [rsp-8h] [rbp-168h]
  __int64 v76; // [rsp-8h] [rbp-168h]
  int v77; // [rsp+0h] [rbp-160h]
  int v78; // [rsp+8h] [rbp-158h]
  __int64 v79; // [rsp+8h] [rbp-158h]
  __m128i v80; // [rsp+10h] [rbp-150h] BYREF
  __int64 v81; // [rsp+20h] [rbp-140h]
  unsigned int v82; // [rsp+28h] [rbp-138h]
  int v83; // [rsp+2Ch] [rbp-134h]
  __int64 v84; // [rsp+30h] [rbp-130h]
  unsigned __int8 *v85; // [rsp+38h] [rbp-128h]
  __m128i *v86; // [rsp+40h] [rbp-120h]
  __int64 *v87; // [rsp+48h] [rbp-118h]
  int v88; // [rsp+5Ch] [rbp-104h] BYREF
  _QWORD v89[4]; // [rsp+60h] [rbp-100h] BYREF
  _BYTE v90[84]; // [rsp+80h] [rbp-E0h] BYREF
  int v91; // [rsp+D4h] [rbp-8Ch]
  __int64 v92; // [rsp+D8h] [rbp-88h]
  char v93; // [rsp+120h] [rbp-40h] BYREF
  unsigned __int64 v94; // [rsp+128h] [rbp-38h]

  v83 = a4;
  v12 = *(_QWORD *)(a1 + 480);
  v81 = a2;
  v82 = a6;
  si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
  v94 = __readfsqword(0x28u);
  v84 = v12;
  v14 = (__m128i *)v90;
  v86 = (__m128i *)&v93;
  do
  {
    v14->m128i_i32[1] = -1;
    v14 += 5;
    v14[-5].m128i_i16[0] = 0;
    v14[-5].m128i_i16[1] = 0;
    v14[-5].m128i_i64[1] = 0;
    v14[-4] = si128;
    v14[-3].m128i_i64[0] = 0;
    *(__m128i *)((char *)&v14[-3] + 8) = 0;
    v14[-2].m128i_i32[2] = 0;
    v14[-1].m128i_i64[0] = 0;
    v14[-1].m128i_i32[2] = 0;
  }
  while ( v86 != v14 );
  v15 = *(_QWORD *)(a1 + 64);
  v87 = a3;
  sub_195BA0((__int64)v90, v15, a3, v83, a10);
  v90[80] = 11;
  v92 = qstrdup();
  copy_tinfo_t();
  v16 = *(_QWORD *)(a1 + 64);
  v91 = *(_DWORD *)(*(_QWORD *)(v84 + 112) + 84LL);
  tinfo_property = get_tinfo_property();
  v18 = sub_335B10(
          v16,
          a5,
          (unsigned int)"va_arg",
          a8,
          2,
          (unsigned int)v90,
          (tinfo_property & 0x3F) != 1,
          v75,
          v77,
          v78,
          v80.m128i_i32[0],
          v80.m128i_i32[2]);
  v19 = *(_QWORD *)(v18 + 72);
  v20 = v18;
  v85 = (unsigned __int8 *)v89;
  v21 = v87;
  *(_DWORD *)(v19 + 280) |= 4u;
  *(_DWORD *)(v19 + 284) = 23;
  if ( *((_BYTE *)v21 + 8) == 5 )
  {
    v64 = *(_QWORD *)(v84 + 248);
    tinfo_size = get_tinfo_size();
    if ( *((_BYTE *)v87 + 8) != 5 )
      sub_195120(0, v64);
    v66 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1440LL) + *v87;
    v89[1] = tinfo_size;
    v89[0] = v66;
    v85 = (unsigned __int8 *)v89;
    sub_316BB0(v19 + 152, v89);
  }
  memset(v89, 0, 24);
  v89[0] = qvector_reserve((__int64)v85, 0, 1, 16);
  *(__m128i *)(v89[0] + 16LL * v89[1]) = _mm_load_si128((const __m128i *)&xmmword_424800);
  v22 = (__int64 *)v89[0];
  memset(v89, 0, 24);
  v23 = (__m128i)_mm_loadh_ps((const double *)&v89[2]);
  v24 = *(_QWORD *)(v19 + 216);
  v87 = v22;
  if ( v24 )
  {
    *(_QWORD *)(v19 + 224) = 0;
    v80 = v23;
    qfree(v24);
    v25 = v89[0];
    v26 = _mm_load_si128(&v80);
    *(_QWORD *)(v19 + 216) = v87;
    *(__m128i *)(v19 + 224) = v26;
    if ( v25 )
    {
      v89[1] = 0;
      qfree(v25);
    }
  }
  else
  {
    *(_QWORD *)(v19 + 216) = v22;
    *(__m128i *)(v19 + 224) = v23;
  }
  if ( (get_tinfo_property() & 0xF) != 9 && !sub_11CA80(*(_DWORD *)(v20 + 68)) )
    *(_BYTE *)(v20 + 65) |= 2u;
  if ( (get_tinfo_property() & 0x3F) == 1 )
  {
    v29 = v20;
    v30 = sub_A3160(a1, (_QWORD *)v20, v81);
LABEL_12:
    v87 = v30;
    goto LABEL_13;
  }
  v38 = (__int64 *)j__qalloc_or_throw(80, 2, v27, v28);
  v87 = v38;
  v39 = (unsigned __int64)(v38 + 4);
  v80.m128i_i64[0] = (__int64)(v38 + 8);
  v40 = *(_QWORD *)(v20 + 24);
  v38[4] = 0xFFFFFFFF00000000LL;
  v38[5] = 0;
  v38[6] = 0xFFFFFFFF00000000LL;
  v38[7] = 0;
  v38[8] = 0xFFFFFFFF00000000LL;
  v38[9] = 0;
  sub_330970(v38, v40);
  v43 = v87;
  *((_BYTE *)v87 + 32) = 4;
  v43[5] = v20;
  v44 = *(_DWORD *)(v20 + 68);
  *((_DWORD *)v43 + 9) = v44;
  *((_DWORD *)v43 + 17) = v44;
  if ( (*(_BYTE *)(v20 + 65) & 2) != 0 )
  {
    *((_BYTE *)v43 + 33) |= 2u;
    *((_BYTE *)v43 + 65) |= 2u;
  }
  if ( a7 >= 0 )
  {
    v45 = *(_QWORD *)(a1 + 64);
    if ( v83 == -1 )
    {
      v71 = v87;
      *((_BYTE *)v87 + 64) = 5;
      v72 = (_QWORD *)j__qalloc_or_throw(16, (__int64)v43, v41, v42);
      *v72 = v45;
      v72[1] = a7;
      v71[9] = (__int64)v72;
      goto LABEL_27;
    }
    v89[0] = 0;
    v89[1] = 0;
    cleanup_argloc();
    LODWORD(v89[0]) = 1;
    v89[1] = a7;
    v83 = sub_1F06C0(v45 + 432, v85, 1, 0xFFFFFFFFLL);
    cleanup_argloc();
    if ( v83 == -1 )
    {
      if ( !under_debugger )
        sub_383060(51595);
    }
    else
    {
      v79 = *(_QWORD *)(v45 + 432) + 104LL * v83;
      v46 = sub_1C36B0(
              v79,
              *(_QWORD *)(v45 + 1496),
              a7,
              *(unsigned int *)(v20 + 68),
              *(unsigned int *)(v79 + 88),
              &v88,
              v85);
      v47 = LODWORD(v89[0]);
      v48 = v74;
      v49 = v76;
      if ( !LODWORD(v89[0]) )
      {
        if ( *(_DWORD *)(v20 + 68) != v46 )
        {
          v47 = *(_QWORD *)(v20 + 24);
          sub_1F45B0(v45, v47, v79);
          *(_DWORD *)(v79 + 24) |= 0x400u;
        }
        v50 = v88;
        *((_BYTE *)v87 + 64) = 9;
        v51 = j__qalloc_or_throw(24, v47, v48, v49);
        v52 = v83;
        v53 = v87;
        *(_QWORD *)v51 = v45;
        *(_QWORD *)(v51 + 8) = v50;
        *(_DWORD *)(v51 + 16) = v52;
        v53[9] = v51;
        goto LABEL_27;
      }
      if ( !under_debugger )
        sub_383060(52450);
    }
LABEL_49:
    BUG();
  }
  if ( v82 == -1 )
  {
    if ( !under_debugger )
      sub_383060(51385);
    goto LABEL_49;
  }
  v67 = v87;
  v68 = v82;
  v69 = v84;
  *((_BYTE *)v87 + 64) = 1;
  *((_DWORD *)v67 + 18) = v68;
  v70 = *(_QWORD *)(v69 + 112);
  if ( (unsigned __int8)sub_11CCD0(v70, v68) )
  {
    sub_1273B0(v39, v70, v87[3], 1);
    *((_DWORD *)v87 + 17) = 1;
  }
  v82 = -1;
LABEL_27:
  v54 = v87;
  *(_DWORD *)v87 = 4;
  v55 = get_tinfo_property();
  v56 = *((_DWORD *)v54 + 1);
  if ( (v55 & 0xF) == 9 )
  {
    *(_DWORD *)v54 = 67;
    v56 |= 0x10u;
  }
  v57 = v87;
  *((_DWORD *)v87 + 1) = v56 | 0x60000;
  v29 = (__int64)v57;
  v87 = sub_A3160(a1, v57, v81);
  v60 = v87;
  if ( v82 != -1 )
  {
    v61 = j__qalloc_or_throw(80, v29, v58, v59);
    v62 = v60[3];
    *(_QWORD *)(v61 + 40) = 0;
    *(_QWORD *)(v61 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v61 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v61 + 56) = 0;
    *(_QWORD *)(v61 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v61 + 72) = 0;
    sub_330970(v61, v62);
    *(_DWORD *)v61 = 4;
    sub_125180(v61 + 32, (unsigned __int8 *)v80.m128i_i64[0]);
    v63 = _mm_cvtsi32_si128(*(_DWORD *)(v61 + 36));
    LODWORD(v89[0]) = 1;
    *(_QWORD *)((char *)v89 + 4) = _mm_unpacklo_epi32(v63, _mm_cvtsi32_si128(v82)).m128i_u64[0];
    sub_125180(v61 + 64, v85);
    sub_11CDA0((__int64)v85);
    if ( *(_BYTE *)(v61 + 64) == 1 )
    {
      v73 = *(_QWORD *)(v84 + 112);
      if ( (unsigned __int8)sub_11CCD0(v73, *(_DWORD *)(v61 + 72)) )
      {
        sub_1273B0(v61 + 32, v73, *(_QWORD *)(v61 + 24), 1);
        *(_DWORD *)(v61 + 68) = 1;
      }
    }
    v29 = v61;
    v30 = sub_A3160(a1, (_QWORD *)v61, (__int64)v87);
    goto LABEL_12;
  }
LABEL_13:
  v31 = *(_DWORD *)(a1 + 24);
  v32 = v87;
  BYTE1(v31) &= ~2u;
  v33 = v87;
  LOBYTE(v31) = v31 | 0x80;
  *(_DWORD *)(a1 + 24) = v31;
  v34 = (const char *)sub_1B5B40(v33, v29);
  sub_A2520(a1, (__int64)"added va_arg: %s", v34);
  v35 = (__int64)v86;
  do
  {
    v35 -= 80;
    cleanup_argloc();
    v36 = *(_QWORD *)(v35 + 32);
    if ( v36 )
    {
      *(_QWORD *)(v35 + 40) = 0;
      qfree(v36);
    }
    clear_tinfo_t();
    sub_11CDA0(v35);
  }
  while ( (_BYTE *)v35 != v90 );
  return v32;
}
