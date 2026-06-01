__int64 __fastcall sub_6621D0(__int64 a1, __int64 a2)
{
  double v4; // rax
  unsigned __int8 (__fastcall ***v5)(_QWORD); // rdi
  unsigned __int64 v6; // r12
  unsigned __int8 (__fastcall **v7)(_QWORD); // rax
  _DWORD *v8; // rax
  __int64 v9; // rdi
  int v10; // eax
  _DWORD *v11; // rdx
  _DWORD *v12; // rax
  _DWORD *v13; // rax
  __int64 v14; // rax
  void *v15; // rbx
  __int64 result; // rax
  __int64 v17; // rsi
  double v18; // rdi
  __int64 v20; // r8
  __m128i v21; // xmm1
  __m128i *v22; // r13
  __int32 v23; // r9d
  __int64 v24; // r8
  __m128i *v25; // r14
  int v26; // ecx
  __m128i v27; // xmm0
  __int64 v28; // r9
  __m128i *v29; // rdi
  __m128i *v30; // rax
  __m128i *v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // r13
  int v35; // eax
  _DWORD *v36; // rdx
  unsigned int v37; // edx
  __m128i v38; // xmm0
  __m128i *v39; // r13
  __int32 v40; // r8d
  size_t v41; // r14
  __m128i *v42; // r15
  int v43; // ecx
  __m128i v44; // xmm1
  __int64 v45; // r8
  __m128i *v46; // rdi
  __m128i *v47; // rax
  __m128i *v48; // rsi
  __int64 v49; // rdx
  unsigned int v50; // edx
  __m128i v51; // xmm1
  __int32 v52; // r9d
  __int64 v53; // r8
  __m128i *v54; // r14
  int v55; // ecx
  __int64 v56; // r9
  __m128i *v57; // rdi
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rax
  int v61; // eax
  __int64 v62; // r8
  __m128i v63; // xmm1
  __int32 v64; // r9d
  __int64 v65; // r8
  __m128i *v66; // r14
  int v67; // ecx
  __int64 v68; // r9
  __m128i *v69; // rdi
  __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // r8
  __m128i v73; // xmm1
  __int32 v74; // r9d
  __int64 v75; // r8
  __m128i *v76; // r14
  int v77; // ecx
  __int64 v78; // r9
  __m128i *v79; // rdi
  __int64 v80; // rdx
  __int64 v81; // rax
  __m128i *v82; // rax
  __int32 v83; // r10d
  __m128i *v84; // rcx
  const __m128i *v85; // r15
  __m128i *v86; // r11
  __int64 v87; // rax
  __m128i *v88; // rdx
  __m128i *v89; // rax
  __m128i *v90; // rax
  __int32 v91; // r10d
  __m128i *v92; // rcx
  const __m128i *v93; // r15
  __m128i *v94; // r11
  __int64 v95; // rax
  __m128i *v96; // rdx
  __m128i *v97; // rax
  __m128i *v98; // rax
  __int32 v99; // r10d
  __m128i *v100; // rcx
  const __m128i *v101; // r15
  __m128i *v102; // r11
  __int64 v103; // rax
  __m128i *v104; // rdx
  __m128i *v105; // rax
  __m128i *v106; // rax
  __int32 v107; // ecx
  __m128i *v108; // r10
  const __m128i *v109; // r9
  __m128i *v110; // r11
  __int64 v111; // rax
  __m128i *v112; // rdx
  __m128i *v113; // rax
  __m128i *v114; // rax
  __int32 v115; // r10d
  __m128i *v116; // rcx
  __m128i *v117; // rdi
  const __m128i *v118; // r15
  __int64 m128i_i64; // r11
  __int64 v120; // rax
  __m128i *v121; // rdx
  __m128i *v122; // rax
  __m128i v123; // [rsp+0h] [rbp-98h] BYREF
  __m128i v124; // [rsp+10h] [rbp-88h] BYREF
  __int32 v125; // [rsp+24h] [rbp-74h]
  __m128i *v126; // [rsp+28h] [rbp-70h]
  __int64 v127; // [rsp+30h] [rbp-68h] BYREF
  double v128; // [rsp+38h] [rbp-60h]
  _QWORD v129[2]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v130[9]; // [rsp+50h] [rbp-48h] BYREF

  v4 = *(double *)a1;
  v5 = *(unsigned __int8 (__fastcall ****)(_QWORD))(a1 + 24);
  v129[0] = 0;
  v6 = *(_QWORD *)(a2 + 16);
  v128 = v4;
  v130[0] = 1;
  v7 = *v5;
  v127 = 0;
  v129[1] = 0;
  v130[1] = 0;
  if ( (*v7)(v5) )
  {
    sub_65ED10(a1, (_QWORD *)(a1 + 232), *(_QWORD *)(a1 + 176));
    goto LABEL_14;
  }
  if ( !*(_WORD *)(a2 + 4) )
  {
    v8 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v8 || (v9 = a1 + 32, *v8 == -1) )
    {
      v34 = *(_QWORD *)(v6 + 40);
      v35 = sub_1625010(a1 + 56);
      v36 = *(_DWORD **)(v34 + 24);
      if ( !v36 || v35 != *v36 || v36[1] != 2 )
      {
        v37 = *(_DWORD *)(a1 + 216);
        v38 = _mm_loadl_epi64((const __m128i *)(a1 + 176));
        if ( 3 * v37 < 4 * (*(_DWORD *)(a1 + 220) + *(_DWORD *)(a1 + 224)) )
        {
          v123.m128i_i32[0] = 2 * v37;
          v41 = 32LL * v37;
          v123.m128i_i64[1] = v38.m128i_i64[0];
          v106 = (__m128i *)sub_186B270(v41);
          v107 = v123.m128i_i32[0];
          v38 = _mm_loadl_epi64((const __m128i *)&v123.m128i_u64[1]);
          v39 = v106;
          v108 = &v106[v41 / 0x10];
          if ( v123.m128i_i32[0] )
          {
            if ( (v41 & 0x10) == 0 || (*v106 = 0, ++v106, v106 != v108) )
            {
              do
              {
                *v106 = 0;
                v106 += 2;
                v106[-1] = 0;
              }
              while ( v106 != v108 );
            }
          }
          v109 = *(const __m128i **)(a1 + 208);
          v40 = v107 - 1;
          v42 = v108;
          v110 = (__m128i *)&v109[*(unsigned int *)(a1 + 216)];
          if ( v109 != v110 )
          {
            do
            {
              if ( v109->m128i_i64[0] > 1uLL )
              {
                v111 = 16LL * (*(_DWORD *)(v109->m128i_i64[0] + 12) & (unsigned int)v40);
                v112 = &v39[(unsigned __int64)v111 / 0x10];
                if ( v41 == v111 )
                {
LABEL_211:
                  if ( v39 == v112 )
                  {
LABEL_223:
                    v126 = v108;
                    v125 = v107;
                    v124.m128i_i32[2] = v107 - 1;
                    v124.m128i_i64[0] = (__int64)v110;
                    v123.m128i_i64[1] = (__int64)v109;
                    v123.m128i_i64[0] = v38.m128i_i64[0];
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v113 = v39;
                  while ( v113->m128i_i64[0] )
                  {
                    if ( v112 == ++v113 )
                      goto LABEL_223;
                  }
                }
                else
                {
                  v113 = &v39[(unsigned __int64)v111 / 0x10];
                  while ( v113->m128i_i64[0] )
                  {
                    if ( v108 == ++v113 )
                      goto LABEL_211;
                  }
                }
                *v113 = _mm_loadu_si128(v109);
              }
              ++v109;
            }
            while ( v110 != v109 );
            v110 = *(__m128i **)(a1 + 208);
          }
          if ( v110 )
          {
            v124.m128i_i32[0] = v107;
            v123.m128i_i32[2] = v107 - 1;
            v123.m128i_i64[0] = v38.m128i_i64[0];
            sub_186B220(v110);
            v107 = v124.m128i_i32[0];
            v40 = v123.m128i_i32[2];
            v38 = _mm_loadl_epi64(&v123);
          }
          *(_QWORD *)(a1 + 208) = v39;
          *(_DWORD *)(a1 + 216) = v107;
          *(_DWORD *)(a1 + 224) = 0;
        }
        else
        {
          v39 = *(__m128i **)(a1 + 208);
          v40 = v37 - 1;
          v41 = 16LL * v37;
          v42 = &v39[v41 / 0x10];
        }
        v43 = *(_DWORD *)(v6 + 12);
        v44 = _mm_unpacklo_epi64((__m128i)v6, v38);
        v45 = 16LL * (v43 & (unsigned int)v40);
        v46 = &v39[(unsigned __int64)v45 / 0x10];
        if ( v45 != v41 )
        {
          v47 = &v39[(unsigned __int64)v45 / 0x10];
          v48 = nullptr;
          while ( 1 )
          {
            v49 = v47->m128i_i64[0];
            if ( v47->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v49 + 12) == v43 && v6 == v49 )
              {
                *v47 = v44;
                goto LABEL_14;
              }
            }
            else
            {
              if ( !v49 )
              {
                if ( v48 )
                  goto LABEL_221;
                v48 = v47;
                goto LABEL_222;
              }
              v48 = v47;
            }
            if ( ++v47 == v42 )
              goto LABEL_75;
          }
        }
        v48 = nullptr;
LABEL_75:
        while ( v46 != v39 )
        {
          v60 = v39->m128i_i64[0];
          if ( v39->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v60 + 12) == v43 && v6 == v60 )
            {
              *v39 = v44;
              goto LABEL_14;
            }
          }
          else
          {
            if ( !v60 )
            {
              if ( v48 )
LABEL_221:
                --*(_DWORD *)(a1 + 224);
              else
                v48 = v39;
LABEL_222:
              *v48 = v44;
              ++*(_DWORD *)(a1 + 220);
              goto LABEL_14;
            }
            v48 = v39;
          }
          ++v39;
        }
