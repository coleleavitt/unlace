__int64 __fastcall sub_B46BC0(__int64 a1, __int64 a2, _QWORD *a3)
{
  char **exception; // rbp
  unsigned int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // ecx
  _BYTE *v9; // rbp
  _QWORD *v10; // r15
  unsigned int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  _QWORD *v14; // rdx
  _BYTE *v15; // rbx
  __int64 v16; // rdx
  char v17; // r15
  __int64 v18; // rbp
  __int64 result; // rax
  int v20; // edx
  int v21; // esi
  _QWORD *v22; // r13
  __m128i *v23; // r15
  unsigned int v24; // eax
  __int64 v25; // rdx
  int v26; // eax
  __m128i *v27; // rdx
  __int64 *v28; // rax
  __int64 v29; // rbp
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  _DWORD *v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rbp
  _QWORD *v37; // rbx
  __m128i *v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // rdi
  __m128i *v41; // rdi
  _QWORD *v42; // rdx
  __m128i *v43; // rsi
  unsigned int v44; // eax
  __int64 v45; // rdi
  __m128i *v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 *v49; // rax
  int v50; // eax
  _DWORD *v51; // rdx
  unsigned int v52; // ebp
  size_t v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rdi
  _DWORD *v56; // rsi
  __int64 v57; // rdx
  unsigned __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rsi
  __int64 v62; // rbx
  _QWORD *v63; // rbp
  __m128i *v64; // r8
  unsigned int v65; // eax
  __int64 v66; // rdi
  int v67; // eax
  __m128i *v68; // rdi
  unsigned int v69; // r15d
  size_t v70; // rdi
  __int64 v71; // rax
  __int64 v72; // rdi
  _DWORD *v73; // r8
  __int64 v74; // r9
  unsigned __int64 v75; // rax
  __int64 v76; // r9
  unsigned int v77; // r13d
  size_t v78; // rdi
  __int64 v79; // rax
  __int64 v80; // rdi
  _DWORD *v81; // rcx
  __int64 v82; // rdx
  unsigned __int64 v83; // rax
  __int64 v84; // rdx
  _QWORD *v85; // rax
  unsigned int v86; // r15d
  size_t v87; // rdi
  __int64 v88; // rax
  __int64 v89; // r10
  _DWORD *v90; // r9
  __int64 v91; // rdi
  unsigned __int64 v92; // rax
  __int64 v93; // rdi
  unsigned int v94; // ebp
  unsigned int v95; // esi
  __int64 v96; // rax
  __int64 v97; // rdi
  _DWORD *v98; // r8
  __int64 v99; // r9
  unsigned __int64 v100; // rax
  __int64 v101; // r9
  _QWORD *v102; // rax
  _QWORD *v103; // rax
  _QWORD *v104; // r8
  _QWORD *v105; // rax
  _QWORD *v106; // rsi
  _BYTE *v107; // [rsp+0h] [rbp-98h]
  _DWORD *v108; // [rsp+0h] [rbp-98h]
  __int64 v109; // [rsp+8h] [rbp-90h]
  _QWORD *v110; // [rsp+8h] [rbp-90h]
  _QWORD *v111; // [rsp+8h] [rbp-90h]
  _BYTE *v112; // [rsp+10h] [rbp-88h]
  __int64 v113; // [rsp+10h] [rbp-88h]
  _BYTE *v114; // [rsp+18h] [rbp-80h]
  __m128i *v115; // [rsp+18h] [rbp-80h]
  _DWORD *v116; // [rsp+18h] [rbp-80h]
  _DWORD *v117; // [rsp+20h] [rbp-78h]
  __m128i *v118; // [rsp+20h] [rbp-78h]
  _DWORD *v119; // [rsp+28h] [rbp-70h]
  _QWORD *v120; // [rsp+38h] [rbp-60h] BYREF
  __int64 v121[11]; // [rsp+40h] [rbp-58h] BYREF

  v6 = sub_B39350(*(_QWORD *)(a2 + 8), *(_DWORD *)(a1 + 8));
  if ( v6 == -1 )
  {
    v9 = nullptr;
  }
  else
  {
    do
    {
      v7 = v6;
      v8 = v6;
      v6 = *(_DWORD *)(*(_QWORD *)(a1 + 256) + 4LL * v6);
    }
    while ( v8 != v6 );
    v9 = *(_BYTE **)(*(_QWORD *)(*(_QWORD *)(a1 + 232) + 8 * v7) + 8LL);
    if ( (_BYTE *)a2 == v9 )
    {
      if ( (v9[44] & 8) != 0 )
        goto LABEL_5;
      goto LABEL_11;
    }
  }
  v10 = *(_QWORD **)(a1 + 400);
  if ( v10 )
  {
    v11 = *((_DWORD *)v10 - 1);
    if ( v11 == *((_DWORD *)v10 - 2) )
    {
      v77 = (3 * v11 + 1) >> 1;
      v78 = 16 * v77 + 8;
      if ( 16 * v11 + 8 >= (unsigned int)v78 || v11 >= v77 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v121, "Overflow encountered when expanding vector");
        goto LABEL_117;
      }
      v79 = sub_186B270(v78);
      v80 = *(_QWORD *)(a1 + 400);
      v81 = (_DWORD *)v79;
      v10 = (_QWORD *)(v79 + 8);
      if ( v80 )
      {
        v82 = *(unsigned int *)(v80 - 4);
        *(_DWORD *)(v79 + 4) = v82;
        v83 = 0;
        v84 = 16 * v82;
        if ( v84 )
        {
          do
          {
            *(__m128i *)&v81[v83 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v80 + v83));
            v83 += 16LL;
          }
          while ( v84 != v83 );
        }
        v108 = v81;
        sub_186B220((void *)(v80 - 8));
        v81 = v108;
        v14 = &v10[2 * (unsigned int)v108[1]];
        v13 = v108[1] + 1;
      }
      else
      {
        *(_DWORD *)(v79 + 4) = 0;
        v14 = (_QWORD *)(v79 + 8);
        v13 = 1;
      }
      *(_QWORD *)(a1 + 400) = v10;
      *v81 = v77;
    }
    else
    {
      v12 = v11;
      v13 = v11 + 1;
      v14 = &v10[2 * v12];
    }
  }
  else
  {
    v102 = (_QWORD *)sub_186B270(0x28u);
    v10 = v102 + 1;
    *v102 = 2;
    v13 = 1;
    *(_QWORD *)(a1 + 400) = v10;
    v14 = v10;
  }
  *v14 = a2;
  v14[1] = v9;
  *((_DWORD *)v10 - 1) = v13;
  if ( (v9[44] & 8) != 0 )
    goto LABEL_5;
