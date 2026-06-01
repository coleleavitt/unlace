__int64 __fastcall sub_7195B0(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  double v16; // xmm4_8
  double v17; // xmm5_8
  unsigned int v18; // r13d
  __m128i v20; // xmm0
  double v21; // xmm4_8
  double v22; // xmm5_8
  __int64 *v23; // rbp
  __int64 v24; // r13
  __int64 *v25; // rbp
  double v26; // xmm4_8
  double v27; // xmm5_8
  double v28; // xmm4_8
  double v29; // xmm5_8
  __int64 v30; // rax
  __int64 *v31; // rbp
  __int64 *v32; // r14
  __int64 v33; // r14
  __int64 *v34; // rbp
  __int64 *v35; // r14
  __int64 v36; // r14
  __int64 *v37; // rbp
  __int64 *v38; // r14
  __int64 v39; // r14
  __int64 *v40; // rbp
  __int64 *v41; // r14
  __int64 v42; // rax
  __int64 *v43; // rbp
  __int64 *v44; // r14
  __int64 *v45; // rbp
  __int64 *v46; // r14
  __int64 v47; // rax
  double v48; // xmm4_8
  double v49; // xmm5_8
  __int64 *v50; // rdx
  __int64 *v51; // r12
  __int64 *v52; // rbp

  v11 = *(_QWORD *)(a2 + 64);
  if ( (unsigned __int8)sub_718340(a1, v11, *(_QWORD *)(a2 + 72), a3, a4, a5, a6, a7, a8, a9, a10) )
  {
    v20 = _mm_loadu_si128((const __m128i *)(a2 + 80));
    if ( (unsigned __int8)sub_719170(
                            a1,
                            *(double *)v20.m128i_i64,
                            a4,
                            a5,
                            a6,
                            v16,
                            v17,
                            a9,
                            a10,
                            v11,
                            v12,
                            v13,
                            v14,
                            v15,
                            v20.m128i_i64[0],
                            v20.m128i_i32[2],
                            *(__int64 **)(a2 + 96)) )
    {
      v23 = (__int64 *)(a2 + 104);
      v24 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 104;
      if ( v24 == a2 + 104 )
      {
LABEL_8:
        v25 = (__int64 *)(a2 + 24);
        if ( !a2 )
          v25 = nullptr;
        if ( (unsigned __int8)sub_70DBE0(a1, *v25, 0, *(double *)v20.m128i_i64, a4, a5, a6, v21, v22, a9, a10) )
        {
          v18 = sub_70DBE0(a1, v25[2], 0, *(double *)v20.m128i_i64, a4, a5, a6, v26, v27, a9, a10);
          if ( (_BYTE)v18 )
          {
            v30 = *(unsigned int *)(a2 + 16);
            v31 = (__int64 *)(a2 + 8 * v30 + 104);
            v32 = &v31[v30];
            if ( v32 == v31 )
            {
              v33 = 0;
LABEL_16:
              v34 = (__int64 *)(a2 + 16 * v30 + 104);
              v35 = &v34[v33];
              if ( v34 == v35 )
              {
                v36 = 0;
LABEL_20:
                v37 = (__int64 *)(a2 + 24 * v30 + 104);
                v38 = &v37[v36];
                if ( v37 == v38 )
                {
                  v39 = 0;
LABEL_24:
                  v40 = (__int64 *)(a2 + 32 * v30 + 104);
                  v41 = &v40[v39];
                  if ( v40 == v41 )
                  {
LABEL_27:
                    if ( *(_DWORD *)(a2 + 48) != 1 )
                      return v18;
                    v42 = *(unsigned int *)(a2 + 16);
                    v43 = (__int64 *)(a2 + 40 * v42 + 104);
                    v44 = &v43[v42];
                    if ( v44 == v43 )
                    {
LABEL_32:
                      v45 = (__int64 *)(a2 + 48 * v42 + 104);
                      v46 = &v45[v42];
                      if ( v46 == v45 )
                      {
LABEL_35:
                        v47 = sub_6F36D0(a2);
                        v51 = v50;
                        v52 = (__int64 *)v47;
                        if ( v50 == (__int64 *)v47 )
                          return v18;
                        while ( (unsigned __int8)sub_70DBE0(
                                                   a1,
                                                   *v52,
                                                   0,
                                                   *(double *)v20.m128i_i64,
                                                   a4,
                                                   a5,
                                                   a6,
                                                   v48,
                                                   v49,
                                                   a9,
                                                   a10) )
                        {
                          if ( v51 == ++v52 )
                            return v18;
                        }
                      }
                      else
                      {
                        while ( (unsigned __int8)sub_70DBE0(
                                                   a1,
                                                   *v45,
                                                   0,
                                                   *(double *)v20.m128i_i64,
                                                   a4,
                                                   a5,
                                                   a6,
                                                   v28,
                                                   v29,
                                                   a9,
                                                   a10) )
                        {
                          if ( v46 == ++v45 )
                            goto LABEL_35;
                        }
                      }
                    }
                    else
                    {
                      while ( (unsigned __int8)sub_70DBE0(
                                                 a1,
                                                 *v43,
                                                 0,
                                                 *(double *)v20.m128i_i64,
                                                 a4,
                                                 a5,
                                                 a6,
                                                 v28,
                                                 v29,
                                                 a9,
                                                 a10) )
                      {
                        if ( v44 == ++v43 )
                        {
                          v42 = *(unsigned int *)(a2 + 16);
                          goto LABEL_32;
                        }
                      }
                    }
                  }
                  else
                  {
                    while ( (unsigned __int8)sub_70DBE0(
                                               a1,
                                               *v40,
                                               0,
                                               *(double *)v20.m128i_i64,
                                               a4,
                                               a5,
                                               a6,
                                               v28,
                                               v29,
                                               a9,
                                               a10) )
                    {
                      if ( v41 == ++v40 )
                        goto LABEL_27;
                    }
                  }
                }
                else
                {
                  while ( (unsigned __int8)sub_70DBE0(
                                             a1,
                                             *v37,
                                             0,
                                             *(double *)v20.m128i_i64,
                                             a4,
                                             a5,
                                             a6,
                                             v28,
                                             v29,
                                             a9,
                                             a10) )
                  {
                    if ( v38 == ++v37 )
                    {
                      v30 = *(unsigned int *)(a2 + 16);
                      v39 = v30;
                      goto LABEL_24;
                    }
                  }
                }
              }
              else
              {
                while ( (unsigned __int8)sub_70DBE0(
                                           a1,
                                           *v34,
                                           0,
                                           *(double *)v20.m128i_i64,
                                           a4,
                                           a5,
                                           a6,
                                           v28,
                                           v29,
                                           a9,
                                           a10) )
                {
                  if ( v35 == ++v34 )
                  {
                    v30 = *(unsigned int *)(a2 + 16);
                    v36 = v30;
                    goto LABEL_20;
                  }
                }
              }
            }
            else
            {
              while ( (unsigned __int8)sub_70DBE0(a1, *v31, 0, *(double *)v20.m128i_i64, a4, a5, a6, v28, v29, a9, a10) )
              {
                if ( v32 == ++v31 )
                {
                  v30 = *(unsigned int *)(a2 + 16);
                  v33 = v30;
                  goto LABEL_16;
                }
              }
            }
          }
        }
      }
      else
      {
        while ( (unsigned __int8)sub_70DBE0(a1, *v23, 0, *(double *)v20.m128i_i64, a4, a5, a6, v21, v22, a9, a10) )
        {
          if ( (__int64 *)v24 == ++v23 )
            goto LABEL_8;
        }
      }
    }
  }
  return 0;
}
