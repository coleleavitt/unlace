__int64 __fastcall sub_3A90C0(
        __int64 *a1,
        _DWORD *a2,
        const __m128i *a3,
        unsigned __int8 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __m128i v12; // xmm0
  const char *v14; // rsi
  const char *v15; // rsi
  const char *v16; // rsi
  __m128i v17; // xmm0
  char *v18; // r12
  __int64 v19; // rbx
  __m128i v20; // xmm0
  const char *v21; // r12
  size_t v22; // rax
  size_t v23; // r14
  size_t v24; // rbx
  const char **v25; // rbx
  const char *v26; // rsi
  __m128 v27; // xmm0
  const char *v28; // r14
  __m128 v29; // xmm1
  __int64 module_data; // rax
  __int64 v31; // r12
  __int64 v32; // rbx
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __m128 v36; // xmm4
  __m128 v37; // xmm5
  const char *v38; // rdi
  const char *v39; // rsi
  unsigned int *v40; // rax
  bool v41; // zf
  double v42; // rax
  unsigned int *v43; // r15
  __int64 v44; // r14
  __int64 dir_size; // rbx
  unsigned int **v46; // rax
  unsigned int *v47; // rcx
  __int64 v48; // rdi
  unsigned int *v49; // rbx
  unsigned int v50; // r15d
  _QWORD *v51; // rax
  const char *v52; // rsi
  _QWORD *v53; // rbx
  const char *v55; // rsi
  __m128i v56; // xmm0
  char *v57; // r12
  __m128i v58; // xmm0
  double v59; // [rsp+8h] [rbp-158h] BYREF
  int v60; // [rsp+14h] [rbp-14Ch]
  _DWORD *v61; // [rsp+18h] [rbp-148h]
  __int64 *v62; // [rsp+20h] [rbp-140h]
  __int64 v63; // [rsp+28h] [rbp-138h]
  _OWORD *v64; // [rsp+30h] [rbp-130h]
  __int64 v65; // [rsp+38h] [rbp-128h]
  __m128i v66; // [rsp+40h] [rbp-120h] BYREF
  unsigned int *v67; // [rsp+50h] [rbp-110h]
  const char **std_dirtree; // [rsp+58h] [rbp-108h]
  __int64 v69; // [rsp+67h] [rbp-F9h] BYREF
  char v70; // [rsp+6Fh] [rbp-F1h]
  __m128i v71; // [rsp+70h] [rbp-F0h] BYREF
  __int64 v72; // [rsp+80h] [rbp-E0h] BYREF
  __int64 v73; // [rsp+88h] [rbp-D8h]
  char *v74; // [rsp+90h] [rbp-D0h] BYREF
  __m128i v75; // [rsp+98h] [rbp-C8h]
  __int64 v76; // [rsp+B0h] [rbp-B0h] BYREF
  __int64 v77; // [rsp+B8h] [rbp-A8h]
  _OWORD v78[2]; // [rsp+D0h] [rbp-90h] BYREF
  const char *v79; // [rsp+F0h] [rbp-70h] BYREF
  __m128 v80; // [rsp+F8h] [rbp-68h] BYREF
  void *v81; // [rsp+108h] [rbp-58h] BYREF
  __int128 v82; // [rsp+110h] [rbp-50h]
  unsigned int v83; // [rsp+120h] [rbp-40h]
  bool v84; // [rsp+124h] [rbp-3Ch]
  unsigned __int64 v85; // [rsp+128h] [rbp-38h]

  v62 = a1;
  v12 = _mm_loadu_si128(a3);
  v61 = a2;
  v85 = __readfsqword(0x28u);
  v71 = v12;
  v74 = nullptr;
  v75 = 0;
  v74 = (char *)qvector_reserve(&v74, 0, 2, 1);
  v75.m128i_i64[0] = 2;
  *v74 = 47;
  v74[1] = 0;
  if ( v71.m128i_i64[0] == -1 && v71.m128i_i64[1] )
  {
    std_dirtree = nullptr;
    v19 = v75.m128i_i64[0];
    goto LABEL_9;
  }
  std_dirtree = (const char **)get_std_dirtree(0);
  if ( !std_dirtree
    || (v14 = *std_dirtree,
        LOBYTE(v73) = 0,
        v72 = -1,
        dirtree_resolve_cursor(&v72, v14, &v71),
        LOBYTE(v77) = v73,
        v72 == -1) )
  {
LABEL_8:
    v19 = v75.m128i_i64[0];
    goto LABEL_9;
  }
  if ( (_BYTE)v77 )
  {
    v79 = nullptr;
    v80 = 0;
    v55 = *std_dirtree;
    dirtree_get_abspath_by_cursor(&v79, *std_dirtree, &v71, 0);
    v56 = _mm_loadu_si128((const __m128i *)&v80);
    v57 = (char *)v79;
    v80 = 0;
    v79 = nullptr;
    v19 = v56.m128i_i64[0];
    if ( v74 )
    {
      v66 = v56;
      v75.m128i_i64[0] = 0;
      qfree(v74, v55);
      v58 = _mm_load_si128(&v66);
      v74 = v57;
      v75 = v58;
      if ( v79 )
      {
        v80.m128_u64[0] = 0;
        qfree(v79, v55);
        v19 = v75.m128i_i64[0];
      }
    }
    else
    {
      v74 = v57;
      v75 = v56;
    }
    v71 = (__m128i)-1LL;
  }
  else
  {
    v15 = *std_dirtree;
    v78[0] = -1;
    dirtree_get_parent_cursor(v78, v15, &v71);
    v79 = nullptr;
    v80 = 0;
    v16 = *std_dirtree;
    dirtree_get_abspath_by_cursor(&v79, *std_dirtree, v78, 0);
    v17 = _mm_loadu_si128((const __m128i *)&v80);
    v18 = (char *)v79;
    v80 = 0;
    v79 = nullptr;
    v19 = v17.m128i_i64[0];
    if ( v74 )
    {
      v66 = v17;
      v75.m128i_i64[0] = 0;
      qfree(v74, v16);
      v20 = _mm_load_si128(&v66);
      v74 = v18;
      v75 = v20;
      if ( !v79 )
        goto LABEL_9;
      v80.m128_u64[0] = 0;
      qfree(v79, v16);
      goto LABEL_8;
    }
    v74 = v18;
    v75 = v17;
  }
LABEL_9:
  v21 = &s1;
  if ( v19 )
    v21 = v74;
  v79 = nullptr;
  v81 = nullptr;
  v80 = 0;
  v82 = 0;
  if ( v21 )
  {
    v22 = strlen(v21);
    v23 = v22 + 1;
    v24 = v22;
    v81 = (void *)qvector_reserve(&v81, 0, v22 + 1, 1);
    *(_QWORD *)&v82 = v23;
    memmove(v81, v21, v24);
    *((_BYTE *)v81 + v24) = 0;
  }
  v83 = 0;
  v25 = (const char **)get_std_dirtree(0);
  memset(v78, 0, 24);
  v26 = *v25;
  v64 = v78;
  dirtree_getcwd(v78, v26);
  v27 = 0;
  v28 = *(const char **)&v78[0];
  memset(v78, 0, 24);
  v29 = (__m128)_mm_loadu_si128((const __m128i *)((char *)v78 + 8));
  if ( v79 )
  {
    v66 = (__m128i)v29;
    v80.m128_u64[0] = 0;
    *(double *)v27.m128_u64 = qfree(v79, v26);
    v79 = v28;
    v29 = (__m128)_mm_load_si128(&v66);
    v80 = v29;
    if ( *(_QWORD *)&v78[0] )
    {
      *((_QWORD *)&v78[0] + 1) = 0;
      *(double *)v27.m128_u64 = qfree(*(_QWORD *)&v78[0], v26, *(double *)v27.m128_u64);
    }
  }
  else
  {
    v79 = v28;
    v80 = v29;
  }
  v84 = (unsigned __int8)dirtree_mkdir(*v25, v21) == 0;
  dirtree_chdir(*v25, v21);
  module_data = get_module_data((unsigned int)dword_8CD7F0);
  v31 = module_data + 280;
  v32 = module_data;
  v33 = module_data + 280;
  add_type_form_data_t__::vfunc_6((__int64)&v76);
  sub_3A80B0(v31, v33, v34, v35);
  if ( *(int *)(v32 + 572) < 0 )
    *(_DWORD *)(v32 + 572) = 2 * a4;
  v38 = &s1;
  if ( v77 )
    LODWORD(v38) = v76;
  v39 = (const char *)sub_3A63A0;
  if ( (unsigned int)sub_1697D0(
                       (int)v38,
                       (__int64)sub_3A63A0,
                       v31,
                       v32 + 288,
                       v32 + 312,
                       v32 + 320,
                       v27,
                       v29,
                       a7,
                       a8,
                       v36,
                       v37,
                       a11,
                       a12,
                       (unsigned __int8)v32 + 80) )
  {
    v40 = *(unsigned int **)(v32 + 544);
    v41 = std_dirtree == nullptr;
    *(_QWORD *)(v32 + 544) = 0;
    v67 = v40;
    v63 = *(_QWORD *)(v32 + 552);
    v42 = *(double *)(v32 + 560);
    *(_OWORD *)(v32 + 552) = 0;
    v59 = v42;
    v60 = *(_DWORD *)(v32 + 568);
    if ( !v41 )
    {
      v39 = (const char *)v71.m128i_i64[0];
      if ( v71.m128i_i64[0] != -1 || !v71.m128i_i64[1] )
      {
        v43 = v67;
        v66.m128i_i64[0] = (__int64)&v67[v63];
        if ( v67 != (unsigned int *)v66.m128i_i64[0] )
        {
          v65 = 1;
          while ( 1 )
          {
            v44 = *v43;
            v72 = (__int64)v39;
            v73 = 0;
            dir_size = dirtree_get_dir_size(*std_dirtree);
            if ( dir_size > v73 )
            {
              while ( 1 )
              {
                v39 = *std_dirtree;
                v70 = 0;
                v69 = -1;
                dirtree_resolve_cursor(&v69, v39, &v72);
                if ( v69 != -1 && !v70 && v44 == v69 )
                  break;
                if ( ++v73 >= dir_size )
                  goto LABEL_30;
              }
              memset(v78, 0, 24);
              dirtree_get_abspath_by_cursor(v64, *std_dirtree, &v72, 0);
              v39 = &s1;
              if ( *((_QWORD *)&v78[0] + 1) )
                v39 = *(const char **)&v78[0];
              v65 += (unsigned __int8)dirtree_change_rank(*std_dirtree, v39, v71.m128i_i64[1] + v65 - v73) == 0;
              if ( *(_QWORD *)&v78[0] )
              {
                *((_QWORD *)&v78[0] + 1) = 0;
                qfree(*(_QWORD *)&v78[0], v39);
              }
            }
LABEL_30:
            if ( (unsigned int *)v66.m128i_i64[0] == ++v43 )
              break;
            v39 = (const char *)v71.m128i_i64[0];
          }
        }
      }
    }
    v46 = (unsigned int **)v62;
    v47 = v67;
    v48 = v76;
    v27 = _mm_loadh_ps(&v59);
    v49 = (unsigned int *)*v62;
    *(__m128 *)(v62 + 1) = v27;
    *v46 = v47;
    *v61 = v60;
    if ( v48 )
    {
      v77 = 0;
      *(double *)v27.m128_u64 = qfree(v48, v39);
    }
    if ( v49 )
      *(double *)v27.m128_u64 = qfree(v49, v39, *(double *)v27.m128_u64);
    v50 = 1;
  }
  else
  {
    if ( v76 )
    {
      v77 = 0;
      *(double *)v27.m128_u64 = qfree(v76, (const char *)sub_3A63A0);
    }
    v50 = 0;
  }
  v51 = (_QWORD *)get_std_dirtree(v83);
  v52 = &s1;
  v53 = v51;
  if ( v80.m128_u64[0] )
    v52 = v79;
  dirtree_chdir(*v51, v52);
  if ( v84 )
  {
    v52 = &s1;
    if ( (_QWORD)v82 )
      v52 = (const char *)v81;
    dirtree_rmdir(*v53, v52, *(double *)v27.m128_u64);
  }
  if ( v81 )
  {
    *(_QWORD *)&v82 = 0;
    *(double *)v27.m128_u64 = qfree(v81, v52, *(double *)v27.m128_u64);
  }
  if ( v79 )
  {
    v80.m128_u64[0] = 0;
    *(double *)v27.m128_u64 = qfree(v79, v52, *(double *)v27.m128_u64);
  }
  if ( v74 )
  {
    v75.m128i_i64[0] = 0;
    qfree(v74, v52, *(double *)v27.m128_u64);
  }
  return v50;
}