LABEL_11:
  v15 = v9 + 112;
  v16 = 8LL * *(unsigned int *)(*(_QWORD *)v9 + 24LL);
  if ( !v16 )
    goto LABEL_5;
  v107 = &v9[v16 + 112];
  v17 = 0;
  do
  {
    while ( 1 )
    {
      v22 = *(_QWORD **)v15;
      if ( a3[1] != *(_QWORD *)(*(_QWORD *)v15 + 8LL) )
        goto LABEL_13;
      if ( v22 != a3 )
      {
        v23 = *(__m128i **)(a1 + 400);
        if ( !v23 )
        {
          v85 = (_QWORD *)sub_186B270(0x28u);
          v23 = (__m128i *)(v85 + 1);
          *v85 = 2;
          v26 = 1;
          *(_QWORD *)(a1 + 400) = v23;
          v27 = v23;
          goto LABEL_23;
        }
        v24 = v23[-1].m128i_u32[3];
        if ( v24 != v23[-1].m128i_i32[2] )
        {
          v25 = v24;
          v26 = v24 + 1;
          v27 = &v23[v25];
LABEL_23:
          *v27 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v22, (__m128i)(unsigned __int64)a3);
          v23[-1].m128i_i32[3] = v26;
          goto LABEL_24;
        }
        v52 = (3 * v24 + 1) >> 1;
        v53 = 16 * v52 + 8;
        if ( 16 * v24 + 8 < (unsigned int)v53 && v24 < v52 )
        {
          v54 = sub_186B270(v53);
          v55 = *(_QWORD *)(a1 + 400);
          v56 = (_DWORD *)v54;
          v23 = (__m128i *)(v54 + 8);
          if ( v55 )
          {
            v57 = *(unsigned int *)(v55 - 4);
            *(_DWORD *)(v54 + 4) = v57;
            v58 = 0;
            v59 = 16 * v57;
            if ( v59 )
            {
              do
              {
                *(__m128i *)&v56[v58 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v55 + v58));
                v58 += 16LL;
              }
              while ( v59 != v58 );
            }
            sub_186B220((void *)(v55 - 8));
            v27 = &v23[v56[1]];
            v26 = v56[1] + 1;
          }
          else
          {
            *(_DWORD *)(v54 + 4) = 0;
            v27 = (__m128i *)(v54 + 8);
            v26 = 1;
          }
          *(_QWORD *)(a1 + 400) = v23;
          *v56 = v52;
          goto LABEL_23;
        }
LABEL_116:
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v121, "Overflow encountered when expanding vector");
LABEL_117:
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v121);
        sub_233E40((__int64)v121);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
