void __fastcall sub_9C7240(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rax
  int v4; // r12d
  unsigned int v5; // ebx
  int v6; // r12d
  __int64 *v7; // rdx
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rax
  char *v12; // rdx
  int v13; // r15d
  unsigned int v14; // ebx
  unsigned int v15; // eax
  __int64 v16; // rdi
  _BYTE *v17; // r8
  _QWORD *v18; // rcx
  int v19; // r12d
  __m128 v20; // xmm0
  unsigned int v21; // eax
  unsigned __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 *v25; // r8
  __int64 i; // rax
  __int64 *v27; // rdx
  __int64 v28; // rsi
  unsigned int v29; // eax
  __int64 v30; // rdi
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 *v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  _QWORD *v36; // r15
  __int64 v37; // rbx
  int v38; // eax
  _WORD *v39; // r13
  __int64 v40; // rcx
  char v41; // di
  int v42; // eax
  __int64 *v43; // r14
  __int64 v44; // r10
  char v45; // si
  __int64 v46; // rdx
  __int64 v47; // r15
  unsigned int v48; // edx
  unsigned __int64 v49; // rax
  __int64 v50; // rdx
  __int64 *v51; // rdi
  __int64 v52; // rcx
  unsigned __int64 v53; // rdx
  __m128i v54; // xmm0
  char *v55; // rdi
  __int64 v56; // rbx
  char *v57; // rbx
  int v58; // r14d
  char *v59; // r15
  __int64 v60; // r13
  __int64 v61; // rax
  unsigned int v62; // eax
  __int64 v63; // rdx
  __int64 *v64; // rbx
  __int64 *v65; // rbp
  __int64 v66; // rdi
  _WORD *v67; // rsi
  unsigned __int16 v68; // ax
  __int64 v69; // rax
  unsigned __int64 v70; // rax
  _WORD *v71; // r14
  __int64 v72; // rdx
  char v73; // cl
  int v74; // eax
  _WORD *v75; // rsi
  unsigned __int16 v76; // ax
  char v77; // al
  __int64 *v78; // r14
  __int64 *v79; // rbx
  __int64 v80; // r13
  unsigned int v81; // esi
  unsigned __int64 v82; // rcx
  __int64 v83; // rdi
  __int64 v84; // rsi
  __int64 *v85; // rdi
  __int64 v86; // rsi
  __int64 v87; // rsi
  unsigned __int64 v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // rax
  _BYTE *v91; // rax
  __m128i v92; // [rsp+0h] [rbp-298h] BYREF
  __int64 v93; // [rsp+18h] [rbp-280h]
  int v94; // [rsp+24h] [rbp-274h]
  __int64 (__fastcall ***v95)(); // [rsp+28h] [rbp-270h]
  __int64 v96; // [rsp+30h] [rbp-268h]
  __int64 v97; // [rsp+38h] [rbp-260h]
  _DWORD *v98; // [rsp+40h] [rbp-258h]
  __int64 *v99; // [rsp+48h] [rbp-250h]
  __int64 v100; // [rsp+50h] [rbp-248h]
  __int64 v101; // [rsp+58h] [rbp-240h]
  __int64 (__fastcall **v102)(); // [rsp+60h] [rbp-238h] BYREF
  int v103; // [rsp+68h] [rbp-230h]
  _WORD *v104; // [rsp+70h] [rbp-228h]
  char v105; // [rsp+78h] [rbp-220h]
  void *v106; // [rsp+80h] [rbp-218h] BYREF
  __int64 v107; // [rsp+88h] [rbp-210h]
  _BYTE v108[48]; // [rsp+90h] [rbp-208h] BYREF
  int v109; // [rsp+C0h] [rbp-1D8h]
  void *s; // [rsp+D0h] [rbp-1C8h] BYREF
  __int64 v111; // [rsp+D8h] [rbp-1C0h]
  _BYTE v112[48]; // [rsp+E0h] [rbp-1B8h] BYREF
  int v113; // [rsp+110h] [rbp-188h]
  __int64 *v114; // [rsp+118h] [rbp-180h]
  void *ptr; // [rsp+120h] [rbp-178h] BYREF
  __int64 v116; // [rsp+128h] [rbp-170h]
  _QWORD v117[10]; // [rsp+130h] [rbp-168h] BYREF
  __m128 v118; // [rsp+180h] [rbp-118h] BYREF
  void *base; // [rsp+190h] [rbp-108h] BYREF
  __int64 v120; // [rsp+198h] [rbp-100h]
  _BYTE v121[248]; // [rsp+1A0h] [rbp-F8h] BYREF

  v100 = a1;
  v96 = a2;
  v93 = a3;
  v3 = sub_986B70(a1);
  v98 = v3;
  if ( v3 )
  {
    v4 = v3[6];
    v99 = (__int64 *)&v106;
    v106 = v108;
    v5 = (unsigned int)(v4 + 63) >> 6;
    v107 = 0x600000000LL;
    if ( v5 > 6 )
    {
      sub_2237220(v99, v108, v5, 8);
      memset(v106, 0, 8LL * v5);
      LODWORD(v107) = (unsigned int)(v4 + 63) >> 6;
    }
    else
    {
      if ( v5 )
      {
        v62 = 0;
        do
        {
          v63 = v62;
          v62 += 8;
          *(_QWORD *)&v108[v63] = 0;
        }
        while ( v62 < 8 * v5 );
      }
      LODWORD(v107) = (unsigned int)(v4 + 63) >> 6;
    }
    v109 = v4;
    v6 = sub_9C6970(*(_QWORD *)v98, v99, v96, 1);
    v94 = v6;
    if ( v6 == v98[6] )
      goto LABEL_74;
    if ( *(_BYTE *)(v100 + 97) )
      goto LABEL_7;
    v64 = *((__int64 **)v98 + 9);
    v65 = *((__int64 **)v98 + 8);
    if ( v65 == v64 )
      goto LABEL_7;
    do
    {
      v66 = *v65++;
      v6 += sub_9C6970(v66, v99, v96, 1);
    }
    while ( v64 != v65 );
    v94 = v6;
    if ( v6 != v98[6] )
    {
LABEL_7:
      v7 = (__int64 *)v106;
      v8 = *((_QWORD *)v98 + 5);
      v97 = *((_QWORD *)v98 + 6);
      while ( v97 != v8 )
      {
        v9 = *(_QWORD *)v8;
        v10 = v7[*(_DWORD *)(*(_QWORD *)v8 + 48LL) >> 6];
        if ( !_bittest64(&v10, *(unsigned int *)(*(_QWORD *)v8 + 48LL)) )
        {
          v95 = (__int64 (__fastcall ***)())v7;
          v11 = sub_B8C330(*(_QWORD *)(v100 + 8));
          v12 = (char *)v95;
          v13 = v109;
          v92.m128i_i64[0] = v11;
          s = v112;
          v14 = (unsigned int)(v109 + 63) >> 6;
          v111 = 0x600000000LL;
          if ( v14 > 6 )
          {
            sub_2237220(&s, v112, (unsigned int)(v109 + 63) >> 6, 8);
            v91 = memset(s, 0, 8LL * v14);
            LODWORD(v111) = v14;
            v12 = (char *)v106;
            v17 = v91;
          }
          else
          {
            if ( v14 )
            {
              v15 = 0;
              do
              {
                v16 = v15;
                v15 += 8;
                *(_QWORD *)&v112[v16] = 0;
              }
              while ( v15 < 8 * v14 );
            }
            LODWORD(v111) = v14;
            v17 = v112;
          }
          v18 = v117;
          v19 = 0;
          v113 = v13;
          v114 = v99;
          v20 = _mm_loadh_ps((const double *)v92.m128i_i64);
          v116 = 0xA00000000LL;
          base = v121;
          v118 = v20;
          v120 = 0xC00000000LL;
          ptr = v117;
          v21 = *(_DWORD *)(v9 + 48);
          v22 = v21 & 0x3F;
          v23 = 8LL * (v21 >> 6);
          v24 = *(_QWORD *)&v12[v23];
          if ( !_bittest64(&v24, v22) )
          {
            v25 = (__int64 *)&v17[v23];
            i = *v25;
            if ( !_bittest64(&i, v22) )
            {
              v101 = v8;
              *v25 = i | (1LL << v22);
              v27 = v114;
              LODWORD(i) = 1;
              v117[0] = v9;
              v95 = &v102;
              while ( 1 )
              {
                v28 = (unsigned int)i;
                v29 = i - 1;
                v30 = *v27;
                v31 = v18[v28 - 1];
                LODWORD(v116) = v29;
                v32 = *(_QWORD *)(v30 + 8LL * (*(_DWORD *)(v31 + 48) >> 6));
                if ( _bittest64(&v32, *(unsigned int *)(v31 + 48)) )
                  break;
LABEL_21:
                if ( *(_QWORD *)(v31 + 8) != *(_QWORD *)v31 )
                {
                  v35 = *(_QWORD *)(v31 + 8);
                  v92.m128i_i64[0] = *(_QWORD *)v31;
                  v36 = (_QWORD *)v31;
                  v37 = v35;
                  do
                  {
                    v38 = *(_DWORD *)(v37 - 16) & 3 | (4 * (*(_QWORD *)(v37 - 8) & 3));
                    if ( (unsigned int)v38 > 5 && v38 <= 8 )
                    {
                      v39 = (_WORD *)(*(_QWORD *)(v37 - 16) & 0xFFFFFFFFFFFFFFFCLL);
                      if ( (unsigned int)sub_EEB7E0(v39) )
                      {
                        if ( ((*v39 + 394) & 0x1FFu) <= 1 )
                        {
                          if ( ((v39[1] >> 3) & 0x3F) != 0x20 )
                            goto LABEL_32;
                        }
                        else
                        {
                          v40 = v36[1];
                          if ( v40 == *v36 )
                            goto LABEL_32;
                          v41 = 0;
                          while ( 1 )
                          {
                            v42 = *(_DWORD *)(v40 - 16) & 3 | (4 * (*(_QWORD *)(v40 - 8) & 3));
                            if ( (unsigned int)v42 > 5 && v42 <= 8 )
                            {
                              v67 = (_WORD *)(*(_QWORD *)(v40 - 16) & 0xFFFFFFFFFFFFFFFCLL);
                              v41 |= v39 == v67;
                              if ( v41 )
                              {
                                v68 = *v67 & 0x1FF;
                                if ( v68 == 247 || (unsigned int)v68 - 72 <= 1 )
                                  break;
                              }
                            }
                            v40 -= 16;
                            if ( *v36 == v40 )
                              goto LABEL_32;
                          }
                          v104 = v39;
                          v102 = off_2BFEB88;
                          v105 = 0;
                          v103 = 16843008;
                          sub_BC97E0(v95, v67);
                          if ( v105 != 1 )
                          {
LABEL_32:
                            v31 = (__int64)v36;
                            goto LABEL_33;
                          }
                        }
                      }
                    }
                    v37 -= 16;
                  }
                  while ( v92.m128i_i64[0] != v37 );
                  v31 = (__int64)v36;
                }
                v69 = *(_QWORD *)(v31 + 32);
                if ( (v69 & 6) == 0 )
                {
                  v70 = v69 & 0xFFFFFFFFFFFFFFF8LL;
                  v71 = (_WORD *)v70;
                  if ( v70 )
                  {
                    v39 = (_WORD *)v70;
                    if ( (unsigned int)sub_EEB7E0(v70) )
                    {
                      if ( ((*v71 + 394) & 0x1FFu) <= 1 )
                      {
                        v77 = ((v71[1] >> 3) & 0x3F) != 32;
                      }
                      else
                      {
                        v72 = *(_QWORD *)(v31 + 8);
                        if ( v72 == *(_QWORD *)v31 )
                          goto LABEL_33;
                        v73 = 0;
                        while ( 1 )
                        {
                          v74 = *(_DWORD *)(v72 - 16) & 3 | (4 * (*(_QWORD *)(v72 - 8) & 3));
                          if ( (unsigned int)v74 > 5 && v74 <= 8 )
                          {
                            v75 = (_WORD *)(*(_QWORD *)(v72 - 16) & 0xFFFFFFFFFFFFFFFCLL);
                            v73 |= v71 == v75;
                            if ( v73 )
                            {
                              v76 = *v75 & 0x1FF;
                              if ( v76 == 247 || (unsigned int)v76 - 72 <= 1 )
                                break;
                            }
                          }
                          v72 -= 16;
                          if ( *(_QWORD *)v31 == v72 )
                            goto LABEL_33;
                        }
                        v104 = v71;
                        v102 = off_2BFEB88;
                        v105 = 0;
                        v103 = 16843008;
                        sub_BC97E0(v95, v75);
                        v77 = v105 ^ 1;
                      }
                      if ( v77 )
                      {
LABEL_33:
                        if ( (int)sub_EEB7E0(v39) < 0 )
                          goto LABEL_77;
                        v43 = *(__int64 **)(v31 + 56);
                        v44 = *(_QWORD *)(v31 + 64);
                        v45 = 1;
                        if ( v43 == (__int64 *)v44 )
                          goto LABEL_76;
                        while ( 1 )
                        {
LABEL_38:
                          v47 = *v43;
                          if ( !*v43 )
                            goto LABEL_37;
                          v48 = *(_DWORD *)(v47 + 48);
                          v49 = v48 & 0x3F;
                          v50 = v48 >> 6;
                          v51 = (__int64 *)((char *)s + 8 * v50);
                          v52 = *v51;
                          if ( !_bittest64(&v52, v49) )
                            break;
                          v43 += 2;
                          v45 = 0;
                          if ( (__int64 *)v44 == v43 )
                          {
LABEL_41:
                            if ( !v45 )
                            {
                              i = (unsigned int)v120;
                              v92.m128i_i64[0] = (__int64)v39;
                              v53 = (unsigned int)v120 + 1LL;
                              v54 = (__m128i)_mm_loadh_ps((const double *)v92.m128i_i64);
                              if ( v53 > HIDWORD(v120) )
                              {
                                v92 = v54;
                                sub_2237220(&base, v121, v53, 16);
                                i = (unsigned int)v120;
                                v54 = _mm_load_si128(&v92);
                              }
                              *((__m128i *)base + i) = v54;
                              v27 = v114;
                              LODWORD(i) = v116;
                              LODWORD(v120) = v120 + 1;
                              goto LABEL_45;
                            }
LABEL_76:
                            sub_9C6BD0((__int64 *)&v118, &v118.m128_i64[1], (__int64 **)v31, v39, v93);
LABEL_77:
                            LODWORD(i) = sub_9C6970(v31, v114, v118.m128_i64[0], 1);
                            v27 = v114;
                            v19 += i;
                            LODWORD(i) = v116;
                            goto LABEL_45;
                          }
                        }
                        v46 = *(_QWORD *)(*v114 + 8 * v50);
                        if ( !_bittest64(&v46, v49) )
                        {
                          v89 = v52 | (1LL << v49);
                          v90 = (unsigned int)v116;
                          *v51 = v89;
                          if ( v90 + 1 > (unsigned __int64)HIDWORD(v116) )
                          {
                            v92.m128i_i64[0] = v44;
                            sub_2237220(&ptr, v117, v90 + 1, 8);
                            v90 = (unsigned int)v116;
                            v44 = v92.m128i_i64[0];
                          }
                          v45 = 0;
                          *((_QWORD *)ptr + v90) = v47;
                          LODWORD(v116) = v116 + 1;
                        }
LABEL_37:
                        v43 += 2;
                        if ( (__int64 *)v44 == v43 )
                          goto LABEL_41;
                        goto LABEL_38;
                      }
                    }
                  }
                }
                v78 = *(__int64 **)(v31 + 56);
                v79 = *(__int64 **)(v31 + 64);
                v27 = v114;
                for ( i = (unsigned int)v116; v79 != v78; v78 += 2 )
                {
                  v80 = *v78;
                  if ( *v78 )
                  {
                    v81 = *(_DWORD *)(v80 + 48);
                    v82 = v81 & 0x3F;
                    v83 = 8LL * (v81 >> 6);
                    v84 = *(_QWORD *)(*v27 + v83);
                    if ( !_bittest64(&v84, v82) )
                    {
                      v85 = (__int64 *)((char *)s + v83);
                      v86 = *v85;
                      if ( !_bittest64(&v86, v82) )
                      {
                        v87 = v86 | (1LL << v82);
                        v88 = HIDWORD(v116);
                        *v85 = v87;
                        if ( i + 1 > v88 )
                        {
                          sub_2237220(&ptr, v117, i + 1, 8);
                          i = (unsigned int)v116;
                        }
                        *((_QWORD *)ptr + i) = v80;
                        v27 = v114;
                        i = (unsigned int)(v116 + 1);
                        LODWORD(v116) = v116 + 1;
                      }
                    }
                  }
                }
LABEL_45:
                v18 = ptr;
                if ( !(_DWORD)i )
                  goto LABEL_46;
              }
              v33 = &v18[v29 - 1];
              while ( v29 )
              {
                v31 = *v33;
                --v29;
                --v33;
                LODWORD(v116) = v29;
                v34 = *(_QWORD *)(v30 + 8LL * (*(_DWORD *)(v31 + 48) >> 6));
                if ( !_bittest64(&v34, *(unsigned int *)(v31 + 48)) )
                  goto LABEL_21;
              }
LABEL_46:
              v8 = v101;
            }
          }
          v55 = (char *)base;
          if ( (_DWORD)v120 )
          {
            v56 = 16LL * (unsigned int)v120;
            if ( v56 != 16 )
            {
              qsort(base, v56 >> 4, 0x10u, (__compar_fn_t)sub_9C6000);
              v55 = (char *)base;
              v56 = 16LL * (unsigned int)v120;
            }
            v57 = &v55[v56];
            if ( v57 != v55 )
            {
              v92.m128i_i64[0] = v8;
              v58 = v19;
              v59 = v55;
              do
              {
                v60 = *(_QWORD *)v59;
                v61 = *(_QWORD *)(*v114 + 8LL * (*(_DWORD *)(*(_QWORD *)v59 + 48LL) >> 6));
                if ( !_bittest64(&v61, *(unsigned int *)(*(_QWORD *)v59 + 48LL)) )
                {
                  sub_9C6BD0((__int64 *)&v118, &v118.m128_i64[1], *(__int64 ***)v59, *((_WORD **)v59 + 1), v93);
                  v58 += sub_9C6970(v60, v114, v118.m128_i64[0], 1);
                }
                v59 += 16;
              }
              while ( v57 != v59 );
              v8 = v92.m128i_i64[0];
              v55 = (char *)base;
              v19 = v58;
            }
          }
          v94 += v19;
          if ( v94 == v98[6] )
          {
            if ( v55 != v121 )
              free(v55);
            if ( ptr != v117 )
              free(ptr);
            if ( s != v112 )
              free(s);
            goto LABEL_74;
          }
          if ( v55 != v121 )
            free(v55);
          if ( ptr != v117 )
            free(ptr);
          if ( s != v112 )
            free(s);
          v7 = (__int64 *)v106;
        }
        v8 += 8;
      }
      if ( v7 != v99 + 2 )
        free(v7);
    }
    else
    {
LABEL_74:
      if ( v106 != v99 + 2 )
        free(v106);
    }
  }
}
