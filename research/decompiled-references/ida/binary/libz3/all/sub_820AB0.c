__int64 __fastcall sub_820AB0(__int64 a1, __int64 a2, _QWORD *a3)
{
  char **exception; // rbp
  char *v6; // r13
  unsigned int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // ecx
  char *v10; // rbx
  char v11; // r14
  __int64 v12; // rax
  char *v13; // r13
  __int64 result; // rax
  _QWORD *v15; // r15
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 *v19; // rax
  int v20; // eax
  _DWORD *v21; // rdx
  __int64 v22; // rdx
  __int64 i; // r8
  _QWORD *v24; // rsi
  __m128i *v25; // r9
  unsigned int v26; // eax
  __int64 v27; // rdi
  int v28; // eax
  __m128i *v29; // rdi
  _QWORD *v30; // r15
  unsigned int v31; // eax
  __int64 v32; // rdx
  int v33; // eax
  _QWORD *v34; // rdx
  __int64 *v35; // rax
  int v36; // ecx
  int v37; // r8d
  int v38; // r9d
  _DWORD *v39; // rdx
  __int64 v40; // rdx
  __int64 j; // r8
  _QWORD *v42; // rsi
  __m128i *v43; // r9
  unsigned int v44; // eax
  __int64 v45; // rdi
  __m128i *v46; // rdi
  _QWORD *v47; // rdx
  __m128i *v48; // rsi
  unsigned int v49; // eax
  __int64 v50; // rdi
  __m128i *v51; // rdi
  __m128i *v52; // rdx
  unsigned int v53; // eax
  __int64 v54; // rsi
  int v55; // eax
  __m128i *v56; // rsi
  unsigned int v57; // r14d
  size_t v58; // rdi
  __int64 v59; // rax
  __int64 v60; // rdi
  _DWORD *v61; // r8
  __int64 v62; // rsi
  unsigned __int64 v63; // rax
  __int64 v64; // rsi
  unsigned int v65; // r14d
  size_t v66; // rdi
  __int64 v67; // rax
  __int64 v68; // rdi
  _DWORD *v69; // r10
  __int64 v70; // r11
  unsigned __int64 v71; // rax
  __int64 v72; // r11
  unsigned int v73; // r14d
  size_t v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rdi
  _DWORD *v77; // rcx
  __int64 v78; // rdx
  unsigned __int64 v79; // rax
  __int64 v80; // rdx
  _QWORD *v81; // rax
  unsigned int v82; // r14d
  size_t v83; // rdi
  __int64 v84; // rax
  __int64 v85; // r11
  _DWORD *v86; // r10
  __int64 v87; // rdi
  unsigned __int64 v88; // rax
  __int64 v89; // rdi
  unsigned int v90; // esi
  __int64 v91; // rax
  __int64 v92; // rdi
  _DWORD *v93; // r8
  __int64 v94; // r9
  unsigned __int64 v95; // rax
  __int64 v96; // r9
  _QWORD *v97; // rax
  _QWORD *v98; // rax
  _QWORD *v99; // rax
  _QWORD *v100; // r9
  _QWORD *v101; // rax
  _QWORD *v102; // rsi
  __int64 v103; // [rsp+8h] [rbp-90h]
  __int64 v104; // [rsp+8h] [rbp-90h]
  __m128i *v105; // [rsp+8h] [rbp-90h]
  _DWORD *v106; // [rsp+8h] [rbp-90h]
  __int64 v107; // [rsp+8h] [rbp-90h]
  unsigned int v108; // [rsp+8h] [rbp-90h]
  __int64 v109; // [rsp+8h] [rbp-90h]
  _QWORD *v110; // [rsp+8h] [rbp-90h]
  _DWORD *v111; // [rsp+10h] [rbp-88h]
  __int64 v112; // [rsp+10h] [rbp-88h]
  _QWORD *v113; // [rsp+10h] [rbp-88h]
  __int64 v114; // [rsp+10h] [rbp-88h]
  __int64 v115; // [rsp+18h] [rbp-80h]
  __m128i *v116; // [rsp+18h] [rbp-80h]
  __int64 v117; // [rsp+18h] [rbp-80h]
  __int64 v118; // [rsp+18h] [rbp-80h]
  __int64 v119; // [rsp+18h] [rbp-80h]
  _DWORD *v120; // [rsp+20h] [rbp-78h]
  __m128i *v121; // [rsp+20h] [rbp-78h]
  _DWORD *v122; // [rsp+20h] [rbp-78h]
  __int64 v123; // [rsp+28h] [rbp-70h]
  _DWORD *v124; // [rsp+28h] [rbp-70h]
  _QWORD *v125; // [rsp+38h] [rbp-60h] BYREF
  __int64 v126[11]; // [rsp+40h] [rbp-58h] BYREF

  v6 = (char *)(*(_QWORD *)(a2 + 64) + 88LL);
  if ( *(int *)v6 >> 8 == -1 )
    goto LABEL_34;
  while ( *(_DWORD *)(a1 + 12) != *v6 )
  {
    v6 = *((char **)v6 + 1);
    if ( !v6 )
      goto LABEL_35;
  }
  v7 = *(int *)v6 >> 8;
  if ( v7 == -1 )
  {
LABEL_34:
    v6 = nullptr;
  }
  else
  {
    do
    {
      v8 = v7;
      v9 = v7;
      v7 = *(_DWORD *)(*(_QWORD *)(a1 + 336) + 4LL * v7);
    }
    while ( v9 != v7 );
    v6 = *(char **)(*(_QWORD *)(*(_QWORD *)(a1 + 312) + 8 * v8) + 8LL);
    if ( (char *)a2 == v6 )
      goto LABEL_8;
  }
LABEL_35:
  v30 = *(_QWORD **)(a1 + 408);
  if ( v30 )
  {
    v31 = *((_DWORD *)v30 - 1);
    if ( v31 == *((_DWORD *)v30 - 2) )
    {
      v73 = (3 * v31 + 1) >> 1;
      v74 = 16 * v73 + 8;
      if ( 16 * v31 + 8 >= (unsigned int)v74 || v31 >= v73 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v126, "Overflow encountered when expanding vector");
        goto LABEL_116;
      }
      v75 = sub_186B270(v74);
      v76 = *(_QWORD *)(a1 + 408);
      v77 = (_DWORD *)v75;
      v30 = (_QWORD *)(v75 + 8);
      if ( v76 )
      {
        v78 = *(unsigned int *)(v76 - 4);
        *(_DWORD *)(v75 + 4) = v78;
        v79 = 0;
        v80 = 16 * v78;
        if ( v80 )
        {
          do
          {
            *(__m128i *)&v77[v79 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v76 + v79));
            v79 += 16LL;
          }
          while ( v80 != v79 );
        }
        v106 = v77;
        sub_186B220((void *)(v76 - 8));
        v77 = v106;
        v34 = &v30[2 * (unsigned int)v106[1]];
        v33 = v106[1] + 1;
      }
      else
      {
        *(_DWORD *)(v75 + 4) = 0;
        v34 = (_QWORD *)(v75 + 8);
        v33 = 1;
      }
      *(_QWORD *)(a1 + 408) = v30;
      *v77 = v73;
    }
    else
    {
      v32 = v31;
      v33 = v31 + 1;
      v34 = &v30[2 * v32];
    }
  }
  else
  {
    v97 = (_QWORD *)sub_186B270(0x28u);
    v30 = v97 + 1;
    *v97 = 2;
    v33 = 1;
    *(_QWORD *)(a1 + 408) = v30;
    v34 = v30;
  }
  *v34 = a2;
  v34[1] = v6;
  *((_DWORD *)v30 - 1) = v33;