LABEL_24:
      v17 = 1;
LABEL_13:
      v18 = sub_15D1F10(*v22);
      result = *(_QWORD *)(v18 + 24);
      if ( !result )
        goto LABEL_17;
      v20 = *(_DWORD *)result;
      if ( *(_DWORD *)(a1 + 80) != *(_DWORD *)result || *(_DWORD *)(result + 4) )
      {
        v21 = *(_DWORD *)(a1 + 120);
        goto LABEL_16;
      }
      v47 = *(_QWORD *)(result + 8);
      v48 = 0xFFFFFFFF0LL;
      if ( v47 )
        v48 = 16LL * (unsigned int)(*(_DWORD *)(v47 - 4) - 1);
      v49 = (__int64 *)(v48 + v47);
      if ( *((_BYTE *)v49 + 8) != 1 )
LABEL_120:
        sub_DBF6E(0);
      v109 = *v49;
      v50 = sub_15F0200(a1 + 56);
      v51 = *(_DWORD **)(v109 + 24);
      if ( v51 )
      {
        if ( v50 == *v51 && !v51[1] )
        {
          v60 = *(_QWORD *)sub_B46500(a1, v22);
          if ( v60 )
          {
            v61 = v60 + 8LL * *(unsigned int *)(v60 - 4);
            if ( v61 != v60 )
            {
              v114 = v15;
              v62 = v60;
              v113 = v18;
              do
              {
                while ( 1 )
                {
                  v63 = *(_QWORD **)v62;
                  if ( a3[1] == *(_QWORD *)(*(_QWORD *)v62 + 8LL) )
                    break;
                  v62 += 8;
                  if ( v61 == v62 )
                    goto LABEL_77;
                }
                if ( v63 != a3 )
                {
                  v64 = *(__m128i **)(a1 + 400);
                  if ( v64 )
                  {
                    v65 = v64[-1].m128i_u32[3];
                    if ( v65 == v64[-1].m128i_i32[2] )
                    {
                      v86 = (3 * v65 + 1) >> 1;
                      v87 = 16 * v86 + 8;
                      if ( 16 * v65 + 8 >= (unsigned int)v87 || v65 >= v86 )
                        goto LABEL_116;
                      v88 = sub_186B270(v87);
                      v89 = *(_QWORD *)(a1 + 400);
                      v90 = (_DWORD *)v88;
                      v64 = (__m128i *)(v88 + 8);
                      if ( v89 )
                      {
                        v91 = *(unsigned int *)(v89 - 4);
                        *(_DWORD *)(v88 + 4) = v91;
                        v92 = 0;
                        v93 = 16 * v91;
                        if ( v93 )
                        {
                          do
                          {
                            *(__m128i *)&v90[v92 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v89 + v92));
                            v92 += 16LL;
                          }
                          while ( v93 != v92 );
                        }
                        v119 = v90;
                        v118 = v64;
                        sub_186B220((void *)(v89 - 8));
                        v90 = v119;
                        v64 = v118;
                        v68 = &v118[v119[1]];
                        v67 = v119[1] + 1;
                      }
                      else
                      {
                        *(_DWORD *)(v88 + 4) = 0;
                        v68 = (__m128i *)(v88 + 8);
                        v67 = 1;
                      }
                      *(_QWORD *)(a1 + 400) = v64;
                      *v90 = v86;
                    }
                    else
                    {
                      v66 = v65;
                      v67 = v65 + 1;
                      v68 = &v64[v66];
                    }
                  }
                  else
                  {
                    v104 = (_QWORD *)sub_186B270(0x28u);
                    *v104 = 2;
                    v67 = 1;
                    v64 = (__m128i *)(v104 + 1);
                    *(_QWORD *)(a1 + 400) = v64;
                    v68 = v64;
                  }
                  *v68 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v63, (__m128i)(unsigned __int64)a3);
                  v64[-1].m128i_i32[3] = v67;
                }
                v62 += 8;
                v17 = 1;
              }
              while ( v61 != v62 );
LABEL_77:
              v18 = v113;
              v15 = v114;
            }
          }
        }
      }
      result = *(_QWORD *)(v18 + 24);
      v21 = *(_DWORD *)(a1 + 120);
      if ( result )
        break;
