__int64 __fastcall sub_BBA0(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  void *exception; // rdi
  unsigned __int64 v11; // r12
  const char *v12; // r14
  int v15; // r13d
  size_t v16; // r15
  _DWORD *v17; // r8
  unsigned __int64 v18; // r12
  char v19; // bl
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  void *v26; // rdi
  void *v27; // rdx
  __m128i v28; // xmm0
  int v29; // eax
  char *v30; // rax
  unsigned __int64 v31; // rdx
  __int64 v32; // r12
  char *v33; // r13
  __int64 v34; // r12
  unsigned int v35; // r15d
  unsigned int v36; // eax
  unsigned __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  unsigned __int64 v41; // r14
  __int16 v42; // ax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rdi
  __int64 v45; // rdx
  unsigned __int64 v46; // rsi
  const char *v47; // rdi
  __int64 plugin; // rax
  unsigned int v49; // r14d
  unsigned __int64 v50; // rax
  double v51; // xmm4_8
  double v52; // xmm5_8
  __int64 v53; // rdi
  __int64 v54; // rcx
  int v55; // r12d
  __int64 v56; // r14
  int v57; // eax
  _BYTE *v58; // rax
  int v59; // eax
  int v60; // edx
  _BYTE *v61; // rax
  __int64 v62; // r14
  __int64 v63; // rax
  __int64 v64; // r13
  struct _Unwind_Exception *v65; // rbx
  void *srca; // [rsp+8h] [rbp-290h]
  unsigned __int16 *src; // [rsp+8h] [rbp-290h]
  void *dest; // [rsp+10h] [rbp-288h] BYREF
  __m128i v69; // [rsp+18h] [rbp-280h]
  void *v70; // [rsp+30h] [rbp-268h] BYREF
  __m128i v71; // [rsp+38h] [rbp-260h] BYREF
  _BYTE v72[520]; // [rsp+50h] [rbp-248h] BYREF
  unsigned __int64 v73; // [rsp+258h] [rbp-40h]

  v73 = __readfsqword(0x28u);
  v11 = *(_QWORD *)(a2 + 8);
  if ( v11 <= 7 )
    return v73 - __readfsqword(0x28u);
  v12 = *(const char **)a2;
  v15 = **(_DWORD **)a2;
  if ( v15 == 808534606 || v15 == 1396986706 )
  {
    dest = nullptr;
    v69 = 0;
    if ( v15 == 808534606 )
    {
      if ( v11 > 0xF )
      {
        v70 = nullptr;
        v71 = 0;
        v70 = (void *)qvector_reserve(&v70, 0, v11 - 15, 1);
        v71.m128i_i64[0] = v11 - 15;
        *((char *)v70 + v11 - 16) = 0;
        memmove(v70, v12 + 16, v11 - 16);
        v26 = dest;
        v27 = v70;
        v28 = _mm_loadu_si128(&v71);
        v70 = dest;
        dest = v27;
        v71.m128i_i64[1] = v69.m128i_i64[1];
        v69 = v28;
        if ( v70 )
        {
          v71.m128i_i64[0] = 0;
          qfree(v26);
        }
        v20 = 110;
        v21 = 16;
        goto LABEL_8;
      }
    }
    else if ( v11 > 0x17 )
    {
      v16 = v11 - 24;
      v17 = v12 + 24;
      v18 = v11 - 23;
      v19 = 115;
      goto LABEL_7;
    }
    return v73 - __readfsqword(0x28u);
  }
  if ( v15 == 1396986997 )
  {
    dest = nullptr;
    v69 = 0;
    if ( v11 > 0x17 )
    {
      v16 = v11 - 24;
      v17 = v12 + 24;
      v18 = v11 - 23;
      v19 = 116;
LABEL_7:
      srca = v17;
      dest = (void *)qvector_reserve(&dest, 0, v18, 1);
      v69.m128i_i64[0] = v18;
      *((_BYTE *)dest + v16) = 0;
      memmove(dest, srca, v16);
      v20 = (unsigned int)v19;
      v21 = 24;
LABEL_8:
      netnode_setblob(*(_QWORD *)(a1 + 144), v12, v21, 0, v20);
      if ( v69.m128i_i64[0] > 1uLL )
      {
        qstrncpy(v72, dest, 512, v22, v23, v24);
        netnode_supset(*(_QWORD *)(a1 + 144), -9, v72, 0, 83);
        v47 = "pdb";
        if ( v15 == 1396986997 )
          v47 = "tds";
        plugin = find_plugin(v47, 1);
        run_plugin(plugin, 1);
      }
      if ( dest )
      {
        v69.m128i_i64[0] = 0;
        qfree(dest);
      }
      return v73 - __readfsqword(0x28u);
    }
    return v73 - __readfsqword(0x28u);
  }
  sub_5800((__int64)"Loading CODEVIEW debug information...\n");
  if ( strncmp(v12, "NB02", 4u)
    && strncmp(v12, "NB05", 4u)
    && strncmp(v12, "NB08", 4u)
    && strncmp(v12, "NB09", 4u)
    && strncmp(v12, "NB11", 4u) )
  {
    return sub_5800((__int64)"Unknown codeview information format: %4.4s\n", v12);
  }
  v29 = v12[3] + 10 * v12[2] - 528;
  *(_DWORD *)(a1 + 132) = v29;
  if ( v29 == 2 )
    return sub_5800((__int64)"Codeview NB02 debug information is not supported\n");
  v30 = *(char **)a2;
  v31 = *(_QWORD *)a2 + *(_QWORD *)(a2 + 8);
  if ( v31 < *(_QWORD *)a2 + 8LL )
    goto LABEL_76;
  v32 = *((unsigned int *)v30 + 1);
  if ( (_DWORD)v32 != -1 )
  {
    if ( (unsigned int)v32 > 7 )
    {
      v33 = &v30[v32];
      if ( v31 >= (unsigned __int64)&v30[v32 + 16] && v33 >= v30 && *(_WORD *)v33 == 16 && *((_WORD *)v33 + 1) > 0xBu )
      {
        *(_QWORD *)(a1 + 240) = 0;
        v34 = v32 + 16;
        if ( *((_DWORD *)v33 + 1) )
        {
          v35 = 0;
          do
          {
            v37 = sub_4C30(*(_QWORD *)a2, *(_QWORD *)(a2 + 8), v34 + (int)(v35 * *((unsigned __int16 *)v33 + 1)));
            v40 = *(unsigned int *)(v37 + 4);
            v41 = v37;
            if ( (unsigned int)v40 <= 7 )
              goto LABEL_76;
            v42 = *(_WORD *)v37;
            if ( v42 == 301 )
            {
              if ( *(_DWORD *)(v41 + 8) <= 0x17u )
                goto LABEL_76;
              v43 = sub_4C50(*(_QWORD *)a2, *(_QWORD *)(a2 + 8), v40);
              v44 = *(_QWORD *)a2;
              src = (unsigned __int16 *)v43;
              sub_4C50(*(_QWORD *)a2, *(_QWORD *)(a2 + 8), (unsigned int)(*(_DWORD *)(v41 + 4) + *(_DWORD *)(v41 + 8)));
              v45 = *(unsigned int *)(v41 + 8);
              v46 = (unsigned __int64)src + v45;
              if ( __CFADD__(v45, src) )
              {
                if ( !under_debugger )
                {
                  v65 = (struct _Unwind_Exception *)interr(30473, v46, v45, src, v38, v39);
                  if ( v70 )
                  {
                    v71.m128i_i64[0] = 0;
                    qfree(v70);
                  }
                  if ( dest )
                  {
                    v69.m128i_i64[0] = 0;
                    qfree(dest);
                  }
                  _Unwind_Resume(v65);
                }
                BUG();
              }
              if ( v46 < (unsigned __int64)(src + 1)
                || (v44 = *src, *(_DWORD *)(a1 + 248) = v44, v46 < (unsigned __int64)(src + 2)) )
              {
                sub_3660(v44, v46);
              }
              if ( (_WORD)v44 && (unsigned int)(v45 - 4) < 20 * v44 )
                goto LABEL_76;
              *(_QWORD *)(a1 + 240) = src + 2;
            }
            else if ( v42 == 302 )
            {
              *(_DWORD *)(a1 + 252) = v40;
            }
            v36 = *((_DWORD *)v33 + 1);
            ++v35;
          }
          while ( v35 < v36 );
          if ( *(_QWORD *)(a1 + 240) )
          {
            v49 = 0;
            if ( v36 )
            {
              do
              {
                v50 = sub_4C30(*(_QWORD *)a2, *(_QWORD *)(a2 + 8), v34 + (int)(v49 * *((unsigned __int16 *)v33 + 1)));
                sub_B600((char *)a1, v50, a2, a3, a4, a5, a6, v51, v52, a9, a10);
                v53 = *((_DWORD *)v33 + 1) - v49++;
                show_auto(v53, 0);
              }
              while ( v49 < *((_DWORD *)v33 + 1) );
            }
            v54 = *(unsigned int *)(a1 + 248);
            v55 = 1;
            if ( (int)v54 > 0 )
            {
              do
              {
                v62 = *(_QWORD *)(a1 + 240);
                v63 = sub_81F0(a1, (unsigned int)v55, 0, v54, v38, v39);
                v64 = getseg(v63);
                if ( v64 )
                {
                  v56 = v62 + 20LL * (v55 - 1);
                  v57 = *(_DWORD *)(a1 + 252);
                  if ( v57 != -1 )
                  {
                    v58 = (_BYTE *)sub_4C50(
                                     *(_QWORD *)a2,
                                     *(_QWORD *)(a2 + 8),
                                     v57 + (unsigned int)*(unsigned __int16 *)(v56 + 8));
                    if ( *v58 )
                      set_segm_name(v64, v58, 0);
                  }
                  v59 = *(unsigned __int16 *)(v56 + 10);
                  if ( (_WORD)v59 != 0xFFFF )
                  {
                    v60 = *(_DWORD *)(a1 + 252);
                    if ( v60 != -1 )
                    {
                      v61 = (_BYTE *)sub_4C50(*(_QWORD *)a2, *(_QWORD *)(a2 + 8), (unsigned int)(v59 + v60));
                      if ( *v61 )
                        set_segm_class(v64, v61, 0);
                    }
                  }
                }
                else
                {
                  sub_5800((__int64)"Could not map segment %d\n", v55);
                }
                ++v55;
              }
              while ( *(_DWORD *)(a1 + 248) >= v55 );
            }
            return v73 - __readfsqword(0x28u);
          }
        }
      }
    }
LABEL_76:
    exception = __cxa_allocate_exception(1u);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'bad_cv_t, nullptr);
  }
  return sub_5800((__int64)"Borland debug information is ignored\n");
}
