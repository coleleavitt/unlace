__int64 __fastcall sub_1604E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
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
  int v37; // edx
  void *v38; // rcx
  __m128i v39; // xmm0
  __m128i v40; // xmm1
  __int64 v41; // rax
  __int64 v42; // rcx
  __m128i si128; // xmm2
  __m128i v44; // xmm1
  __m128i v45; // xmm0
  __m128i v46; // xmm2
  char *v48; // rax
  unsigned __int64 v49; // r10
  signed __int64 v50; // r8
  __int64 v51; // r14
  void *v52; // rax
  unsigned __int64 v53; // r10
  __int64 v54; // r14
  __int128 v55; // kr10_16
  unsigned __int64 v56; // rbp
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // r15
  char *v59; // r10
  size_t v60; // rax
  size_t v61; // r9
  void *v62; // rdi
  size_t v63; // rdx
  void *v64; // r12
  struct _Unwind_Exception *v65; // rbx
  unsigned int v66; // [rsp+4h] [rbp-174h]
  size_t nb; // [rsp+8h] [rbp-170h]
  size_t n; // [rsp+8h] [rbp-170h]
  size_t na; // [rsp+8h] [rbp-170h]
  size_t nf; // [rsp+8h] [rbp-170h]
  __int64 nc; // [rsp+8h] [rbp-170h]
  size_t nd; // [rsp+8h] [rbp-170h]
  size_t ne; // [rsp+8h] [rbp-170h]
  size_t v74; // [rsp+10h] [rbp-168h]
  void *v75; // [rsp+10h] [rbp-168h]
  size_t v76; // [rsp+10h] [rbp-168h]
  size_t v77; // [rsp+10h] [rbp-168h]
  char *v78; // [rsp+10h] [rbp-168h]
  size_t v79; // [rsp+10h] [rbp-168h]
  signed __int64 v80; // [rsp+18h] [rbp-160h]
  unsigned __int64 v81; // [rsp+18h] [rbp-160h]
  __int64 v82; // [rsp+18h] [rbp-160h]
  size_t v83; // [rsp+18h] [rbp-160h]
  __int64 v84; // [rsp+18h] [rbp-160h]
  char v85; // [rsp+27h] [rbp-151h] BYREF
  __int64 v86; // [rsp+28h] [rbp-150h]
  void *dest; // [rsp+30h] [rbp-148h]
  __m128i v88; // [rsp+38h] [rbp-140h] BYREF
  void *src; // [rsp+50h] [rbp-128h] BYREF
  _BYTE v90[40]; // [rsp+58h] [rbp-120h] BYREF
  __m128i v91; // [rsp+80h] [rbp-F8h] BYREF
  int v92; // [rsp+90h] [rbp-E8h]
  bool v93; // [rsp+94h] [rbp-E4h]
  _BYTE v94[24]; // [rsp+A0h] [rbp-D8h] BYREF
  __int128 v95; // [rsp+B8h] [rbp-C0h]
  __int64 v96; // [rsp+C8h] [rbp-B0h]
  __int128 v97; // [rsp+D0h] [rbp-A8h]
  __int128 v98; // [rsp+E0h] [rbp-98h]
  __int64 v99; // [rsp+110h] [rbp-68h]
  int v100; // [rsp+118h] [rbp-60h]
  __int64 v101; // [rsp+120h] [rbp-58h]
  char v102; // [rsp+128h] [rbp-50h]
  unsigned __int64 v103; // [rsp+138h] [rbp-40h]

  v6 = *(unsigned __int8 *)(a1 + 773);
  v103 = __readfsqword(0x28u);
  v7 = v6 ^ 1;
  LOBYTE(v7) = (a2 == 0) | v7;
  if ( (_BYTE)v7 )
    return 0;
  v8 = *(_QWORD *)a1;
  src = nullptr;
  v91.m128i_i64[0] = 0;
  v91.m128i_i64[1] = -1;
  v92 = -1;
  v93 = 0;
  v66 = a6 & 1;
  memset(v90, 0, sizeof(v90));
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v8 + 416))(a1, a6 & 1);
  v91.m128i_i64[0] = get_func();
  if ( v91.m128i_i64[0] )
  {
    if ( *(_BYTE *)(a1 + 992) )
    {
      if ( !*(_QWORD *)(a1 + 480) )
      {
        v65 = (struct _Unwind_Exception *)sub_158B30(v11);
        sub_15F6F0(&src);
        _Unwind_Resume(v65);
      }
      v12 = 0;
      if ( *(_DWORD *)(a1 + 472) == 1 )
        v12 = *(_QWORD *)(a1 + 856);
    }
    else
    {
      v12 = 0;
    }
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v12 + 88LL))(v12, 0, v66);
    if ( v13 )
    {
      v14 = *(double (**)())(*(_QWORD *)v12 + 232LL);
      if ( v14 != sub_8E2D0 )
        ((void (__fastcall *)(__int64))v14)(v12);
      v15 = sub_90BB0(v13, (__int64)&v85, a1);
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
        v88 = 0;
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
                    v57 = v22 - 1;
                    if ( v57 >= v20 && v57 >= v21 )
                    {
                      v23 = v21 - v20;
                      v25 = (const char *)(*(_QWORD *)(v13 + 8) + v20);
                      v24 = v23 + 1;
                      if ( v23 == -1 )
                      {
                        v23 = -1;
                        v26 = nullptr;
LABEL_26:
                        v88.m128i_i64[0] = v24;
                        v26[v23] = 0;
                        memmove(dest, v25, v23);
                        v27 = (char *)dest;
                        n = v88.m128i_i64[0];
                        if ( v88.m128i_i64[0] > 1uLL )
                        {
                          v28 = (char *)dest + v88.m128i_i64[0] - 1;
                          v74 = v88.m128i_i64[0] - 1;
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
                            v88.m128i_i64[0] = 0;
                            qfree();
                            v27 = nullptr;
                            dest = nullptr;
                            v88.m128i_i64[1] = 0;
                            n = v88.m128i_i64[0];
                          }
                          else
                          {
                            v31 = v30 + 1;
                            if ( n < v30 + 1 )
                            {
                              if ( v88.m128i_i64[1] < v31 )
                              {
                                v84 = v28 - v27;
                                v79 = v30 + 1;
                                dest = (void *)qvector_reserve();
                                v27 = (char *)dest;
                                v30 = v84;
                                v31 = v79;
                                n = v88.m128i_i64[0];
                              }
                              v82 = v30;
                              v77 = v31;
                              memset(&v27[n], 0, v31 - n);
                              v88.m128i_i64[0] = v77;
                              v28 = (char *)dest + v82;
                            }
                            else if ( n != v30 + 1 )
                            {
                              v88.m128i_i64[0] = v30 + 1;
                            }
                            *v28 = 0;
                            v27 = (char *)dest;
                            n = v88.m128i_i64[0];
                          }
                        }
                        if ( !n )
                          goto LABEL_35;
                        v74 = n - 1;
LABEL_63:
                        v48 = strchr(v27, 46);
                        if ( v48 )
                        {
                          v49 = v48 - v27;
                          if ( v48 - v27 != -1 )
                          {
                            memset(v94, 0, sizeof(v94));
                            v50 = v74;
                            if ( v49 <= v74 )
                              v50 = v48 - v27;
                            v51 = 0;
                            v52 = nullptr;
                            if ( v50 )
                            {
                              v81 = v49;
                              v76 = v50;
                              nd = v50 + 1;
                              *(_QWORD *)v94 = qvector_reserve();
                              *(_QWORD *)&v94[8] = nd;
                              memmove(*(void **)v94, v27, v76);
                              v49 = v81;
                              *(_BYTE *)(*(_QWORD *)v94 + v76) = 0;
                              v50 = *(_QWORD *)&v94[8];
                              v52 = *(void **)v94;
                              v51 = *(_QWORD *)&v94[16];
                            }
                            memset(v94, 0, sizeof(v94));
                            if ( src )
                            {
                              v80 = v50;
                              v75 = v52;
                              na = v49;
                              *(_QWORD *)v90 = 0;
                              qfree();
                              *(_QWORD *)&v90[8] = v51;
                              v49 = na;
                              src = v75;
                              *(_QWORD *)v90 = v80;
                              if ( *(_QWORD *)v94 )
                              {
                                *(_QWORD *)&v94[8] = 0;
                                qfree();
                                v49 = na;
                              }
                            }
                            else
                            {
                              src = v52;
                              *(_QWORD *)v90 = v50;
                              *(_QWORD *)&v90[8] = v51;
                            }
                            v53 = v49 + 1;
                            if ( !v88.m128i_i64[0] )
                              goto LABEL_73;
                            memset(v94, 0, sizeof(v94));
                            if ( v53 > v88.m128i_i64[0] - 1 )
                              v53 = v88.m128i_i64[0] - 1;
                            v58 = v53;
                            v59 = (char *)dest;
                            v60 = v88.m128i_i64[0] - 1 - v58;
                            v61 = v60;
                            if ( v60 )
                            {
                              v62 = nullptr;
                              v63 = v88.m128i_i64[0] - v58;
                              if ( v60 != -1 )
                              {
                                v83 = v88.m128i_i64[0] - 1 - v58;
                                v78 = (char *)dest;
                                ne = v88.m128i_i64[0] - v58;
                                *(_QWORD *)v94 = qvector_reserve();
                                v61 = v83;
                                v62 = *(void **)v94;
                                v59 = v78;
                                v63 = ne;
                              }
                              *(_QWORD *)&v94[8] = v63;
                              nf = v61;
                              memmove(v62, &v59[v58], v61);
                              *(_BYTE *)(*(_QWORD *)v94 + nf) = 0;
                              v55 = *(_OWORD *)v94;
                              v54 = *(_QWORD *)&v94[16];
                            }
                            else
                            {
LABEL_73:
                              v54 = 0;
                              v55 = 0u;
                            }
                            memset(v94, 0, sizeof(v94));
                            if ( *(_QWORD *)&v90[16] )
                            {
                              *(_QWORD *)&v90[24] = 0;
                              qfree();
                              *(_QWORD *)&v90[32] = v54;
                              *(_OWORD *)&v90[16] = v55;
                              if ( *(_QWORD *)v94 )
                              {
                                *(_QWORD *)&v94[8] = 0;
                                qfree();
                              }
                            }
                            else
                            {
                              *(_OWORD *)&v90[16] = v55;
                              *(_QWORD *)&v90[32] = v54;
                            }
                            v56 = a5 - *v18;
                            v35 = v56 >= qustrlen();
                            goto LABEL_36;
                          }
                        }
LABEL_35:
                        v32 = src;
                        src = v27;
                        v33 = _mm_loadu_si128((const __m128i *)v90);
                        v34 = _mm_loadh_ps((const double *)&v88.m128i_i64[1]);
                        dest = v32;
                        v35 = 0;
                        *(__m128 *)v90 = v34;
                        v88 = v33;
LABEL_36:
                        v93 = v35;
                        v86 = 0;
                        tinfo_get_func_frame();
                        v36 = *(_QWORD *)v90;
                        v96 = 0;
                        v99 = 1;
                        v100 = -1;
                        v101 = 0;
                        v102 = 0;
                        memset(v94, 0, sizeof(v94));
                        v95 = 0;
                        v97 = 0;
                        v98 = 0;
                        if ( *(_QWORD *)v90 > 1u )
                        {
                          nc = *(_QWORD *)v90 - 1LL;
                          v64 = src;
                          *(_QWORD *)&v94[16] = qvector_reserve();
                          *(_QWORD *)&v95 = v36;
                          memmove(*(void **)&v94[16], v64, nc);
                          *(_BYTE *)(*(_QWORD *)&v94[16] + v36 - 1) = 0;
                        }
                        if ( (int)find_tinfo_udt_member() >= 0 )
                        {
                          v91.m128i_i64[1] = get_tinfo_property4();
                          v37 = sub_13C400(0, v66, 1);
                          v38 = src;
                          v7 = 1;
                          v39 = _mm_loadu_si128((const __m128i *)(a2 + 8));
                          v40 = _mm_loadu_si128((const __m128i *)v90);
                          src = *(void **)a2;
                          v41 = *(_QWORD *)(a2 + 24);
                          *(_QWORD *)a2 = v38;
                          v42 = *(_QWORD *)&v90[16];
                          *(_QWORD *)&v90[16] = v41;
                          LODWORD(v41) = *(_DWORD *)(a2 + 64);
                          si128 = _mm_load_si128((const __m128i *)&v90[24]);
                          *(_DWORD *)(a2 + 64) = v37;
                          v92 = v41;
                          LOBYTE(v37) = v93;
                          LOBYTE(v41) = *(_BYTE *)(a2 + 68);
                          *(__m128i *)(a2 + 8) = v40;
                          v44 = _mm_loadu_si128((const __m128i *)(a2 + 32));
                          *(__m128i *)v90 = v39;
                          v45 = _mm_loadu_si128((const __m128i *)(a2 + 48));
                          *(__m128i *)(a2 + 32) = si128;
                          v46 = _mm_load_si128(&v91);
                          *(_QWORD *)(a2 + 24) = v42;
                          *(_BYTE *)(a2 + 68) = v37;
                          v93 = v41;
                          *(__m128i *)(a2 + 48) = v46;
                          *(__m128i *)&v90[24] = v44;
                          v91 = v45;
                        }
                        clear_tinfo_t();
                        if ( v96 )
                        {
                          *(_QWORD *)&v97 = 0;
                          qfree();
                        }
                        if ( *(_QWORD *)&v94[16] )
                        {
                          *(_QWORD *)&v95 = 0;
                          qfree();
                        }
                        clear_tinfo_t();
                        if ( dest )
                        {
                          v88.m128i_i64[0] = 0;
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
  if ( *(_QWORD *)&v90[16] )
  {
    *(_QWORD *)&v90[24] = 0;
    qfree();
  }
  if ( src )
  {
    *(_QWORD *)v90 = 0;
    qfree();
  }
  return v7;
}