LABEL_17:
      v15 += 8;
      if ( v107 == v15 )
        goto LABEL_48;
    }
    v20 = *(_DWORD *)result;
LABEL_16:
    if ( v21 != v20 || *(_DWORD *)(result + 4) )
      goto LABEL_17;
    v28 = *(__int64 **)(result + 8);
    if ( *((_BYTE *)v28 + 8) != 1 )
      goto LABEL_120;
    v29 = *v28;
    result = sub_15F0200(a1 + 56);
    v33 = *(_DWORD **)(v29 + 24);
    if ( !v33 )
      goto LABEL_17;
    if ( (_DWORD)result != *v33 )
      goto LABEL_17;
    result = (unsigned int)v33[1];
    if ( (_DWORD)result )
      goto LABEL_17;
    result = sub_B467F0(a1, v22, &v120, v30, v31, v32);
    v34 = *(_QWORD *)result;
    if ( *(_QWORD *)result )
    {
      result = *(unsigned int *)(v34 - 4);
      v35 = v34 + 8 * result;
      if ( v35 != v34 )
      {
        v36 = v34;
        v112 = v15;
        do
        {
          while ( 1 )
          {
            v37 = *(_QWORD **)v36;
            result = *(_QWORD *)(*(_QWORD *)v36 + 8LL);
            if ( a3[1] == result )
              break;
            v36 += 8;
            if ( v35 == v36 )
              goto LABEL_41;
          }
          if ( v37 != a3 )
          {
            v38 = *(__m128i **)(a1 + 400);
            if ( v38 )
            {
              v39 = v38[-1].m128i_u32[3];
              if ( v39 == v38[-1].m128i_i32[2] )
              {
                v69 = (3 * v39 + 1) >> 1;
                v70 = 16 * v69 + 8;
                if ( 16 * v39 + 8 >= (unsigned int)v70 || v39 >= v69 )
                  goto LABEL_116;
                v71 = sub_186B270(v70);
                v72 = *(_QWORD *)(a1 + 400);
                v73 = (_DWORD *)v71;
                v38 = (__m128i *)(v71 + 8);
                if ( v72 )
                {
                  v74 = *(unsigned int *)(v72 - 4);
                  *(_DWORD *)(v71 + 4) = v74;
                  v75 = 0;
                  v76 = 16 * v74;
                  if ( v76 )
                  {
                    do
                    {
                      *(__m128i *)&v73[v75 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v72 + v75));
                      v75 += 16LL;
                    }
                    while ( v76 != v75 );
                  }
                  v117 = v73;
                  v115 = v38;
                  sub_186B220((void *)(v72 - 8));
                  v73 = v117;
                  v38 = v115;
                  v41 = &v115[v117[1]];
                  result = (unsigned int)(v117[1] + 1);
                }
                else
                {
                  *(_DWORD *)(v71 + 4) = 0;
                  v41 = (__m128i *)(v71 + 8);
                  result = 1;
                }
                *(_QWORD *)(a1 + 400) = v38;
                *v73 = v69;
              }
              else
              {
                v40 = v39;
                result = v39 + 1;
                v41 = &v38[v40];
              }
            }
            else
            {
              v103 = (_QWORD *)sub_186B270(0x28u);
              v38 = (__m128i *)(v103 + 1);
              *v103 = 2;
              result = 1;
              *(_QWORD *)(a1 + 400) = v38;
              v41 = v38;
            }
            *v41 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v37, (__m128i)(unsigned __int64)a3);
            v38[-1].m128i_i32[3] = result;
          }
          v36 += 8;
          v17 = 1;
        }
        while ( v35 != v36 );
