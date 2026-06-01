__int64 __fastcall sub_19B830(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // r12
  __int64 module_data; // rbx
  __int64 v13; // rax
  size_t v14; // r13
  __int64 v15; // rax
  unsigned __int64 v16; // r13
  __int64 v17; // rdi
  __int32 v18; // esi
  __m128i v19; // xmm0
  __int32 v20; // edx
  __int32 v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rax
  unsigned int v25; // eax
  __int64 v26; // rdi
  __int16 v27; // r8
  __int16 v28; // cx
  __int16 v29; // cx
  __int16 v30; // cx
  int v31; // edx
  unsigned __int64 v32; // rsi
  char *v33; // r13
  __int64 v34; // rax
  unsigned __int64 v35; // r14
  char *v36; // rax
  __int64 v37; // r8
  unsigned __int64 v38; // rsi
  char *v39; // r13
  __int128 v40; // rax
  unsigned __int64 v41; // rdi
  unsigned __int64 v42; // rcx
  __m128i v43; // xmm0
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // r14
  __int64 v46; // r8
  char *v47; // rsi
  char *v48; // r13
  __int128 v49; // rax
  unsigned __int64 *v50; // rdi
  unsigned __int64 v51; // rcx
  __m128i v52; // xmm0
  __m128 v53; // xmm0
  char *v54; // rax
  __int64 v55; // r13
  __int64 bpt_kernel_interface; // rax
  __int64 (__fastcall *v57)(int, int, int, int, int, int, int, int, int, __int64, __int64, int, int, __int64, __int64, int, __int64); // rsi
  __m128 v58; // xmm4
  __m128 v59; // xmm5
  __int64 v60; // rcx
  __int64 v61; // r8
  int v62; // eax
  __int64 v63; // rdi
  __int64 v64; // rdx
  int v65; // eax
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // r15
  __int64 v69; // r12
  __m128i v70; // xmm0
  __int64 v71; // rax
  __int64 v72; // r15
  unsigned __int64 v73; // rdx
  __int64 v74; // r12
  __int64 v75; // rbx
  __int64 *v76; // rax
  __int64 v77; // rdi
  __int64 v79; // rdi
  __int64 flags; // rax
  char *v81; // rax
  __m128i v82; // xmm0
  unsigned __int64 v83; // rax
  __m128i v84; // xmm0
  unsigned __int64 v85; // rax
  void *v86; // rax
  const void *v87; // rsi
  __int64 (__fastcall *v88)(int, int, int, int, int, int, int, int, int, __int64, __int64, int, int, __int64, __int64, int, __int64); // r14
  void *v89; // rax
  __int64 v90; // rax
  __int64 v91; // rdi
  _QWORD *v92; // rsi
  __int64 v93; // rax
  const void *v94; // r8
  void *v95; // rdi
  char *v96; // r15
  __m128i v97; // [rsp+8h] [rbp-158h] BYREF
  const __m128i *v98; // [rsp+18h] [rbp-148h]
  __int16 v99; // [rsp+2Eh] [rbp-132h]
  unsigned __int16 v100; // [rsp+30h] [rbp-130h]
  __int16 v101; // [rsp+32h] [rbp-12Eh] BYREF
  unsigned int v102; // [rsp+34h] [rbp-12Ch]
  __int64 v103; // [rsp+38h] [rbp-128h]
  __int64 v104; // [rsp+40h] [rbp-120h] BYREF
  __int128 v105; // [rsp+48h] [rbp-118h]
  void *dest; // [rsp+60h] [rbp-100h] BYREF
  __int128 v107; // [rsp+68h] [rbp-F8h]
  unsigned __int64 v108; // [rsp+80h] [rbp-E0h] BYREF
  __int128 v109; // [rsp+88h] [rbp-D8h]
  char *v110; // [rsp+A0h] [rbp-C0h] BYREF
  __m128i v111; // [rsp+A8h] [rbp-B8h] BYREF
  __int64 v112; // [rsp+C0h] [rbp-A0h] BYREF
  void *src; // [rsp+C8h] [rbp-98h] BYREF
  __int128 v114; // [rsp+D0h] [rbp-90h]
  __m128i v115; // [rsp+E0h] [rbp-80h] BYREF
  __int64 v116; // [rsp+F0h] [rbp-70h]
  __int64 v117; // [rsp+F8h] [rbp-68h]
  __int64 v118; // [rsp+100h] [rbp-60h]
  unsigned __int64 v119; // [rsp+108h] [rbp-58h]
  __int64 v120; // [rsp+110h] [rbp-50h]
  __int64 v121; // [rsp+118h] [rbp-48h]
  unsigned __int64 v122; // [rsp+128h] [rbp-38h]

  v98 = (const __m128i *)a1;
  v122 = __readfsqword(0x28u);
  if ( dbg && (!*(_QWORD *)(dbg + 72LL) || !*(_BYTE *)(dbg + 80LL)) && (*(_BYTE *)(dbg + 37LL) & 2) == 0 )
    return -1;
  v11 = 0;
  if ( v98 && v98[5].m128i_i64[1] )
    v11 = (__int64)v98;
  src = nullptr;
  module_data = get_module_data((unsigned int)dword_8CD7F0);
  v13 = *(_QWORD *)(module_data + 184);
  v114 = 0;
  v14 = *(_QWORD *)(module_data + 200);
  v112 = v13;
  if ( v14 )
  {
    v86 = (void *)qalloc_or_throw(v14);
    v87 = *(const void **)(module_data + 192);
    *((_QWORD *)&v114 + 1) = v14;
    src = v86;
    memcpy(v86, v87, v14);
    *(_QWORD *)&v114 = v14;
  }
  v116 = *(_QWORD *)(module_data + 232);
  v15 = *(_QWORD *)(module_data + 240);
  v115 = _mm_loadu_si128((const __m128i *)(module_data + 216));
  v117 = v15;
  v118 = *(_QWORD *)(module_data + 248);
  v119 = *(_QWORD *)(module_data + 256);
  v120 = *(_QWORD *)(module_data + 264);
  v121 = *(_QWORD *)(module_data + 272);
  if ( v11 )
  {
    v16 = v98[1].m128i_u64[0];
    v112 = v98->m128i_i64[0];
    if ( v16 > 1 )
    {
      v94 = (const void *)v98->m128i_i64[1];
      v95 = src;
      if ( *((_QWORD *)&v114 + 1) < v16 )
      {
        v97.m128i_i64[1] = v98->m128i_i64[1];
        src = (void *)qvector_reserve(&src, src, v16, 1);
        v94 = (const void *)v97.m128i_i64[1];
        v95 = src;
      }
      *(_QWORD *)&v114 = v16;
      memmove(v95, v94, v16 - 1);
      *((char *)src + v16 - 1) = 0;
    }
    else
    {
      *(_QWORD *)&v114 = 0;
    }
    v17 = v98[5].m128i_i64[0];
    v18 = v98[4].m128i_i32[3];
    v19 = _mm_loadu_si128(v98 + 2);
    v20 = v98[4].m128i_i32[0];
    v21 = v98[5].m128i_i32[0];
    v116 = v98[3].m128i_i64[0];
    v22 = v98[3].m128i_i64[1];
    v120 = v17;
    v23 = v98[5].m128i_i64[1];
    v115 = v19;
    a6 = (__m128)_mm_cvtsi32_si128(v18 & 0xFFFFFFA6);
    v117 = v22;
    v24 = v98[4].m128i_i64[0];
    v121 = v23;
    v118 = v24;
    v25 = v98[4].m128i_u32[2];
    v119 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v25), (__m128i)a6).m128i_u64[0];
