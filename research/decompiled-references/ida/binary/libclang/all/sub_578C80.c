int sub_578C80()
{
  void **v0; // r15
  __m128i *v1; // r13
  __m128i v2; // xmm1
  __m128i v3; // xmm1
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  void *v8; // r14
  __m128i si128; // xmm0
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  __m128i v25; // xmm7
  __m128i v26; // xmm5
  char *v27; // rbx
  char *v28; // rbp
  __int64 v29; // rdx
  char v30; // si
  const __m128i *v31; // rcx
  __int64 v32; // rdi
  void *v33; // r13
  void *v34; // r15
  __int32 v35; // r10d
  int v36; // edx
  __m128i *v37; // rax
  __int64 v38; // rdi
  __m128i v39; // xmm0
  int v40; // edx
  int v41; // ecx
  int v42; // r8d
  int v43; // r9d
  __m128i v44; // xmm6
  __m128i v45; // xmm7
  char *v46; // rbx
  char *v47; // rbp
  __int64 v48; // rdx
  char v49; // si
  const __m128i *v50; // rcx
  __int64 v51; // rdi
  void *v52; // r13
  void *v53; // r15
  __int32 v54; // r10d
  int v55; // edx
  __m128i *v56; // rax
  __int64 v57; // rdi
  __m128i v58; // xmm0
  int v59; // edx
  int v60; // ecx
  int v61; // r8d
  int v62; // r9d
  __m128i *v63; // rax
  __int64 v65; // rax
  __int64 *v66; // rdi
  char *v67; // r8
  const __m128i *v68; // rdx
  const __m128i *v69; // rcx
  __m128i v70; // xmm0
  __int32 v71; // r9d
  __m128i v72; // xmm0
  __int32 v73; // eax
  __int64 v74; // rax
  __int64 *v75; // rdi
  char *v76; // r8
  const __m128i *v77; // rdx
  const __m128i *v78; // rcx
  __m128i v79; // xmm0
  __int32 v80; // r9d
  __m128i v81; // xmm0
  __int32 v82; // eax
  __m128i v83; // [rsp+90h] [rbp-508h] BYREF
  __m128i v84; // [rsp+A0h] [rbp-4F8h] BYREF
  __m128 v85; // [rsp+B0h] [rbp-4E8h] BYREF
  __m128 v86; // [rsp+C0h] [rbp-4D8h] BYREF
  unsigned __int64 v87; // [rsp+D0h] [rbp-4C8h]
  char *v88; // [rsp+D8h] [rbp-4C0h]
  __int64 v89; // [rsp+E0h] [rbp-4B8h]
  unsigned __int64 v90; // [rsp+E8h] [rbp-4B0h]
  char *v91; // [rsp+F0h] [rbp-4A8h]
  __int64 v92; // [rsp+F8h] [rbp-4A0h]
  int v93; // [rsp+100h] [rbp-498h] BYREF
  int v94; // [rsp+104h] [rbp-494h] BYREF
  int *v95; // [rsp+108h] [rbp-490h] BYREF
  __m128i v96; // [rsp+110h] [rbp-488h] BYREF
  __m128i v97; // [rsp+120h] [rbp-478h] BYREF
  __int64 v98; // [rsp+130h] [rbp-468h]
  __m128i v99; // [rsp+140h] [rbp-458h] BYREF
  __m128i v100; // [rsp+150h] [rbp-448h] BYREF
  __int64 v101; // [rsp+160h] [rbp-438h]
  __m128i v102; // [rsp+170h] [rbp-428h] BYREF
  __m128i v103; // [rsp+180h] [rbp-418h] BYREF
  __int64 v104; // [rsp+190h] [rbp-408h]
  __m128i v105; // [rsp+1A0h] [rbp-3F8h] BYREF
  __m128i v106; // [rsp+1B0h] [rbp-3E8h] BYREF
  __int64 v107; // [rsp+1C0h] [rbp-3D8h]
  __m128i v108; // [rsp+1D0h] [rbp-3C8h] BYREF
  __m128i v109; // [rsp+1E0h] [rbp-3B8h] BYREF
  __int64 v110; // [rsp+1F0h] [rbp-3A8h]
  __m128i v111; // [rsp+200h] [rbp-398h] BYREF
  __m128i v112; // [rsp+210h] [rbp-388h] BYREF
  __int64 v113; // [rsp+220h] [rbp-378h]
  __m128i v114; // [rsp+230h] [rbp-368h] BYREF
  __m128i v115; // [rsp+240h] [rbp-358h] BYREF
  __int64 v116; // [rsp+250h] [rbp-348h]
  __m128i v117; // [rsp+260h] [rbp-338h] BYREF
  __m128i v118; // [rsp+270h] [rbp-328h] BYREF
  __int64 v119; // [rsp+280h] [rbp-318h]
  __m128i v120; // [rsp+290h] [rbp-308h] BYREF
  __m128i v121; // [rsp+2A0h] [rbp-2F8h] BYREF
  __int64 v122; // [rsp+2B0h] [rbp-2E8h]
  __m128i v123; // [rsp+2C0h] [rbp-2D8h] BYREF
  __m128i v124; // [rsp+2D0h] [rbp-2C8h] BYREF
  __int64 v125; // [rsp+2E0h] [rbp-2B8h]
  __m128i v126; // [rsp+2F0h] [rbp-2A8h] BYREF
  __m128i v127; // [rsp+300h] [rbp-298h] BYREF
  __int64 v128; // [rsp+310h] [rbp-288h]
  __m128i v129; // [rsp+320h] [rbp-278h] BYREF
  __m128i v130; // [rsp+330h] [rbp-268h] BYREF
  __int64 v131; // [rsp+340h] [rbp-258h]
  __m128i v132; // [rsp+350h] [rbp-248h] BYREF
  __m128i v133; // [rsp+360h] [rbp-238h] BYREF
  __int64 v134; // [rsp+370h] [rbp-228h]
  __m128i v135; // [rsp+380h] [rbp-218h] BYREF
  __m128i v136; // [rsp+390h] [rbp-208h] BYREF
  __int64 v137; // [rsp+3A0h] [rbp-1F8h]
  __m128i v138; // [rsp+3B0h] [rbp-1E8h] BYREF
  __m128i v139; // [rsp+3C0h] [rbp-1D8h] BYREF
  __int64 v140; // [rsp+3D0h] [rbp-1C8h]
  void *v141[2]; // [rsp+3E0h] [rbp-1B8h] BYREF
  __m128i v142; // [rsp+3F0h] [rbp-1A8h] BYREF
  __m128i v143; // [rsp+400h] [rbp-198h] BYREF
  __m128i v144; // [rsp+410h] [rbp-188h] BYREF
  __m128i v145; // [rsp+420h] [rbp-178h] BYREF
  __m128i v146; // [rsp+430h] [rbp-168h] BYREF
  __m128i v147; // [rsp+440h] [rbp-158h] BYREF
  __m128i v148; // [rsp+450h] [rbp-148h] BYREF
  __m128i v149; // [rsp+460h] [rbp-138h] BYREF
  __m128i v150; // [rsp+470h] [rbp-128h] BYREF
  void *ptr[2]; // [rsp+490h] [rbp-108h] BYREF
  __m128i v152; // [rsp+4A0h] [rbp-F8h] BYREF
  __m128i v153; // [rsp+4B0h] [rbp-E8h] BYREF
  __m128i v154; // [rsp+4C0h] [rbp-D8h] BYREF
  __m128i v155; // [rsp+4D0h] [rbp-C8h] BYREF
  __m128i v156; // [rsp+4E0h] [rbp-B8h] BYREF
  __m128i v157; // [rsp+4F0h] [rbp-A8h] BYREF
  __m128i v158; // [rsp+500h] [rbp-98h] BYREF
  __m128i v159; // [rsp+510h] [rbp-88h] BYREF
  __m128i v160; // [rsp+520h] [rbp-78h] BYREF
  __m128i v161; // [rsp+530h] [rbp-68h] BYREF
  __m128i v162; // [rsp+540h] [rbp-58h] BYREF
  __int64 v163; // [rsp+550h] [rbp-48h]

  v0 = ptr;
  v1 = &v135;
  v84 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49E8058), (__m128i)(unsigned __int64)nullsub_471);
  v85 = _mm_loadh_ps((const double *)off_49E8078);
  v86 = _mm_loadh_ps((const double *)&off_49E8080);
  v83 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49E8050), (__m128i)(unsigned __int64)nullsub_266);
  sub_25980F0(&qword_4AEADC0, 0, 0);
  v2 = _mm_load_si128(&v83);
  word_4AEAE48 = 0;
  xmmword_4AEAE58 = 0;
  xmmword_4AEAE68 = (__int128)v2;
  v88 = (char *)&off_4A64730;
  qword_4AEAE40 = (__int64)&off_4A64730;
  v87 = (unsigned __int64)off_4A6DFF0;
  qword_4AEADC0 = (__int64)off_4A6DFF0;
  byte_4AEAE38 = 0;
  qword_4AEAE50 = (__int64)off_49D9168;
  sub_259F400(&qword_4AEADC0, "use-dwarf-ranges-base-address-specifier", 39);
  qword_4AEADE8 = 43;
  word_4AEAE48 = 256;
  byte_4AEAE38 = 0;
  byte_4AEADCA = byte_4AEADCA & 0x9F | 0x20;
  qword_4AEADE0 = (__int64)"Use base address specifiers in debug_ranges";
  sub_259EC40(&qword_4AEADC0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AEADC0, &off_47CFE00);
  ptr[0] = "Generate dwarf aranges";
  v135.m128i_i8[0] = 0;
  v141[0] = &v135;
  ptr[1] = &dword_14 + 2;
  v138.m128i_i32[0] = 1;
  sub_2A85D70(qword_4AEAD00, "generate-arange-section", &v138, ptr, v141);
  __cxa_atexit(sub_1F6C9D0, qword_4AEAD00, &off_47CFE00);
  v135.m128i_i8[0] = 0;
  ptr[0] = "Generate DWARF4 type units.";
  v141[0] = &v135;
  ptr[1] = &qword_18 + 3;
  v138.m128i_i32[0] = 1;
  sub_2A85F30(qword_4AEAC40, "generate-type-units", &v138, ptr, v141);
  __cxa_atexit(sub_1F6C9D0, qword_4AEAC40, &off_47CFE00);
  sub_25980F0(&qword_4AEAB80, 0, 0);
  v3 = _mm_load_si128(&v83);
  word_4AEAC08 = 0;
  qword_4AEAC00 = (__int64)v88;
  qword_4AEAB80 = v87;
  xmmword_4AEAC28 = (__int128)v3;
  xmmword_4AEAC18 = 0;
  byte_4AEABF8 = 0;
  qword_4AEAC10 = (__int64)off_49D9168;
  sub_259F400(&qword_4AEAB80, "split-dwarf-cross-cu-references", 31);
  word_4AEAC08 = 256;
  byte_4AEABF8 = 0;
  qword_4AEABA8 = 39;
  byte_4AEAB8A = byte_4AEAB8A & 0x9F | 0x20;
  qword_4AEABA0 = (__int64)"Enable cross-cu references in DWO files";
  sub_259EC40(&qword_4AEAB80);
  __cxa_atexit(sub_1F6C9D0, &qword_4AEAB80, &off_47CFE00);
  v96.m128i_i64[0] = (__int64)"Disable";
  v97.m128i_i64[1] = (__int64)"Never";
  v99.m128i_i64[0] = (__int64)"Enable";
  v100.m128i_i64[1] = (__int64)"In all cases";
  v102.m128i_i64[0] = (__int64)"Default";
  v103.m128i_i64[1] = (__int64)"At top of block or after label";
  v132.m128i_i32[0] = 0;
  v138.m128i_i64[0] = (__int64)&v132;
  v96.m128i_i64[1] = 7;
  v97.m128i_i32[0] = 2;
  v98 = 5;
  v99.m128i_i64[1] = 6;
  v100.m128i_i32[0] = 1;
  v101 = 12;
  v102.m128i_i64[1] = 7;
  v103.m128i_i32[0] = 0;
  v104 = 30;
  sub_2A860F0(
    (unsigned int)ptr,
    (unsigned int)&qword_4AEAB80,
    v4,
    v5,
    v6,
    v7,
    (__int128)_mm_load_si128(&v102),
    (__int128)_mm_load_si128(&v103),
    30,
    (__int128)_mm_load_si128(&v99),
    (__int128)_mm_load_si128(&v100),
    12,
    (__int128)_mm_load_si128(&v96),
    (__int128)_mm_load_si128(&v97),
    5);
  v141[1] = &word_36 + 1;
  v141[0] = "Make an absence of debug location information explicit.";
  v135.m128i_i32[0] = 1;
  sub_2A861C0(qword_4AEA920, "use-unknown-locations", &v135, v141, ptr, &v138);
  v83.m128i_i64[0] = (__int64)&v152;
  if ( ptr[0] != &v152 )
    free(ptr[0]);
  __cxa_atexit(sub_2A7B880, qword_4AEA920, &off_47CFE00);
  v8 = (void *)v83.m128i_i64[0];
  v141[1] = &byte_7;
  v141[0] = "Default";
  si128 = _mm_load_si128((const __m128i *)v141);
  v142.m128i_i64[1] = (__int64)"Default for platform";
  v142.m128i_i32[0] = 0;
  v152 = si128;
  v10 = _mm_load_si128(&v142);
  v143.m128i_i64[1] = (__int64)"Disable";
  v143.m128i_i64[0] = 20;
  v153 = v10;
  v11 = _mm_load_si128(&v143);
  v145.m128i_i64[0] = (__int64)"Disabled.";
  v144.m128i_i64[0] = 7;
  v144.m128i_i32[2] = 1;
  v146.m128i_i64[0] = (__int64)"Apple";
  v147.m128i_i64[1] = (__int64)"Apple";
  v154 = v11;
  v12 = _mm_load_si128(&v144);
  v148.m128i_i64[1] = (__int64)"Dwarf";
  v150.m128i_i64[0] = (__int64)"DWARF";
  v132.m128i_i32[0] = 0;
  v138.m128i_i64[0] = (__int64)&v132;
  v145.m128i_i64[1] = 9;
  v146.m128i_i64[1] = 5;
  v147.m128i_i32[0] = 2;
  v148.m128i_i64[0] = 5;
  v149.m128i_i64[0] = 5;
  v149.m128i_i32[2] = 3;
  v150.m128i_i64[1] = 5;
  ptr[0] = (void *)v83.m128i_i64[0];
  v155 = v12;
  v13 = _mm_load_si128(&v145);
  ptr[1] = (void *)0x400000004LL;
  v156 = v13;
  v14 = _mm_load_si128(&v146);
  v141[0] = "Output dwarf accelerator tables.";
  v157 = v14;
  v15 = _mm_load_si128(&v147);
  v141[1] = &qword_20;
  v158 = v15;
  v16 = _mm_load_si128(&v148);
  v135.m128i_i32[0] = 1;
  v159 = v16;
  v160 = _mm_load_si128(&v149);
  v161 = _mm_load_si128(&v150);
  sub_2A86640(qword_4AEA6C0, "accel-tables", &v135, v141, ptr, &v138);
  if ( ptr[0] != v8 )
    free(ptr[0]);
  __cxa_atexit(sub_2A7B920, qword_4AEA6C0, &off_47CFE00);
  v105.m128i_i64[0] = (__int64)"Disable";
  v106.m128i_i64[1] = (__int64)"Disabled";
  v108.m128i_i64[0] = (__int64)"Enable";
  v109.m128i_i64[1] = (__int64)"Enabled";
  v111.m128i_i64[0] = (__int64)"Default";
  v138.m128i_i64[0] = (__int64)&v132;
  v112.m128i_i64[1] = (__int64)"Default for platform";
  v132.m128i_i32[0] = 0;
  v105.m128i_i64[1] = 7;
  v106.m128i_i32[0] = 2;
  v107 = 8;
  v108.m128i_i64[1] = 6;
  v109.m128i_i32[0] = 1;
  v110 = 7;
  v111.m128i_i64[1] = 7;
  v112.m128i_i32[0] = 0;
  v113 = 20;
  sub_2A860F0(
    (unsigned int)ptr,
    (unsigned int)qword_4AEA6C0,
    v17,
    v18,
    v19,
    v20,
    (__int128)_mm_load_si128(&v111),
    (__int128)_mm_load_si128(&v112),
    20,
    (__int128)_mm_load_si128(&v108),
    (__int128)_mm_load_si128(&v109),
    7,
    (__int128)_mm_load_si128(&v105),
    (__int128)_mm_load_si128(&v106),
    8);
  v141[1] = &qword_28 + 7;
  v141[0] = "Use inlined strings rather than string section.";
  v135.m128i_i32[0] = 1;
  sub_2A861C0(qword_4AEA460, "dwarf-inlined-strings", &v135, v141, ptr, &v138);
  if ( ptr[0] != (void *)v83.m128i_i64[0] )
    free(ptr[0]);
  __cxa_atexit(sub_2A7B880, qword_4AEA460, &off_47CFE00);
  v135.m128i_i8[0] = 0;
  ptr[0] = "Disable emission .debug_ranges section.";
  v141[0] = &v135;
  ptr[1] = &qword_20 + 7;
  v138.m128i_i32[0] = 1;
  sub_2A85D70(qword_4AEA3A0, "no-dwarf-ranges-section", &v138, ptr, v141);
  __cxa_atexit(sub_1F6C9D0, qword_4AEA3A0, &off_47CFE00);
  v114.m128i_i64[0] = (__int64)"Disable";
  v115.m128i_i64[1] = (__int64)"Disabled";
  v117.m128i_i64[0] = (__int64)"Enable";
  v118.m128i_i64[1] = (__int64)"Enabled";
  v120.m128i_i64[0] = (__int64)"Default";
  v121.m128i_i64[1] = (__int64)"Default for platform";
  v114.m128i_i64[1] = 7;
  v115.m128i_i32[0] = 2;
  v116 = 8;
  v117.m128i_i64[1] = 6;
  v118.m128i_i32[0] = 1;
  v119 = 7;
  v120.m128i_i64[1] = 7;
  v121.m128i_i32[0] = 0;
  v122 = 20;
  sub_2A860F0(
    (unsigned int)ptr,
    (unsigned int)qword_4AEA3A0,
    v21,
    v22,
    v23,
    v24,
    (__int128)_mm_load_si128(&v120),
    (__int128)_mm_load_si128(&v121),
    20,
    (__int128)_mm_load_si128(&v117),
    (__int128)_mm_load_si128(&v118),
    7,
    (__int128)_mm_load_si128(&v114),
    (__int128)_mm_load_si128(&v115),
    8);
  sub_25980F0(&qword_4AEA140, 0, 0);
  v25 = _mm_load_si128((const __m128i *)&v86);
  v26 = _mm_load_si128(&v84);
  dword_4AEA1B8 = 0;
  dword_4AEA1C8 = 0;
  byte_4AEA1CC = 0;
  qword_4AEA140 = (__int64)&off_4A76D60;
  qword_4AEA1E0 = qword_4AEA1F0;
  qword_4AEA1C0 = (__int64)off_4A76CF0;
  qword_4AEA1E8 = 0x800000000LL;
  xmmword_4AEA1D0 = (__int128)v25;
  xmmword_4AEA370 = 0;
  xmmword_4AEA380 = (__int128)v26;
  sub_259F400(&qword_4AEA140, "dwarf-sections-as-references", 28);
  v27 = (char *)ptr[0];
  qword_4AEA168 = 53;
  byte_4AEA14A = byte_4AEA14A & 0x9F | 0x20;
  qword_4AEA160 = (__int64)"Use sections+offset as references rather than labels.";
  if ( ptr[0] != (char *)ptr[0] + 40 * LODWORD(ptr[1]) )
  {
    v86.m128_u64[0] = (unsigned __int64)ptr;
    v28 = (char *)ptr[0] + 40 * LODWORD(ptr[1]);
    v87 = (unsigned __int64)&v135;
    do
    {
      v29 = *((_QWORD *)v27 + 3);
      v30 = 1;
      v31 = (const __m128i *)v141;
      v32 = (unsigned int)qword_4AEA1E8;
      v33 = *(void **)v27;
      v34 = *((void **)v27 + 1);
      v35 = *((_DWORD *)v27 + 4);
      v142.m128i_i64[1] = *((_QWORD *)v27 + 4);
      v142.m128i_i64[0] = v29;
      v36 = qword_4AEA1E8;
      v141[0] = v33;
      v141[1] = v34;
      v143.m128i_i64[0] = (__int64)off_4A76CF0;
      v143.m128i_i8[12] = 1;
      v143.m128i_i32[2] = v35;
      if ( HIDWORD(qword_4AEA1E8) < (unsigned __int64)(unsigned int)qword_4AEA1E8 + 1 )
      {
        if ( v141 < qword_4AEA1E0 || v141 >= (void **)((char *)qword_4AEA1E0 + 48 * (unsigned int)qword_4AEA1E8) )
        {
          v90 = -1;
          LOBYTE(v89) = 0;
        }
        else
        {
          LOBYTE(v89) = 1;
          v90 = 0xAAAAAAAAAAAAAAABLL * (((char *)v141 - (_BYTE *)qword_4AEA1E0) >> 4);
        }
        LODWORD(v88) = v35;
        v74 = sub_25D5F70(&qword_4AEA1F0[-2], qword_4AEA1F0, (unsigned int)qword_4AEA1E8 + 1LL, 48, &v138);
        v75 = (__int64 *)qword_4AEA1E0;
        v35 = (int)v88;
        v76 = (char *)v74;
        v77 = (const __m128i *)qword_4AEA1E0;
        v78 = (const __m128i *)((char *)qword_4AEA1E0 + 48 * (unsigned int)qword_4AEA1E8);
        if ( qword_4AEA1E0 != v78 )
        {
          do
          {
            v79 = _mm_loadu_si128(v77);
            v80 = v77[2].m128i_i32[2];
            v77 += 3;
            v74 += 48;
            *(__m128i *)(v74 - 48) = v79;
            v81 = _mm_loadu_si128(v77 - 2);
            *(_DWORD *)(v74 - 8) = v80;
            LOBYTE(v80) = v77[-1].m128i_i8[12];
            *(__m128i *)(v74 - 32) = v81;
            *(_BYTE *)(v74 - 4) = v80;
            *(_QWORD *)(v74 - 16) = off_4A76CF0;
          }
          while ( v78 != v77 );
        }
        v82 = v138.m128i_i32[0];
        if ( v75 != qword_4AEA1F0 )
        {
          v92 = v138.m128i_i64[0];
          v91 = v76;
          LODWORD(v88) = v35;
          free(v75);
          v82 = v92;
          v76 = v91;
          v35 = (int)v88;
        }
        v32 = (unsigned int)qword_4AEA1E8;
        qword_4AEA1E0 = v76;
        HIDWORD(qword_4AEA1E8) = v82;
        v36 = qword_4AEA1E8;
        if ( (_BYTE)v89 )
        {
          v31 = (const __m128i *)&v76[48 * v90];
          v35 = v31[2].m128i_i32[2];
          v30 = v31[2].m128i_i8[12];
        }
        else
        {
          v30 = 1;
          v31 = (const __m128i *)v141;
        }
      }
      v27 += 40;
      v37 = (__m128i *)((char *)qword_4AEA1E0 + 48 * v32);
      v38 = *((_QWORD *)&xmmword_4AEA1D0 + 1);
      *v37 = _mm_loadu_si128(v31);
      v39 = _mm_loadu_si128(v31 + 1);
      v37[2].m128i_i8[12] = v30;
      v37[2].m128i_i32[2] = v35;
      v37[2].m128i_i64[0] = (__int64)off_4A76CF0;
      v37[1] = v39;
      LODWORD(qword_4AEA1E8) = v36 + 1;
      sub_259ED10(v38, v33, v34);
    }
    while ( v28 != v27 );
    v0 = (void **)v86.m128_u64[0];
    v1 = (__m128i *)v87;
  }
  dword_4AEA1B8 = 0;
  byte_4AEA1CC = 1;
  dword_4AEA1C8 = 0;
  sub_259EC40(&qword_4AEA140);
  if ( ptr[0] != (void *)v83.m128i_i64[0] )
    free(ptr[0]);
  __cxa_atexit(sub_2A7B880, &qword_4AEA140, &off_47CFE00);
  v135.m128i_i8[0] = 0;
  ptr[0] = "Emit the GNU .debug_macro format with DWARF <5";
  v141[0] = v1;
  ptr[1] = &qword_28 + 6;
  v138.m128i_i32[0] = 1;
  sub_2A85F30(qword_4AEA080, "use-gnu-debug-macro", &v138, v0, v141);
  __cxa_atexit(sub_1F6C9D0, qword_4AEA080, &off_47CFE00);
  v123.m128i_i64[0] = (__int64)"Disable";
  v124.m128i_i64[1] = (__int64)"Disabled";
  v126.m128i_i64[0] = (__int64)"Enable";
  v127.m128i_i64[1] = (__int64)"Enabled";
  v129.m128i_i64[0] = (__int64)"Default";
  v130.m128i_i64[1] = (__int64)"Default for platform";
  v123.m128i_i64[1] = 7;
  v124.m128i_i32[0] = 2;
  v125 = 8;
  v126.m128i_i64[1] = 6;
  v127.m128i_i32[0] = 1;
  v128 = 7;
  v129.m128i_i64[1] = 7;
  v130.m128i_i32[0] = 0;
  v131 = 20;
  sub_2A860F0(
    (_DWORD)v0,
    (unsigned int)qword_4AEA080,
    v40,
    v41,
    v42,
    v43,
    (__int128)_mm_load_si128(&v129),
    (__int128)_mm_load_si128(&v130),
    20,
    (__int128)_mm_load_si128(&v126),
    (__int128)_mm_load_si128(&v127),
    7,
    (__int128)_mm_load_si128(&v123),
    (__int128)_mm_load_si128(&v124),
    8);
  sub_25980F0(&qword_4AE9E20, 0, 0);
  v44 = _mm_load_si128((const __m128i *)&v85);
  v45 = _mm_load_si128(&v84);
  dword_4AE9E98 = 0;
  dword_4AE9EA8 = 0;
  byte_4AE9EAC = 0;
  qword_4AE9E20 = (__int64)&off_4A76D60;
  qword_4AE9EC0 = qword_4AE9ED0;
  qword_4AE9EA0 = (__int64)off_4A76CF0;
  qword_4AE9EC8 = 0x800000000LL;
  xmmword_4AE9EB0 = (__int128)v44;
  xmmword_4AEA050 = 0;
  xmmword_4AEA060 = (__int128)v45;
  sub_259F400(&qword_4AE9E20, "dwarf-op-convert", 16);
  v46 = (char *)ptr[0];
  qword_4AE9E48 = 48;
  byte_4AE9E2A = byte_4AE9E2A & 0x9F | 0x20;
  qword_4AE9E40 = (__int64)"Enable use of the DWARFv5 DW_OP_convert operator";
  if ( ptr[0] != (char *)ptr[0] + 40 * LODWORD(ptr[1]) )
  {
    v84.m128i_i64[0] = (__int64)v0;
    v47 = (char *)ptr[0] + 40 * LODWORD(ptr[1]);
    do
    {
      v48 = *((_QWORD *)v46 + 3);
      v49 = 1;
      v50 = (const __m128i *)v141;
      v51 = (unsigned int)qword_4AE9EC8;
      v52 = *(void **)v46;
      v53 = *((void **)v46 + 1);
      v54 = *((_DWORD *)v46 + 4);
      v142.m128i_i64[1] = *((_QWORD *)v46 + 4);
      v142.m128i_i64[0] = v48;
      v55 = qword_4AE9EC8;
      v141[0] = v52;
      v141[1] = v53;
      v143.m128i_i64[0] = (__int64)off_4A76CF0;
      v143.m128i_i8[12] = 1;
      v143.m128i_i32[2] = v54;
      if ( HIDWORD(qword_4AE9EC8) < (unsigned __int64)(unsigned int)qword_4AE9EC8 + 1 )
      {
        if ( v141 < qword_4AE9EC0 || v141 >= (void **)((char *)qword_4AE9EC0 + 48 * (unsigned int)qword_4AE9EC8) )
        {
          v87 = -1;
          v86.m128_i8[0] = 0;
        }
        else
        {
          v86.m128_i8[0] = 1;
          v87 = 0xAAAAAAAAAAAAAAABLL * (((char *)v141 - (_BYTE *)qword_4AE9EC0) >> 4);
        }
        v85.m128_i32[0] = v54;
        v65 = sub_25D5F70(&qword_4AE9ED0[-2], qword_4AE9ED0, (unsigned int)qword_4AE9EC8 + 1LL, 48, &v138);
        v66 = (__int64 *)qword_4AE9EC0;
        v54 = v85.m128_i32[0];
        v67 = (char *)v65;
        v68 = (const __m128i *)qword_4AE9EC0;
        v69 = (const __m128i *)((char *)qword_4AE9EC0 + 48 * (unsigned int)qword_4AE9EC8);
        if ( qword_4AE9EC0 != v69 )
        {
          do
          {
            v70 = _mm_loadu_si128(v68);
            v71 = v68[2].m128i_i32[2];
            v68 += 3;
            v65 += 48;
            *(__m128i *)(v65 - 48) = v70;
            v72 = _mm_loadu_si128(v68 - 2);
            *(_DWORD *)(v65 - 8) = v71;
            LOBYTE(v71) = v68[-1].m128i_i8[12];
            *(__m128i *)(v65 - 32) = v72;
            *(_BYTE *)(v65 - 4) = v71;
            *(_QWORD *)(v65 - 16) = off_4A76CF0;
          }
          while ( v69 != v68 );
        }
        v73 = v138.m128i_i32[0];
        if ( v66 != qword_4AE9ED0 )
        {
          v89 = v138.m128i_i64[0];
          v88 = v67;
          v85.m128_i32[0] = v54;
          free(v66);
          v73 = v89;
          v67 = v88;
          v54 = v85.m128_i32[0];
        }
        v51 = (unsigned int)qword_4AE9EC8;
        qword_4AE9EC0 = v67;
        HIDWORD(qword_4AE9EC8) = v73;
        v55 = qword_4AE9EC8;
        if ( v86.m128_i8[0] )
        {
          v50 = (const __m128i *)&v67[48 * v87];
          v54 = v50[2].m128i_i32[2];
          v49 = v50[2].m128i_i8[12];
        }
        else
        {
          v49 = 1;
          v50 = (const __m128i *)v141;
        }
      }
      v46 += 40;
      v56 = (__m128i *)((char *)qword_4AE9EC0 + 48 * v51);
      v57 = *((_QWORD *)&xmmword_4AE9EB0 + 1);
      *v56 = _mm_loadu_si128(v50);
      v58 = _mm_loadu_si128(v50 + 1);
      v56[2].m128i_i8[12] = v49;
      v56[2].m128i_i32[2] = v54;
      v56[2].m128i_i64[0] = (__int64)off_4A76CF0;
      v56[1] = v58;
      LODWORD(qword_4AE9EC8) = v55 + 1;
      sub_259ED10(v57, v52, v53);
    }
    while ( v47 != v46 );
    v0 = (void **)v84.m128i_i64[0];
  }
  dword_4AE9E98 = 0;
  byte_4AE9EAC = 1;
  dword_4AE9EA8 = 0;
  sub_259EC40(&qword_4AE9E20);
  if ( ptr[0] != (void *)v83.m128i_i64[0] )
    free(ptr[0]);
  __cxa_atexit(sub_2A7B880, &qword_4AE9E20, &off_47CFE00);
  v132.m128i_i64[0] = (__int64)"Abstract";
  v133.m128i_i64[1] = (__int64)"Abstract subprograms";
  v135.m128i_i64[0] = (__int64)"All";
  v136.m128i_i64[1] = (__int64)"All";
  v138.m128i_i64[0] = (__int64)"Default";
  v139.m128i_i64[1] = (__int64)"Default for platform";
  v93 = 0;
  v95 = &v93;
  v132.m128i_i64[1] = 8;
  v133.m128i_i32[0] = 2;
  v134 = 20;
  v135.m128i_i64[1] = 3;
  v136.m128i_i32[0] = 1;
  v137 = 3;
  v138.m128i_i64[1] = 7;
  v139.m128i_i32[0] = 0;
  v140 = 20;
  sub_2A860F0(
    (_DWORD)v0,
    (unsigned int)&qword_4AE9E20,
    v59,
    v60,
    v61,
    v62,
    (__int128)_mm_load_si128(&v138),
    (__int128)_mm_load_si128(&v139),
    20,
    (__int128)_mm_load_si128(&v135),
    (__int128)_mm_load_si128(&v136),
    3,
    (__int128)_mm_load_si128(&v132),
    (__int128)_mm_load_si128(&v133),
    20);
  v141[1] = &qword_28 + 4;
  v141[0] = "Which DWARF linkage-name attributes to emit.";
  v94 = 1;
  sub_2A86AC0(qword_4AE9BC0, "dwarf-linkage-names", &v94, v141, v0, &v95);
  if ( ptr[0] != (void *)v83.m128i_i64[0] )
    free(ptr[0]);
  __cxa_atexit(sub_2A7B9C0, qword_4AE9BC0, &off_47CFE00);
  ptr[0] = "Default";
  v152.m128i_i64[1] = (__int64)"Default address minimization strategy";
  v153.m128i_i64[1] = (__int64)"Ranges";
  v155.m128i_i64[0] = (__int64)"Use rnglists for contiguous ranges if that allows using a pre-existing base address";
  v156.m128i_i64[0] = (__int64)"Expressions";
  v157.m128i_i64[1] = (__int64)"Use exprloc addrx+offset expressions for any address with a prior base address";
  v158.m128i_i64[1] = (__int64)"Form";
  v160.m128i_i64[0] = (__int64)"Use addrx+offset extension form for any address with a prior base address";
  v161.m128i_i64[0] = (__int64)"Disabled";
  v95 = &v93;
  v162.m128i_i64[1] = (__int64)"Stuff";
  v93 = 0;
  v141[1] = (void *)0x400000000LL;
  ptr[1] = &byte_7;
  v152.m128i_i32[0] = 0;
  v153.m128i_i64[0] = 37;
  v154.m128i_i64[0] = 6;
  v154.m128i_i32[2] = 2;
  v155.m128i_i64[1] = 83;
  v156.m128i_i64[1] = 11;
  v157.m128i_i32[0] = 3;
  v158.m128i_i64[0] = 78;
  v159.m128i_i64[0] = 4;
  v159.m128i_i32[2] = 4;
  v160.m128i_i64[1] = 73;
  v161.m128i_i64[1] = 8;
  v162.m128i_i32[0] = 1;
  v163 = 5;
  v141[0] = &v142;
  sub_25D6060(v141, &v142, 5, 40);
  v63 = (__m128i *)((char *)v141[0] + 40 * LODWORD(v141[1]));
  *v63 = _mm_load_si128((const __m128i *)ptr);
  v63[1] = _mm_load_si128(&v152);
  v63[2] = _mm_load_si128(&v153);
  v63[3] = _mm_load_si128(&v154);
  v63[4] = _mm_load_si128(&v155);
  v63[5] = _mm_load_si128(&v156);
  v63[6] = _mm_load_si128(&v157);
  v63[7] = _mm_load_si128(&v158);
  v63[8] = _mm_load_si128(&v159);
  v63[9] = _mm_load_si128(&v160);
  v63[10] = _mm_load_si128(&v161);
  v63[11] = _mm_load_si128(&v162);
  v63[12].m128i_i64[0] = v163;
  ptr[0] = "Always use DW_AT_ranges in DWARFv5 whenever it could allow more address pool entry sharing to reduce relocations/object size";
  LODWORD(v141[1]) += 5;
  ptr[1] = &dword_7C;
  v94 = 1;
  sub_2A86F40(qword_4AE9960, "minimize-addr-in-v5", &v94, v0, v141, &v95);
  if ( v141[0] != &v142 )
    free(v141[0]);
  return __cxa_atexit(sub_2A7BA60, qword_4AE9960, &off_47CFE00);
}