LABEL_8:
  v10 = v6 + 176;
  v11 = 0;
  v12 = 8LL * *((unsigned int *)v6 + 38);
  v13 = &v6[v12 + 176];
  if ( !v12 )
  {
LABEL_76:
    sub_1872CE0("");
    sub_1873130(114, 596);
  }
  do
  {
    while ( 1 )
    {
      v15 = *(_QWORD **)v10;
      if ( *(_QWORD *)(*(_QWORD *)v10 + 64LL) == a3[8] )
      {
        if ( v15 == a3 )
        {
LABEL_68:
          v11 = 1;
          goto LABEL_14;
        }
        v52 = *(__m128i **)(a1 + 408);
        if ( !v52 )
        {
          v81 = (_QWORD *)sub_186B270(0x28u);
          v52 = (__m128i *)(v81 + 1);
          *v81 = 2;
          v55 = 1;
          *(_QWORD *)(a1 + 408) = v52;
          v56 = v52;
          goto LABEL_67;
        }
        v53 = v52[-1].m128i_u32[3];
        if ( v53 != v52[-1].m128i_i32[2] )
        {
          v54 = v53;
          v55 = v53 + 1;
          v56 = &v52[v54];
LABEL_67:
          *v56 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v15, (__m128i)(unsigned __int64)a3);
          v52[-1].m128i_i32[3] = v55;
          goto LABEL_68;
        }
        v57 = (3 * v53 + 1) >> 1;
        v58 = 16 * v57 + 8;
        if ( 16 * v53 + 8 < (unsigned int)v58 && v53 < v57 )
        {
          v59 = sub_186B270(v58);
          v60 = *(_QWORD *)(a1 + 408);
          v61 = (_DWORD *)v59;
          v52 = (__m128i *)(v59 + 8);
          if ( v60 )
          {
            v62 = *(unsigned int *)(v60 - 4);
            *(_DWORD *)(v59 + 4) = v62;
            v63 = 0;
            v64 = 16 * v62;
            if ( v64 )
            {
              do
              {
                *(__m128i *)&v61[v63 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v60 + v63));
                v63 += 16LL;
              }
              while ( v63 != v64 );
            }
            v111 = v61;
            v105 = v52;
            sub_186B220((void *)(v60 - 8));
            v61 = v111;
            v52 = v105;
            v56 = &v105[v111[1]];
            v55 = v111[1] + 1;
          }
          else
          {
            *(_DWORD *)(v59 + 4) = 0;
            v56 = (__m128i *)(v59 + 8);
            v55 = 1;
          }
          *(_QWORD *)(a1 + 408) = v52;
          *v61 = v57;
          goto LABEL_67;
        }
LABEL_115:
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v126, "Overflow encountered when expanding vector");
LABEL_116:
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v126);
        sub_233E40((__int64)v126);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
