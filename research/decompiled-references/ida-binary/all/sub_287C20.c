__int64 __fastcall sub_287C20(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  unsigned int v21; // r12d
  __int64 v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  __int64 v30; // rax
  int v31; // edx
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r14
  __int64 *v38; // rdi
  const char *v39; // rsi
  __int64 v40; // r8
  _QWORD *v41; // r15
  unsigned __int64 v42; // r13
  size_t v43; // r10
  __int64 v44; // rcx
  __int64 v45; // r13
  __int64 i; // r14
  __int64 *v47; // rax
  __int64 v48; // rdi
  const char *v49; // rdi
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __m128d v54; // xmm1
  __int64 v55; // rdi
  __int64 v56; // r9
  __int64 v57; // rdi
  const char *v58; // r14
  void *v59; // rax
  __m128i v63[4]; // [rsp+40h] [rbp-1F8h] BYREF
  _BYTE v64[16]; // [rsp+80h] [rbp-1B8h] BYREF
  _BYTE v65[80]; // [rsp+90h] [rbp-1A8h] BYREF
  _OWORD v66[2]; // [rsp+E0h] [rbp-158h] BYREF
  unsigned __int64 v67; // [rsp+100h] [rbp-138h]
  __int64 v68; // [rsp+108h] [rbp-130h]
  __int64 v69; // [rsp+110h] [rbp-128h]
  __int128 v70; // [rsp+118h] [rbp-120h]
  __int64 v71; // [rsp+128h] [rbp-110h]
  __int128 v72; // [rsp+130h] [rbp-108h]
  __int128 v73; // [rsp+140h] [rbp-F8h]
  __int128 v74; // [rsp+150h] [rbp-E8h]
  __int64 v75; // [rsp+160h] [rbp-D8h]
  __int128 v76; // [rsp+168h] [rbp-D0h]
  __int128 v77; // [rsp+178h] [rbp-C0h]
  __int128 v78; // [rsp+188h] [rbp-B0h]
  __int64 v79; // [rsp+198h] [rbp-A0h]
  __int128 v80; // [rsp+1A0h] [rbp-98h]
  __int64 v81; // [rsp+1B0h] [rbp-88h]
  __int128 v82; // [rsp+1B8h] [rbp-80h]
  __int64 v83; // [rsp+1C8h] [rbp-70h]
  __int128 v84; // [rsp+1D0h] [rbp-68h]
  __int64 v85; // [rsp+1E0h] [rbp-58h]
  __int64 v86; // [rsp+1E8h] [rbp-50h]
  unsigned __int64 v87; // [rsp+1F8h] [rbp-40h]

  v87 = __readfsqword(0x28u);
  nullsub_66();
  if ( !*(_BYTE *)(a1 + 433) )
  {
    if ( !under_debugger )
      interr(1319, a2, v15, v16, *(double *)a6.m128_u64);
    BUG();
  }
  if ( a4 <= 0 )
  {
    v21 = 0;
  }
  else
  {
    v21 = 0;
    if ( !*(_BYTE *)(qword_8D2358 + 80) )
    {
      v23 = *(_QWORD *)(a1 + 16);
      memset(v63, 0, sizeof(v63));
      QT::QFont::QFont((QT::QFont *)v64);
      QT::QFont::QFont((QT::QFont *)v66);
      QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v65, (const QT::QFont *)v66);
      QT::QFont::~QFont((QT::QFont *)v66);
      a6 = (__m128)0x3FF0000000000000uLL;
      sub_1C8200(v63, v23, (__m128d)0x3FF0000000000000uLL);
      v21 = 0;
      while ( !(unsigned __int8)sub_283F40(a3, a5, v24, v25, v26, v27, a6, a7, a8, a9, v28, v29, a12, a13) )
      {
        a6 = 0;
        a7 = 0;
        v68 = 0;
        v67 = 0xFFFFFFFF00000001LL;
        v69 = 0;
        v71 = 0;
        v75 = 0;
        v79 = 0;
        v81 = 0;
        v83 = 0;
        v85 = -1;
        v86 = 0;
        memset(v66, 0, sizeof(v66));
        v70 = 0;
        v72 = 0;
        v73 = 0;
        v74 = 0;
        v76 = 0;
        v77 = 0;
        v78 = 0;
        v80 = 0;
        v82 = 0;
        v84 = 0;
        if ( a5 == 2 )
        {
          v30 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a3 + 24) + 16LL))(*(_QWORD *)(a3 + 24));
          v31 = *(_DWORD *)(a3 + 44);
          *(_QWORD *)&v66[0] = v30;
          v32 = *(unsigned int *)(a3 + 72);
          HIDWORD(v67) = v31;
          LOBYTE(v67) = *(_BYTE *)(a3 + 40);
          LOBYTE(v68) = *(_DWORD *)(v30 + 8) == (_DWORD)v32;
          v37 = linearray_t_down(a3);
          if ( !v37 )
            goto LABEL_43;
          v38 = *(__int64 **)(a1 + 392);
          v39 = (const char *)v66;
          if ( v38 == (__int64 *)(*(_QWORD *)(a1 + 408) - 272LL) )
          {
            sub_2879D0(a1 + 344, (__int64 *)v66, v33, v34, v35, v36);
            v40 = *(_QWORD *)(a1 + 392);
          }
          else
          {
            sub_174BB0(v38, (__int64 *)v66);
            v40 = *(_QWORD *)(a1 + 392) + 272LL;
            *(_QWORD *)(a1 + 392) = v40;
          }
          v41 = (_QWORD *)(v40 - 272);
          if ( *(_QWORD *)(a1 + 400) == v40 )
            v41 = *(_QWORD **)(*(_QWORD *)(a1 + 416) - 8LL);
        }
        else
        {
          v37 = linearray_t_up(a3);
          v55 = *(_QWORD *)(a3 + 24);
          HIDWORD(v67) = *(_DWORD *)(a3 + 44);
          LOBYTE(v67) = *(_BYTE *)(a3 + 40);
          *(_QWORD *)&v66[0] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
          v32 = *(unsigned int *)(a3 + 72);
          LOBYTE(v68) = *(_DWORD *)(*(_QWORD *)&v66[0] + 8LL) == (_DWORD)v32;
          if ( !v37 )
          {
LABEL_43:
            sub_174D10((__int64 *)v66, v32, v33, v34, v35);
            break;
          }
          v57 = *(_QWORD *)(a1 + 360);
          v39 = (const char *)v66;
          if ( v57 == *(_QWORD *)(a1 + 368) )
          {
            sub_287AE0((_QWORD *)(a1 + 344), (__int64 *)v66, v33, v34, v35, v56);
            v41 = *(_QWORD **)(a1 + 360);
          }
          else
          {
            sub_174BB0((__int64 *)(v57 - 272), (__int64 *)v66);
            v41 = (_QWORD *)(*(_QWORD *)(a1 + 360) - 272LL);
            *(_QWORD *)(a1 + 360) = v41;
          }
        }
        if ( (_QWORD *)v37 != v41 + 1 )
        {
          v42 = *(_QWORD *)(v37 + 8);
          if ( v42 && (v43 = v42 - 1, v42 != 1) )
          {
            v58 = *(const char **)v37;
            v59 = (void *)v41[1];
            if ( v41[3] < v42 )
            {
              v59 = (void *)qvector_reserve(v41 + 1, v41[1], v42, 1);
              v41[1] = v59;
              v43 = v42 - 1;
            }
            v41[2] = v42;
            v39 = v58;
            memmove(v59, v58, v43);
            *(_BYTE *)(v41[1] + v42 - 1) = 0;
          }
          else
          {
            v41[2] = 0;
          }
        }
        v44 = *(_QWORD *)(a1 + 40);
        *(_BYTE *)(a1 + 68) = 0;
        if ( v44 )
        {
          v45 = *(_QWORD *)(a1 + 48);
          if ( v45 )
          {
            for ( i = 0; i != v45; ++i )
            {
              v47 = (__int64 *)(v44 + 24 * i);
              v48 = *v47;
              if ( *v47 )
              {
                v47[1] = 0;
                qfree(v48, v39);
                v44 = *(_QWORD *)(a1 + 40);
              }
            }
          }
          *(_QWORD *)(a1 + 48) = 0;
          *(double *)a6.m128_u64 = qfree(v44, v39);
          *(_QWORD *)(a1 + 40) = 0;
          *(_QWORD *)(a1 + 56) = 0;
        }
        *(_DWORD *)(a1 + 64) = -1;
        v49 = &s1;
        if ( v41[2] )
          v49 = (const char *)v41[1];
        v50 = tag_strlen(v49);
        sub_178260(a1, (__int64)v41, v50, (__int64)v63);
        a8 = (__m128)0x7FFFFFFFFFFFFFFFuLL;
        a7 = (__m128)_mm_and_pd((__m128d)a6, (__m128d)0x7FFFFFFFFFFFFFFFuLL);
        if ( *(double *)a7.m128_u64 < 4.503599627370496e15 )
        {
          v54 = 0;
          a8 = (__m128)_mm_andn_pd((__m128d)0x7FFFFFFFFFFFFFFFuLL, (__m128d)a6);
          v54.m128d_f64[0] = (double)(int)*(double *)a6.m128_u64;
          a9 = (__m128)_mm_and_pd(_mm_cmpgt_sd((__m128d)a6, v54), (__m128d)0x3FF0000000000000uLL);
          v54.m128d_f64[0] = v54.m128d_f64[0] + *(double *)a9.m128_u64;
          a7 = (__m128)_mm_or_pd(v54, (__m128d)a8);
          a6 = a7;
        }
        if ( *(_DWORD *)(a1 + 176) < (int)*(double *)a6.m128_u64 )
          *(_DWORD *)(a1 + 176) = (int)*(double *)a6.m128_u64;
        ++v21;
        sub_174D10((__int64 *)v66, (__int64)v41, v51, v52, v53);
        if ( a4 == v21 )
          break;
      }
      QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v65);
      QT::QFont::~QFont((QT::QFont *)v64);
    }
  }
  if ( a2 )
    *a2 = sub_283F40(a3, a5, v15, v16, v17, v18, a6, a7, a8, a9, v19, v20, a12, a13);
  return v21;
}