LABEL_36:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      if ( *(_WORD *)(a2 + 4) )
        goto LABEL_8;
      v9 = a1 + 32;
    }
    v10 = sub_15F0200(v9);
    if ( !*(_WORD *)(a2 + 4) )
    {
      v11 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
      if ( v11 )
      {
        if ( v10 == *v11 && v11[1] == 3 )
        {
          if ( (unsigned __int8)sub_65FFA0(a1, a2) )
            goto LABEL_14;
          v72 = *(unsigned int *)(a1 + 216);
          v73 = _mm_loadl_epi64((const __m128i *)(a1 + 176));
          if ( 3 * (int)v72 < (unsigned int)(4 * (*(_DWORD *)(a1 + 220) + *(_DWORD *)(a1 + 224))) )
          {
            v123.m128i_i32[2] = 2 * v72;
            v124.m128i_i64[0] = v73.m128i_i64[0];
            v123.m128i_i64[0] = 16LL * (unsigned int)(2 * v72);
            v90 = (__m128i *)sub_186B270(v123.m128i_u64[0]);
            v91 = v123.m128i_i32[2];
            v75 = v123.m128i_i64[0];
            v22 = v90;
            v73 = _mm_loadl_epi64(&v124);
            v92 = (__m128i *)((char *)v90 + v123.m128i_i64[0]);
            if ( v123.m128i_i32[2] )
            {
              if ( (v123.m128i_i8[0] & 0x10) == 0 || (*v90 = 0, ++v90, v90 != v92) )
              {
                do
                {
                  *v90 = 0;
                  v90 += 2;
                  v90[-1] = 0;
                }
                while ( v90 != v92 );
              }
            }
            v93 = *(const __m128i **)(a1 + 208);
            v74 = v91 - 1;
            v76 = v92;
            v94 = (__m128i *)&v93[*(unsigned int *)(a1 + 216)];
            if ( v93 != v94 )
            {
              do
              {
                if ( v93->m128i_i64[0] > 1uLL )
                {
                  v95 = 16LL * (*(_DWORD *)(v93->m128i_i64[0] + 12) & (unsigned int)v74);
                  v96 = &v22[(unsigned __int64)v95 / 0x10];
                  if ( v75 == v95 )
                  {
LABEL_161:
                    if ( v22 == v96 )
                    {
LABEL_194:
                      v126 = v92;
                      v125 = v91;
                      v124.m128i_i64[1] = v75;
                      v124.m128i_i32[0] = v91 - 1;
                      v123.m128i_i64[1] = (__int64)v94;
                      v123.m128i_i64[0] = v73.m128i_i64[0];
                      sub_1872CE0("");
                      sub_1873130(114, 213);
                    }
                    v97 = v22;
                    while ( v97->m128i_i64[0] )
                    {
                      if ( v96 == ++v97 )
                        goto LABEL_194;
                    }
                  }
                  else
                  {
                    v97 = &v22[(unsigned __int64)v95 / 0x10];
                    while ( v97->m128i_i64[0] )
                    {
                      if ( v92 == ++v97 )
                        goto LABEL_161;
                    }
                  }
                  *v97 = _mm_loadu_si128(v93);
                }
                ++v93;
              }
              while ( v94 != v93 );
              v94 = *(__m128i **)(a1 + 208);
            }
            if ( v94 )
            {
              v124.m128i_i32[2] = v91;
              v124.m128i_i64[0] = v75;
              v123.m128i_i32[2] = v91 - 1;
              v123.m128i_i64[0] = v73.m128i_i64[0];
              sub_186B220(v94);
              v91 = v124.m128i_i32[2];
              v75 = v124.m128i_i64[0];
              v74 = v123.m128i_i32[2];
              v73 = _mm_loadl_epi64(&v123);
            }
            *(_QWORD *)(a1 + 208) = v22;
            *(_DWORD *)(a1 + 216) = v91;
            *(_DWORD *)(a1 + 224) = 0;
          }
          else
          {
            v22 = *(__m128i **)(a1 + 208);
            v74 = v72 - 1;
            v75 = 16 * v72;
            v76 = (__m128i *)((char *)v22 + v75);
          }
          v77 = *(_DWORD *)(v6 + 12);
          v27 = _mm_unpacklo_epi64((__m128i)v6, v73);
          v78 = 16LL * (v77 & (unsigned int)v74);
          v79 = &v22[(unsigned __int64)v78 / 0x10];
          if ( v78 != v75 )
          {
            v30 = &v22[(unsigned __int64)v78 / 0x10];
            v31 = nullptr;
            while ( 1 )
            {
              v80 = v30->m128i_i64[0];
              if ( v30->m128i_i64[0] > 1uLL )
              {
                if ( *(_DWORD *)(v80 + 12) == v77 && v6 == v80 )
                  goto LABEL_192;
              }
              else
              {
                if ( !v80 )
                  goto LABEL_49;
                v31 = v30;
              }
              if ( ++v30 == v76 )
                goto LABEL_118;
            }
          }
          v31 = nullptr;
LABEL_118:
          while ( v79 != v22 )
          {
            v81 = v22->m128i_i64[0];
            if ( v22->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v81 + 12) == v77 && v6 == v81 )
                goto LABEL_196;
            }
            else
            {
              if ( !v81 )
                goto LABEL_52;
              v31 = v22;
            }
            ++v22;
          }
          goto LABEL_36;
        }
      }
    }
  }
