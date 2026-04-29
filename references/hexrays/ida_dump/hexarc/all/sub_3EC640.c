__int64 __fastcall sub_3EC640(__int64 *a1, __int64 a2, double a3)
{
  _QWORD *v4; // rsi
  unsigned int v5; // r9d
  __int64 v6; // r14
  __int64 v7; // r13
  int dtype_size; // eax
  __m128i *v9; // rax
  __int64 v10; // rcx
  __m128i si128; // xmm2
  __int64 v12; // rdi
  __int64 v13; // r13
  int v14; // r14d
  unsigned int v15; // eax
  __int64 *v16; // rax
  __m128i v17; // xmm0
  unsigned __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // r14
  unsigned int v21; // eax
  const char *v22; // rdx
  const char *v23; // rdx
  __int64 v24; // r13
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r13
  __int64 (__fastcall *v28)(__int64 *, __int64, unsigned __int64 *, __int128 *, unsigned __int64 *, _QWORD); // rax
  __int64 v29; // rbx
  __int64 v30; // r14
  __int64 v31; // rdi
  unsigned int v32; // ebx
  __int64 v34; // rsi
  void (__fastcall *v35)(__int64 *, __int64, _QWORD *, _QWORD *, __int64 *, _QWORD); // rax
  void (__fastcall *v36)(__int64 *, __int64, _QWORD *, _QWORD *, __int64 *, bool); // rax
  unsigned int v37; // eax
  __m128i v38; // xmm5
  __int64 v39; // rax
  __int8 v40; // cl
  __int64 v41; // rsi
  __int64 v42; // rax
  char v43; // r9
  void (__fastcall *v44)(__int64 *, __int64, __int128 *, __int64 *, unsigned __int64 *, _QWORD); // rax
  __int64 v45; // rdi
  int v46; // eax
  int v47; // r14d
  __int64 *v48; // r8
  int v49; // ecx
  unsigned int v50; // edx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  int v54; // r9d
  int v55; // eax
  __int64 v56; // rsi
  int v57; // eax
  __int64 v58; // rsi
  int v59; // eax
  int v60; // ecx
  void (__fastcall *v61)(__int64 *, __int64, unsigned __int64 *, __int128 *, unsigned __int64 *, _QWORD); // rax
  unsigned __int64 v62; // [rsp+8h] [rbp-208h]
  __m128i v63; // [rsp+10h] [rbp-200h] BYREF
  char *v64; // [rsp+20h] [rbp-1F0h]
  unsigned __int64 *v65; // [rsp+28h] [rbp-1E8h]
  __int64 *v66; // [rsp+30h] [rbp-1E0h]
  _BYTE *v67; // [rsp+38h] [rbp-1D8h]
  __m128i v68; // [rsp+40h] [rbp-1D0h] BYREF
  __int64 *v69; // [rsp+50h] [rbp-1C0h]
  _QWORD *v70; // [rsp+58h] [rbp-1B8h]
  unsigned __int64 *v71; // [rsp+60h] [rbp-1B0h]
  __int64 v72; // [rsp+68h] [rbp-1A8h]
  __int64 v73; // [rsp+70h] [rbp-1A0h] BYREF
  __int64 v74; // [rsp+78h] [rbp-198h] BYREF
  _QWORD v75[2]; // [rsp+80h] [rbp-190h] BYREF
  _QWORD v76[2]; // [rsp+90h] [rbp-180h] BYREF
  unsigned __int64 v77; // [rsp+A0h] [rbp-170h] BYREF
  __int64 v78; // [rsp+A8h] [rbp-168h]
  _QWORD v79[2]; // [rsp+B0h] [rbp-160h] BYREF
  unsigned __int64 v80; // [rsp+C0h] [rbp-150h] BYREF
  __int64 v81; // [rsp+C8h] [rbp-148h]
  __int128 v82; // [rsp+D0h] [rbp-140h] BYREF
  __int64 v83; // [rsp+E0h] [rbp-130h] BYREF
  _BYTE v84[24]; // [rsp+E8h] [rbp-128h] BYREF
  unsigned __int64 v85; // [rsp+100h] [rbp-110h] BYREF
  __m128i v86; // [rsp+108h] [rbp-108h] BYREF
  __int64 v87; // [rsp+118h] [rbp-F8h] BYREF
  unsigned __int64 v88; // [rsp+120h] [rbp-F0h] BYREF
  __int64 v89; // [rsp+128h] [rbp-E8h]
  _BYTE v90[16]; // [rsp+130h] [rbp-E0h] BYREF
  __int64 v91; // [rsp+140h] [rbp-D0h]
  char v92[8]; // [rsp+148h] [rbp-C8h] BYREF
  __int64 *v93; // [rsp+150h] [rbp-C0h]
  __m128i v94; // [rsp+158h] [rbp-B8h]
  char v95[16]; // [rsp+168h] [rbp-A8h] BYREF
  int v96; // [rsp+178h] [rbp-98h]
  _BYTE v97[16]; // [rsp+180h] [rbp-90h] BYREF
  __int64 v98; // [rsp+190h] [rbp-80h]
  char v99[8]; // [rsp+198h] [rbp-78h] BYREF
  unsigned __int64 v100; // [rsp+1A0h] [rbp-70h]
  __m128i v101; // [rsp+1A8h] [rbp-68h]
  char v102[16]; // [rsp+1B8h] [rbp-58h] BYREF
  int v103; // [rsp+1C8h] [rbp-48h]
  char v104; // [rsp+1D0h] [rbp-40h] BYREF
  unsigned __int64 v105; // [rsp+1D8h] [rbp-38h]

  v72 = a2;
  v105 = __readfsqword(0x28u);
  v70 = v79;
  v75[1] = 0;
  v76[1] = 0;
  v78 = 0;
  v79[1] = 0;
  v75[0] = 0xFFFFFFFF00000000LL;
  v76[0] = 0xFFFFFFFF00000000LL;
  v77 = 0xFFFFFFFF00000000LL;
  v79[0] = 0xFFFFFFFF00000000LL;
  v71 = &v77;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, unsigned __int64 *, _QWORD *, __int64))(*a1 + 48))(
          a1,
          &v77,
          v79,
          a2) )
    goto LABEL_60;
  v4 = v75;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD *, _QWORD *, __int64))(*a1 + 40))(a1, v75, v76, v72) )
    goto LABEL_60;
  v5 = *(_DWORD *)(v72 + 16);
  if ( (v5 & 8) == 0 )
    goto LABEL_7;
  if ( v5 != 8 )
  {
    if ( !under_debugger )
      sub_37B760(0xC9D6u, (__int64)v75, a3);
    BUG();
  }
  v6 = sub_323440(nullptr);
  if ( v6 == -1 )
  {
LABEL_60:
    v32 = -2;
    goto LABEL_35;
  }
  v7 = a1[8];
  dtype_size = get_dtype_size(*(unsigned __int8 *)(v72 + 12));
  v4 = *(_QWORD **)(a1[1] + 112);
  sub_11A350((__int64)v75, (int)v4, v6, dtype_size, v7, 0);
  v5 = *(_DWORD *)(v72 + 16);