LABEL_41:
        v15 = v112;
      }
    }
    v42 = v120;
    if ( !v120 || v22 == v120 )
      goto LABEL_17;
    v43 = *(__m128i **)(a1 + 400);
    if ( v43 )
    {
      v44 = v43[-1].m128i_u32[3];
      if ( v44 == v43[-1].m128i_i32[2] )
      {
        v94 = (3 * v44 + 1) >> 1;
        v95 = 16 * v94 + 8;
        if ( 16 * v44 + 8 >= v95 || v44 >= v94 )
          goto LABEL_116;
        v110 = v120;
        v96 = sub_186B270(v95);
        v97 = *(_QWORD *)(a1 + 400);
        v42 = v110;
        v98 = (_DWORD *)v96;
        v43 = (__m128i *)(v96 + 8);
        if ( v97 )
        {
          v99 = *(unsigned int *)(v97 - 4);
          *(_DWORD *)(v96 + 4) = v99;
          v100 = 0;
          v101 = 16 * v99;
          if ( v101 )
          {
            do
            {
              *(__m128i *)&v98[v100 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v97 + v100));
              v100 += 16LL;
            }
            while ( v101 != v100 );
          }
          v116 = v98;
          sub_186B220((void *)(v97 - 8));
          v98 = v116;
          v42 = v110;
          v46 = &v43[v116[1]];
          result = (unsigned int)(v116[1] + 1);
        }
        else
        {
          *(_DWORD *)(v96 + 4) = 0;
          v46 = (__m128i *)(v96 + 8);
          result = 1;
        }
        *(_QWORD *)(a1 + 400) = v43;
        *v98 = v94;
      }
      else
      {
        v45 = v44;
        result = v44 + 1;
        v46 = &v43[v45];
      }
    }
    else
    {
      v111 = v120;
      v105 = (_QWORD *)sub_186B270(0x28u);
      v42 = v111;
      v106 = v105;
      *v105 = 2;
      result = 1;
      v43 = (__m128i *)(v106 + 1);
      *(_QWORD *)(a1 + 400) = v43;
      v46 = v43;
    }
    v15 += 8;
    *v46 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v22, (__m128i)(unsigned __int64)v42);
    v43[-1].m128i_i32[3] = result;
  }
  while ( v107 != v15 );
LABEL_48:
  if ( !v17 )
  {
LABEL_5:
    sub_1872CE0("");
    sub_1873130(114, 560);
  }
  return result;
}

