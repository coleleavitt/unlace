__int64 __fastcall sub_10160(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  const char *v17; // r14
  const char *v18; // r13
  const char *v19; // r15
  const char *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  const char *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rax
  int v31; // r14d
  __int64 v32; // rax
  int v33; // eax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // r15
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // r14d
  __int64 v45; // rax
  int v46; // r13d
  __int64 v47; // rax
  __int64 v48; // r12
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  int v57; // eax
  __int64 v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  const char *v65; // rdx
  const char *v66; // rdi
  __int64 v67; // rsi
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  const char *v74; // rdx
  __int64 v75; // rsi
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  const char *v84; // rdx
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rsi
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  const char *v95; // rdx
  __int64 v96; // rsi
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  const char *v103; // rdx
  __int64 v104; // rax
  __int64 v105; // rax
  const char *v106; // rdx
  const char *v107; // r12
  __int64 v108; // rax
  int v109; // r15d
  __int64 v110; // rax
  int v111; // eax
  __int64 v112; // rax
  int v113; // eax
  const char *v114; // rdx
  __m128i v115; // [rsp+10h] [rbp-1A0h]
  __int128 v116; // [rsp+10h] [rbp-1A0h]
  unsigned int v117; // [rsp+2Ch] [rbp-184h]
  const char *v118; // [rsp+30h] [rbp-180h] BYREF
  __int64 v119; // [rsp+38h] [rbp-178h]
  const char *v120; // [rsp+50h] [rbp-160h] BYREF
  __int64 v121; // [rsp+58h] [rbp-158h]
  const char *v122; // [rsp+70h] [rbp-140h] BYREF
  __int64 v123; // [rsp+78h] [rbp-138h]
  const char *v124; // [rsp+90h] [rbp-120h] BYREF
  __int128 v125; // [rsp+98h] [rbp-118h]
  const char *v126; // [rsp+A8h] [rbp-108h]
  __int128 v127; // [rsp+B0h] [rbp-100h]
  int v128; // [rsp+C0h] [rbp-F0h]
  char v129; // [rsp+C4h] [rbp-ECh]
  __m128i v130; // [rsp+D0h] [rbp-E0h] BYREF
  __int64 v131; // [rsp+E0h] [rbp-D0h]
  __m128i v132; // [rsp+F0h] [rbp-C0h] BYREF
  __m128i v133; // [rsp+110h] [rbp-A0h] BYREF
  __m128i v134; // [rsp+130h] [rbp-80h] BYREF
  __m128i v135; // [rsp+150h] [rbp-60h] BYREF
  unsigned __int64 v136; // [rsp+178h] [rbp-38h]

  v136 = __readfsqword(0x28u);
  v9 = sub_BB20();
  v117 = sub_A170(v9);
  v10 = sub_BB20();
  sub_A290((__int64)&v130, v10, v11, v12);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  sub_E8A0((__int64)&v124, v10, v13, v14, v15, v16, (__int128)_mm_load_si128(&v130));
  v17 = s1;
  if ( (_QWORD)v125 )
    v17 = v124;
  sub_C260((__int64)&v122);
  v18 = s1;
  if ( v123 )
    v18 = v122;
  sub_E960((__int64)&v120, v117);
  v19 = s1;
  if ( v121 )
    v19 = v120;
  v115.m128i_i64[1] = _mm_loadu_si128((const __m128i *)&a8).m128i_i64[1];
  sub_E750((__int64)&v118);
  v20 = s1;
  if ( v119 )
    v20 = v118;
  sub_67C0((__int64 *)a1, (__int64)"%s kind=%s name=%s type=%s", v20, v19, v18, v17);
  if ( v118 )
  {
    v119 = 0;
    qfree(v118);
  }
  if ( v120 )
  {
    v121 = 0;
    qfree(v120);
  }
  if ( v122 )
  {
    v123 = 0;
    qfree(v122);
  }
  if ( v124 )
  {
    *(_QWORD *)&v125 = 0;
    qfree(v124);
  }
  v21 = sub_BB20();
  v22 = sub_AD40(v21);
  if ( v22 < 0 )
  {
    v23 = " sizeof=%lld";
    sub_6940((__int64 *)a1, (__int64)" sizeof=%lld", v22);
    v24 = v117;
    if ( v117 <= 0x24 )
    {
LABEL_19:
      if ( (unsigned int)v24 > 1 )
      {
        switch ( v24 )
        {
          case 2LL:
          case 3LL:
          case 4LL:
            v37 = sub_BB20();
            v38 = sub_B310(v37);
            v39 = sub_BB20();
            v115.m128i_i64[0] = v131;
            v44 = sub_B340(v39, (int)v23, v40, v41, v42, v43, (__int128)_mm_load_si128(&v130), (__int128)v115);
            v45 = sub_BB20();
            v46 = sub_B2E0(v45);
            v47 = sub_BB20();
            v48 = sub_AAD0(v47);
            v49 = sub_BB20();
            v50 = sub_B160(v49);
            sub_6940(
              (__int64 *)a1,
              (__int64)" definition=%d align=%lld (required=%d packed=%d packalign=%lld)",
              v50,
              v48,
              v46,
              v44,
              v38);
            v51 = sub_BB20();
            *((_QWORD *)&v116 + 1) = _mm_loadu_si128((const __m128i *)&a8).m128i_i64[1];
            if ( (unsigned int)sub_B160(v51) && ((v117 - 2) & 0xFFFFFFFD) == 0 )
            {
              v52 = sub_BB20();
              *(_QWORD *)&v116 = v131;
              v57 = sub_B490(
                      v52,
                      (int)" definition=%d align=%lld (required=%d packed=%d packalign=%lld)",
                      v53,
                      v54,
                      v55,
                      v56,
                      (__int128)_mm_load_si128(&v130),
                      v116);
              sub_6940((__int64 *)a1, (__int64)" vptr=%d", v57);
            }
            break;
          case 5LL:
            v96 = sub_BB20();
            sub_AA10((__int64)&v133, v96, v97, v98);
            sub_E8A0((__int64)&v124, v96, v99, v100, v101, v102, (__int128)_mm_load_si128(&v133));
            v103 = s1;
            if ( (_QWORD)v125 )
              v103 = v124;
            sub_6940((__int64 *)a1, (__int64)" integral=%s", v103);
            v66 = v124;
            if ( v124 )
              goto LABEL_72;
            break;
          case 6LL:
            v25 = sub_BB20();
            v26 = sub_AF20(v25);
            if ( v26 < 0 )
              sub_6940((__int64 *)a1, (__int64)" offset=%lld", v26);
            else
              sub_6940((__int64 *)a1, (__int64)" offset=0x%llX", v26 >> 3);
            v27 = sub_BB20();
            if ( (unsigned int)sub_ACE0(v27) )
            {
              v28 = sub_BB20();
              v29 = sub_AD10(v28);
              sub_6940((__int64 *)a1, (__int64)" nbits=%d", v29);
            }
            v30 = sub_BB20();
            v31 = sub_B400(v30);
            v32 = sub_BB20();
            v33 = sub_B430(v32);
            sub_6940((__int64 *)a1, (__int64)" fda=%d packed=%d", v33, v31);
            break;
          case 7LL:
            v104 = sub_BB20();
            v105 = sub_AAA0(v104);
            sub_6940((__int64 *)a1, (__int64)" value=%lld", v105);
            break;
          case 8LL:
            sub_C6E0((__int64)&v124);
            v106 = s1;
            if ( (_QWORD)v125 )
              v106 = v124;
            sub_6940((__int64 *)a1, (__int64)" mangled=%s", v106);
            v66 = v124;
            if ( v124 )
              goto LABEL_72;
            break;
          case 11LL:
            v75 = sub_BB20();
            sub_A530((__int64)&v134, v75, v76, v77, v78, v79, (__int128)_mm_load_si128(&v130), v131);
            sub_E8A0((__int64)&v124, v75, v80, v81, v82, v83, (__int128)_mm_load_si128(&v134));
            v84 = s1;
            if ( (_QWORD)v125 )
              v84 = v124;
            sub_6940((__int64 *)a1, (__int64)" superclass=%s", v84);
            v66 = v124;
            if ( v124 )
              goto LABEL_72;
            break;
          case 12LL:
            v85 = sub_BB20();
            sub_ABC0((__int64)&v135, v85, v86, v87);
            v88 = sub_BB20();
            sub_A290((__int64)&v134, v88, v89, v90);
            sub_E8A0((__int64)&v124, v88, v91, v92, v93, v94, (__int128)_mm_load_si128(&v134));
            v95 = s1;
            if ( (_QWORD)v125 )
              v95 = v124;
            sub_6940((__int64 *)a1, (__int64)" interface=%s", v95);
            v66 = v124;
            if ( v124 )
              goto LABEL_72;
            break;
          case 16LL:
          case 17LL:
            v58 = sub_BB20();
            sub_A5C0((__int64)&v135, v58, v59, v60);
            sub_E8A0((__int64)&v124, v58, v61, v62, v63, v64, (__int128)_mm_load_si128(&v135));
            v65 = s1;
            if ( (_QWORD)v125 )
              v65 = v124;
            sub_6940((__int64 *)a1, (__int64)" rettype=%s", v65);
            v66 = v124;
            if ( v124 )
              goto LABEL_72;
            break;
          case 20LL:
          case 36LL:
            v67 = sub_BB20();
            sub_A4A0((__int64)&v132, v67, v68, v69);
            sub_E8A0((__int64)&v124, v67, v70, v71, v72, v73, (__int128)_mm_load_si128(&v132));
            v74 = s1;
            if ( (_QWORD)v125 )
              v74 = v124;
            sub_6940((__int64 *)a1, (__int64)" actual=%s", v74);
            v66 = v124;
            if ( v124 )
              goto LABEL_72;
            break;
          case 21LL:
            sub_C6E0((__int64)&v124);
            v107 = s1;
            if ( (_QWORD)v125 )
              v107 = v124;
            v108 = sub_BB20();
            v109 = sub_B1F0(v108);
            v110 = sub_BB20();
            v111 = sub_B1C0(v110);
            sub_6940((__int64 *)a1, (__int64)" static=%d virtual=%d mangled=%s", v111, v109, v107);
            v66 = v124;
            if ( v124 )
              goto LABEL_72;
            break;
          case 25LL:
            v112 = sub_BB20();
            v113 = sub_B1F0(v112);
            sub_6940((__int64 *)a1, (__int64)" virtual=%d", v113);
            break;
          default:
            return a1;
        }
      }
      return a1;
    }
  }
  else
  {
    v23 = " sizeof=0x%llX";
    sub_6940((__int64 *)a1, (__int64)" sizeof=0x%llX", v22);
    v24 = v117;
    if ( v117 <= 0x24 )
      goto LABEL_19;
  }
  if ( v117 == 501 )
  {
    v124 = nullptr;
    v125 = 0;
    v127 = 0;
    v126 = nullptr;
    v128 = 0;
    v129 = 0;
    if ( (unsigned __int8)sub_DD20(&v124) )
    {
      v114 = s1;
      if ( (_QWORD)v127 )
        v114 = v126;
      sub_6940((__int64 *)a1, (__int64)" body=%s", v114);
      if ( v129 )
        sub_6940((__int64 *)a1, (__int64)" nargs=%d", v128);
    }
    if ( v126 )
    {
      *(_QWORD *)&v127 = 0;
      qfree(v126);
    }
    v66 = v124;
    if ( v124 )
    {
LABEL_72:
      *(_QWORD *)&v125 = 0;
      qfree(v66);
    }
  }
  else if ( v117 == 801 )
  {
    v35 = sub_BB20();
    v36 = sub_B580(v35);
    sub_6940((__int64 *)a1, (__int64)" offset=%lld", v36);
  }
  return a1;
}
