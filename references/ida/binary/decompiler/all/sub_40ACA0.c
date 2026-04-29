__int64 __fastcall sub_40ACA0(__int64 *a1, __int64 a2)
{
  unsigned int v3; // r9d
  __int64 v4; // r14
  __int64 v5; // r13
  int dtype_size; // eax
  __m128i *v7; // rax
  __int64 v8; // rcx
  __m128i si128; // xmm2
  __int64 v10; // r13
  unsigned int v11; // r14d
  unsigned int v12; // eax
  __int64 v13; // rax
  __m128i v14; // xmm0
  unsigned __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // r14
  unsigned int v18; // eax
  __int64 v19; // rdi
  const char *v20; // rdx
  __int64 v21; // r13
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 (__fastcall *v25)(__int64 *, __int64, unsigned __int64 *, __int128 *, unsigned __int64 *, _QWORD); // rax
  __int64 v26; // rbx
  __int64 v27; // r14
  unsigned int v28; // ebx
  __int64 v30; // rsi
  void (__fastcall *v31)(__int64 *, __int64, _QWORD *, _QWORD *, __int64 *, _QWORD); // rax
  void (__fastcall *v32)(__int64 *, __int64, _QWORD *, _QWORD *, __int64 *, bool); // rax
  unsigned int v33; // eax
  __m128i v34; // xmm5
  __int64 v35; // rax
  __int8 v36; // cl
  __int64 v37; // rsi
  __int64 v38; // rax
  char v39; // r9
  void (__fastcall *v40)(__int64 *, __int64, __int128 *, __int64 *, unsigned __int64 *, _QWORD); // rax
  __int64 v41; // rdi
  int v42; // eax
  int v43; // r14d
  __int64 v44; // r8
  int v45; // ecx
  unsigned int v46; // edx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  int v50; // r9d
  __int64 v51; // rsi
  int v52; // eax
  __int64 v53; // rsi
  int v54; // eax
  int v55; // ecx
  void (__fastcall *v56)(__int64 *, __int64, unsigned __int64 *, __int128 *, unsigned __int64 *, _QWORD); // rax
  __int64 v57; // [rsp-8h] [rbp-218h]
  int v58; // [rsp+0h] [rbp-210h]
  unsigned __int64 v59; // [rsp+8h] [rbp-208h]
  __m128i v60; // [rsp+10h] [rbp-200h] BYREF
  char *v61; // [rsp+20h] [rbp-1F0h]
  unsigned __int64 *v62; // [rsp+28h] [rbp-1E8h]
  unsigned __int64 *v63; // [rsp+30h] [rbp-1E0h]
  _BYTE *v64; // [rsp+38h] [rbp-1D8h]
  __m128i v65; // [rsp+40h] [rbp-1D0h] BYREF
  __int64 v66; // [rsp+50h] [rbp-1C0h]
  _QWORD *v67; // [rsp+58h] [rbp-1B8h]
  unsigned __int64 *v68; // [rsp+60h] [rbp-1B0h]
  __int64 v69; // [rsp+68h] [rbp-1A8h]
  char v70[8]; // [rsp+70h] [rbp-1A0h] BYREF
  char v71[8]; // [rsp+78h] [rbp-198h] BYREF
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
  __int64 v89; // [rsp+150h] [rbp-C0h]
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
  v3 = *(_DWORD *)(v69 + 16);
  if ( (v3 & 8) == 0 )
    goto LABEL_7;
  if ( v3 != 8 )
  {
    if ( !under_debugger )
      sub_37EA20(51670);
    BUG();
  }
  v4 = sub_327400(0);
  if ( v4 == -1 )
  {
LABEL_60:
    v28 = -2;
    goto LABEL_35;
  }
  v5 = a1[8];
  dtype_size = get_dtype_size();
  sub_11E5D0((__int64)v72, *(_QWORD *)(a1[1] + 112), v4, dtype_size, v5, 0);
  v3 = *(_DWORD *)(v69 + 16);
LABEL_7:
  if ( (v3 & 2) != 0 )
  {
    v44 = a1[8];
    v45 = 1;
    v46 = *(_DWORD *)(v69 + 8) - 22;
    LODWORD(v66) = *(_DWORD *)(v69 + 8);
    if ( v46 > 2 )
    {
      v66 = v44;
      v52 = get_dtype_size();
      v44 = v66;
      v45 = v52;
    }
    sub_11E5D0((__int64)v73, *(_QWORD *)(a1[1] + 112), 10, v45, v44, 0);
    v3 = *(_DWORD *)(v69 + 16);
  }
  if ( (v3 & 4) != 0 )
  {
    sub_11A5D0((char *)v72, (char *)v73);
    v3 = *(_DWORD *)(v69 + 16);
  }
  if ( (v3 & 1) != 0 )
  {
    v66 = *(_QWORD *)(a1[1] + 776);
    v33 = sub_408D30(v66);
    v34 = _mm_cvtsi32_si128(v33);
    LODWORD(v64) = v33;
    v35 = *a1;
    *(_QWORD *)&v79 = 1;
    v36 = *(_BYTE *)(v69 + 16);
    v37 = *(unsigned int *)(v69 + 8);
    *(_QWORD *)((char *)&v79 + 4) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(HIDWORD(v74)), v34).m128i_u64[0];
    v65.m128i_i8[0] = v36;
    (*(void (__fastcall **)(__int64 *, __int64, _QWORD *, _QWORD *, __int128 *, bool))(v35 + 56))(
      a1,
      v37,
      v72,
      v73,
      &v79,
      (v36 & 0x10) != 0);
    v38 = *a1;
    v39 = *(_BYTE *)(v69 + 16) >> 4;
    v65.m128i_i32[0] = *(_DWORD *)(v69 + 8);
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD *, _QWORD *, _QWORD *, _QWORD))(v38 + 64))(
      a1,
      (unsigned int)(v65.m128i_i32[0] + 2),
      v72,
      v73,
      v67,
      v39 & 1);
    v40 = *(void (__fastcall **)(__int64 *, __int64, __int128 *, __int64 *, unsigned __int64 *, _QWORD))(*a1 + 64);
    v80 = 0xFFFFFFFF00000000LL;
    *(_QWORD *)v81 = 0;
    v40(a1, 4, &v79, &v80, v68, 0);
    sub_11A960((__int64)&v80);
    v41 = *(_QWORD *)(v66 + 40);
    if ( v41 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v41 + 8LL))(v41, (unsigned int)v64);
    }
    else if ( *(_DWORD *)(v66 + 32) == -1 )
    {
      *(_DWORD *)(v66 + 32) = (_DWORD)v64;
    }
    sub_11A960((__int64)&v79);
    goto LABEL_42;
  }
  if ( (v3 & 0x100) == 0 )
  {
    v30 = *(unsigned int *)(v69 + 8);
    if ( (unsigned int)(v30 - 29) > 0xC )
    {
      (*(void (__fastcall **)(__int64 *, __int64, _QWORD *, _QWORD *, unsigned __int64 *, _QWORD))(*a1 + 56))(
        a1,
        v30,
        v72,
        v73,
        v68,
        (v3 >> 4) & 1);
    }
    else if ( (v3 & 0x40) != 0 )
    {
      v31 = *(void (__fastcall **)(__int64 *, __int64, _QWORD *, _QWORD *, __int64 *, _QWORD))(*a1 + 56);
      v80 = 0x100000001LL;
      *(_QWORD *)v81 = 1;
      v31(a1, 33, v72, v73, &v80, (v3 >> 4) & 1);
      sub_11A960((__int64)&v80);
      v32 = *(void (__fastcall **)(__int64 *, __int64, _QWORD *, _QWORD *, __int64 *, bool))(*a1 + 64);
      LOBYTE(v66) = *(_BYTE *)(v69 + 16);
      v80 = 0x100000001LL;
      *(_QWORD *)v81 = 0;
      v32(a1, 34, v72, v73, &v80, (v66 & 0x10) != 0);
      sub_11A960((__int64)&v80);
    }
    else
    {
      v53 = a1[8];
      v83.m128i_i64[0] = 0;
      v82 = 0xFFFFFFFF00000000LL;
      v83.m128i_i64[1] = 0xFFFFFFFF00000000LL;
      v84 = 0;
      v85 = 0xFFFFFFFF00000000LL;
      v86 = 0;
      sub_32D4D0(&v80, v53);
      *(_QWORD *)&v79 = 0x100000001LL;
      v54 = *(_DWORD *)(v69 + 16);
      v55 = *(_DWORD *)(v69 + 8);
      v63 = &v82;
      LODWORD(v64) = v55;
      LODWORD(v62) = v54 & 0x10;
      LODWORD(v80) = v55;
      DWORD2(v79) = v75;
      sub_122C80((__int64)&v82, (unsigned __int8 *)v72);
      v65.m128i_i64[0] = (__int64)&v83.m128i_i64[1];
      sub_122C80((__int64)&v83.m128i_i64[1], (unsigned __int8 *)v73);
      v66 = (__int64)&v85;
      sub_122C80((__int64)&v85, (unsigned __int8 *)&v79);
      if ( (_DWORD)v62 || (int)v64 > 62 )
        HIDWORD(v80) |= 0x10u;
      sub_11A960((__int64)&v79);
      v78 = 0;
      v77 = 0xFFFFFFFF00000000LL;
      v62 = &v77;
      sub_123DE0((__int64)&v77, (unsigned __int8 *)&v80);
      v56 = *(void (__fastcall **)(__int64 *, __int64, unsigned __int64 *, __int128 *, unsigned __int64 *, _QWORD))(*a1 + 56);
      v79 = 0xFFFFFFFF00000000LL;
      v56(a1, 9, &v77, &v79, v68, 0);
      sub_11A960((__int64)&v79);
      sub_11A960((__int64)&v77);
      sub_11A960(v66);
      sub_11A960(v65.m128i_i64[0]);
      sub_11A960((__int64)v63);
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
        sub_409210((__int64 *)&v79, (unsigned __int8 *)v72);
        sub_409210((__int64 *)&v79, (unsigned __int8 *)v73);
        sub_63700(&v80, (__int64)&v79);
        sub_4098F0(a1, (__int64)&v80, v47, v48, v49, v50);
        qfree();
        qfree();
      }
      v42 = 0;
      do
      {
        v43 = v42;
        sub_4097E0(a1, v42, 1);
        v42 = v43 + 1;
      }
      while ( v43 != 4 );
    }
    goto LABEL_34;
  }
  v7 = (__m128i *)v87;
  v8 = v69;
  v64 = v87;
  v61 = &v97;
  do
  {
    v7->m128i_i32[1] = -1;
    v7 += 5;
    si128 = _mm_load_si128((const __m128i *)&xmmword_425B90);
    v7[-5].m128i_i16[0] = 0;
    v7[-5].m128i_i16[1] = 0;
    v7[-5].m128i_i64[1] = 0;
    v7[-4] = si128;
    v7[-3].m128i_i64[0] = 0;
    *(__m128i *)((char *)&v7[-3] + 8) = 0;
    v7[-2].m128i_i32[2] = 0;
    v7[-1].m128i_i64[0] = 0;
    v7[-1].m128i_i32[2] = 0;
  }
  while ( v7 != (__m128i *)&v97 );
  v69 = v8;
  if ( (v3 & 0x10) != 0 )
  {
    get_dtype_size();
    v51 = a1[1];
    v63 = (unsigned __int64 *)v70;
    sub_328C30(v70, v51);
  }
  else
  {
    v10 = *(_QWORD *)(a1[1] + 112);
    v11 = ((v3 & 0x200) != 0) + 1;
    v12 = get_dtype_size();
    v63 = (unsigned __int64 *)v70;
    sub_328FE0(v70, v10, v12, v11);
  }
  v65.m128i_i64[0] = (__int64)v92;
  sub_121540((__int64)&v80, (unsigned __int8 *)v72);
  v82 = 0;
  LODWORD(v84) = 0;
  v85 = 0;
  LODWORD(v86) = 0;
  *(__m128i *)&v81[8] = _mm_load_si128((const __m128i *)&xmmword_425B90);
  v83 = 0;
  sub_122C80((__int64)v64, (unsigned __int8 *)&v80);
  v88 = *(_QWORD *)&v81[8];
  v62 = (unsigned __int64 *)&v81[16];
  copy_tinfo_t();
  v13 = v82;
  v82 = 0;
  v14 = _mm_loadu_si128(&v83);
  v83 = 0;
  if ( v89 )
  {
    v66 = v13;
    v65 = v14;
    v90.m128i_i64[0] = 0;
    qfree();
    v14 = _mm_load_si128(&v65);
    v13 = v66;
  }
  v89 = v13;
  v66 = (__int64)&v84;
  v90 = v14;
  copy_argloc();
  v91 = v86;
  cleanup_argloc();
  if ( v82 )
  {
    v83.m128i_i64[0] = 0;
    qfree();
  }
  clear_tinfo_t();
  sub_11A960((__int64)&v80);
  v65.m128i_i64[0] = (__int64)v92;
  copy_tinfo_t();
  v65.m128i_i64[0] = (__int64)v92;
  sub_121540((__int64)&v80, (unsigned __int8 *)v73);
  v82 = 0;
  LODWORD(v84) = 0;
  v85 = 0;
  LODWORD(v86) = 0;
  v65.m128i_i64[0] = (__int64)v92;
  *(__m128i *)&v81[8] = _mm_load_si128((const __m128i *)&xmmword_425B90);
  v83 = 0;
  sub_122C80((__int64)v92, (unsigned __int8 *)&v80);
  v93 = *(_QWORD *)&v81[8];
  copy_tinfo_t();
  v15 = v82;
  v82 = 0;
  v16 = _mm_loadu_si128(&v83);
  v83 = 0;
  if ( v94 )
  {
    v59 = v15;
    v60 = v16;
    v95.m128i_i64[0] = 0;
    qfree();
    v15 = v59;
    v16 = _mm_load_si128(&v60);
  }
  v94 = v15;
  v95 = v16;
  copy_argloc();
  v96 = v86;
  cleanup_argloc();
  if ( v82 )
  {
    v83.m128i_i64[0] = 0;
    qfree();
  }
  clear_tinfo_t();
  sub_11A960((__int64)&v80);
  copy_tinfo_t();
  v17 = *(_QWORD *)(a1[1] + 112);
  v18 = get_dtype_size();
  v66 = (__int64)v71;
  sub_328FE0(v71, v17, v18, 1);
  v80 = 0;
  *(_OWORD *)v81 = 0;
  sub_6AEF0(&v80);
  v19 = a1[2];
  v20 = s1;
  if ( *(_QWORD *)v81 )
    LODWORD(v20) = v80;
  v21 = sub_332690(v19, a1[8], (_DWORD)v20, v66, 2, (_DWORD)v64, 1, v57, v58, v59, v60.m128i_i32[0], v60.m128i_i32[2]);
  v22 = v69;
  v23 = *(_QWORD *)(v21 + 72);
  *(_DWORD *)(v23 + 280) |= 0x14u;
  *(_DWORD *)(v23 + 284) = *(_DWORD *)(v22 + 20);
  v77 = 0xFFFFFFFF00000000LL;
  v62 = &v77;
  v78 = 0;
  sub_123DE0((__int64)&v77, (unsigned __int8 *)v21);
  if ( v21 )
  {
    sub_11A960(v21 + 64);
    sub_11A960(v21 + 48);
    sub_11A960(v21 + 32);
    j__qfree();
  }
  v24 = (__int64)v62;
  v25 = *(__int64 (__fastcall **)(__int64 *, __int64, unsigned __int64 *, __int128 *, unsigned __int64 *, _QWORD))(*a1 + 56);
  v79 = 0xFFFFFFFF00000000LL;
  v69 = v25(a1, 4, v62, &v79, v68, 0);
  sub_11A960((__int64)&v79);
  sub_369B10(v69, *(_QWORD *)(a1[1] + 112), v66);
  sub_11A960(v24);
  if ( v80 )
  {
    *(_QWORD *)v81 = 0;
    qfree();
  }
  clear_tinfo_t();
  clear_tinfo_t();
  v26 = (__int64)v61;
  v27 = (__int64)v64;
  do
  {
    v26 -= 80;
    cleanup_argloc();
    if ( *(_QWORD *)(v26 + 32) )
    {
      *(_QWORD *)(v26 + 40) = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_11A960(v26);
  }
  while ( v26 != v27 );
LABEL_34:
  v28 = 0;
LABEL_35:
  sub_11A960((__int64)v67);
  sub_11A960((__int64)v68);
  sub_11A960((__int64)v73);
  sub_11A960((__int64)v72);
  return v28;
}