LABEL_14:
    v26 = v21;
    v104 = 0;
    dest = nullptr;
    v105 = 0;
    v107 = 0;
    if ( !v21 )
    {
      v26 = 1;
      if ( dbg )
        v26 = *(unsigned __int8 *)(dbg + 80LL);
    }
    switch ( v20 )
    {
      case 3:
        v27 = 3;
        break;
      case 1:
        v27 = 2;
        break;
      case 8:
        v27 = 4;
        break;
      default:
        v27 = 1;
        v28 = 2;
        if ( v20 == 2 )
        {
LABEL_22:
          v103 = v26;
          v29 = (v25 >> 3) & 1 | v28;
          v99 = v27;
          if ( v115.m128i_i32[3] == 1 )
          {
            v30 = v29 | 4;
          }
          else if ( v115.m128i_i32[3] == 2 )
          {
            v30 = v29 | 8;
          }
          else
          {
            v30 = (16 * (v115.m128i_i32[3] == 3)) | v29;
          }
          v100 = v30 | (32 * ((v25 >> 4) & 1));
          v31 = v25 & 7 | (v25 >> 2) & 8;
          if ( (v25 & 0x1C0) != 0 )
            LOWORD(v31) = (16 * ((v25 & 0x20) == 0)) | v31;
          v101 = v31;
          v108 = 0;
          v110 = nullptr;
          v98 = (const __m128i *)&v110;
          v109 = 0;
          v111 = 0;
          v110 = (char *)qvector_reserve(&v110, 0, 13, 1);
          v111.m128i_i64[0] = 13;
          strcpy(v110, "Instructions");
          v32 = 0;
          v33 = v110;
          v34 = 0;
          if ( !*((_QWORD *)&v109 + 1) )
          {
            v108 = qvector_reserve(&v108, 0, v109 + 1, 24);
            v32 = v108;
            v33 = v110;
            v34 = v109;
          }
          v84 = _mm_loadu_si128(&v111);
          v85 = v32 + 24 * v34;
          *(_QWORD *)v85 = v33;
          *(__m128i *)(v85 + 8) = v84;
          *(_QWORD *)&v109 = v109 + 1;
          v35 = (unsigned __int64)v98;
          v111 = 0;
          v110 = nullptr;
          v36 = (char *)qvector_reserve(v98, 0, 10, 1);
          v110 = v36;
          v111.m128i_i64[0] = 10;
          *(_QWORD *)v36 = 0x6E6F6974636E7546LL;
          v38 = v108;
          v36[8] = 115;
          v39 = v110;
          v110[9] = 0;
          v40 = v109;
          v41 = v109 + 1;
          if ( v35 < v38 || (v42 = v38 + 24LL * *((_QWORD *)&v109 + 1), (unsigned __int64)v98 >= v42) )
          {
            if ( *((_QWORD *)&v109 + 1) < v41 )
            {
              v108 = qvector_reserve(&v108, v38, v109 + 1, 24);
              v38 = v108;
              v39 = v110;
              *(_QWORD *)&v40 = v109;
            }
            v82 = _mm_loadu_si128(&v111);
            v83 = v38 + 24 * v40;
            *(_QWORD *)v83 = v39;
            *(__m128i *)(v83 + 8) = v82;
            *(_QWORD *)&v109 = v109 + 1;
          }
          else
          {
            v43 = _mm_loadl_epi64(&v111);
            a5 = 0;
            a4 = (__m128)_mm_loadl_epi64((const __m128i *)&v111.m128i_u64[1]);
            v110 = nullptr;
            v111 = 0;
            if ( *((_QWORD *)&v109 + 1) < v41 )
            {
              v97.m128i_i64[0] = a4.m128_u64[0];
              v97.m128i_i64[1] = v43.m128i_i64[0];
              v108 = qvector_reserve(&v108, v38, v109 + 1, 24);
              v38 = v108;
              a4 = (__m128)_mm_loadl_epi64(&v97);
              v43 = _mm_loadl_epi64((const __m128i *)&v97.m128i_u64[1]);
              *(_QWORD *)&v40 = v109;
            }
            v44 = v38 + 24 * v40;
            *(_QWORD *)v44 = v39;
            *(__m128i *)(v44 + 8) = _mm_unpacklo_epi64(v43, (__m128i)a4);
            *(_QWORD *)&v109 = v109 + 1;
            if ( v110 )
            {
              v111.m128i_i64[0] = 0;
              qfree(v110, v38, *((_QWORD *)&v40 + 1), v42, v37);
            }
          }
          v45 = (unsigned __int64)v98;
          v111 = 0;
          v110 = nullptr;
          v110 = (char *)qvector_reserve(v98, 0, 13, 1);
          v111.m128i_i64[0] = 13;
          strcpy(v110, "Basic blocks");
          v47 = (char *)v108;
          v48 = v110;
          v49 = v109;
          v50 = (unsigned __int64 *)(v109 + 1);
          if ( v45 < v108 || (v51 = v108 + 24LL * *((_QWORD *)&v109 + 1), (unsigned __int64)v98 >= v51) )
          {
            if ( *((_QWORD *)&v109 + 1) < (unsigned __int64)v50 )
            {
              v50 = &v108;
              v108 = qvector_reserve(&v108, v108, v109 + 1, 24);
              v47 = (char *)v108;
              v48 = v110;
              *(_QWORD *)&v49 = v109;
            }
            v53 = (__m128)_mm_loadu_si128(&v111);
            v81 = &v47[24 * v49];
            *(_QWORD *)v81 = v48;
            *(__m128 *)(v81 + 8) = v53;
            *(_QWORD *)&v109 = v109 + 1;
          }
          else
          {
            v52 = _mm_loadl_epi64(&v111);
            a5 = 0;
            a4 = (__m128)_mm_loadl_epi64((const __m128i *)&v111.m128i_u64[1]);
            v110 = nullptr;
            v111 = 0;
            if ( *((_QWORD *)&v109 + 1) < (unsigned __int64)v50 )
            {
              v97.m128i_i64[0] = a4.m128_u64[0];
              v97.m128i_i64[1] = v52.m128i_i64[0];
              v108 = qvector_reserve(&v108, v108, v109 + 1, 24);
              v47 = (char *)v108;
              a4 = (__m128)_mm_loadl_epi64(&v97);
              v52 = _mm_loadl_epi64((const __m128i *)&v97.m128i_u64[1]);
              *(_QWORD *)&v49 = v109;
            }
            v53 = (__m128)_mm_unpacklo_epi64(v52, (__m128i)a4);
            v54 = &v47[24 * v49];
            *(_QWORD *)v54 = v48;
            *(__m128 *)(v54 + 8) = v53;
            v50 = (unsigned __int64 *)v110;
            *(_QWORD *)&v109 = v109 + 1;
            if ( v110 )
            {
              v111.m128i_i64[0] = 0;
              qfree(v110, v47, *((_QWORD *)&v49 + 1), v51, v46);
            }
          }
          v102 = 0;
          if ( (v119 & 0x1C0) != 0 && (v119 & 0x40) == 0 )
            v102 = ((v119 & 0x80u) == 0LL) + 1;
          v55 = v114;
          if ( (unsigned __int64)v114 > 1 )
          {
            v96 = (char *)src;
            v50 = (unsigned __int64 *)dest;
            if ( *((_QWORD *)&v107 + 1) < (unsigned __int64)v114 )
            {
              dest = (void *)qvector_reserve(&dest, dest, v114, 1);
              v50 = (unsigned __int64 *)dest;
            }
            v47 = v96;
            *(_QWORD *)&v107 = v55;
            memmove(v50, v96, v55 - 1);
            *((char *)dest + v55 - 1) = 0;
          }
          else
          {
            *(_QWORD *)&v107 = 0;
          }
          bpt_kernel_interface = get_bpt_kernel_interface(v50, v47);
          *(double *)v53.m128_u64 = (*(double (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)bpt_kernel_interface + 224LL))(
                                      bpt_kernel_interface,
                                      v115.m128i_i64[0],
                                      v115.m128i_i64[1],
                                      &v104);
          v111.m128i_i64[0] = v11;
          v110 = (char *)&v112;
          v57 = sub_19D020;
          if ( !(unsigned int)sub_1697D0(
                                (int)"STARTITEM 1\n"
                                     "@0:1407[]\n"
                                     "Breakpoint settings\n"
                                     "%/%*<#Location#~L~ocation  :q1::44::>\n"
                                     "<#Condition#Con~d~ition :q2::37::> <...:B24::::>\n"
                                     "<##Settings##~E~nabled:C4>              <##Actions##~B~reak:c10>\n"
                                     "<~H~ardware:C5>                          <~T~race:c11>\n"
                                     "<#Module relative breakpoint#~M~odule relative:C6> <Re~f~resh debugger memory:c12>\n"
                                     "<#A symbol that will be evaluated and resolved to an address#S~y~mbolic:C7> <E~n~ab"
                                     "le tracing:c19>\n"
                                     "<#Source code breakpoint#~S~ource code:C8> <~D~isable tracing:c20>9>\n"
                                     "<#Evaluate condition on the remote computer#L~o~w level condition :C18>3>  <T~r~aci"
                                     "ng type:b21:0:15::>\n"
                                     "<##Hardware breakpoint mode##~R~ead:C15>\n"
                                     "<#Write#~W~rite:C14>\n"
                                     "<#Execute#E~x~ecute :C16>13>    <##Si~z~e:N17::10::>\n"
                                     "\n",
                                (__int64)sub_19D020,
                                (__int64)v98,
                                (__int64)&v104,
                                (__int64)&dest,
                                (__int64)&loc_199420,
                                v53,
                                a4,
                                a5,
                                a6,
                                v58,
                                v59,
                                a9,
                                a10,
                                (char)&v101) )
            goto LABEL_96;
          v62 = 0;
          if ( (_DWORD)v118 != 4 )
            v62 = v103;
          LODWORD(v120) = v62;
          v63 = (8 * (_BYTE)v100) & 8;
          v64 = ((int)v100 >> 1) & 0x10;
          v65 = v64 | v63 | (4 * (_BYTE)v101) & 0x20 | v101 & 7 | v119 & 0xF0000000;
          v57 = (__int64 (__fastcall *)(int, int, int, int, int, int, int, int, int, __int64, __int64, int, int, __int64, __int64, int, __int64))(v101 & 0x18);
          LODWORD(v119) = v65;
          if ( (v101 & 0x18) != 0 )
          {
            v64 = v102;
            if ( v102 == 1 )
            {
              LOBYTE(v65) = v65 | 0x80;
              LODWORD(v119) = v65;
            }
            else if ( v102 == 2 )
            {
              BYTE1(v65) |= 1u;
              LODWORD(v119) = v65;
            }
            else
            {
              if ( v102 )
              {
                if ( under_debugger )
                  goto LABEL_133;
                interr(40241, v57, v102, v100, *(double *)v53.m128_u64);
                goto LABEL_131;
              }
              LODWORD(v119) = v65 | 0x40;
            }
          }
          v66 = v100 & 2;
          LODWORD(v118) = 4;
          if ( (v100 & 2) == 0 )
            goto LABEL_59;
          if ( v99 == 3 )
          {
            LODWORD(v118) = 3;
            goto LABEL_59;
          }
          if ( (unsigned __int16)v99 <= 3u )
          {
            if ( v99 != 1 )
            {
              if ( v99 == 2 )
              {
                LODWORD(v118) = 1;
                goto LABEL_59;
              }
              goto LABEL_131;
            }
            LODWORD(v118) = 2;
LABEL_59:
            if ( v11 )
            {
              v67 = get_bpt_kernel_interface(v63, v57);
              v57 = (__int64 (__fastcall *)(int, int, int, int, int, int, int, int, int, __int64, __int64, int, int, __int64, __int64, int, __int64))v11;
              *(double *)v53.m128_u64 = (*(double (__fastcall **)(__int64, __int64))(*(_QWORD *)v67 + 120LL))(v67, v11);
            }
            v68 = sub_19B410((__int64)&v112, *(double *)v53.m128_u64, *(double *)a4.m128_u64, a5);
            *(_QWORD *)(module_data + 184) = v112;
            if ( (void **)(module_data + 192) != &src )
            {
              v69 = v114;
              if ( (unsigned __int64)v114 > 1 )
              {
                v88 = (__int64 (__fastcall *)(int, int, int, int, int, int, int, int, int, __int64, __int64, int, int, __int64, __int64, int, __int64))src;
                v89 = *(void **)(module_data + 192);
                if ( *(_QWORD *)(module_data + 208) < (unsigned __int64)v114 )
                {
                  v89 = (void *)qvector_reserve(module_data + 192, *(_QWORD *)(module_data + 192), v114, 1);
                  *(_QWORD *)(module_data + 192) = v89;
                }
                *(_QWORD *)(module_data + 200) = v69;
                v57 = v88;
                memmove(v89, v88, v69 - 1);
                *(_BYTE *)(*(_QWORD *)(module_data + 192) + v69 - 1) = 0;
              }
              else
              {
                *(_QWORD *)(module_data + 200) = 0;
              }
            }
            v70 = _mm_load_si128(&v115);
            *(_QWORD *)(module_data + 232) = v116;
            v71 = v117;
            *(__m128i *)(module_data + 216) = v70;
            *(_QWORD *)(module_data + 240) = v71;
            *(_QWORD *)(module_data + 248) = v118;
            *(_QWORD *)(module_data + 256) = v119;
            *(_QWORD *)(module_data + 264) = v120;
            *(_QWORD *)(module_data + 272) = v121;
            if ( v68 )
            {
              v72 = *(_QWORD *)(v68 + 88);
LABEL_66:
              v73 = v108;
              if ( v108 )
              {
                v74 = v109;
                if ( (_QWORD)v109 )
                {
                  v75 = 0;
                  do
                  {
                    v76 = (__int64 *)(v73 + 24 * v75);
                    v77 = *v76;
                    if ( *v76 )
                    {
                      v76[1] = 0;
                      qfree(v77, v57, v73, v60, v61);
                      v73 = v108;
                    }
                    ++v75;
                  }
                  while ( v74 != v75 );
                }
                *(_QWORD *)&v109 = 0;
                qfree(v73, v57, v73, v60, v61);
              }
              if ( dest )
              {
                *(_QWORD *)&v107 = 0;
                qfree(dest, v57, v73, v60, v61);
              }
              if ( v104 )
              {
                *(_QWORD *)&v105 = 0;
                qfree(v104, v57, v73, v60, v61);
              }
              goto LABEL_77;
            }
LABEL_96:
            v72 = 0;
            goto LABEL_66;
          }
          if ( v99 == 4 )
          {
            LODWORD(v118) = 8;
            goto LABEL_59;
          }
LABEL_131:
          if ( !under_debugger )
            interr(40242, v57, v64, v66, *(double *)v53.m128_u64);
LABEL_133:
          BUG();
        }
        v27 = 0;
        break;
    }
    v28 = 2 * (v20 != 4);
    goto LABEL_22;
  }
  if ( a2 != -1 )
  {
    v57 = (__int64 (__fastcall *)(int, int, int, int, int, int, int, int, int, __int64, __int64, int, int, __int64, __int64, int, __int64))&byte_4;
    v79 = a2;
    flags = get_flags_ex(a2, 4);
    v73 = dbg;
    if ( dbg )
    {
      if ( *(_QWORD *)(dbg + 72LL) && *(_BYTE *)(dbg + 80LL) )
      {
LABEL_84:
        if ( (~BYTE1(flags) & 6) != 0 )
          goto LABEL_85;
LABEL_120:
        v91 = get_bpt_kernel_interface(v79, 4);
        v92 = &v112;
        (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD, _QWORD))(*(_QWORD *)v91 + 128LL))(
          v91,
          &v112,
          a2,
          0,
          0);
LABEL_110:
        v93 = get_bpt_kernel_interface(v91, v92);
        v121 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v93 + 144LL))(v93);
        sub_19A0D0((__int64)&v112);
        v25 = v119;
        v21 = v120;
        v20 = v118;
        goto LABEL_14;
      }
      goto LABEL_85;
    }