LABEL_14:
      v16 = *(_QWORD *)(sub_15D1F10(*v15) + 24);
      if ( v16 && *(_DWORD *)(a1 + 136) == *(_DWORD *)v16 && !*(_DWORD *)(v16 + 4) )
      {
        v17 = *(_QWORD *)(v16 + 8);
        v18 = 0xFFFFFFFF0LL;
        if ( v17 )
          v18 = 16LL * (unsigned int)(*(_DWORD *)(v17 - 4) - 1);
        v19 = (__int64 *)(v18 + v17);
        if ( *((_BYTE *)v19 + 8) != 1 )
LABEL_119:
          sub_DBF6E(0);
        v103 = *v19;
        v20 = sub_15F0200(a1 + 112);
        v21 = *(_DWORD **)(v103 + 24);
        if ( v21 )
        {
          if ( v20 == *v21 && !v21[1] )
          {
            v22 = *(_QWORD *)sub_81DFD0(a1, (__int64)v15);
            if ( v22 )
            {
              for ( i = v22 + 8LL * *(unsigned int *)(v22 - 4); i != v22; v22 += 8 )
              {
                v24 = *(_QWORD **)v22;
                if ( *(_QWORD *)(*(_QWORD *)v22 + 64LL) == a3[8] )
                {
                  if ( v24 != a3 )
                  {
                    v25 = *(__m128i **)(a1 + 408);
                    if ( v25 )
                    {
                      v26 = v25[-1].m128i_u32[3];
                      if ( v26 == v25[-1].m128i_i32[2] )
                      {
                        v82 = (3 * v26 + 1) >> 1;
                        v83 = 16 * v82 + 8;
                        if ( 16 * v26 + 8 >= (unsigned int)v83 || v26 >= v82 )
                          goto LABEL_115;
                        v117 = i;
                        v107 = v22;
                        v84 = sub_186B270(v83);
                        v22 = v107;
                        v85 = *(_QWORD *)(a1 + 408);
                        i = v117;
                        v86 = (_DWORD *)v84;
                        v25 = (__m128i *)(v84 + 8);
                        if ( v85 )
                        {
                          v87 = *(unsigned int *)(v85 - 4);
                          *(_DWORD *)(v84 + 4) = v87;
                          v88 = 0;
                          v89 = 16 * v87;
                          if ( v89 )
                          {
                            do
                            {
                              *(__m128i *)&v86[v88 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v85 + v88));
                              v88 += 16LL;
                            }
                            while ( v88 != v89 );
                          }
                          v124 = v86;
                          v121 = v25;
                          sub_186B220((void *)(v85 - 8));
                          v86 = v124;
                          v25 = v121;
                          v22 = v107;
                          i = v117;
                          v29 = &v121[v124[1]];
                          v28 = v124[1] + 1;
                        }
                        else
                        {
                          *(_DWORD *)(v84 + 4) = 0;
                          v29 = (__m128i *)(v84 + 8);
                          v28 = 1;
                        }
                        *(_QWORD *)(a1 + 408) = v25;
                        *v86 = v82;
                      }
                      else
                      {
                        v27 = v26;
                        v28 = v26 + 1;
                        v29 = &v25[v27];
                      }
                    }
                    else
                    {
                      v119 = i;
                      v109 = v22;
                      v99 = (_QWORD *)sub_186B270(0x28u);
                      v22 = v109;
                      v100 = v99;
                      *v99 = 2;
                      i = v119;
                      v28 = 1;
                      v25 = (__m128i *)(v100 + 1);
                      *(_QWORD *)(a1 + 408) = v25;
                      v29 = v25;
                    }
                    *v29 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v24, (__m128i)(unsigned __int64)a3);
                    v25[-1].m128i_i32[3] = v28;
                  }
                  v11 = 1;
                }
              }
            }
          }
        }
      }
      result = *(_QWORD *)(sub_15D1F10(*v15) + 24);
      if ( result && *(_DWORD *)(a1 + 176) == *(_DWORD *)result && !*(_DWORD *)(result + 4) )
      {
        v35 = *(__int64 **)(result + 8);
        if ( *((_BYTE *)v35 + 8) != 1 )
          goto LABEL_119;
        v104 = *v35;
        result = sub_15F0200(a1 + 112);
        v39 = *(_DWORD **)(v104 + 24);
        if ( v39 )
        {
          if ( (_DWORD)result == *v39 )
          {
            result = (unsigned int)v39[1];
            if ( !(_DWORD)result )
            {
              v125 = nullptr;
              result = sub_8206D0(a1, v15, &v125, v36, v37, v38);
              v40 = *(_QWORD *)result;
              if ( *(_QWORD *)result )
              {
                result = *(unsigned int *)(v40 - 4);
                for ( j = v40 + 8 * result; j != v40; v11 = 1 )
                {
                  while ( 1 )
                  {
                    v42 = *(_QWORD **)v40;
                    result = a3[8];
                    if ( *(_QWORD *)(*(_QWORD *)v40 + 64LL) == result )
                      break;
                    v40 += 8;
                    if ( j == v40 )
                      goto LABEL_55;
                  }
                  if ( v42 != a3 )
                  {
                    v43 = *(__m128i **)(a1 + 408);
                    if ( v43 )
                    {
                      v44 = v43[-1].m128i_u32[3];
                      if ( v44 == v43[-1].m128i_i32[2] )
                      {
                        v65 = (3 * v44 + 1) >> 1;
                        v66 = 16 * v65 + 8;
                        if ( 16 * v44 + 8 >= (unsigned int)v66 || v44 >= v65 )
                          goto LABEL_115;
                        v115 = v40;
                        v112 = j;
                        v67 = sub_186B270(v66);
                        j = v112;
                        v68 = *(_QWORD *)(a1 + 408);
                        v40 = v115;
                        v69 = (_DWORD *)v67;
                        v43 = (__m128i *)(v67 + 8);
                        if ( v68 )
                        {
                          v70 = *(unsigned int *)(v68 - 4);
                          *(_DWORD *)(v67 + 4) = v70;
                          v71 = 0;
                          v72 = 16 * v70;
                          if ( v72 )
                          {
                            do
                            {
                              *(__m128i *)&v69[v71 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v68 + v71));
                              v71 += 16LL;
                            }
                            while ( v72 != v71 );
                          }
                          v123 = v115;
                          v120 = v69;
                          v116 = v43;
                          sub_186B220((void *)(v68 - 8));
                          v69 = v120;
                          v43 = v116;
                          j = v112;
                          v40 = v123;
                          v46 = &v116[v120[1]];
                          result = (unsigned int)(v120[1] + 1);
                        }
                        else
                        {
                          *(_DWORD *)(v67 + 4) = 0;
                          v46 = (__m128i *)(v67 + 8);
                          result = 1;
                        }
                        *(_QWORD *)(a1 + 408) = v43;
                        *v69 = v65;
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
                      v118 = v40;
                      v114 = j;
                      v98 = (_QWORD *)sub_186B270(0x28u);
                      j = v114;
                      v43 = (__m128i *)(v98 + 1);
                      *v98 = 2;
                      v40 = v118;
                      result = 1;
                      *(_QWORD *)(a1 + 408) = v43;
                      v46 = v43;
                    }
                    *v46 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v42, (__m128i)(unsigned __int64)a3);
                    v43[-1].m128i_i32[3] = result;
                  }
                  v40 += 8;
                }
              }
LABEL_55:
              v47 = v125;
              if ( v125 )
              {
                if ( v15 != v125 )
                  break;
              }
            }
          }
        }
      }
      v10 += 8;
      if ( v13 == v10 )
        goto LABEL_61;
    }
    v48 = *(__m128i **)(a1 + 408);
    if ( v48 )
    {
      v49 = v48[-1].m128i_u32[3];
      if ( v49 == v48[-1].m128i_i32[2] )
      {
        v108 = (3 * v49 + 1) >> 1;
        v90 = 16 * v108 + 8;
        if ( 16 * v49 + 8 >= v90 || v49 >= (3 * v49 + 1) >> 1 )
          goto LABEL_115;
        v113 = v125;
        v91 = sub_186B270(v90);
        v92 = *(_QWORD *)(a1 + 408);
        v47 = v113;
        v93 = (_DWORD *)v91;
        v48 = (__m128i *)(v91 + 8);
        if ( v92 )
        {
          v94 = *(unsigned int *)(v92 - 4);
          *(_DWORD *)(v91 + 4) = v94;
          v95 = 0;
          v96 = 16 * v94;
          if ( v96 )
          {
            do
            {
              *(__m128i *)&v93[v95 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v92 + v95));
              v95 += 16LL;
            }
            while ( v96 != v95 );
          }
          v122 = v93;
          sub_186B220((void *)(v92 - 8));
          v93 = v122;
          v47 = v113;
          v51 = &v48[v122[1]];
          result = (unsigned int)(v122[1] + 1);
        }
        else
        {
          *(_DWORD *)(v91 + 4) = 0;
          v51 = (__m128i *)(v91 + 8);
          result = 1;
        }
        *(_QWORD *)(a1 + 408) = v48;
        *v93 = v108;
      }
      else
      {
        v50 = v49;
        result = v49 + 1;
        v51 = &v48[v50];
      }
    }
    else
    {
      v110 = v125;
      v101 = (_QWORD *)sub_186B270(0x28u);
      v47 = v110;
      v102 = v101;
      *v101 = 2;
      result = 1;
      v48 = (__m128i *)(v102 + 1);
      *(_QWORD *)(a1 + 408) = v48;
      v51 = v48;
    }
    v10 += 8;
    *v51 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v15, (__m128i)(unsigned __int64)v47);
    v48[-1].m128i_i32[3] = result;
  }
  while ( v13 != v10 );
LABEL_61:
  if ( !v11 )
    goto LABEL_76;
  return result;
}

