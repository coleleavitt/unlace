void ***__fastcall sub_1754C50(_QWORD *a1, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rcx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rdi
  __m128 v12; // xmm0
  __m128 v13; // xmm0
  __int64 v14; // rax
  unsigned __int64 v15; // rsi
  void **v16; // r12
  unsigned __int64 v17; // rdx
  char ***v18; // r14
  const void **v19; // rbx
  char ***v20; // r13
  __int64 v21; // rcx
  unsigned __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  size_t v26; // r8
  char *v27; // r10
  __int64 v28; // r9
  char *v29; // r10
  __int64 v30; // rax
  signed __int64 v31; // r9
  __int64 v32; // r8
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rax
  char ***v35; // rdi
  void **v36; // rdx
  __int64 v37; // r9
  char *v38; // r11
  _WORD *v39; // r8
  char *v40; // rcx
  __int64 v41; // rax
  int v42; // ecx
  void **v43; // rbp
  void **v44; // rbx
  void **v45; // rbp
  void **v46; // rbx
  _DWORD *v47; // rdi
  int v48; // eax
  void **v49; // rdi
  void ***v50; // rax
  void ***v51; // rbx
  void **v52; // rbp
  void **v53; // rbx
  unsigned __int64 v55; // rdx
  char ***v56; // rsi
  char *v57; // rdi
  unsigned __int64 v58; // rax
  char *v59; // rax
  char *j; // rsi
  __int16 v61; // cx
  _WORD *v62; // rdx
  char *v63; // r8
  _WORD *v64; // r9
  int v65; // edx
  __int64 v66; // rbx
  __int64 v67; // r14
  unsigned __int64 v68; // rsi
  char ***v69; // rbx
  char ***v70; // r14
  char ***v71; // r13
  unsigned __int64 v72; // r8
  char ***v73; // rdi
  void **v74; // rsi
  __int64 v75; // r10
  char *v76; // rcx
  _WORD *v77; // rdx
  char *v78; // rax
  unsigned __int64 v79; // r11
  char ***v80; // rsi
  char *v81; // rdi
  unsigned __int64 v82; // r8
  char *v83; // r8
  char *i; // rax
  __int16 v85; // si
  _WORD *v86; // rdx
  char *v87; // rcx
  _WORD *v88; // r9
  int v89; // edx
  char ***v90; // rbp
  char *v91; // [rsp+8h] [rbp-550h] BYREF
  char ***v92; // [rsp+10h] [rbp-548h]
  const void **v93; // [rsp+18h] [rbp-540h]
  char ***p_base; // [rsp+20h] [rbp-538h]
  char ***v95; // [rsp+28h] [rbp-530h]
  void ***v96; // [rsp+30h] [rbp-528h]
  void **v97; // [rsp+38h] [rbp-520h]
  void ***v98; // [rsp+40h] [rbp-518h]
  __int64 v99; // [rsp+48h] [rbp-510h]
  __int64 v100; // [rsp+50h] [rbp-508h]
  void **v101; // [rsp+58h] [rbp-500h]
  void **v102; // [rsp+60h] [rbp-4F8h] BYREF
  void ***v103; // [rsp+68h] [rbp-4F0h]
  void *v104; // [rsp+70h] [rbp-4E8h] BYREF
  __int64 v105; // [rsp+78h] [rbp-4E0h]
  _BYTE v106[48]; // [rsp+80h] [rbp-4D8h] BYREF
  void *base; // [rsp+B0h] [rbp-4A8h] BYREF
  __int64 v108; // [rsp+B8h] [rbp-4A0h]
  _BYTE v109[48]; // [rsp+C0h] [rbp-498h] BYREF
  void *ptr[2]; // [rsp+F0h] [rbp-468h] BYREF
  __m128 v111; // [rsp+100h] [rbp-458h]
  void **v112; // [rsp+130h] [rbp-428h] BYREF
  __int64 v113; // [rsp+138h] [rbp-420h]
  char v114; // [rsp+140h] [rbp-418h] BYREF
  void **v115; // [rsp+280h] [rbp-2D8h] BYREF
  __int64 v116; // [rsp+288h] [rbp-2D0h]
  char v117; // [rsp+290h] [rbp-2C8h] BYREF
  void *v118; // [rsp+3D0h] [rbp-188h] BYREF
  __int64 v119; // [rsp+3D8h] [rbp-180h]
  _DWORD v120[94]; // [rsp+3E0h] [rbp-178h] BYREF

  v7 = (__int64)(a1 + 2);
  v9 = *a3;
  v98 = (void ***)a1;
  v96 = &v112;
  v112 = (void **)&v114;
  v113 = 0x500000000LL;
  v101 = (void **)(a1 + 2);
  v10 = v9 & 3;
  if ( (v9 & 3) == 0 )
  {
    v48 = sub_1754230((__int64)a2, v9 & 0xFFFFFFFFFFFFFFFCLL, v10, v7, a5, a6);
LABEL_51:
    v120[0] = v48;
    v49 = v101;
    v119 = 0xC00000001LL;
    v50 = v98;
    v118 = v120;
    *v98 = v101;
    v50[1] = (void **)0x500000000LL;
    v51 = v50;
    v50[2] = (void **)(v50 + 4);
    v50[3] = (void **)0xC00000000LL;
    sub_17460F0(v49, (char **)&v118);
    v47 = v118;
    ++*((_DWORD *)v51 + 2);
    if ( v47 == v120 )
      goto LABEL_53;
    goto LABEL_52;
  }
  if ( v10 == 1 )
  {
    v48 = sub_1749940((__int64)a2, v9 & 0xFFFFFFFFFFFFFFFCLL, 1, v7, a5, a6);
    goto LABEL_51;
  }
  v91 = (char *)a2;
  v11 = *a2;
  v102 = &v118;
  v115 = (void **)&v117;
  v12 = _mm_loadh_ps((const double *)&v91);
  v91 = (char *)&v115;
  *(__m128 *)ptr = v12;
  v103 = &v115;
  v118 = v120;
  v13 = _mm_loadh_ps((const double *)&v102);
  v116 = 0x500000000LL;
  v119 = 0x500000000LL;
  v111 = v13;
  v92 = (char ***)ptr;
  sub_15F0FC0(v11, 0, (__int64 (__fastcall *)(__int64))sub_17559A0, (__int64)ptr);
  if ( (*(_BYTE *)a3 & 4) != 0 )
  {
    v66 = (unsigned int)v116;
    sub_1745E10((__int64)v96, (__int64)v103);
    v67 = (unsigned int)v119;
    v68 = (unsigned int)v119 + v66;
    if ( v68 > HIDWORD(v113) )
    {
      sub_1745D00((__int64)v96, v68);
      v67 = (unsigned int)v119;
    }
    v69 = (char ***)v118;
    v70 = (char ***)((char *)v118 + 64 * v67);
    if ( v118 != v70 )
    {
      v71 = v92 + 2;
      do
      {
        while ( 1 )
        {
          base = v109;
          v108 = 0xC00000000LL;
          if ( *((_DWORD *)v69 + 2) )
          {
            sub_1745BE0((char ***)&base, v69);
            v81 = (char *)base;
            v82 = 4LL * (unsigned int)v108;
            if ( v82 <= 4 )
            {
              v83 = (char *)base + v82;
            }
            else
            {
              qsort(base, (4LL * (unsigned int)v108) >> 2, 4u, (__compar_fn_t)sub_1740790);
              v81 = (char *)base;
              v83 = (char *)base + 4 * (unsigned int)v108;
            }
            if ( v81 != v83 )
            {
              for ( i = v81; ; i += 4 )
              {
                v86 = i + 4;
                if ( i + 4 == v83 )
                  break;
                v85 = *((_WORD *)i + 2);
                if ( *(_WORD *)i == v85 )
                {
                  if ( i != v83 )
                  {
                    v87 = i + 8;
                    v88 = i + 4;
                    if ( i + 8 != v83 )
                    {
                      while ( 1 )
                      {
                        if ( v85 == *(_WORD *)v87 )
                        {
                          v87 += 4;
                          v86 = i + 4;
                          if ( v87 == v83 )
                            break;
                        }
                        else
                        {
                          v89 = *(_DWORD *)v87;
                          v87 += 4;
                          *((_DWORD *)i + 1) = v89;
                          v86 = v88 + 2;
                          if ( v87 == v83 )
                            break;
                          v85 = *v88;
                          i = (char *)v88;
                        }
                        v88 = v86;
                      }
                    }
                    v83 = (char *)v86;
                  }
                  break;
                }
              }
            }
            ptr[0] = v71;
            ptr[1] = (void *)0xC00000000LL;
            LODWORD(v108) = (v83 - v81) >> 2;
            if ( (_DWORD)v108 )
              sub_1745BE0(v92, (char ***)&base);
          }
          else
          {
            ptr[0] = v71;
            LODWORD(v108) = 0;
            ptr[1] = (void *)0xC00000000LL;
          }
          v72 = (unsigned __int64)&v112[8 * (unsigned __int64)(unsigned int)v113];
          if ( v112 == (void **)v72 )
          {
LABEL_117:
            v79 = (unsigned int)v113 + 1LL;
            v80 = v92;
            if ( v79 > HIDWORD(v113) )
            {
              v90 = v92;
              v91 = (char *)v112;
              if ( v112 > (void **)v92 || v72 <= (unsigned __int64)v92 )
              {
                sub_1745D00((__int64)v96, v79);
                v80 = v92;
                v72 = (unsigned __int64)&v112[8 * (unsigned __int64)(unsigned int)v113];
              }
              else
              {
                sub_1745D00((__int64)v96, v79);
                v80 = (char ***)((char *)v112 + (char *)v90 - v91);
                v72 = (unsigned __int64)&v112[8 * (unsigned __int64)(unsigned int)v113];
              }
            }
            *(_QWORD *)v72 = v72 + 16;
            *(_QWORD *)(v72 + 8) = 0xC00000000LL;
            if ( *((_DWORD *)v80 + 2) )
              sub_17460F0((void **)v72, (char **)v80);
            LODWORD(v113) = v113 + 1;
            v73 = (char ***)ptr[0];
          }
          else
          {
            v73 = (char ***)ptr[0];
            v74 = v112;
            v75 = 4LL * LODWORD(ptr[1]);
            v76 = (char *)ptr[0] + v75;
            while ( 1 )
            {
              if ( 4LL * *((unsigned int *)v74 + 2) == v75 )
              {
                if ( ptr[0] == v76 )
                  goto LABEL_111;
                v77 = *v74;
                if ( *(_WORD *)ptr[0] == *(_WORD *)*v74 )
                  break;
              }
LABEL_116:
              v74 += 8;
              if ( (void **)v72 == v74 )
                goto LABEL_117;
            }
            v78 = (char *)ptr[0];
            while ( 1 )
            {
              v78 += 4;
              v77 += 2;
              if ( v76 == v78 )
                break;
              if ( *(_WORD *)v78 != *v77 )
                goto LABEL_116;
            }
          }
LABEL_111:
          if ( v73 != v71 )
            free(v73);
          if ( base == v109 )
            break;
          free(base);
          v69 += 8;
          if ( v70 == v69 )
            goto LABEL_36;
        }
        v69 += 8;
      }
      while ( v70 != v69 );
    }
  }
  else
  {
    v14 = (unsigned int)v116;
    v15 = (unsigned int)v116 * (unsigned __int64)(unsigned int)v119;
    if ( v15 > HIDWORD(v113) )
    {
      sub_1745D00((__int64)v96, v15);
      v14 = (unsigned int)v116;
    }
    v16 = v115;
    v97 = &v115[8 * v14];
    if ( v115 != v97 )
    {
      p_base = (char ***)&base;
      v95 = (char ***)&v104;
      do
      {
        v17 = (unsigned __int64)(unsigned int)v119 << 6;
        v18 = p_base + 2;
        v19 = (const void **)v118;
        v93 = (const void **)((char *)v118 + v17);
        v20 = v92 + 2;
        if ( v118 != (char *)v118 + v17 )
        {
          do
          {
            while ( 1 )
            {
              v105 = 0xC00000000LL;
              v21 = *((unsigned int *)v16 + 2);
              v22 = 12;
              v23 = 0;
              v24 = *((unsigned int *)v19 + 2);
              v104 = v106;
              v25 = v21 + v24;
              if ( v25 > 0xC )
              {
                sub_2237220(v95, v106, v25, 4);
                v21 = *((unsigned int *)v16 + 2);
                v23 = (unsigned int)v105;
                v22 = HIDWORD(v105);
              }
              v26 = 4 * v21;
              v27 = (char *)*v16;
              v28 = (4 * v21) >> 2;
              if ( v28 + v23 > v22 )
              {
                v100 = (4 * v21) >> 2;
                v99 = 4 * v21;
                v91 = v27;
                sub_2237220(v95, v106, v28 + v23, 4);
                v23 = (unsigned int)v105;
                v28 = v100;
                v26 = v99;
                v27 = v91;
              }
              if ( v26 )
              {
                v91 = (char *)v28;
                memcpy((char *)v104 + 4 * v23, v27, v26);
                LODWORD(v23) = v105;
                LODWORD(v28) = (_DWORD)v91;
              }
              v29 = (char *)*v19;
              LODWORD(v105) = v28 + v23;
              v30 = (unsigned int)(v28 + v23);
              v31 = 4LL * *((unsigned int *)v19 + 2);
              v32 = v31 >> 2;
              v33 = (v31 >> 2) + (unsigned int)v105;
              if ( v33 > HIDWORD(v105) )
              {
                v100 = (4LL * *((unsigned int *)v19 + 2)) >> 2;
                v99 = v31;
                v91 = v29;
                sub_2237220(v95, v106, v33, 4);
                v30 = (unsigned int)v105;
                v32 = v100;
                v31 = v99;
                v29 = v91;
              }
              if ( v31 )
              {
                v91 = (char *)v32;
                memcpy((char *)v104 + 4 * v30, v29, v31);
                LODWORD(v30) = v105;
                LODWORD(v32) = (_DWORD)v91;
              }
              base = v18;
              LODWORD(v105) = v32 + v30;
              v108 = 0xC00000000LL;
              if ( (_DWORD)v32 + (_DWORD)v30 )
              {
                sub_1745BE0(p_base, v95);
                v57 = (char *)base;
                v58 = 4LL * (unsigned int)v108;
                if ( v58 <= 4 )
                {
                  v59 = (char *)base + v58;
                }
                else
                {
                  qsort(base, (4LL * (unsigned int)v108) >> 2, 4u, (__compar_fn_t)sub_1740790);
                  v57 = (char *)base;
                  v59 = (char *)base + 4 * (unsigned int)v108;
                }
                if ( v57 != v59 )
                {
                  for ( j = v57; ; j += 4 )
                  {
                    v62 = j + 4;
                    if ( j + 4 == v59 )
                      break;
                    v61 = *((_WORD *)j + 2);
                    if ( *(_WORD *)j == v61 )
                    {
                      if ( j != v59 )
                      {
                        v63 = j + 8;
                        v64 = j + 4;
                        if ( v59 != j + 8 )
                        {
                          while ( 1 )
                          {
                            if ( v61 == *(_WORD *)v63 )
                            {
                              v63 += 4;
                              v62 = j + 4;
                              if ( v63 == v59 )
                                break;
                            }
                            else
                            {
                              v65 = *(_DWORD *)v63;
                              v63 += 4;
                              *((_DWORD *)j + 1) = v65;
                              v62 = v64 + 2;
                              if ( v63 == v59 )
                                break;
                              v61 = *v64;
                              j = (char *)v64;
                            }
                            v64 = v62;
                          }
                        }
                        v59 = (char *)v62;
                      }
                      break;
                    }
                  }
                }
                ptr[0] = v20;
                ptr[1] = (void *)0xC00000000LL;
                LODWORD(v108) = (v59 - v57) >> 2;
                if ( (_DWORD)v108 )
                  sub_1745BE0(v92, p_base);
              }
              else
              {
                LODWORD(v108) = 0;
                ptr[0] = v20;
                ptr[1] = (void *)0xC00000000LL;
              }
              v34 = (unsigned __int64)&v112[8 * (unsigned __int64)(unsigned int)v113];
              if ( v112 == (void **)v34 )
              {
LABEL_62:
                v55 = (unsigned int)v113 + 1LL;
                v56 = v92;
                if ( v55 > HIDWORD(v113) )
                {
                  v91 = (char *)v112;
                  if ( v112 > (void **)v92 || v34 <= (unsigned __int64)v92 )
                  {
                    sub_1745D00((__int64)v96, v55);
                    v56 = v92;
                    v34 = (unsigned __int64)&v112[8 * (unsigned __int64)(unsigned int)v113];
                  }
                  else
                  {
                    sub_1745D00((__int64)v96, v55);
                    v56 = (char ***)((char *)v112 + (char *)v92 - v91);
                    v34 = (unsigned __int64)&v112[8 * (unsigned __int64)(unsigned int)v113];
                  }
                }
                *(_QWORD *)(v34 + 8) = 0xC00000000LL;
                *(_QWORD *)v34 = v34 + 16;
                if ( *((_DWORD *)v56 + 2) )
                  sub_17460F0((void **)v34, (char **)v56);
                LODWORD(v113) = v113 + 1;
                v35 = (char ***)ptr[0];
              }
              else
              {
                v35 = (char ***)ptr[0];
                v36 = v112;
                v37 = 4LL * LODWORD(ptr[1]);
                v38 = (char *)ptr[0] + v37;
                while ( 1 )
                {
                  if ( 4LL * *((unsigned int *)v36 + 2) == v37 )
                  {
                    if ( ptr[0] == v38 )
                      goto LABEL_29;
                    v39 = *v36;
                    if ( *(_WORD *)ptr[0] == *(_WORD *)*v36 )
                      break;
                  }
LABEL_61:
                  v36 += 8;
                  if ( (void **)v34 == v36 )
                    goto LABEL_62;
                }
                v40 = (char *)ptr[0];
                v91 = (char *)v34;
                while ( 1 )
                {
                  v40 += 4;
                  v39 += 2;
                  if ( v38 == v40 )
                    break;
                  if ( *(_WORD *)v40 != *v39 )
                  {
                    v34 = (unsigned __int64)v91;
                    goto LABEL_61;
                  }
                }
              }
LABEL_29:
              if ( v35 != v20 )
                free(v35);
              if ( base != v18 )
                free(base);
              if ( v104 == v106 )
                break;
              free(v104);
              v19 += 8;
              if ( v93 == v19 )
                goto LABEL_35;
            }
            v19 += 8;
          }
          while ( v93 != v19 );
        }
LABEL_35:
        v16 += 8;
      }
      while ( v97 != v16 );
    }
  }
LABEL_36:
  v41 = (__int64)v98;
  v42 = v113;
  *v98 = v101;
  *(_QWORD *)(v41 + 8) = 0x500000000LL;
  if ( v42 )
    sub_1745E10(v41, (__int64)v96);
  v43 = (void **)v118;
  v44 = (void **)((char *)v118 + 64 * (unsigned __int64)(unsigned int)v119);
  if ( v118 != v44 )
  {
    do
    {
      while ( 1 )
      {
        v44 -= 8;
        if ( *v44 == v44 + 2 )
          break;
        free(*v44);
        if ( v43 == v44 )
          goto LABEL_41;
      }
    }
    while ( v43 != v44 );
LABEL_41:
    v44 = (void **)v118;
  }
  if ( v44 != v102 + 2 )
    free(v44);
  v45 = v115;
  v46 = &v115[8 * (unsigned __int64)(unsigned int)v116];
  if ( v115 != v46 )
  {
    do
    {
      while ( 1 )
      {
        v46 -= 8;
        if ( *v46 == v46 + 2 )
          break;
        free(*v46);
        if ( v45 == v46 )
          goto LABEL_47;
      }
    }
    while ( v45 != v46 );
LABEL_47:
    v46 = v115;
  }
  if ( v46 != (void **)(v103 + 2) )
  {
    v47 = v46;
LABEL_52:
    free(v47);
  }
LABEL_53:
  v52 = v112;
  v53 = &v112[8 * (unsigned __int64)(unsigned int)v113];
  if ( v112 != v53 )
  {
    do
    {
      while ( 1 )
      {
        v53 -= 8;
        if ( *v53 == v53 + 2 )
          break;
        free(*v53);
        if ( v52 == v53 )
          goto LABEL_56;
      }
    }
    while ( v52 != v53 );
LABEL_56:
    v53 = v112;
  }
  if ( v53 != (void **)(v96 + 2) )
    free(v53);
  return v98;
}
