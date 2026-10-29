__int64 __fastcall sub_C13EE0(_QWORD *a1, double a2, double a3, __m128 a4)
{
  char **v4; // rbp
  char **exception; // rbp
  __int64 v7; // rcx
  _QWORD *v8; // r12
  __int64 v9; // rax
  unsigned int v10; // r13d
  __int64 *v11; // rbx
  __int64 v12; // rbp
  unsigned __int64 v13; // r13
  __int64 result; // rax
  __int64 v15; // rsi
  __int64 v16; // rdi
  bool v17; // zf
  unsigned __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rax
  const __m128i *v21; // r14
  __int64 v22; // rax
  __int64 v23; // r8
  int v24; // r9d
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rax
  __m128i *v31; // rcx
  __int64 v32; // rdx
  __m128i *v33; // rsi
  __int64 v34; // rdx
  __m128i v35; // xmm0
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rdi
  unsigned int v39; // esi
  size_t v40; // rdi
  __int64 v41; // rax
  __int64 *v42; // r12
  _DWORD *v43; // r10
  __int64 v44; // rdi
  __int64 v45; // rdx
  __int64 *v46; // rsi
  __int64 *j; // rax
  __int64 v48; // r8
  __int64 v49; // r8
  __int64 v50; // r8
  __int64 *v51; // rax
  __int64 *v52; // rbx
  _DWORD *v53; // r12
  __int64 *v54; // rbp
  __int64 v55; // rsi
  __int64 v56; // rsi
  __int64 v57; // rdi
  const __m128i *v58; // rdx
  const __m128i *v59; // r14
  unsigned __int32 v60; // r13d
  __int64 v61; // rax
  __m128 *v62; // rdi
  __m128 v63; // xmm0
  __int64 v64; // rax
  __int64 *v65; // rbx
  __int64 v66; // rax
  __int64 *v67; // rbp
  __int64 v68; // rsi
  __int64 v69; // rsi
  __int64 v70; // rdi
  unsigned __int64 v71; // rsi
  __int64 v72; // rdi
  __int64 *v73; // rbx
  __int64 v74; // rax
  __int64 *v75; // rbp
  __int64 v76; // rsi
  __int64 v77; // rsi
  __int64 v78; // rdi
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 *v81; // rbp
  __int64 *v82; // rbx
  __int64 v83; // r12
  __int64 v84; // rsi
  __int64 v85; // rsi
  __int64 v86; // rdi
  unsigned int v87; // ebx
  size_t v88; // rdi
  __int64 v89; // rax
  _DWORD *v90; // r9
  __int64 *v91; // rbx
  __int64 v92; // r8
  __int64 v93; // rdx
  __int64 *v94; // rdi
  __int64 *i; // rax
  __int64 v96; // rsi
  __int64 v97; // rsi
  __int64 v98; // rsi
  __int64 *v99; // rbp
  __int64 v100; // rsi
  __int64 v101; // rsi
  __int64 v102; // rdi
  _QWORD *v103; // rax
  _QWORD *v104; // rax
  unsigned int v105; // [rsp+0h] [rbp-B8h]
  __int64 v106; // [rsp+0h] [rbp-B8h]
  __int64 v107; // [rsp+8h] [rbp-B0h]
  _DWORD *v108; // [rsp+8h] [rbp-B0h]
  _DWORD *v109; // [rsp+8h] [rbp-B0h]
  __int64 v110; // [rsp+10h] [rbp-A8h]
  unsigned int v111; // [rsp+10h] [rbp-A8h]
  __int64 v112; // [rsp+10h] [rbp-A8h]
  __int64 v113; // [rsp+10h] [rbp-A8h]
  __int64 v114; // [rsp+10h] [rbp-A8h]
  __m128i *v115; // [rsp+18h] [rbp-A0h]
  __m128i *v116; // [rsp+18h] [rbp-A0h]
  __int64 v117; // [rsp+20h] [rbp-98h]
  _DWORD *v118; // [rsp+20h] [rbp-98h]
  __int64 *v119; // [rsp+28h] [rbp-90h]
  const __m128i *v120; // [rsp+38h] [rbp-80h] BYREF
  unsigned __int64 v121; // [rsp+40h] [rbp-78h] BYREF
  __int64 v122; // [rsp+48h] [rbp-70h]
  __int64 v123; // [rsp+50h] [rbp-68h] BYREF
  __int64 v124; // [rsp+58h] [rbp-60h]
  __int64 v125[11]; // [rsp+60h] [rbp-58h] BYREF

  v7 = a1[1];
  v120 = nullptr;
  v8 = *(_QWORD **)(v7 + 936);
  if ( v8 )
  {
    v9 = *((unsigned int *)v8 - 1);
    v10 = *(_DWORD *)(v7 + 944);
    if ( v10 >= (unsigned int)v9 )
    {
LABEL_99:
      v79 = 24 * v9;
      v80 = 24LL * v10;
      v81 = &v8[(unsigned __int64)v79 / 8];
      v82 = &v8[(unsigned __int64)v80 / 8];
      if ( v80 != v79 )
      {
        v83 = v7;
        do
        {
          v85 = v82[1];
          v86 = *v82;
          if ( v85 )
          {
            v17 = (*(_DWORD *)(v85 + 8))-- == 1;
            if ( v17 )
            {
              sub_15D7BC0(v86, v85);
              v86 = *v82;
            }
          }
          v84 = v82[2];
          if ( v84 )
          {
            v17 = (*(_DWORD *)(v84 + 8))-- == 1;
            if ( v17 )
              sub_15D7BC0(v86, v84);
          }
          v82 += 3;
        }
        while ( v81 != v82 );
        v7 = v83;
        v8 = *(_QWORD **)(v83 + 936);
      }
      v58 = v120;
      *((_DWORD *)v8 - 1) = v10;
      v59 = v58;
      if ( v58 )
      {
        v60 = 0;
        if ( v58[-1].m128i_i32[3] )
        {
          while ( 1 )
          {
            v61 = *((unsigned int *)v8 - 1);
            if ( (_DWORD)v61 == *((_DWORD *)v8 - 2) )
            {
              v87 = (unsigned int)(3 * v61 + 1) >> 1;
              v105 = v87;
              v88 = 8 * (v87 + ((3 * (_DWORD)v61 + 1) & 0xFFFFFFFE)) + 8;
              if ( 24 * (int)v61 + 8 >= (unsigned int)v88 || (unsigned int)v61 >= v87 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_C0E620(v125, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v125);
                sub_233E40((__int64)v125);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v107 = v7;
              v89 = sub_186B270(v88);
              v7 = v107;
              v90 = (_DWORD *)v89;
              v8 = (_QWORD *)(v89 + 8);
              v91 = *(__int64 **)(v107 + 936);
              if ( v91 )
              {
                v92 = *((unsigned int *)v91 - 1);
                v93 = v89 + 8;
                *(_DWORD *)(v89 + 4) = v92;
                v94 = &v91[3 * v92];
                for ( i = v91; v94 != i; *(_QWORD *)(v93 - 8) = v98 )
                {
                  v96 = *i;
                  i += 3;
                  v93 += 24;
                  *(_QWORD *)(v93 - 24) = v96;
                  v97 = *(i - 2);
                  *(i - 2) = 0;
                  *(_QWORD *)(v93 - 16) = v97;
                  v98 = *(i - 1);
                  *(i - 1) = 0;
                }
                if ( (_DWORD)v92 )
                {
                  v108 = v90;
                  v112 = v7;
                  v99 = &v91[3 * v92];
                  do
                  {
                    while ( 1 )
                    {
                      v101 = v91[1];
                      v102 = *v91;
                      if ( v101 )
                      {
                        v17 = (*(_DWORD *)(v101 + 8))-- == 1;
                        if ( v17 )
                        {
                          sub_15D7BC0(v102, v101);
                          v102 = *v91;
                        }
                      }
                      v100 = v91[2];
                      if ( v100 )
                      {
                        v17 = (*(_DWORD *)(v100 + 8))-- == 1;
                        if ( v17 )
                          break;
                      }
                      v91 += 3;
                      if ( v91 == v99 )
                        goto LABEL_122;
                    }
                    sub_15D7BC0(v102, v100);
                    v91 += 3;
                  }
                  while ( v91 != v99 );
LABEL_122:
                  v7 = v112;
                  v90 = v108;
                  v91 = *(__int64 **)(v112 + 936);
                }
                v113 = v7;
                v109 = v90;
                sub_186B220(v91 - 1);
                v90 = v109;
                v7 = v113;
                v62 = (__m128 *)&v8[3 * (unsigned int)v109[1]];
              }
              else
              {
                *(_DWORD *)(v89 + 4) = 0;
                v62 = (__m128 *)(v89 + 8);
              }
              v58 = v120;
              *(_QWORD *)(v7 + 936) = v8;
              *v90 = v105;
            }
            else
            {
              v62 = (__m128 *)&v8[3 * v61];
            }
LABEL_62:
            v63 = (__m128)_mm_loadu_si128(v59);
            v64 = v59[1].m128i_i64[0];
            a4 = _mm_movehl_ps(a4, v63);
            v62[1].m128_u64[0] = v64;
            *v62 = v63;
            if ( a4.m128_u64[0] )
              ++*(_DWORD *)(a4.m128_u64[0] + 8);
            if ( v64 )
            {
              ++*(_DWORD *)(v64 + 8);
              ++v60;
              ++*((_DWORD *)v8 - 1);
              if ( !v58 )
                break;
            }
            else
            {
              ++*((_DWORD *)v8 - 1);
              ++v60;
              if ( !v58 )
                break;
            }
            if ( v60 >= v58[-1].m128i_i32[3] )
              break;
            v59 = (const __m128i *)((char *)v58 + 24 * v60);
          }
        }
      }
    }
    else
    {
      v11 = (__int64 *)&v120;
      v12 = 24LL * v10;
      v13 = 24 * (v10 + (unsigned __int64)((unsigned int)v9 - v10 - 1) + 1);
      do
      {
        v20 = a1[2];
        v21 = (const __m128i *)((char *)v8 + v12);
        v121 = 0;
        v122 = v20;
        v124 = v20;
        v22 = *a1;
        v123 = 0;
        (*(void (__fastcall **)(_QWORD *, __int64, unsigned __int64 *, __int64 *))(v22 + 16))(
          a1,
          (__int64)v8 + v12,
          &v121,
          &v123);
        v25 = a1[2];
        if ( *(_DWORD *)(v25 + 712) )
        {
          v26 = v123;
          if ( !v123 )
          {
            v36 = sub_15DE370(v25);
            v26 = v36;
            if ( v36 )
              ++*(_DWORD *)(v36 + 8);
            v37 = v123;
            if ( v123 )
            {
              v38 = v124;
              v17 = (*(_DWORD *)(v123 + 8))-- == 1;
              if ( v17 )
              {
                v114 = v36;
                sub_15D7BC0(v38, v37);
                v26 = v114;
              }
            }
            v123 = v26;
            v25 = a1[2];
          }
          v27 = sub_15DE0E0(v25, v21[1].m128i_i64[0], v26);
          if ( v27 )
            ++*(_DWORD *)(v27 + 8);
          v28 = v123;
          if ( v123 )
          {
            v29 = v124;
            v17 = (*(_DWORD *)(v123 + 8))-- == 1;
            if ( v17 )
            {
              v110 = v27;
              sub_15D7BC0(v29, v28);
              v27 = v110;
            }
          }
          v123 = v27;
        }
        v30 = v21->m128i_i64[1];
        if ( v121 == v30 )
        {
          v31 = (__m128i *)v120;
          if ( v120 )
          {
            v32 = v120[-1].m128i_u32[3];
            if ( (_DWORD)v32 == v120[-1].m128i_i32[2] )
            {
              v39 = (unsigned int)(3 * v32 + 1) >> 1;
              v111 = v39;
              v40 = 8 * (v39 + ((3 * (_DWORD)v32 + 1) & 0xFFFFFFFE)) + 8;
              if ( 24 * (int)v32 + 8 >= (unsigned int)v40 || (unsigned int)v32 >= v39 )
              {
                v4 = (char **)__cxa_allocate_exception(0x28u);
                sub_C0E620(v125, "Overflow encountered when expanding vector");
                *v4 = (char *)off_1C63128;
                sub_2333C0(v4 + 1, v125);
                sub_233E40((__int64)v125);
                __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v41 = sub_186B270(v40);
              v42 = (__int64 *)v120;
              v43 = (_DWORD *)v41;
              v31 = (__m128i *)(v41 + 8);
              if ( v120 )
              {
                v44 = v120[-1].m128i_u32[3];
                v45 = v41 + 8;
                *(_DWORD *)(v41 + 4) = v44;
                v46 = &v42[3 * v44];
                for ( j = v42; v46 != j; *(_QWORD *)(v45 - 8) = v50 )
                {
                  v48 = *j;
                  j += 3;
                  v45 += 24;
                  *(_QWORD *)(v45 - 24) = v48;
                  v49 = *(j - 2);
                  *(j - 2) = 0;
                  *(_QWORD *)(v45 - 16) = v49;
                  v50 = *(j - 1);
                  *(j - 1) = 0;
                }
                if ( (_DWORD)v44 )
                {
                  v117 = v12;
                  v51 = &v42[3 * v44];
                  v119 = v11;
                  v52 = v42;
                  v53 = v43;
                  v115 = v31;
                  v54 = v51;
                  do
                  {
                    while ( 1 )
                    {
                      v56 = v52[1];
                      v57 = *v52;
                      if ( v56 )
                      {
                        v17 = (*(_DWORD *)(v56 + 8))-- == 1;
                        if ( v17 )
                        {
                          sub_15D7BC0(v57, v56);
                          v57 = *v52;
                        }
                      }
                      v55 = v52[2];
                      if ( v55 )
                      {
                        v17 = (*(_DWORD *)(v55 + 8))-- == 1;
                        if ( v17 )
                          break;
                      }
                      v52 += 3;
                      if ( v52 == v54 )
                        goto LABEL_50;
                    }
                    sub_15D7BC0(v57, v55);
                    v52 += 3;
                  }
                  while ( v52 != v54 );
LABEL_50:
                  v43 = v53;
                  v31 = v115;
                  v12 = v117;
                  v11 = v119;
                  v42 = (__int64 *)v120;
                }
                v118 = v43;
                v116 = v31;
                sub_186B220(v42 - 1);
                v43 = v118;
                v31 = v116;
                v33 = (__m128i *)((char *)v116 + 24 * (unsigned int)v118[1]);
              }
              else
              {
                *(_DWORD *)(v41 + 4) = 0;
                v33 = (__m128i *)(v41 + 8);
              }
              v120 = v31;
              *v43 = v111;
              v30 = v21->m128i_i64[1];
            }
            else
            {
              v33 = (__m128i *)((char *)v120 + 24 * v32);
            }
          }
          else
          {
            v103 = (_QWORD *)sub_186B270(0x38u);
            v31 = (__m128i *)(v103 + 1);
            *v103 = 2;
            v30 = v21->m128i_i64[1];
            v120 = v31;
            v33 = v31;
          }
          v34 = v21[1].m128i_i64[0];
          v35 = _mm_unpacklo_epi64(_mm_loadl_epi64(v21), (__m128i)(unsigned __int64)v30);
          v33[1].m128i_i64[0] = v34;
          *v33 = v35;
          if ( v30 )
            ++*(_DWORD *)(v30 + 8);
          if ( v34 )
            ++*(_DWORD *)(v34 + 8);
          ++v31[-1].m128i_i32[3];
        }
        else
        {
          sub_C130D0((_BYTE *)a1[1], v121, v123, v11, v23, v24);
        }
        result = sub_18290A0(*(_QWORD *)a1[1]);
        v15 = v123;
        v16 = v124;
        if ( !(_BYTE)result )
        {
          if ( v123 )
          {
            v17 = (*(_DWORD *)(v123 + 8))-- == 1;
            if ( v17 )
              result = sub_15D7BC0(v16, v15);
          }
          v71 = v121;
          if ( v121 )
          {
            v72 = v122;
            v17 = (*(_DWORD *)(v121 + 8))-- == 1;
            if ( v17 )
              result = sub_15D7BC0(v72, v71);
          }
          v73 = (__int64 *)v120;
          if ( v120 )
          {
            v74 = v120[-1].m128i_u32[3];
            if ( (_DWORD)v74 )
            {
              v75 = &v120->m128i_i64[3 * v74];
              do
              {
                while ( 1 )
                {
                  v77 = v73[1];
                  v78 = *v73;
                  if ( v77 )
                  {
                    v17 = (*(_DWORD *)(v77 + 8))-- == 1;
                    if ( v17 )
                    {
                      sub_15D7BC0(v78, v77);
                      v78 = *v73;
                    }
                  }
                  v76 = v73[2];
                  if ( v76 )
                  {
                    v17 = (*(_DWORD *)(v76 + 8))-- == 1;
                    if ( v17 )
                      break;
                  }
                  v73 += 3;
                  if ( v73 == v75 )
                    goto LABEL_95;
                }
                sub_15D7BC0(v78, v76);
                v73 += 3;
              }
              while ( v73 != v75 );
LABEL_95:
              v73 = (__int64 *)v120;
            }
            return sub_186B220(v73 - 1);
          }
          return result;
        }
        if ( v123 )
        {
          v17 = (*(_DWORD *)(v123 + 8))-- == 1;
          if ( v17 )
            sub_15D7BC0(v16, v15);
        }
        v18 = v121;
        if ( v121 )
        {
          v19 = v122;
          v17 = (*(_DWORD *)(v121 + 8))-- == 1;
          if ( v17 )
            sub_15D7BC0(v19, v18);
        }
        v7 = a1[1];
        v12 += 24;
        v8 = *(_QWORD **)(v7 + 936);
      }
      while ( v13 != v12 );
      v10 = *(_DWORD *)(v7 + 944);
      if ( v8 )
      {
        v9 = *((unsigned int *)v8 - 1);
        goto LABEL_99;
      }
      v59 = v120;
      v106 = a1[1];
      if ( v120 && v120[-1].m128i_i32[3] )
      {
        v104 = (_QWORD *)sub_186B270(0x38u);
        v7 = v106;
        v8 = v104 + 1;
        v58 = v120;
        v60 = 0;
        *v104 = 2;
        v62 = (__m128 *)(v104 + 1);
        *(_QWORD *)(v106 + 936) = v104 + 1;
        goto LABEL_62;
      }
    }
  }
  result = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1);
  v65 = (__int64 *)v120;
  if ( v120 )
  {
    v66 = v120[-1].m128i_u32[3];
    if ( (_DWORD)v66 )
    {
      v67 = &v120->m128i_i64[3 * v66];
      do
      {
        v69 = v65[1];
        v70 = *v65;
        if ( v69 )
        {
          v17 = (*(_DWORD *)(v69 + 8))-- == 1;
          if ( v17 )
          {
            sub_15D7BC0(v70, v69);
            v70 = *v65;
          }
        }
        v68 = v65[2];
        if ( v68 )
        {
          v17 = (*(_DWORD *)(v68 + 8))-- == 1;
          if ( v17 )
            sub_15D7BC0(v70, v68);
        }
        v65 += 3;
      }
      while ( v65 != v67 );
      v65 = (__int64 *)v120;
    }
    return sub_186B220(v65 - 1);
  }
  return result;
}