LABEL_7:
  if ( (v5 & 2) != 0 )
  {
    v48 = (__int64 *)a1[8];
    v49 = 1;
    v50 = *(_DWORD *)(v72 + 8) - 22;
    LODWORD(v69) = *(_DWORD *)(v72 + 8);
    if ( v50 > 2 )
    {
      v69 = v48;
      v57 = get_dtype_size(*(unsigned __int8 *)(v72 + 12));
      v48 = v69;
      v49 = v57;
    }
    v4 = *(_QWORD **)(a1[1] + 112);
    sub_11A350((__int64)v76, (int)v4, 10, v49, (__int64)v48, 0);
    v5 = *(_DWORD *)(v72 + 16);
  }
  if ( (v5 & 4) != 0 )
  {
    v4 = v76;
    sub_116350((char *)v75, (char *)v76);
    v5 = *(_DWORD *)(v72 + 16);
  }
  if ( (v5 & 1) != 0 )
  {
    v69 = *(__int64 **)(a1[1] + 784);
    v37 = sub_3EA6D0((__int64)v69, (__int64)v4, a3);
    v38 = _mm_cvtsi32_si128(v37);
    LODWORD(v67) = v37;
    v39 = *a1;
    *(_QWORD *)&v82 = 1;
    v40 = *(_BYTE *)(v72 + 16);
    v41 = *(unsigned int *)(v72 + 8);
    *(_QWORD *)((char *)&v82 + 4) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(HIDWORD(v77)), v38).m128i_u64[0];
    v68.m128i_i8[0] = v40;
    (*(void (__fastcall **)(__int64 *, __int64, _QWORD *, _QWORD *, __int128 *, bool))(v39 + 56))(
      a1,
      v41,
      v75,
      v76,
      &v82,
      (v40 & 0x10) != 0);
    v42 = *a1;
    v43 = *(_BYTE *)(v72 + 16) >> 4;
    v68.m128i_i32[0] = *(_DWORD *)(v72 + 8);
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD *, _QWORD *, _QWORD *, _QWORD))(v42 + 64))(
      a1,
      (unsigned int)(v68.m128i_i32[0] + 2),
      v75,
      v76,
      v70,
      v43 & 1);
    v44 = *(void (__fastcall **)(__int64 *, __int64, __int128 *, __int64 *, unsigned __int64 *, _QWORD))(*a1 + 64);
    v83 = 0xFFFFFFFF00000000LL;
    *(_QWORD *)v84 = 0;
    v44(a1, 4, &v82, &v83, v71, 0);
    sub_1166E0((__int64)&v83);
    v45 = v69[5];
    if ( v45 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v45 + 8LL))(v45, (unsigned int)v67);
    }
    else if ( *((_DWORD *)v69 + 8) == -1 )
    {
      *((_DWORD *)v69 + 8) = (_DWORD)v67;
    }
    sub_1166E0((__int64)&v82);
    goto LABEL_42;
  }
  if ( (v5 & 0x100) == 0 )
  {
    v34 = *(unsigned int *)(v72 + 8);
    if ( (unsigned int)(v34 - 29) > 0xC )
    {
      (*(void (__fastcall **)(__int64 *, __int64, _QWORD *, _QWORD *, unsigned __int64 *, _QWORD))(*a1 + 56))(
        a1,
        v34,
        v75,
        v76,
        v71,
        (v5 >> 4) & 1);
    }
    else if ( (v5 & 0x40) != 0 )
    {
      v35 = *(void (__fastcall **)(__int64 *, __int64, _QWORD *, _QWORD *, __int64 *, _QWORD))(*a1 + 56);
      v83 = 0x100000001LL;
      *(_QWORD *)v84 = 1;
      v35(a1, 33, v75, v76, &v83, (v5 >> 4) & 1);
      sub_1166E0((__int64)&v83);
      v36 = *(void (__fastcall **)(__int64 *, __int64, _QWORD *, _QWORD *, __int64 *, bool))(*a1 + 64);
      LOBYTE(v69) = *(_BYTE *)(v72 + 16);
      v83 = 0x100000001LL;
      *(_QWORD *)v84 = 0;
      v36(a1, 34, v75, v76, &v83, ((unsigned __int8)v69 & 0x10) != 0);
      sub_1166E0((__int64)&v83);
    }
    else
    {
      v58 = a1[8];
      v86.m128i_i64[0] = 0;
      v85 = 0xFFFFFFFF00000000LL;
      v86.m128i_i64[1] = 0xFFFFFFFF00000000LL;
      v87 = 0;
      v88 = 0xFFFFFFFF00000000LL;
      v89 = 0;
      sub_329320((__int64)&v83, v58);
      *(_QWORD *)&v82 = 0x100000001LL;
      v59 = *(_DWORD *)(v72 + 16);
      v60 = *(_DWORD *)(v72 + 8);
      v66 = (__int64 *)&v85;
      LODWORD(v67) = v60;
      LODWORD(v65) = v59 & 0x10;
      LODWORD(v83) = v60;
      DWORD2(v82) = v78;
      sub_11EAC0((__int64)&v85, (unsigned __int8 *)v75);
      v68.m128i_i64[0] = (__int64)&v86.m128i_i64[1];
      sub_11EAC0((__int64)&v86.m128i_i64[1], (unsigned __int8 *)v76);
      v69 = (__int64 *)&v88;
      sub_11EAC0((__int64)&v88, (unsigned __int8 *)&v82);
      if ( (_DWORD)v65 || (int)v67 > 62 )
        HIDWORD(v83) |= 0x10u;
      sub_1166E0((__int64)&v82);
      v81 = 0;
      v80 = 0xFFFFFFFF00000000LL;
      v65 = &v80;
      sub_11FC20((__int64)&v80, (unsigned __int8 *)&v83);
      v61 = *(void (__fastcall **)(__int64 *, __int64, unsigned __int64 *, __int128 *, unsigned __int64 *, _QWORD))(*a1 + 56);
      v82 = 0xFFFFFFFF00000000LL;
      v61(a1, 9, &v80, &v82, v71, 0);
      sub_1166E0((__int64)&v82);
      sub_1166E0((__int64)&v80);
      sub_1166E0((__int64)v69);
      sub_1166E0(v68.m128i_i64[0]);
      sub_1166E0((__int64)v66);
    }
LABEL_42:
    if ( (*(_BYTE *)(v72 + 16) & 0x40) == 0 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD *, _QWORD *, __int64, __int64))(*a1 + 24))(
             a1,
             v75,
             v76,
             v72,
             1) )
      {
        v82 = 0u;
        sub_3EABB0((__int64 *)&v82, (unsigned __int8 *)v75);
        sub_3EABB0((__int64 *)&v82, (unsigned __int8 *)v76);
        sub_5DA80(&v83, (__int64)&v82);
        sub_3EB290(a1, (__int64)&v83, v51, v52, v53, v54);
        qfree(v83);
        qfree(v82);
      }
      v46 = 0;
      do
      {
        v47 = v46;
        sub_3EB180(a1, v46, 1u);
        v46 = v47 + 1;
      }
      while ( v47 != 4 );
    }
    goto LABEL_34;
  }
  v9 = (__m128i *)v90;
  v10 = v72;
  v67 = v90;
  v64 = &v104;
  do
  {
    v9->m128i_i32[1] = -1;
    v9 += 5;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3FA110);
    v9[-5].m128i_i16[0] = 0;
    v9[-5].m128i_i16[1] = 0;
    v9[-5].m128i_i64[1] = 0;
    v9[-4] = si128;
    v9[-3].m128i_i64[0] = 0;
    *(__m128i *)((char *)&v9[-3] + 8) = 0;
    v9[-2].m128i_i32[2] = 0;
    v9[-1].m128i_i64[0] = 0;
    v9[-1].m128i_i32[2] = 0;
  }
  while ( v9 != (__m128i *)&v104 );
  v72 = v10;
  v12 = *(unsigned __int8 *)(v10 + 12);
  if ( (v5 & 0x10) != 0 )
  {
    v55 = get_dtype_size(v12);
    v56 = a1[1];
    v66 = &v73;
    sub_324B50(&v73, v56, v55);
  }
  else
  {
    v13 = *(_QWORD *)(a1[1] + 112);
    v14 = ((v5 & 0x200) != 0) + 1;
    v15 = get_dtype_size(v12);
    v66 = &v73;
    sub_324F00(&v73, v13, v15, v14);
  }
  v68.m128i_i64[0] = (__int64)v97;
  sub_11D380((__int64)&v83, (unsigned __int8 *)v75);
  v85 = 0;
  LODWORD(v87) = 0;
  v88 = 0;
  LODWORD(v89) = 0;
  *(__m128i *)&v84[8] = _mm_load_si128((const __m128i *)&xmmword_3FA110);
  v86 = 0;
  sub_11EAC0((__int64)v67, (unsigned __int8 *)&v83);
  v91 = *(_QWORD *)&v84[8];
  v65 = (unsigned __int64 *)&v84[16];
  copy_tinfo_t(v92, &v84[16]);
  v16 = (__int64 *)v85;
  v85 = 0;
  v17 = _mm_loadu_si128(&v86);
  v86 = 0;
  if ( v93 )
  {
    v69 = v16;
    v68 = v17;
    v94.m128i_i64[0] = 0;
    qfree(v93);
    v17 = _mm_load_si128(&v68);
    v16 = v69;
  }
  v93 = v16;
  v69 = &v87;
  v94 = v17;
  copy_argloc(v95, &v87);
  v96 = v89;
  cleanup_argloc(v69);
  if ( v85 )
  {
    v86.m128i_i64[0] = 0;
    qfree(v85);
  }
  clear_tinfo_t(v65);
  sub_1166E0((__int64)&v83);
  v68.m128i_i64[0] = (__int64)v97;
  copy_tinfo_t(v92, v66);
  v68.m128i_i64[0] = (__int64)v97;
  sub_11D380((__int64)&v83, (unsigned __int8 *)v76);
  v85 = 0;
  LODWORD(v87) = 0;
  v88 = 0;
  LODWORD(v89) = 0;
  v68.m128i_i64[0] = (__int64)v97;
  *(__m128i *)&v84[8] = _mm_load_si128((const __m128i *)&xmmword_3FA110);
  v86 = 0;
  sub_11EAC0((__int64)v97, (unsigned __int8 *)&v83);
  v98 = *(_QWORD *)&v84[8];
  copy_tinfo_t(v99, v65);
  v18 = v85;
  v85 = 0;
  v19 = _mm_loadu_si128(&v86);
  v86 = 0;
  if ( v100 )
  {
    v62 = v18;
    v63 = v19;
    v101.m128i_i64[0] = 0;
    qfree(v100);
    v18 = v62;
    v19 = _mm_load_si128(&v63);
  }
  v100 = v18;
  v101 = v19;
  copy_argloc(v102, v69);
  v103 = v89;
  cleanup_argloc(v69);
  if ( v85 )
  {
    v86.m128i_i64[0] = 0;
    qfree(v85);
  }
  clear_tinfo_t(v65);
  sub_1166E0((__int64)&v83);
  copy_tinfo_t(v99, v66);
  v20 = *(_QWORD *)(a1[1] + 112);
  v21 = get_dtype_size(*(unsigned __int8 *)(v72 + 13));
  v69 = &v74;
  sub_324F00(&v74, v20, v21, 1);
  v83 = 0;
  v22 = *(const char **)v72;
  *(_OWORD *)v84 = 0;
  sub_652F0(&v83, (__int64)"__%s", v22);
  v23 = s1;
  if ( *(_QWORD *)v84 )
    v23 = (const char *)v83;
  v24 = sub_32E2F0(a1[2], a1[8], (__int64)v23, v69, 2, (__int64)v67, 1);
  v25 = v72;
  v26 = *(_QWORD *)(v24 + 72);
  *(_DWORD *)(v26 + 280) |= 0x14u;
  *(_DWORD *)(v26 + 284) = *(_DWORD *)(v25 + 20);
  v80 = 0xFFFFFFFF00000000LL;
  v65 = &v80;
  v81 = 0;
  sub_11FC20((__int64)&v80, (unsigned __int8 *)v24);
  if ( v24 )
  {
    sub_1166E0(v24 + 64);
    sub_1166E0(v24 + 48);
    sub_1166E0(v24 + 32);
    j__qfree(v24);
  }
  v27 = (__int64)v65;
  v28 = *(__int64 (__fastcall **)(__int64 *, __int64, unsigned __int64 *, __int128 *, unsigned __int64 *, _QWORD))(*a1 + 56);
  v82 = 0xFFFFFFFF00000000LL;
  v72 = v28(a1, 4, v65, &v82, v71, 0);
  sub_1166E0((__int64)&v82);
  sub_365BB0(v72, *(unsigned int **)(a1[1] + 112), v69);
  sub_1166E0(v27);
  if ( v83 )
  {
    *(_QWORD *)v84 = 0;
    qfree(v83);
  }
  clear_tinfo_t(v69);
  clear_tinfo_t(v66);
  v29 = (__int64)v64;
  v30 = (__int64)v67;
  do
  {
    v29 -= 80;
    cleanup_argloc(v29 + 56);
    v31 = *(_QWORD *)(v29 + 32);
    if ( v31 )
    {
      *(_QWORD *)(v29 + 40) = 0;
      qfree(v31);
    }
    clear_tinfo_t(v29 + 24);
    sub_1166E0(v29);
  }
  while ( v29 != v30 );
LABEL_34:
  v32 = 0;
LABEL_35:
  sub_1166E0((__int64)v70);
  sub_1166E0((__int64)v71);
  sub_1166E0((__int64)v76);
  sub_1166E0((__int64)v75);
  return v32;
}