LABEL_107:
    if ( (~BYTE1(flags) & 6) != 0 )
    {
LABEL_108:
      v90 = get_bpt_kernel_interface(v79, 4);
      (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64, _QWORD))(*(_QWORD *)v90 + 128LL))(
        v90,
        &v112,
        a2,
        1,
        0);
      v91 = (unsigned int)v118;
      v92 = (_QWORD *)a2;
      if ( !sub_19A750(v118, a2, v120) )
        LODWORD(v118) = 4;
      goto LABEL_110;
    }
    goto LABEL_120;
  }
  v57 = (__int64 (__fastcall *)(int, int, int, int, int, int, int, int, int, __int64, __int64, int, int, __int64, __int64, int, __int64))&byte_4;
  a2 = xmmword_8CC810;
  v79 = xmmword_8CC810;
  flags = get_flags_ex(xmmword_8CC810, 4);
  v73 = dbg;
  if ( !dbg )
  {
    if ( a2 == -1 )
      goto LABEL_120;
    goto LABEL_107;
  }
  if ( *(_QWORD *)(dbg + 72LL) && *(_BYTE *)(dbg + 80LL) )
  {
    if ( a2 == -1 )
      goto LABEL_120;
    goto LABEL_84;
  }
LABEL_85:
  if ( (*(_BYTE *)(v73 + 37) & 2) != 0 )
    goto LABEL_108;
  v72 = -1;
LABEL_77:
  if ( src )
  {
    *(_QWORD *)&v114 = 0;
    qfree(src, v57, v73, v60, v61);
  }
  return v72;
}
