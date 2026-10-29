__int64 __fastcall sub_5BBAB0(
        __int64 a1,
        _QWORD *a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  __int64 v9; // rax
  __int64 v10; // rbx
  __m128i v11; // xmm0
  char *v12; // r12
  __int64 v13; // rax
  int v14; // r10d
  __int64 v15; // rbx
  unsigned int v16; // r15d
  unsigned int v17; // r11d
  int v18; // r14d
  size_t v19; // r13
  char *v20; // rcx
  unsigned int v21; // esi
  __int64 v22; // rax
  char *v23; // r11
  char *v24; // rax
  char *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 *v28; // rax
  __int64 *v29; // rbx
  __int64 v30; // r8
  __int64 v31; // rdi
  unsigned int v32; // esi
  __int64 v33; // rax
  char *v34; // rcx
  __int64 *i; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  int v38; // edi
  _QWORD *v39; // rcx
  unsigned int v40; // r11d
  _QWORD *v41; // rax
  __int64 v42; // rdx
  _QWORD *v43; // r9
  _QWORD *v44; // rdx
  _QWORD *v45; // r10
  __int64 v46; // r11
  __int64 v47; // rax
  __int64 *v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rdx
  double v51; // xmm4_8
  double v52; // xmm5_8
  __int64 v53; // rax
  int v54; // edx
  int v55; // eax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // r14
  _OWORD *v62; // rax
  int v63; // r11d
  _OWORD *v64; // r10
  char *v65; // rax
  char *v66; // r15
  _OWORD *v67; // rax
  __int64 v68; // rdx
  _QWORD *v69; // rsi
  __int64 v70; // rdi
  _QWORD *v71; // rdx
  __int64 v72; // rsi
  __int64 v73; // rsi
  __int64 v74; // rax
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  char *v77; // r9
  char *v78; // r10
  __int64 v79; // rdx
  _QWORD *v80; // rsi
  __int64 v81; // rdi
  _QWORD *v82; // rdx
  __int64 *v83; // r12
  char *v84; // rsi
  unsigned int v85; // r13d
  __int64 v86; // rax
  __m128i v87; // xmm0
  _DWORD *v88; // rsi
  size_t v89; // rdx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 v93; // r8
  _DWORD *v94; // r9
  __int64 *v95; // r15
  __int64 *j; // r12
  __int64 v97; // rdx
  __int64 v98; // r12
  __int64 v99; // rcx
  int v100; // r8d
  int v101; // r9d
  _QWORD *v102; // [rsp+18h] [rbp-F8h]
  int v103; // [rsp+28h] [rbp-E8h]
  __int64 v104; // [rsp+28h] [rbp-E8h]
  _QWORD *v105; // [rsp+28h] [rbp-E8h]
  char *v106; // [rsp+30h] [rbp-E0h]
  __int64 v107; // [rsp+30h] [rbp-E0h]
  __int64 v108; // [rsp+38h] [rbp-D8h]
  unsigned int v109; // [rsp+40h] [rbp-D0h]
  int v110; // [rsp+40h] [rbp-D0h]
  _OWORD *v111; // [rsp+40h] [rbp-D0h]
  __int64 v112; // [rsp+48h] [rbp-C8h]
  int v114; // [rsp+58h] [rbp-B8h]
  size_t v115; // [rsp+58h] [rbp-B8h]
  __int64 v116; // [rsp+58h] [rbp-B8h]
  __int64 v118; // [rsp+68h] [rbp-A8h]
  __int64 v119; // [rsp+68h] [rbp-A8h]
  char *v120; // [rsp+68h] [rbp-A8h]
  unsigned int v121; // [rsp+68h] [rbp-A8h]
  __int64 v122; // [rsp+78h] [rbp-98h] BYREF
  __int64 v123; // [rsp+80h] [rbp-90h] BYREF
  void *v124; // [rsp+88h] [rbp-88h] BYREF

  if ( !(unsigned __int8)sub_64B2A0(*(_QWORD *)(a1 + 24)) )
    return 0;
  v108 = *(_QWORD *)(**(_QWORD **)sub_63BA90(a2, *(_QWORD *)(a1 + 168)) + 40LL);
  v9 = a2[3];
  if ( v9 )
  {
    v10 = *(unsigned int *)(v9 - 4);
    v11 = 0;
    v12 = (char *)sub_186B270(0x40u);
    *(_OWORD *)v12 = 0;
    *((_OWORD *)v12 + 1) = 0;
    *((_OWORD *)v12 + 2) = 0;
    *((_OWORD *)v12 + 3) = 0;
    if ( (_DWORD)v10 )
    {
      v13 = 8 * v10;
      v14 = 0;
      v15 = 0;
      v16 = 8;
      v112 = v13;
      v114 = 0;
      while ( 1 )
      {
        v17 = 2 * v16;
        v118 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2[3] + v15) + 40LL) + 16LL);
        if ( 3 * v16 < 4 * (v14 + v114) )
          break;
        v18 = v16 - 1;
        v19 = 8LL * v16;
        v20 = &v12[v19];
LABEL_7:
        v21 = *(_DWORD *)(v118 + 12);
        v22 = 8LL * (v18 & v21);
        v23 = &v12[v22];
        if ( v22 == v19 )
        {
          v25 = nullptr;
LABEL_15:
          if ( v12 == v23 )
          {
LABEL_23:
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v24 = v12;
          while ( 1 )
          {
            while ( 1 )
            {
              v27 = *(_QWORD *)v24;
              if ( *(_QWORD *)v24 <= 1u )
                break;
              if ( *(_DWORD *)(v27 + 12) == v21 && v118 == v27 )
              {
                *(_QWORD *)v24 = v118;
                goto LABEL_24;
              }
              v24 += 8;
              if ( v23 == v24 )
                goto LABEL_23;
            }
            if ( !v27 )
              break;
            v25 = v24;
            v24 += 8;
            if ( v23 == v24 )
              goto LABEL_23;
          }
          v73 = v118;
          if ( v25 )
            goto LABEL_98;
LABEL_102:
          v25 = v24;
          v74 = v73;
        }
        else
        {
          v24 = &v12[v22];
          v25 = nullptr;
          while ( 1 )
          {
            while ( 1 )
            {
              v26 = *(_QWORD *)v24;
              if ( *(_QWORD *)v24 <= 1u )
                break;
              if ( *(_DWORD *)(v26 + 12) == v21 && v118 == v26 )
              {
                *(_QWORD *)v24 = v118;
                goto LABEL_24;
              }
              v24 += 8;
              if ( v24 == v20 )
                goto LABEL_15;
            }
            if ( !v26 )
              break;
            v25 = v24;
            v24 += 8;
            if ( v24 == v20 )
              goto LABEL_15;
          }
          v73 = v118;
          if ( !v25 )
            goto LABEL_102;
LABEL_98:
          --v14;
          v74 = v73;
        }
        *(_QWORD *)v25 = v74;
        ++v114;
LABEL_24:
        v15 += 8;
        if ( v15 == v112 )
          goto LABEL_25;
      }
      v61 = v17;
      v110 = 2 * v16;
      v19 = 8LL * v17;
      v62 = (_OWORD *)sub_186B270(v19);
      v63 = 2 * v16;
      v64 = v62;
      if ( 2 * v16 )
      {
        v65 = (char *)memset(v62, 0, 8 * v61);
        v63 = 2 * v16;
        v64 = v65;
        v66 = &v12[8 * v16];
        v20 = &v65[v19];
        v18 = v110 - 1;
      }
      else
      {
        v20 = (char *)v62;
        v18 = -1;
        v66 = &v12[8 * v16];
        if ( v12 == v66 )
        {
LABEL_89:
          if ( v12 )
          {
            v103 = v63;
            v106 = v20;
            v111 = v64;
            sub_186B220(v12);
            v63 = v103;
            v20 = v106;
            v64 = v111;
          }
          v12 = (char *)v64;
          v16 = v63;
          v14 = 0;
          goto LABEL_7;
        }
      }
      v67 = v12;
      do
      {
        while ( *(_QWORD *)v67 <= 1u )
        {
          v67 = (_OWORD *)((char *)v67 + 8);
          if ( v67 == (_OWORD *)v66 )
            goto LABEL_89;
        }
        v68 = 8LL * (*(_DWORD *)(*(_QWORD *)v67 + 12LL) & (unsigned int)v18);
        v69 = (_QWORD *)((char *)v64 + v68);
        if ( v19 == v68 )
        {
LABEL_92:
          if ( v64 == (_OWORD *)v69 )
          {
LABEL_100:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v70 = v118;
          v71 = v64;
          while ( *v71 )
          {
            if ( v69 == ++v71 )
              goto LABEL_100;
          }
        }
        else
        {
          v70 = v118;
          v71 = (_QWORD *)((char *)v64 + v68);
          while ( *v71 )
          {
            if ( ++v71 == (_QWORD *)v20 )
              goto LABEL_92;
          }
        }
        v72 = *(_QWORD *)v67;
        v67 = (_OWORD *)((char *)v67 + 8);
        v118 = v70;
        *v71 = v72;
      }
      while ( v67 != (_OWORD *)v66 );
      goto LABEL_89;
    }
    v19 = 64;
    v18 = 7;
  }
  else
  {
    v19 = 64;
    v18 = 7;
    v11 = 0;
    v12 = (char *)sub_186B270(0x40u);
    *(_OWORD *)v12 = 0;
    *((_OWORD *)v12 + 1) = 0;
    *((_OWORD *)v12 + 2) = 0;
    *((_OWORD *)v12 + 3) = 0;
  }
