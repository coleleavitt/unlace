__int64 __fastcall sub_15FC10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  int v6; // ebx
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v11; // rdi
  __int64 v12; // r12
  __int64 v13; // r15
  double (*v14)(); // rax
  __int64 v15; // rdx
  int *v16; // rax
  int *v17; // rcx
  int *v18; // r12
  int v19; // edx
  int v20; // edx
  int v21; // r14d
  __int64 v22; // rax
  size_t v23; // r14
  __int64 v24; // rdx
  const char *v25; // r15
  _BYTE *v26; // rax
  char *v27; // r15
  _BYTE *v28; // r14
  unsigned int v29; // edi
  __int64 v30; // r10
  size_t v31; // r8
  void *v32; // rax
  __m128i v33; // xmm1
  __m128 v34; // xmm0
  bool v35; // al
  __int64 v36; // r15
  unsigned int v37; // eax
  void *v38; // rcx
  __m128i v39; // xmm2
  __m128i v40; // xmm0
  __m128i v41; // xmm1
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __m128i v46; // xmm0
  __int64 v47; // rdx
  __m128i si128; // xmm1
  __m128i v49; // xmm0
  char *v51; // rax
  unsigned __int64 v52; // r10
  signed __int64 v53; // r8
  __int64 v54; // r14
  void *v55; // rax
  unsigned __int64 v56; // r10
  __int64 v57; // r14
  __int128 v58; // kr10_16
  unsigned __int64 v59; // rbp
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // r15
  char *v62; // r10
  size_t v63; // rax
  size_t v64; // r9
  void *v65; // rdi
  size_t v66; // rdx
  void *v67; // r12
  struct _Unwind_Exception *v68; // rbx
  unsigned int v69; // [rsp+4h] [rbp-164h]
  size_t nb; // [rsp+8h] [rbp-160h]
  size_t n; // [rsp+8h] [rbp-160h]
  size_t na; // [rsp+8h] [rbp-160h]
  size_t nf; // [rsp+8h] [rbp-160h]
  __int64 nc; // [rsp+8h] [rbp-160h]
  size_t nd; // [rsp+8h] [rbp-160h]
  size_t ne; // [rsp+8h] [rbp-160h]
  size_t v77; // [rsp+10h] [rbp-158h]
  void *v78; // [rsp+10h] [rbp-158h]
  size_t v79; // [rsp+10h] [rbp-158h]
  size_t v80; // [rsp+10h] [rbp-158h]
  char *v81; // [rsp+10h] [rbp-158h]
  size_t v82; // [rsp+10h] [rbp-158h]
  signed __int64 v83; // [rsp+18h] [rbp-150h]
  unsigned __int64 v84; // [rsp+18h] [rbp-150h]
  __int64 v85; // [rsp+18h] [rbp-150h]
  size_t v86; // [rsp+18h] [rbp-150h]
  __int64 v87; // [rsp+18h] [rbp-150h]
  char v88; // [rsp+27h] [rbp-141h] BYREF
  __int64 v89; // [rsp+28h] [rbp-140h]
  void *dest; // [rsp+30h] [rbp-138h]
  __m128i v91; // [rsp+38h] [rbp-130h] BYREF
  void *src; // [rsp+50h] [rbp-118h] BYREF
  _BYTE v93[40]; // [rsp+58h] [rbp-110h] BYREF
  __int64 func; // [rsp+80h] [rbp-E8h]
  __int64 v95; // [rsp+88h] [rbp-E0h]
  char v96; // [rsp+90h] [rbp-D8h]
  _BYTE v97[24]; // [rsp+A0h] [rbp-C8h] BYREF
  __int128 v98; // [rsp+B8h] [rbp-B0h]
  __int64 v99; // [rsp+C8h] [rbp-A0h]
  __int128 v100; // [rsp+D0h] [rbp-98h]
  __int128 v101; // [rsp+E0h] [rbp-88h]
  __int64 v102; // [rsp+100h] [rbp-68h]
  int v103; // [rsp+108h] [rbp-60h]
  __int64 v104; // [rsp+110h] [rbp-58h]
  char v105; // [rsp+118h] [rbp-50h]
  unsigned __int64 v106; // [rsp+128h] [rbp-40h]

  v6 = *(unsigned __int8 *)(a1 + 765);
  v106 = __readfsqword(0x28u);
  v7 = v6 ^ 1;
  LOBYTE(v7) = (a2 == 0) | v7;
  if ( (_BYTE)v7 )
    return 0;
  v8 = *(_QWORD *)a1;
  src = nullptr;
  func = 0;
  v95 = -1;
  v96 = 0;
  v69 = a6 & 1;
  memset(v93, 0, sizeof(v93));
  v11 = (*(unsigned int (__fastcall **)(__int64, _QWORD))(v8 + 416))(a1, a6 & 1);
  func = get_func();
  if ( func )
  {
    if ( *(_BYTE *)(a1 + 984) )
    {
      if ( !*(_QWORD *)(a1 + 480) )
      {
        v68 = (struct _Unwind_Exception *)sub_1582F0(v11);
        sub_15EE30(&src);
        _Unwind_Resume(v68);
      }
      v12 = 0;
      if ( *(_DWORD *)(a1 + 472) == 1 )
        v12 = *(_QWORD *)(a1 + 848);
    }
    else
    {
      v12 = 0;
    }
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v12 + 88LL))(v12, 0, v69);
    if ( v13 )
    {
      v14 = *(double (**)())(*(_QWORD *)v12 + 232LL);
      if ( v14 != sub_8E1F0 )
        ((void (__fastcall *)(__int64))v14)(v12);
      v15 = sub_90AD0(v13, (__int64)&v88, a1);
      v16 = *(int **)(v15 + 120);
      v17 = &v16[5 * *(_QWORD *)(v15 + 128)];
      if ( v16 != v17 )
      {
        v18 = nullptr;
        do
        {
          v19 = *v16;
          if ( a5 >= *v16 && a5 < v19 + v16[1] && *((_BYTE *)v16 + 16) == 25 )
          {
            if ( v18 )
            {
              if ( v19 > *v18 )
                v18 = v16;
            }
            else
            {
              v18 = v16;
            }
          }
          v16 += 5;
        }
        while ( v17 != v16 );
        dest = nullptr;
        v91 = 0;
        if ( v18 )
        {
          if ( v18[1] >= 0 )
          {
            if ( *((_BYTE *)v18 + 16) )
            {
              v20 = v18[2];
              if ( v20 >= 0 )
              {
                v21 = v18[3];
                if ( v20 <= v21 )
                {
                  v22 = *(_QWORD *)(v13 + 16);
                  if ( v22 )
                  {
                    v60 = v22 - 1;
                    if ( v60 >= v20 && v60 >= v21 )
                    {
                      v23 = v21 - v20;
                      v25 = (const char *)(*(_QWORD *)(v13 + 8) + v20);
                      v24 = v23 + 1;
                      if ( v23 == -1 )
                      {
                        v23 = -1;
                        v26 = nullptr;
LABEL_26:
                        v91.m128i_i64[0] = v24;
                        v26[v23] = 0;
                        memmove(dest, v25, v23);
                        v27 = (char *)dest;
                        n = v91.m128i_i64[0];
                        if ( v91.m128i_i64[0] > 1uLL )
                        {
                          v28 = (char *)dest + v91.m128i_i64[0] - 1;
                          v77 = v91.m128i_i64[0] - 1;
                          if ( dest < v28 )
                          {
                            while ( 1 )
                            {
                              v29 = (char)*(v28 - 1);
                              if ( v29 > 0x7F || !isspace(v29) )
                                break;
                              if ( --v28 == v27 )
                                goto LABEL_60;
                            }
                          }
                          v30 = v28 - v27;
                          if ( v28 == v27 )
                          {
LABEL_60:
                            if ( !v27 )
                              goto LABEL_63;
                            v91.m128i_i64[0] = 0;
                            qfree();
                            v27 = nullptr;
                            dest = nullptr;
                            v91.m128i_i64[1] = 0;
                            n = v91.m128i_i64[0];
                          }
                          else
                          {
                            v31 = v30 + 1;
                            if ( n < v30 + 1 )
                            {
                              if ( v91.m128i_i64[1] < v31 )
                              {
                                v87 = v28 - v27;
                                v82 = v30 + 1;
                                dest = (void *)qvector_reserve();
                                v27 = (char *)dest;
                                v30 = v87;
                                v31 = v82;
                                n = v91.m128i_i64[0];
                              }
                              v85 = v30;
                              v80 = v31;
                              memset(&v27[n], 0, v31 - n);
                              v91.m128i_i64[0] = v80;
                              v28 = (char *)dest + v85;
                            }
                            else if ( n != v30 + 1 )
                            {
                              v91.m128i_i64[0] = v30 + 1;
                            }
                            *v28 = 0;
                            v27 = (char *)dest;
                            n = v91.m128i_i64[0];
                          }
                        }
                        if ( !n )
                          goto LABEL_35;
                        v77 = n - 1;
LABEL_63:
                        v51 = strchr(v27, 46);
                        if ( v51 )
                        {
                          v52 = v51 - v27;
                          if ( v51 - v27 != -1 )
                          {
                            memset(v97, 0, sizeof(v97));
                            v53 = v77;
                            if ( v52 <= v77 )
                              v53 = v51 - v27;
                            v54 = 0;
                            v55 = nullptr;
                            if ( v53 )
                            {
                              v84 = v52;
                              v79 = v53;
                              nd = v53 + 1;
                              *(_QWORD *)v97 = qvector_reserve();
                              *(_QWORD *)&v97[8] = nd;
                              memmove(*(void **)v97, v27, v79);
                              v52 = v84;
                              *(_BYTE *)(*(_QWORD *)v97 + v79) = 0;
                              v53 = *(_QWORD *)&v97[8];
                              v55 = *(void **)v97;
                              v54 = *(_QWORD *)&v97[16];
                            }
                            memset(v97, 0, sizeof(v97));
                            if ( src )
                            {
                              v83 = v53;
                              v78 = v55;
                              na = v52;
                              *(_QWORD *)v93 = 0;
                              qfree();
                              *(_QWORD *)&v93[8] = v54;
                              v52 = na;
                              src = v78;
                              *(_QWORD *)v93 = v83;
                              if ( *(_QWORD *)v97 )
                              {
                                *(_QWORD *)&v97[8] = 0;
                                qfree();
                                v52 = na;
                              }
                            }
                            else
                            {
                              src = v55;
                              *(_QWORD *)v93 = v53;
                              *(_QWORD *)&v93[8] = v54;
                            }
                            v56 = v52 + 1;
                            if ( !v91.m128i_i64[0] )
                              goto LABEL_73;
                            memset(v97, 0, sizeof(v97));
                            if ( v56 > v91.m128i_i64[0] - 1 )
                              v56 = v91.m128i_i64[0] - 1;
                            v61 = v56;
                            v62 = (char *)dest;
                            v63 = v91.m128i_i64[0] - 1 - v61;
                            v64 = v63;
                            if ( v63 )
                            {
                              v65 = nullptr;
                              v66 = v91.m128i_i64[0] - v61;
                              if ( v63 != -1 )
                              {
                                v86 = v91.m128i_i64[0] - 1 - v61;
                                v81 = (char *)dest;
                                ne = v91.m128i_i64[0] - v61;
                                *(_QWORD *)v97 = qvector_reserve();
                                v64 = v86;
                                v65 = *(void **)v97;
                                v62 = v81;
                                v66 = ne;
                              }
                              *(_QWORD *)&v97[8] = v66;
                              nf = v64;
                              memmove(v65, &v62[v61], v64);
                              *(_BYTE *)(*(_QWORD *)v97 + nf) = 0;
                              v58 = *(_OWORD *)v97;
                              v57 = *(_QWORD *)&v97[16];
                            }
                            else
                            {
LABEL_73:
                              v57 = 0;
                              v58 = 0u;
                            }
                            memset(v97, 0, sizeof(v97));
                            if ( *(_QWORD *)&v93[16] )
                            {
                              *(_QWORD *)&v93[24] = 0;
                              qfree();
                              *(_QWORD *)&v93[32] = v57;
                              *(_OWORD *)&v93[16] = v58;
                              if ( *(_QWORD *)v97 )
                              {
                                *(_QWORD *)&v97[8] = 0;
                                qfree();
                              }
                            }
                            else
                            {
                              *(_OWORD *)&v93[16] = v58;
                              *(_QWORD *)&v93[32] = v57;
                            }
                            v59 = a5 - *v18;
                            v35 = v59 >= qustrlen();
                            goto LABEL_36;
                          }
                        }
LABEL_35:
                        v32 = src;
                        src = v27;
                        v33 = _mm_loadu_si128((const __m128i *)v93);
                        v34 = _mm_loadh_ps((const double *)&v91.m128i_i64[1]);
                        dest = v32;
                        v35 = 0;
                        *(__m128 *)v93 = v34;
                        v91 = v33;
LABEL_36:
                        v96 = v35;
                        v89 = 0;
                        tinfo_get_func_frame();
                        v36 = *(_QWORD *)v93;
                        v99 = 0;
                        v102 = 1;
                        v103 = -1;
                        v104 = 0;
                        v105 = 0;
                        memset(v97, 0, sizeof(v97));
                        v98 = 0;
                        v100 = 0;
                        v101 = 0;
                        if ( *(_QWORD *)v93 > 1u )
                        {
                          nc = *(_QWORD *)v93 - 1LL;
                          v67 = src;
                          *(_QWORD *)&v97[16] = qvector_reserve();
                          *(_QWORD *)&v98 = v36;
                          memmove(*(void **)&v97[16], v67, nc);
                          *(_BYTE *)(*(_QWORD *)&v97[16] + v36 - 1) = 0;
                        }
                        if ( (int)find_tinfo_udt_member() >= 0 )
                        {
                          LODWORD(v95) = get_tinfo_property4();
                          v37 = sub_13BE00(0, v69, 1);
                          v38 = src;
                          v39 = _mm_cvtsi32_si128(v37);
                          v7 = 1;
                          v40 = _mm_loadu_si128((const __m128i *)(a2 + 8));
                          v41 = _mm_loadu_si128((const __m128i *)v93);
                          src = *(void **)a2;
                          v42 = *(_QWORD *)(a2 + 24);
                          *(_QWORD *)a2 = v38;
                          v43 = *(_QWORD *)&v93[16];
                          *(_QWORD *)&v93[16] = v42;
                          v44 = *(_QWORD *)(a2 + 48);
                          *(_QWORD *)(a2 + 24) = v43;
                          v45 = func;
                          *(__m128i *)v93 = v40;
                          v46 = _mm_loadu_si128((const __m128i *)(a2 + 32));
                          LOBYTE(v37) = *(_BYTE *)(a2 + 64);
                          func = v44;
                          v47 = *(_QWORD *)(a2 + 56);
                          *(__m128i *)(a2 + 8) = v41;
                          si128 = _mm_load_si128((const __m128i *)&v93[24]);
                          *(__m128i *)&v93[24] = v46;
                          v49 = _mm_cvtsi32_si128(v95);
                          v95 = v47;
                          LOBYTE(v47) = v96;
                          *(_QWORD *)(a2 + 48) = v45;
                          *(_BYTE *)(a2 + 64) = v47;
                          v96 = v37;
                          *(__m128i *)(a2 + 32) = si128;
                          *(_QWORD *)(a2 + 56) = _mm_unpacklo_epi32(v49, v39).m128i_u64[0];
                        }
                        clear_tinfo_t();
                        if ( v99 )
                        {
                          *(_QWORD *)&v100 = 0;
                          qfree();
                        }
                        if ( *(_QWORD *)&v97[16] )
                        {
                          *(_QWORD *)&v98 = 0;
                          qfree();
                        }
                        clear_tinfo_t();
                        if ( dest )
                        {
                          v91.m128i_i64[0] = 0;
                          qfree();
                        }
                        goto LABEL_46;
                      }
LABEL_25:
                      nb = v24;
                      v26 = (_BYTE *)qvector_reserve();
                      dest = v26;
                      v24 = nb;
                      goto LABEL_26;
                    }
                  }
                  else if ( !v20 && !v21 )
                  {
                    v23 = 0;
                    v24 = 1;
                    v25 = s1;
                    goto LABEL_25;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_46:
  if ( *(_QWORD *)&v93[16] )
  {
    *(_QWORD *)&v93[24] = 0;
    qfree();
  }
  if ( src )
  {
    *(_QWORD *)v93 = 0;
    qfree();
  }
  return v7;
}