LABEL_8:
  if ( !(unsigned __int8)sub_16672C0(a1 + 88, v6, *(unsigned int *)(a2 + 24), a2 + 32, &v127) )
  {
    if ( !*(_WORD *)(a2 + 4)
      && (v12 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) != nullptr
      && *v12 == 5
      && ((v61 = v12[1], v61 == 16) || v61 == 10 || v61 == 11 || v61 == 15)
      && *(_DWORD *)(a2 + 24) == 2
      && (!(unsigned __int8)sub_65E960((const double *)a1, *(_QWORD *)(a2 + 40), (__int64)v129) || !LODWORD(v129[0])) )
    {
      v62 = *(unsigned int *)(a1 + 216);
      v63 = _mm_loadl_epi64((const __m128i *)(a1 + 176));
      if ( 3 * (int)v62 < (unsigned int)(4 * (*(_DWORD *)(a1 + 220) + *(_DWORD *)(a1 + 224))) )
      {
        v123.m128i_i32[2] = 2 * v62;
        v124.m128i_i64[0] = v63.m128i_i64[0];
        v123.m128i_i64[0] = 16LL * (unsigned int)(2 * v62);
        v98 = (__m128i *)sub_186B270(v123.m128i_u64[0]);
        v99 = v123.m128i_i32[2];
        v65 = v123.m128i_i64[0];
        v22 = v98;
        v63 = _mm_loadl_epi64(&v124);
        v100 = (__m128i *)((char *)v98 + v123.m128i_i64[0]);
        if ( v123.m128i_i32[2] )
        {
          if ( (v123.m128i_i8[0] & 0x10) == 0 || (*v98 = 0, ++v98, v98 != v100) )
          {
            do
            {
              *v98 = 0;
              v98 += 2;
              v98[-1] = 0;
            }
            while ( v98 != v100 );
          }
        }
        v101 = *(const __m128i **)(a1 + 208);
        v64 = v99 - 1;
        v66 = v100;
        v102 = (__m128i *)&v101[*(unsigned int *)(a1 + 216)];
        if ( v101 != v102 )
        {
          do
          {
            if ( v101->m128i_i64[0] > 1uLL )
            {
              v103 = 16LL * (*(_DWORD *)(v101->m128i_i64[0] + 12) & (unsigned int)v64);
              v104 = &v22[(unsigned __int64)v103 / 0x10];
              if ( v65 == v103 )
              {
LABEL_183:
                if ( v22 == v104 )
                {
LABEL_197:
                  v126 = v100;
                  v125 = v99;
                  v124.m128i_i64[1] = v65;
                  v124.m128i_i32[0] = v99 - 1;
                  v123.m128i_i64[1] = (__int64)v102;
                  v123.m128i_i64[0] = v63.m128i_i64[0];
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v105 = v22;
                while ( v105->m128i_i64[0] )
                {
                  if ( v104 == ++v105 )
                    goto LABEL_197;
                }
              }
              else
              {
                v105 = &v22[(unsigned __int64)v103 / 0x10];
                while ( v105->m128i_i64[0] )
                {
                  if ( v100 == ++v105 )
                    goto LABEL_183;
                }
              }
              *v105 = _mm_loadu_si128(v101);
            }
            ++v101;
          }
          while ( v102 != v101 );
          v102 = *(__m128i **)(a1 + 208);
        }
        if ( v102 )
        {
          v124.m128i_i32[2] = v99;
          v124.m128i_i64[0] = v65;
          v123.m128i_i32[2] = v99 - 1;
          v123.m128i_i64[0] = v63.m128i_i64[0];
          sub_186B220(v102);
          v99 = v124.m128i_i32[2];
          v65 = v124.m128i_i64[0];
          v64 = v123.m128i_i32[2];
          v63 = _mm_loadl_epi64(&v123);
        }
        *(_QWORD *)(a1 + 208) = v22;
        *(_DWORD *)(a1 + 216) = v99;
        *(_DWORD *)(a1 + 224) = 0;
      }
      else
      {
        v22 = *(__m128i **)(a1 + 208);
        v64 = v62 - 1;
        v65 = 16 * v62;
        v66 = (__m128i *)((char *)v22 + v65);
      }
      v67 = *(_DWORD *)(v6 + 12);
      v27 = _mm_unpacklo_epi64((__m128i)v6, v63);
      v68 = 16LL * (v67 & (unsigned int)v64);
      v69 = &v22[(unsigned __int64)v68 / 0x10];
      if ( v68 != v65 )
      {
        v30 = &v22[(unsigned __int64)v68 / 0x10];
        v31 = nullptr;
        while ( 1 )
        {
          v70 = v30->m128i_i64[0];
          if ( v30->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v70 + 12) == v67 && v6 == v70 )
              goto LABEL_192;
          }
          else
          {
            if ( !v70 )
              goto LABEL_49;
            v31 = v30;
          }
          if ( ++v30 == v66 )
            goto LABEL_99;
        }
      }
      v31 = nullptr;
LABEL_99:
      while ( v69 != v22 )
      {
        v71 = v22->m128i_i64[0];
        if ( v22->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v71 + 12) == v67 && v6 == v71 )
            goto LABEL_196;
        }
        else
        {
          if ( !v71 )
            goto LABEL_52;
          v31 = v22;
        }
        ++v22;
      }
    }
    else
    {
      v13 = *(_DWORD **)(v6 + 24);
      if ( !v13 || *(_DWORD *)(a1 + 152) != *v13 || v13[1] )
        goto LABEL_14;
      v50 = *(_DWORD *)(a1 + 216);
      v51 = _mm_loadl_epi64((const __m128i *)(a1 + 176));
      if ( 3 * v50 < 4 * (*(_DWORD *)(a1 + 220) + *(_DWORD *)(a1 + 224)) )
      {
        v123.m128i_i32[2] = 2 * v50;
        v124.m128i_i64[0] = v51.m128i_i64[0];
        v123.m128i_i64[0] = 32LL * v50;
        v114 = (__m128i *)sub_186B270(v123.m128i_u64[0]);
        v115 = v123.m128i_i32[2];
        v53 = v123.m128i_i64[0];
        v22 = v114;
        v51 = _mm_loadl_epi64(&v124);
        v116 = (__m128i *)((char *)v114 + v123.m128i_i64[0]);
        if ( v123.m128i_i32[2] )
        {
          if ( (v123.m128i_i8[0] & 0x10) == 0 || (*v114 = 0, ++v114, v114 != v116) )
          {
            do
            {
              *v114 = 0;
              v114 += 2;
              v114[-1] = 0;
            }
            while ( v114 != v116 );
          }
        }
        v117 = *(__m128i **)(a1 + 208);
        v52 = v115 - 1;
        v54 = v116;
        v118 = v117;
        m128i_i64 = (__int64)v117[*(unsigned int *)(a1 + 216)].m128i_i64;
        if ( v117 != (__m128i *)m128i_i64 )
        {
          do
          {
            if ( v118->m128i_i64[0] > 1uLL )
            {
              v120 = 16LL * (*(_DWORD *)(v118->m128i_i64[0] + 12) & (unsigned int)v52);
              v121 = &v22[(unsigned __int64)v120 / 0x10];
              if ( v53 == v120 )
              {
LABEL_239:
                if ( v22 == v121 )
                {
LABEL_253:
                  v126 = v116;
                  v125 = v115;
                  v124.m128i_i64[1] = v53;
                  v124.m128i_i32[0] = v115 - 1;
                  v123.m128i_i64[1] = m128i_i64;
                  v123.m128i_i64[0] = v51.m128i_i64[0];
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v122 = v22;
                while ( v122->m128i_i64[0] )
                {
                  if ( v121 == ++v122 )
                    goto LABEL_253;
                }
              }
              else
              {
                v122 = &v22[(unsigned __int64)v120 / 0x10];
                while ( v122->m128i_i64[0] )
                {
                  if ( v116 == ++v122 )
                    goto LABEL_239;
                }
              }
              *v122 = _mm_loadu_si128(v118);
            }
            ++v118;
          }
          while ( (const __m128i *)m128i_i64 != v118 );
          v117 = *(__m128i **)(a1 + 208);
        }
        if ( v117 )
        {
          v124.m128i_i32[2] = v115;
          v124.m128i_i64[0] = v53;
          v123.m128i_i32[2] = v115 - 1;
          v123.m128i_i64[0] = v51.m128i_i64[0];
          sub_186B220(v117);
          v115 = v124.m128i_i32[2];
          v53 = v124.m128i_i64[0];
          v52 = v123.m128i_i32[2];
          v51 = _mm_loadl_epi64(&v123);
        }
        *(_QWORD *)(a1 + 208) = v22;
        *(_DWORD *)(a1 + 216) = v115;
        *(_DWORD *)(a1 + 224) = 0;
      }
      else
      {
        v22 = *(__m128i **)(a1 + 208);
        v52 = v50 - 1;
        v53 = 16LL * v50;
        v54 = (__m128i *)((char *)v22 + v53);
      }
      v55 = *(_DWORD *)(v6 + 12);
      v27 = _mm_unpacklo_epi64((__m128i)v6, v51);
      v56 = 16LL * (v55 & (unsigned int)v52);
      v57 = &v22[(unsigned __int64)v56 / 0x10];
      if ( v56 != v53 )
      {
        v30 = &v22[(unsigned __int64)v56 / 0x10];
        v31 = nullptr;
        while ( 1 )
        {
          v58 = v30->m128i_i64[0];
          if ( v30->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v58 + 12) == v55 && v6 == v58 )
              goto LABEL_192;
          }
          else
          {
            if ( !v58 )
              goto LABEL_49;
            v31 = v30;
          }
          if ( ++v30 == v54 )
            goto LABEL_68;
        }
      }
      v31 = nullptr;
