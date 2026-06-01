__int64 __fastcall sub_DD0F40(__int64 a1, __int64 a2, __int64 **a3, unsigned __int64 *a4)
{
  _QWORD *v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r13
  unsigned int *v9; // rbp
  _QWORD *v10; // rbx
  _QWORD *v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 *v15; // rcx
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 *v18; // r12
  _QWORD *v19; // rdx
  unsigned int i; // ecx
  __int64 v21; // rsi
  int v22; // eax
  _QWORD *v23; // rsi
  __int64 v24; // r15
  unsigned int v25; // eax
  unsigned int v26; // r8d
  size_t v27; // rsi
  unsigned int *v28; // rax
  __int64 v29; // rsi
  unsigned __int64 v30; // r12
  __int64 v31; // rsi
  _QWORD *v32; // r15
  unsigned int v33; // r12d
  _QWORD *v34; // rdi
  __int64 v35; // r8
  __int64 v36; // r8
  unsigned __int64 j; // rax
  bool v38; // zf
  __int64 *v39; // rbp
  unsigned __int64 v40; // r12
  __int64 v41; // rsi
  unsigned int v43; // r12d
  size_t v44; // rdi
  unsigned int *v45; // rdx
  __int64 *v46; // r15
  __int64 v47; // r9
  __int64 *v48; // r10
  unsigned __int64 v49; // rdi
  __int64 *v50; // rax
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rdi
  __m128i v53; // xmm0
  unsigned __int64 v54; // rax
  __int64 v55; // rdi
  __int64 *v56; // rsi
  __int64 v57; // r14
  unsigned int *v58; // r13
  void *v59; // rdi
  size_t v60; // rdi
  unsigned int *v61; // rcx
  __int64 *v62; // r15
  __int64 v63; // r12
  __int64 *v64; // rsi
  _DWORD *v65; // rdi
  int v66; // r10d
  __int64 *v67; // r9
  __int64 v68; // rdx
  __int64 v69; // rdx
  __int64 *v70; // r12
  __int64 *v71; // rbx
  unsigned int *v72; // r15
  __int64 *v73; // rbp
  __int64 *v74; // r13
  __int64 v75; // rsi
  __int64 v76; // rdi
  unsigned int v77; // r12d
  size_t v78; // rsi
  unsigned int *v79; // rax
  _QWORD *v80; // rax
  _QWORD *v81; // rax
  _QWORD *v82; // rax
  _QWORD *v83; // rax
  _DWORD *v84; // rsi
  __int64 v85; // rcx
  char **v86; // r14
  _QWORD *v87; // r14
  char **v88; // r15
  _QWORD *v89; // rbx
  _QWORD *exception; // rbx
  char **v91; // r14
  char **v92; // r14
  __int64 v93; // [rsp+0h] [rbp-E8h]
  __int64 v94; // [rsp+0h] [rbp-E8h]
  __int64 v95; // [rsp+8h] [rbp-E0h]
  __int64 v96; // [rsp+8h] [rbp-E0h]
  unsigned int v98; // [rsp+1Ch] [rbp-CCh]
  unsigned int v99; // [rsp+1Ch] [rbp-CCh]
  unsigned int v100; // [rsp+1Ch] [rbp-CCh]
  unsigned int v101; // [rsp+1Ch] [rbp-CCh]
  unsigned int v102; // [rsp+1Ch] [rbp-CCh]
  unsigned int v103; // [rsp+20h] [rbp-C8h]
  _DWORD *v104; // [rsp+20h] [rbp-C8h]
  unsigned int *v105; // [rsp+20h] [rbp-C8h]
  __int64 *v106; // [rsp+20h] [rbp-C8h]
  __int64 *v107; // [rsp+20h] [rbp-C8h]
  _QWORD *v110; // [rsp+40h] [rbp-A8h]
  _QWORD *v111; // [rsp+48h] [rbp-A0h]
  unsigned int *v112; // [rsp+48h] [rbp-A0h]
  unsigned int *v113; // [rsp+50h] [rbp-98h]
  __int64 v114; // [rsp+58h] [rbp-90h]
  unsigned int *v115; // [rsp+68h] [rbp-80h] BYREF
  __int64 v116; // [rsp+70h] [rbp-78h] BYREF
  _QWORD *v117; // [rsp+78h] [rbp-70h]
  __int64 v118; // [rsp+80h] [rbp-68h] BYREF
  __int64 v119; // [rsp+88h] [rbp-60h]
  __int64 v120[11]; // [rsp+90h] [rbp-58h] BYREF

  if ( *(_DWORD *)(a1 + 1424) != 1 )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "invalid recursive function definition, '(' expected");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  v4 = (_QWORD *)a1;
  sub_DC0980(a1);
  while ( *((_DWORD *)v4 + 356) != 2 )
  {
    while ( 1 )
    {
      v5 = *v4;
      sub_DFBCB0(*v4);
      v6 = *(_QWORD *)(v5 + 296);
      v7 = *v4;
      v93 = v6;
      sub_DFBCB0(*v4);
      v95 = *(_QWORD *)(v7 + 296);
      if ( *((_DWORD *)v4 + 356) != 1 )
      {
        v89 = __cxa_allocate_exception(0x30u);
        sub_305660(v89, "invalid recursive function definition, '(' expected");
        __cxa_throw(v89, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
      }
      sub_DC0980(v4);
      v118 = 0;
      v119 = v95;
      v117 = nullptr;
      v116 = v93;
      v115 = nullptr;
      sub_DD0A60((__int64)v120, v4, &v118, (__int64)&v116, &v115);
      v8 = v118;
      v9 = v115;
      v10 = v117;
      v94 = v116;
      v96 = v119;
      if ( v118 )
        ++*(_DWORD *)(v118 + 8);
      v11 = *(_QWORD **)(a2 + 8);
      if ( v11 )
      {
        v12 = *((_DWORD *)v11 - 1);
        if ( v12 == *((_DWORD *)v11 - 2) )
        {
          v77 = (3 * v12 + 1) >> 1;
          v78 = 8 * v77 + 8;
          if ( 8 * v12 + 8 >= (unsigned int)v78 || v12 >= v77 )
          {
            v91 = (char **)__cxa_allocate_exception(0x28u);
            sub_DBF430(v120, "Overflow encountered when expanding vector");
            *v91 = (char *)off_1C63128;
            sub_2333C0(v91 + 1, v120);
            sub_233E40((__int64)v120);
            __cxa_throw(v91, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v79 = (unsigned int *)sub_186B300(v11 - 1, v78);
          v11 = v79 + 2;
          *v79 = v77;
          *(_QWORD *)(a2 + 8) = v79 + 2;
          LODWORD(v79) = v79[1];
          v15 = &v11[(unsigned int)v79];
          v14 = (_DWORD)v79 + 1;
        }
        else
        {
          v13 = v12;
          v14 = v12 + 1;
          v15 = &v11[v13];
        }
      }
      else
      {
        v81 = (_QWORD *)sub_186B270(0x18u);
        v11 = v81 + 1;
        *v81 = 2;
        v15 = v81 + 1;
        *(_QWORD *)(a2 + 8) = v81 + 1;
        v14 = 1;
      }
      *v15 = v8;
      *((_DWORD *)v11 - 1) = v14;
      v16 = *a3;
      if ( *a3 )
      {
        LODWORD(v17) = *((_DWORD *)v16 - 1);
        v18 = &v16[2 * (unsigned int)v17];
        if ( (_DWORD)v17 == *((_DWORD *)v16 - 2) )
        {
          v101 = (unsigned int)(3 * v17 + 1) >> 1;
          v60 = 16 * v101 + 8;
          if ( 16 * (int)v17 + 8 >= (unsigned int)v60 || (unsigned int)v17 >= (unsigned int)(3 * v17 + 1) >> 1 )
          {
            v92 = (char **)__cxa_allocate_exception(0x28u);
            sub_DBF430(v120, "Overflow encountered when expanding vector");
            *v92 = (char *)off_1C63128;
            sub_2333C0(v92 + 1, v120);
            sub_233E40((__int64)v120);
            __cxa_throw(v92, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v61 = (unsigned int *)sub_186B270(v60);
          v62 = *a3;
          v16 = (__int64 *)(v61 + 2);
          if ( *a3 )
          {
            v63 = *((unsigned int *)v62 - 1);
            v64 = *a3;
            v65 = v61 + 2;
            v61[1] = v63;
            v66 = v63;
            v67 = &v62[2 * v63];
            if ( v67 != v62 )
            {
              do
              {
                v68 = *v64;
                v64 += 2;
                v65 += 4;
                *((_QWORD *)v65 - 2) = v68;
                v69 = *(v64 - 1);
                *(v64 - 1) = 0;
                *((_QWORD *)v65 - 1) = v69;
              }
              while ( v67 != v64 );
            }
            v70 = &v62[2 * v63];
            if ( v66 )
            {
              v106 = (__int64 *)(v61 + 2);
              v113 = v9;
              v114 = v8;
              v111 = v10;
              v71 = v62;
              v72 = v61;
              do
              {
                v73 = (__int64 *)v71[1];
                if ( v73 )
                {
                  v74 = &v73[*((unsigned int *)v73 - 1)];
                  if ( v73 >= v74 )
                    goto LABEL_81;
                  do
                  {
                    while ( 1 )
                    {
                      v75 = *v73;
                      if ( *v73 )
                      {
                        v76 = *v71;
                        v38 = (*(_DWORD *)(v75 + 8))-- == 1;
                        if ( v38 )
                          break;
                      }
                      if ( ++v73 >= v74 )
                        goto LABEL_80;
                    }
                    sub_15D7BC0(v76, v75);
                    ++v73;
                  }
                  while ( v73 < v74 );
LABEL_80:
                  v73 = (__int64 *)v71[1];
                  if ( v73 )
LABEL_81:
                    sub_186B220(v73 - 1);
                }
                v71 += 2;
              }
              while ( v71 != v70 );
              v61 = v72;
              v16 = v106;
              v10 = v111;
              v9 = v113;
              v8 = v114;
              v62 = *a3;
            }
            v112 = v61;
            v107 = v16;
            sub_186B220(v62 - 1);
            v61 = v112;
            v16 = v107;
            v17 = v112[1];
            v18 = &v107[2 * v17];
          }
          else
          {
            v61[1] = 0;
            v18 = (__int64 *)(v61 + 2);
            LODWORD(v17) = 0;
          }
          *a3 = v16;
          *v61 = v101;
        }
      }
      else
      {
        v82 = (_QWORD *)sub_186B270(0x28u);
        *v82 = 2;
        v16 = v82 + 1;
        LODWORD(v17) = 0;
        v18 = v16;
        *a3 = v16;
      }
      v18[1] = 0;
      *v18 = v94;
      if ( v10 )
      {
        v19 = nullptr;
        for ( i = 0; i < *((_DWORD *)v10 - 1); ++i )
        {
          v24 = v10[i];
          if ( v24 )
            ++*(_DWORD *)(v24 + 8);
          if ( v19 )
          {
            v25 = *((_DWORD *)v19 - 1);
            if ( v25 == *((_DWORD *)v19 - 2) )
            {
              v26 = (3 * v25 + 1) >> 1;
              v27 = 8 * v26 + 8;
              if ( 8 * v25 + 8 >= (unsigned int)v27 || v25 >= v26 )
              {
                v88 = (char **)__cxa_allocate_exception(0x28u);
                sub_DBF430(v120, "Overflow encountered when expanding vector");
                *v88 = (char *)off_1C63128;
                sub_2333C0(v88 + 1, v120);
                sub_233E40((__int64)v120);
                __cxa_throw(v88, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v103 = (3 * v25 + 1) >> 1;
              v98 = i;
              v28 = (unsigned int *)sub_186B300(v19 - 1, v27);
              v29 = v28[1];
              v19 = v28 + 2;
              v18[1] = (__int64)(v28 + 2);
              i = v98;
              *v28 = v103;
              LODWORD(v28) = v29;
              v23 = &v19[v29];
              v22 = (_DWORD)v28 + 1;
            }
            else
            {
              v21 = v25;
              v22 = v25 + 1;
              v23 = &v19[v21];
            }
          }
          else
          {
            v102 = i;
            v80 = (_QWORD *)sub_186B270(0x18u);
            v19 = v80 + 1;
            v23 = v19;
            *v80 = 2;
            i = v102;
            v22 = 1;
            v18[1] = (__int64)v19;
          }
          *v23 = v24;
          *((_DWORD *)v19 - 1) = v22;
        }
        v16 = *a3;
        LODWORD(v17) = *((_DWORD *)*a3 - 1);
      }
      *((_DWORD *)v16 - 1) = v17 + 1;
      v30 = *a4;
      if ( *a4 )
      {
        LODWORD(v31) = *(_DWORD *)(v30 - 4);
        v32 = (_QWORD *)(v30 + 8LL * (unsigned int)v31);
        if ( (_DWORD)v31 == *(_DWORD *)(v30 - 8) )
        {
          v43 = (unsigned int)(3 * v31 + 1) >> 1;
          v44 = 8 * v43 + 8;
          v100 = v43;
          if ( 8 * (int)v31 + 8 >= (unsigned int)v44 || (unsigned int)v31 >= v43 )
          {
            v86 = (char **)__cxa_allocate_exception(0x28u);
            sub_DBF430(v120, "Overflow encountered when expanding vector");
            *v86 = (char *)off_1C63128;
            sub_2333C0(v86 + 1, v120);
            sub_233E40((__int64)v120);
            __cxa_throw(v86, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v45 = (unsigned int *)sub_186B270(v44);
          v30 = (unsigned __int64)(v45 + 2);
          v46 = (__int64 *)*a4;
          if ( *a4 )
          {
            v47 = *((unsigned int *)v46 - 1);
            v45[1] = v47;
            v48 = &v46[v47];
            if ( v48 != v46 )
            {
              v49 = 8 * v47 - 8;
              v50 = v46;
              if ( v49 <= 8 || v46 < (__int64 *)v45 + 3 && v30 < (unsigned __int64)(v46 + 2) )
              {
                v84 = v45 + 2;
                do
                {
                  v85 = *v50;
                  *v50++ = 0;
                  v84 += 2;
                  *((_QWORD *)v84 - 1) = v85;
                }
                while ( v48 != v50 );
              }
              else
              {
                v51 = 0;
                v52 = (v49 >> 3) + 1;
                do
                {
                  v53 = _mm_loadu_si128((const __m128i *)&v46[v51 / 2]);
                  *(_OWORD *)&v46[v51 / 2] = 0;
                  *(__m128i *)&v45[v51 + 2] = v53;
                  v51 += 4LL;
                }
                while ( v51 != 4 * (v52 >> 1) );
                if ( (v52 & 1) != 0 )
                {
                  v54 = 2 * (v52 & 0xFFFFFFFFFFFFFFFELL);
                  v55 = v46[v54 / 2];
                  v46[v54 / 2] = 0;
                  *(_QWORD *)&v45[v54 + 2] = v55;
                }
              }
            }
            v56 = &v46[v47];
            if ( (_DWORD)v47 )
            {
              v104 = v45 + 2;
              v110 = v4;
              v57 = v8;
              v58 = v45;
              do
              {
                while ( *v46 )
                {
                  v59 = (void *)(*v46++ - 8);
                  sub_186B220(v59);
                  if ( v46 == v56 )
                    goto LABEL_61;
                }
                ++v46;
              }
              while ( v46 != v56 );
LABEL_61:
              v45 = v58;
              v8 = v57;
              v30 = (unsigned __int64)v104;
              v4 = v110;
              v46 = (__int64 *)*a4;
            }
            v105 = v45;
            sub_186B220(v46 - 1);
            v45 = v105;
            v31 = v105[1];
            v32 = (_QWORD *)(v30 + 8 * v31);
          }
          else
          {
            v45[1] = 0;
            v32 = v45 + 2;
            LODWORD(v31) = 0;
          }
          *a4 = v30;
          *v45 = v100;
        }
      }
      else
      {
        v83 = (_QWORD *)sub_186B270(0x18u);
        v30 = (unsigned __int64)(v83 + 1);
        *v83 = 2;
        LODWORD(v31) = 0;
        v32 = v83 + 1;
        *a4 = (unsigned __int64)(v83 + 1);
      }
      *v32 = 0;
      if ( v9 )
      {
        v33 = *(v9 - 1);
        v99 = *(v9 - 2);
        v34 = (_QWORD *)sub_186B270(8LL * v99 + 8);
        *v34 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v99), _mm_cvtsi32_si128(v33)).m128i_u64[0];
        v35 = *(v9 - 1);
        *v32 = v34 + 1;
        v36 = 8 * v35;
        v30 = *a4;
        LODWORD(v31) = *(_DWORD *)(*a4 - 4);
        if ( v36 )
        {
          for ( j = 0; j != v36; j += 8LL )
            v34[j / 8 + 1] = *(_QWORD *)&v9[j / 4];
        }
      }
      v38 = *((_DWORD *)v4 + 356) == 2;
      *(_DWORD *)(v30 - 4) = v31 + 1;
      if ( !v38 )
      {
        v87 = __cxa_allocate_exception(0x30u);
        sub_305660(v87, "invalid recursive function definition, ')' expected");
        __cxa_throw(v87, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
      }
      sub_DC0980(v4);
      if ( v8 )
      {
        v38 = (*(_DWORD *)(v8 + 8))-- == 1;
        if ( v38 )
          sub_15D7BC0(v96, v8);
      }
      if ( v9 )
        sub_186B220(v9 - 2);
      if ( !v10 )
        break;
      v39 = v10;
      v40 = (unsigned __int64)&v10[*((unsigned int *)v10 - 1)];
      if ( (unsigned __int64)v10 < v40 )
      {
        do
        {
          while ( 1 )
          {
            v41 = *v39;
            if ( *v39 )
            {
              v38 = (*(_DWORD *)(v41 + 8))-- == 1;
              if ( v38 )
                break;
            }
            if ( (unsigned __int64)++v39 >= v40 )
              goto LABEL_44;
          }
          ++v39;
          sub_15D7BC0(v94, v41);
        }
        while ( (unsigned __int64)v39 < v40 );
      }
LABEL_44:
      sub_186B220(v10 - 1);
      if ( *((_DWORD *)v4 + 356) == 2 )
        return sub_DC0980(v4);
    }
  }
  return sub_DC0980(v4);
}