LABEL_25:
  sub_639440(&v123, *(_QWORD *)(a1 + 24));
  if ( a2[18] )
  {
    v28 = a2 + 7;
  }
  else
  {
    sub_641080(&v123, a2);
    v28 = &v123;
  }
  v29 = (__int64 *)*v28;
  v30 = *v28 + 16LL * *((unsigned int *)v28 + 2);
  if ( *v28 != v30 )
  {
    while ( (unsigned __int64)*v29 <= 1 )
    {
      v29 += 2;
      if ( (__int64 *)v30 == v29 )
        goto LABEL_65;
    }
    if ( (__int64 *)v30 != v29 )
    {
      v119 = *v29;
      while ( 1 )
      {
        v31 = v119;
        v32 = *(_DWORD *)(v119 + 12);
        v33 = 8LL * (v18 & v32);
        v34 = &v12[v33];
        if ( v33 != v19 )
        {
          for ( i = (__int64 *)&v12[v33]; &v12[v19] != (char *)i; ++i )
          {
            v36 = *i;
            if ( (unsigned __int64)*i > 1 )
            {
              if ( *(_DWORD *)(v36 + 12) == v32 && v36 == v119 )
                goto LABEL_60;
            }
            else if ( !v36 )
            {
LABEL_40:
              v119 = v31;
              goto LABEL_41;
            }
          }
        }
        if ( v12 != v34 )
        {
          v31 = v119;
          v59 = (__int64 *)v12;
          while ( 1 )
          {
            v60 = *v59;
            if ( (unsigned __int64)*v59 > 1 )
            {
              if ( *(_DWORD *)(v60 + 12) == v32 && v60 == v119 )
                goto LABEL_60;
            }
            else if ( !v60 )
            {
              goto LABEL_40;
            }
            if ( v34 == (char *)++v59 )
              goto LABEL_40;
          }
        }
LABEL_41:
        v37 = *(unsigned int *)(a1 + 72);
        v38 = *(_DWORD *)(a1 + 80);
        v109 = 2 * v37;
        if ( 3 * (int)v37 >= (unsigned int)(4 * (v38 + *(_DWORD *)(a1 + 76))) )
        {
          v39 = *(_QWORD **)(a1 + 64);
          v40 = v37 - 1;
          v115 = 8 * v37;
          v41 = &v39[v37];
          goto LABEL_43;
        }
        v104 = v30;
        v115 = 8LL * v109;
        v75 = (_QWORD *)sub_186B270(v115);
        v39 = v75;
        v30 = v104;
        if ( v109 )
        {
          v76 = memset(v75, 0, 8LL * v109);
          v30 = v104;
          v39 = v76;
        }
        v77 = *(char **)(a1 + 64);
        v40 = v109 - 1;
        v78 = &v77[8 * *(unsigned int *)(a1 + 72)];
        v41 = &v39[v115 / 8];
        if ( v77 != v78 )
          break;
        if ( v78 )
          goto LABEL_107;
LABEL_108:
        *(_QWORD *)(a1 + 64) = v39;
        *(_DWORD *)(a1 + 72) = v109;
        v38 = 0;
        *(_DWORD *)(a1 + 80) = 0;
        v32 = *(_DWORD *)(v119 + 12);
LABEL_43:
        v42 = 8LL * (v32 & v40);
        v43 = &v39[(unsigned __int64)v42 / 8];
        if ( v42 == v115 )
        {
          v45 = nullptr;
LABEL_51:
          if ( v43 == v39 )
          {
LABEL_59:
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          while ( 1 )
          {
            while ( 1 )
            {
              v47 = *v39;
              if ( *v39 <= 1u )
                break;
              if ( *(_DWORD *)(v47 + 12) == v32 && v47 == v119 )
              {
                *v39 = v119;
                goto LABEL_60;
              }
              if ( v43 == ++v39 )
                goto LABEL_59;
            }
            if ( !v47 )
              break;
            v45 = v39++;
            if ( v43 == v39 )
              goto LABEL_59;
          }
          if ( v45 )
            *(_DWORD *)(a1 + 80) = v38 - 1;
          else
            v45 = v39;
        }
        else
        {
          v44 = &v39[(unsigned __int64)v42 / 8];
          v45 = nullptr;
          while ( 1 )
          {
            while ( 1 )
            {
              v46 = *v44;
              if ( *v44 <= 1u )
                break;
              if ( *(_DWORD *)(v46 + 12) == v32 && v46 == v119 )
              {
                *v44 = v119;
                goto LABEL_60;
              }
              if ( ++v44 == v41 )
                goto LABEL_51;
            }
            if ( !v46 )
              break;
            v45 = v44++;
            if ( v44 == v41 )
              goto LABEL_51;
          }
          if ( v45 )
            *(_DWORD *)(a1 + 80) = v38 - 1;
          else
            v45 = v44;
        }
        *v45 = v119;
        ++*(_DWORD *)(a1 + 76);
LABEL_60:
        v48 = v29 + 2;
        if ( (__int64 *)v30 != v29 + 2 )
        {
          while ( 1 )
          {
            v29 = v48;
            if ( (unsigned __int64)*v48 > 1 )
              break;
            v48 += 2;
            if ( (__int64 *)v30 == v48 )
              goto LABEL_65;
          }
          v119 = *v48;
          if ( (__int64 *)v30 != v48 )
            continue;
        }
        goto LABEL_65;
      }
      do
      {
        while ( *(_QWORD *)v77 <= 1u )
        {
          v77 += 8;
          if ( v78 == v77 )
            goto LABEL_116;
        }
        v79 = 8LL * (*(_DWORD *)(*(_QWORD *)v77 + 12LL) & v40);
        v80 = &v39[(unsigned __int64)v79 / 8];
        if ( v115 == v79 )
        {
LABEL_118:
          if ( v39 == v80 )
          {
LABEL_145:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v81 = v119;
          v82 = v39;
          while ( *v82 )
          {
            if ( v80 == ++v82 )
              goto LABEL_145;
          }
        }
        else
        {
          v81 = v119;
          v82 = &v39[(unsigned __int64)v79 / 8];
          while ( *v82 )
          {
            if ( v41 == ++v82 )
              goto LABEL_118;
          }
        }
        v119 = v81;
        *v82 = *(_QWORD *)v77;
        v77 += 8;
      }
      while ( v78 != v77 );
LABEL_116:
      v78 = *(char **)(a1 + 64);
      if ( !v78 )
        goto LABEL_108;
LABEL_107:
      v102 = &v39[v115 / 8];
      v105 = v39;
      v107 = v30;
      sub_186B220(v78);
      v41 = v102;
      v40 = v109 - 1;
      v39 = v105;
      v30 = v107;
      goto LABEL_108;
    }
  }
LABEL_65:
  sub_63D2D0(&v123);
  if ( v12 )
    sub_186B220(v12);
  v122 = 0;
  sub_5B81C0((unsigned int *)a1, v108, &v122);
  v49 = sub_186B270(0xF8u);
  sub_63D370(v49, *(_QWORD *)(a1 + 24));
  sub_63DFA0(v49, a2, v50, *(double *)v11.m128i_i64, a4, a5, a6, v51, v52, a9);
  v53 = *(_QWORD *)(a1 + 88);
  if ( v53 )
  {
    v54 = *(_DWORD *)(v53 - 4);
    if ( v54 )
    {
      while ( 1 )
      {
        v83 = (__int64 *)(v53 + 16LL * (unsigned int)(v54 - 1));
        v116 = *v83;
        v123 = *v83;
        v84 = (char *)v83[1];
        v120 = v84;
        if ( v84 )
        {
          v85 = *((_DWORD *)v84 - 1);
          v121 = *((_DWORD *)v84 - 2);
          v86 = sub_186B270(4LL * v121 + 8);
          v87 = _mm_cvtsi32_si128(v121);
          v88 = (_DWORD *)v83[1];
          v120 = (char *)(v86 + 8);
          v11 = _mm_unpacklo_epi32(v87, _mm_cvtsi32_si128(v85));
          *(_QWORD *)v86 = v11.m128i_i64[0];
          if ( !v88 )
            goto LABEL_164;
          v89 = 4LL * (unsigned int)*(v88 - 1);
          if ( v89 <= 4 )
          {
            if ( v89 == 4 )
              *(_DWORD *)(v86 + 8) = *v88;
LABEL_164:
            v53 = *(_QWORD *)(a1 + 88);
            goto LABEL_128;
          }
          memmove((void *)(v86 + 8), v88, v89);
          v53 = *(_QWORD *)(a1 + 88);
        }
LABEL_128:
        v90 = 0xFFFFFFFF0LL;
        v91 = v53;
        if ( v53 )
          v90 = 16LL * (unsigned int)(*(_DWORD *)(v53 - 4) - 1);
        v92 = *(_QWORD *)(v53 + v90 + 8);
        if ( v92 )
        {
          sub_186B220((void *)(v92 - 8));
          v91 = *(_QWORD *)(a1 + 88);
        }
        --*(_DWORD *)(v91 - 4);
        v95 = *(__int64 **)sub_63BA90(a2, v116);
        if ( v95 )
        {
          for ( j = &v95[*((unsigned int *)v95 - 1)]; v95 != j; ++v95 )
          {
            v97 = *v95;
            v124 = v120;
            sub_5BA840(a1, &v124, v97, v49, v11, v93, v94);
          }
        }
        v98 = *(_QWORD *)(a1 + 24);
        sub_654200(v98, 0);
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v98 + 2968) + 224LL))(
                *(_QWORD *)(v98 + 2968),
                v116) )
        {
          v124 = v120;
          sub_5BA380(a1, &v123, v49, *(double *)v11.m128i_i64, v99, v100, v101);
        }
        if ( v120 )
        {
          sub_186B220(v120 - 8);
          v53 = *(_QWORD *)(a1 + 88);
          if ( !v53 )
            break;
          v54 = *(_DWORD *)(v53 - 4);
          if ( !v54 )
            break;
        }
        else
        {
          v53 = *(_QWORD *)(a1 + 88);
          if ( !v53 )
            break;
          v54 = *(_DWORD *)(v53 - 4);
          if ( !v54 )
            break;
        }
      }
    }
  }
  v123 = sub_5B81C0((unsigned int *)a1, v108, &v122);
  v55 = sub_5B9720(a1, v123);
  v56 = sub_62C680((unsigned int)*(_QWORD *)(a1 + 24) + 656, v55, 0, 0, 0, (unsigned int)&qword_18D6CD0, 1);
  sub_63DAD0(v49, v56, *(double *)v11.m128i_i64);
  v57 = sub_62C680(*(_DWORD *)(a1 + 24) + 656, v108, 1, (unsigned int)&v123, 0, (unsigned int)&qword_18D6CD0, 1);
  sub_63DAD0(v49, v57, *(double *)v11.m128i_i64);
  return v49;
}

