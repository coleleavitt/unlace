__int64 __fastcall sub_415820(__int64 *a1, __int64 a2, double a3)
{
  unsigned int v4; // r9d
  __int64 v5; // r14
  __int64 v6; // r13
  int dtype_size; // eax
  __m128i *v8; // rax
  __int64 v9; // rcx
  __m128i si128; // xmm2
  __int64 v11; // r13
  int v12; // r14d
  unsigned int v13; // eax
  __int64 *v14; // rax
  __m128i v15; // xmm0
  unsigned __int64 v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // r14
  unsigned int v19; // eax
  __int64 v20; // rdi
  const char *v21; // rdx
  __int64 v22; // r13
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 (__fastcall *v26)(__int64 *, __int64, unsigned __int64 *, __int128 *, unsigned __int64 *, _QWORD); // rax
  __int64 v27; // rbx
  __int64 v28; // r14
  unsigned int v29; // ebx
  __int64 v31; // rsi
  void (__fastcall *v32)(__int64 *, __int64, _QWORD *, _QWORD *, __int64 *, _QWORD); // rax
  void (__fastcall *v33)(__int64 *, __int64, _QWORD *, _QWORD *, __int64 *, bool); // rax
  unsigned int v34; // eax
  __m128i v35; // xmm5
  __int64 v36; // rax
  __int8 v37; // cl
  __int64 v38; // rsi
  __int64 v39; // rax
  char v40; // r9
  void (__fastcall *v41)(__int64 *, __int64, __int128 *, __int64 *, unsigned __int64 *, _QWORD); // rax
  __int64 v42; // rdi
  int v43; // eax
  int v44; // r14d
  __int64 *v45; // r8
  int v46; // ecx
  unsigned int v47; // edx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  int v51; // r9d
  int v52; // eax
  __int64 v53; // rsi
  int v54; // eax
  __int64 v55; // rsi
  int v56; // eax
  int v57; // ecx
  void (__fastcall *v58)(__int64 *, __int64, unsigned __int64 *, __int128 *, unsigned __int64 *, _QWORD); // rax
  unsigned __int64 v59; // [rsp+8h] [rbp-208h]
  __m128i v60; // [rsp+10h] [rbp-200h] BYREF
  char *v61; // [rsp+20h] [rbp-1F0h]
  unsigned __int64 *v62; // [rsp+28h] [rbp-1E8h]
  __int64 *v63; // [rsp+30h] [rbp-1E0h]
  _BYTE *v64; // [rsp+38h] [rbp-1D8h]
  __m128i v65; // [rsp+40h] [rbp-1D0h] BYREF
  __int64 *v66; // [rsp+50h] [rbp-1C0h]
  _QWORD *v67; // [rsp+58h] [rbp-1B8h]
  unsigned __int64 *v68; // [rsp+60h] [rbp-1B0h]
  __int64 v69; // [rsp+68h] [rbp-1A8h]
  __int64 v70; // [rsp+70h] [rbp-1A0h] BYREF
  __int64 v71; // [rsp+78h] [rbp-198h] BYREF
  _QWORD v72[2]; // [rsp+80h] [rbp-190h] BYREF
  _QWORD v73[2]; // [rsp+90h] [rbp-180h] BYREF
  unsigned __int64 v74; // [rsp+A0h] [rbp-170h] BYREF
  __int64 v75; // [rsp+A8h] [rbp-168h]
  _QWORD v76[2]; // [rsp+B0h] [rbp-160h] BYREF
  unsigned __int64 v77; // [rsp+C0h] [rbp-150h] BYREF
  __int64 v78; // [rsp+C8h] [rbp-148h]
  __int128 v79; // [rsp+D0h] [rbp-140h] BYREF
  __int64 v80; // [rsp+E0h] [rbp-130h] BYREF
  _BYTE v81[24]; // [rsp+E8h] [rbp-128h] BYREF
  unsigned __int64 v82; // [rsp+100h] [rbp-110h] BYREF
  __m128i v83; // [rsp+108h] [rbp-108h] BYREF
  __int64 v84; // [rsp+118h] [rbp-F8h] BYREF
  unsigned __int64 v85; // [rsp+120h] [rbp-F0h] BYREF
  __int64 v86; // [rsp+128h] [rbp-E8h]
  _BYTE v87[16]; // [rsp+130h] [rbp-E0h] BYREF
  __int64 v88; // [rsp+140h] [rbp-D0h]
  __int64 *v89; // [rsp+150h] [rbp-C0h]
  __m128i v90; // [rsp+158h] [rbp-B8h]
  int v91; // [rsp+178h] [rbp-98h]
  _BYTE v92[16]; // [rsp+180h] [rbp-90h] BYREF
  __int64 v93; // [rsp+190h] [rbp-80h]
  unsigned __int64 v94; // [rsp+1A0h] [rbp-70h]
  __m128i v95; // [rsp+1A8h] [rbp-68h]
  int v96; // [rsp+1C8h] [rbp-48h]
  char v97; // [rsp+1D0h] [rbp-40h] BYREF
  unsigned __int64 v98; // [rsp+1D8h] [rbp-38h]

  v69 = a2;
  v98 = __readfsqword(0x28u);
  v67 = v76;
  v72[1] = 0;
  v73[1] = 0;
  v75 = 0;
  v76[1] = 0;
  v72[0] = 0xFFFFFFFF00000000LL;
  v73[0] = 0xFFFFFFFF00000000LL;
  v74 = 0xFFFFFFFF00000000LL;
  v76[0] = 0xFFFFFFFF00000000LL;
  v68 = &v74;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, unsigned __int64 *, _QWORD *, __int64))(*a1 + 48))(
          a1,
          &v74,
          v76,
          a2)
    || !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD *, _QWORD *, __int64))(*a1 + 40))(a1, v72, v73, v69) )
  {
    goto LABEL_60;
  }
  v4 = *(_DWORD *)(v69 + 16);
  if ( (v4 & 8) == 0 )
    goto LABEL_7;
  if ( v4 != 8 )
  {
    if ( !under_debugger )
      sub_383060(0xC9D6u, a3);
    BUG();
  }
  v5 = sub_32A850(nullptr);
  if ( v5 == -1 )
  {
LABEL_60:
    v29 = -2;
    goto LABEL_35;
  }
  v6 = a1[8];
  dtype_size = get_dtype_size();
  sub_120A10((__int64)v72, *(_QWORD *)(a1[1] + 112), v5, dtype_size, v6, 0);
  v4 = *(_DWORD *)(v69 + 16);