LABEL_68:
      while ( v57 != v22 )
      {
        v59 = v22->m128i_i64[0];
        if ( v22->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v59 + 12) == v55 && v6 == v59 )
            goto LABEL_196;
        }
        else
        {
          if ( !v59 )
            goto LABEL_52;
          v31 = v22;
        }
        ++v22;
      }
    }
    goto LABEL_36;
  }
  v20 = *(unsigned int *)(a1 + 216);
  v21 = _mm_loadl_epi64((const __m128i *)(a1 + 176));
  if ( 3 * (int)v20 < (unsigned int)(4 * (*(_DWORD *)(a1 + 220) + *(_DWORD *)(a1 + 224))) )
  {
    v123.m128i_i32[2] = 2 * v20;
    v124.m128i_i64[0] = v21.m128i_i64[0];
    v123.m128i_i64[0] = 16LL * (unsigned int)(2 * v20);
    v82 = (__m128i *)sub_186B270(v123.m128i_u64[0]);
    v83 = v123.m128i_i32[2];
    v24 = v123.m128i_i64[0];
    v22 = v82;
    v21 = _mm_loadl_epi64(&v124);
    v84 = (__m128i *)((char *)v82 + v123.m128i_i64[0]);
    if ( v123.m128i_i32[2] )
    {
      if ( (v123.m128i_i8[0] & 0x10) == 0 || (*v82 = 0, ++v82, v82 != v84) )
      {
        do
        {
          *v82 = 0;
          v82 += 2;
          v82[-1] = 0;
        }
        while ( v82 != v84 );
      }
    }
    v85 = *(const __m128i **)(a1 + 208);
    v23 = v83 - 1;
    v25 = v84;
    v86 = (__m128i *)&v85[*(unsigned int *)(a1 + 216)];
    if ( v85 != v86 )
    {
      do
      {
        if ( v85->m128i_i64[0] > 1uLL )
        {
          v87 = 16LL * (*(_DWORD *)(v85->m128i_i64[0] + 12) & (unsigned int)v23);
          v88 = &v22[(unsigned __int64)v87 / 0x10];
          if ( v24 == v87 )
          {
LABEL_139:
            if ( v22 == v88 )
            {
LABEL_195:
              v126 = v84;
              v125 = v83;
              v124.m128i_i64[1] = v24;
              v124.m128i_i32[0] = v83 - 1;
              v123.m128i_i64[1] = (__int64)v86;
              v123.m128i_i64[0] = v21.m128i_i64[0];
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v89 = v22;
            while ( v89->m128i_i64[0] )
            {
              if ( v88 == ++v89 )
                goto LABEL_195;
            }
          }
          else
          {
            v89 = &v22[(unsigned __int64)v87 / 0x10];
            while ( v89->m128i_i64[0] )
            {
              if ( v84 == ++v89 )
                goto LABEL_139;
            }
          }
          *v89 = _mm_loadu_si128(v85);
        }
        ++v85;
      }
      while ( v86 != v85 );
      v86 = *(__m128i **)(a1 + 208);
    }
    if ( v86 )
    {
      v124.m128i_i32[2] = v83;
      v124.m128i_i64[0] = v24;
      v123.m128i_i32[2] = v83 - 1;
      v123.m128i_i64[0] = v21.m128i_i64[0];
      sub_186B220(v86);
      v83 = v124.m128i_i32[2];
      v24 = v124.m128i_i64[0];
      v23 = v123.m128i_i32[2];
      v21 = _mm_loadl_epi64(&v123);
    }
    *(_QWORD *)(a1 + 208) = v22;
    *(_DWORD *)(a1 + 216) = v83;
    *(_DWORD *)(a1 + 224) = 0;
  }
  else
  {
    v22 = *(__m128i **)(a1 + 208);
    v23 = v20 - 1;
    v24 = 16 * v20;
    v25 = (__m128i *)((char *)v22 + v24);
  }
  v26 = *(_DWORD *)(v6 + 12);
  v27 = _mm_unpacklo_epi64((__m128i)v6, v21);
  v28 = 16LL * (v26 & (unsigned int)v23);
  v29 = &v22[(unsigned __int64)v28 / 0x10];
  if ( v28 != v24 )
  {
    v30 = &v22[(unsigned __int64)v28 / 0x10];
    v31 = nullptr;
    while ( 1 )
    {
      v32 = v30->m128i_i64[0];
      if ( v30->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v32 + 12) == v26 && v6 == v32 )
        {
LABEL_192:
          *v30 = v27;
          goto LABEL_14;
        }
      }
      else
      {
        if ( !v32 )
        {
LABEL_49:
          if ( v31 )
            goto LABEL_50;
          v31 = v30;
          goto LABEL_51;
        }
        v31 = v30;
      }
      if ( ++v30 == v25 )
        goto LABEL_32;
    }
  }
  v31 = nullptr;
  while ( 1 )
  {
LABEL_32:
    if ( v29 == v22 )
      goto LABEL_36;
    v33 = v22->m128i_i64[0];
    if ( v22->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v33 + 12) == v26 && v6 == v33 )
    {
LABEL_196:
      *v22 = v27;
      goto LABEL_14;
    }
LABEL_31:
    ++v22;
  }
  if ( v33 )
  {
    v31 = v22;
    goto LABEL_31;
  }
LABEL_52:
  if ( v31 )
LABEL_50:
    --*(_DWORD *)(a1 + 224);
  else
    v31 = v22;
LABEL_51:
  *v31 = v27;
  ++*(_DWORD *)(a1 + 220);
LABEL_14:
  v14 = sub_15D1F10(a2);
  sub_65F1B0(a1, v14);
  v15 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v129);
  result = sub_182CBA0(v15, v130);
  v17 = v127;
  if ( v127 )
  {
    v18 = v128;
    if ( (*(_DWORD *)(v127 + 8))-- == 1 )
      return sub_15D7BC0(*(_QWORD *)&v18, v17);
  }
  return result;
}