LABEL_7:
  if ( (v4 & 2) != 0 )
  {
    v45 = (__int64 *)a1[8];
    v46 = 1;
    v47 = *(_DWORD *)(v69 + 8) - 22;
    LODWORD(v66) = *(_DWORD *)(v69 + 8);
    if ( v47 > 2 )
    {
      v66 = v45;
      v54 = get_dtype_size();
      v45 = v66;
      v46 = v54;
    }
    sub_120A10((__int64)v73, *(_QWORD *)(a1[1] + 112), 10, v46, (__int64)v45, 0);
    v4 = *(_DWORD *)(v69 + 16);
  }
  if ( (v4 & 4) != 0 )
  {
    sub_11CA10((char *)v72, (char *)v73);
    v4 = *(_DWORD *)(v69 + 16);
  }
  if ( (v4 & 1) != 0 )
  {
    v66 = *(__int64 **)(a1[1] + 784);
    v34 = sub_4138B0((__int64)v66, a3);
    v35 = _mm_cvtsi32_si128(v34);
    LODWORD(v64) = v34;
    v36 = *a1;
    *(_QWORD *)&v79 = 1;
    v37 = *(_BYTE *)(v69 + 16);
    v38 = *(unsigned int *)(v69 + 8);
    *(_QWORD *)((char *)&v79 + 4) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(HIDWORD(v74)), v35).m128i_u64[0];
    v65.m128i_i8[0] = v37;
    (*(void (__fastcall **)(__int64 *, __int64, _QWORD *, _QWORD *, __int128 *, bool))(v36 + 56))(
      a1,
      v38,
      v72,
      v73,
      &v79,
      (v37 & 0x10) != 0);
    v39 = *a1;
    v40 = *(_BYTE *)(v69 + 16) >> 4;
    v65.m128i_i32[0] = *(_DWORD *)(v69 + 8);
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD *, _QWORD *, _QWORD *, _QWORD))(v39 + 64))(
      a1,
      (unsigned int)(v65.m128i_i32[0] + 2),
      v72,
      v73,
      v67,
      v40 & 1);
    v41 = *(void (__fastcall **)(__int64 *, __int64, __int128 *, __int64 *, unsigned __int64 *, _QWORD))(*a1 + 64);
    v80 = 0xFFFFFFFF00000000LL;
    *(_QWORD *)v81 = 0;
    v41(a1, 4, &v79, &v80, v68, 0);
    sub_11CDA0((__int64)&v80);
    v42 = v66[5];
    if ( v42 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v42 + 8LL))(v42, (unsigned int)v64);
    }
    else if ( *((_DWORD *)v66 + 8) == -1 )
    {
      *((_DWORD *)v66 + 8) = (_DWORD)v64;
    }
    sub_11CDA0((__int64)&v79);
    goto LABEL_42;
  }
  if ( (v4 & 0x100) == 0 )
  {
    v31 = *(unsigned int *)(v69 + 8);
    if ( (unsigned int)(v31 - 29) > 0xC )
    {
      (*(void (__fastcall **)(__int64 *, __int64, _QWORD *, _QWORD *, unsigned __int64 *, _QWORD))(*a1 + 56))(
        a1,
        v31,
        v72,
        v73,
        v68,
        (v4 >> 4) & 1);
    }
    else if ( (v4 & 0x40) != 0 )
    {
      v32 = *(void (__fastcall **)(__int64 *, __int64, _QWORD *, _QWORD *, __int64 *, _QWORD))(*a1 + 56);
      v80 = 0x100000001LL;
      *(_QWORD *)v81 = 1;
      v32(a1, 33, v72, v73, &v80, (v4 >> 4) & 1);
      sub_11CDA0((__int64)&v80);
      v33 = *(void (__fastcall **)(__int64 *, __int64, _QWORD *, _QWORD *, __int64 *, bool))(*a1 + 64);
      LOBYTE(v66) = *(_BYTE *)(v69 + 16);
      v80 = 0x100000001LL;
      *(_QWORD *)v81 = 0;
      v33(a1, 34, v72, v73, &v80, ((unsigned __int8)v66 & 0x10) != 0);
      sub_11CDA0((__int64)&v80);
    }
    else
    {
      v55 = a1[8];
      v83.m128i_i64[0] = 0;
      v82 = 0xFFFFFFFF00000000LL;
      v83.m128i_i64[1] = 0xFFFFFFFF00000000LL;
      v84 = 0;
      v85 = 0xFFFFFFFF00000000LL;
      v86 = 0;
      sub_330970((__int64)&v80, v55);
      *(_QWORD *)&v79 = 0x100000001LL;
      v56 = *(_DWORD *)(v69 + 16);
      v57 = *(_DWORD *)(v69 + 8);
      v63 = (__int64 *)&v82;
      LODWORD(v64) = v57;
      LODWORD(v62) = v56 & 0x10;
      LODWORD(v80) = v57;
      DWORD2(v79) = v75;
      sub_125180((__int64)&v82, (unsigned __int8 *)v72);
      v65.m128i_i64[0] = (__int64)&v83.m128i_i64[1];
      sub_125180((__int64)&v83.m128i_i64[1], (unsigned __int8 *)v73);
      v66 = (__int64 *)&v85;
      sub_125180((__int64)&v85, (unsigned __int8 *)&v79);
      if ( (_DWORD)v62 || (int)v64 > 62 )
        HIDWORD(v80) |= 0x10u;
      sub_11CDA0((__int64)&v79);
      v78 = 0;
      v77 = 0xFFFFFFFF00000000LL;
      v62 = &v77;
      sub_1262E0((__int64)&v77, (unsigned __int8 *)&v80);
      v58 = *(void (__fastcall **)(__int64 *, __int64, unsigned __int64 *, __int128 *, unsigned __int64 *, _QWORD))(*a1 + 56);
      v79 = 0xFFFFFFFF00000000LL;
      v58(a1, 9, &v77, &v79, v68, 0);
      sub_11CDA0((__int64)&v79);
      sub_11CDA0((__int64)&v77);
      sub_11CDA0((__int64)v66);
      sub_11CDA0(v65.m128i_i64[0]);
      sub_11CDA0((__int64)v63);
    }
LABEL_42:
    if ( (*(_BYTE *)(v69 + 16) & 0x40) == 0 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD *, _QWORD *, __int64, __int64))(*a1 + 24))(
             a1,
             v72,
             v73,
             v69,
             1) )
      {
        v79 = 0u;
        sub_413D90((__int64 *)&v79, (unsigned __int8 *)v72);
        sub_413D90((__int64 *)&v79, (unsigned __int8 *)v73);
        sub_64000(&v80, (__int64)&v79);
        sub_414470(a1, (__int64)&v80, v48, v49, v50, v51);
        qfree();
        qfree();
      }
      v43 = 0;
      do
      {
        v44 = v43;
        sub_414360(a1, v43, 1);
        v43 = v44 + 1;
      }
      while ( v44 != 4 );
    }
    goto LABEL_34;
  }
  v8 = (__m128i *)v87;
  v9 = v69;
  v64 = v87;
  v61 = &v97;
  do
  {
    v8->m128i_i32[1] = -1;
    v8 += 5;
    si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
    v8[-5].m128i_i16[0] = 0;
    v8[-5].m128i_i16[1] = 0;
    v8[-5].m128i_i64[1] = 0;
    v8[-4] = si128;
    v8[-3].m128i_i64[0] = 0;
    *(__m128i *)((char *)&v8[-3] + 8) = 0;
    v8[-2].m128i_i32[2] = 0;
    v8[-1].m128i_i64[0] = 0;
    v8[-1].m128i_i32[2] = 0;
  }
  while ( v8 != (__m128i *)&v97 );
  v69 = v9;
  if ( (v4 & 0x10) != 0 )
  {
    v52 = get_dtype_size();
    v53 = a1[1];
    v63 = &v70;
    sub_32C080(&v70, v53, v52);
  }
  else
  {
    v11 = *(_QWORD *)(a1[1] + 112);
    v12 = ((v4 & 0x200) != 0) + 1;
    v13 = get_dtype_size();
    v63 = &v70;
    sub_32C430(&v70, v11, v13, v12);
  }
  v65.m128i_i64[0] = (__int64)v92;
  sub_123A40((__int64)&v80, (unsigned __int8 *)v72);
  v82 = 0;
  LODWORD(v84) = 0;
  v85 = 0;
  LODWORD(v86) = 0;
  *(__m128i *)&v81[8] = _mm_load_si128((const __m128i *)&xmmword_4247F0);
  v83 = 0;
  sub_125180((__int64)v64, (unsigned __int8 *)&v80);
  v88 = *(_QWORD *)&v81[8];
  v62 = (unsigned __int64 *)&v81[16];
  copy_tinfo_t();
  v14 = (__int64 *)v82;
  v82 = 0;
  v15 = _mm_loadu_si128(&v83);
  v83 = 0;
  if ( v89 )
  {
    v66 = v14;
    v65 = v15;
    v90.m128i_i64[0] = 0;
    qfree();
    v15 = _mm_load_si128(&v65);
    v14 = v66;
  }
  v89 = v14;
  v66 = &v84;
  v90 = v15;
  copy_argloc();
  v91 = v86;
  cleanup_argloc();
  if ( v82 )
  {
    v83.m128i_i64[0] = 0;
    qfree();
  }
  clear_tinfo_t();
  sub_11CDA0((__int64)&v80);
  v65.m128i_i64[0] = (__int64)v92;
  copy_tinfo_t();
  v65.m128i_i64[0] = (__int64)v92;
  sub_123A40((__int64)&v80, (unsigned __int8 *)v73);
  v82 = 0;
  LODWORD(v84) = 0;
  v85 = 0;
  LODWORD(v86) = 0;
  v65.m128i_i64[0] = (__int64)v92;
  *(__m128i *)&v81[8] = _mm_load_si128((const __m128i *)&xmmword_4247F0);
  v83 = 0;
  sub_125180((__int64)v92, (unsigned __int8 *)&v80);
  v93 = *(_QWORD *)&v81[8];
  copy_tinfo_t();
  v16 = v82;
  v82 = 0;
  v17 = _mm_loadu_si128(&v83);
  v83 = 0;
  if ( v94 )
  {
    v59 = v16;
    v60 = v17;
    v95.m128i_i64[0] = 0;
    qfree();
    v16 = v59;
    v17 = _mm_load_si128(&v60);
  }
  v94 = v16;
  v95 = v17;
  copy_argloc();
  v96 = v86;
  cleanup_argloc();
  if ( v82 )
  {
    v83.m128i_i64[0] = 0;
    qfree();
  }
  clear_tinfo_t();
  sub_11CDA0((__int64)&v80);
  copy_tinfo_t();
  v18 = *(_QWORD *)(a1[1] + 112);
  v19 = get_dtype_size();
  v66 = &v71;
  sub_32C430(&v71, v18, v19, 1);
  v80 = 0;
  *(_OWORD *)v81 = 0;
  sub_6B870(&v80);
  v20 = a1[2];
  v21 = s1;
  if ( *(_QWORD *)v81 )
    v21 = (const char *)v80;
  v22 = sub_335B10(v20, a1[8], (__int64)v21, v66, 2, (__int64)v64, 1);
  v23 = v69;
  v24 = *(_QWORD *)(v22 + 72);
  *(_DWORD *)(v24 + 280) |= 0x14u;
  *(_DWORD *)(v24 + 284) = *(_DWORD *)(v23 + 20);
  v77 = 0xFFFFFFFF00000000LL;
  v62 = &v77;
  v78 = 0;
  sub_1262E0((__int64)&v77, (unsigned __int8 *)v22);
  if ( v22 )
  {
    sub_11CDA0(v22 + 64);
    sub_11CDA0(v22 + 48);
    sub_11CDA0(v22 + 32);
    j__qfree();
  }
  v25 = (__int64)v62;
  v26 = *(__int64 (__fastcall **)(__int64 *, __int64, unsigned __int64 *, __int128 *, unsigned __int64 *, _QWORD))(*a1 + 56);
  v79 = 0xFFFFFFFF00000000LL;
  v69 = v26(a1, 4, v62, &v79, v68, 0);
  sub_11CDA0((__int64)&v79);
  sub_36D430(v69, *(unsigned int **)(a1[1] + 112));
  sub_11CDA0(v25);
  if ( v80 )
  {
    *(_QWORD *)v81 = 0;
    qfree();
  }
  clear_tinfo_t();
  clear_tinfo_t();
  v27 = (__int64)v61;
  v28 = (__int64)v64;
  do
  {
    v27 -= 80;
    cleanup_argloc();
    if ( *(_QWORD *)(v27 + 32) )
    {
      *(_QWORD *)(v27 + 40) = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_11CDA0(v27);
  }
  while ( v27 != v28 );
LABEL_34:
  v29 = 0;
LABEL_35:
  sub_11CDA0((__int64)v67);
  sub_11CDA0((__int64)v68);
  sub_11CDA0((__int64)v73);
  sub_11CDA0((__int64)v72);
  return v29;
}
