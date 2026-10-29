/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000146D0
// Address: 0x00000001000146D0

//----- (00000001000146D0) ----------------------------------------------------
__int64 __fastcall sub_1000146D0(__int64 a1, unsigned __int8 a2, const char *a3)
{
  __int64 v4; // rdi
  __int64 v6; // r15
  int v8; // eax
  bool v9; // al
  unsigned __int64 v10; // rsi
  __int64 v11; // rdi
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rcx
  char *v14; // rax
  __int64 v15; // r12
  off_t v16; // r14
  __int64 v17; // rax
  int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 i; // rdx
  __int64 *v23; // rax
  __int64 v24; // rcx
  _DWORD *v25; // rax
  unsigned int *v26; // r13
  unsigned int v27; // eax
  __int64 v28; // r13
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  size_t v31; // rax
  size_t v32; // r14
  size_t v33; // r12
  void *v34; // rax
  __int64 v35; // rdx
  unsigned __int64 v36; // rsi
  const __m128i *v37; // rax
  const __m128i *v38; // rcx
  unsigned __int64 v39; // rdx
  const __m128i *v40; // rdi
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // r8
  __m128i v43; // xmm0
  __int64 v44; // r9
  __m128i v45; // xmm2
  off_t v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // r8
  __int64 v51; // r12
  unsigned __int64 v52; // r13
  off_t v53; // r14
  unsigned __int8 v54; // di
  off_t v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 j; // rdx
  unsigned __int64 v59; // r14
  __int64 v60; // r12
  char *v61; // r13
  unsigned __int64 v63; // [rsp+18h] [rbp-468h]
  _DWORD *v64; // [rsp+20h] [rbp-460h]
  unsigned int v65; // [rsp+20h] [rbp-460h]
  unsigned __int8 v66; // [rsp+2Ch] [rbp-454h]
  __int128 v67; // [rsp+30h] [rbp-450h] BYREF
  __int64 v68; // [rsp+40h] [rbp-440h]
  char __s[16]; // [rsp+50h] [rbp-430h] BYREF
  __int128 v70; // [rsp+60h] [rbp-420h]
  __int64 v71; // [rsp+70h] [rbp-410h]

  v4 = *(_QWORD *)(a1 + 8);
  if ( !v4 )
    goto LABEL_4;
  LODWORD(v6) = 0;
  qlseek(v4, 0, 0);
  if ( qlread(*(_QWORD *)(a1 + 8), (void *)(a1 + 16), 512) == 512 )
  {
    if ( strncmp((const char *)(a1 + 16), "dyld_v", 6u) )
    {
LABEL_4:
      LODWORD(v6) = 0;
      return (unsigned int)v6;
    }
    v6 = a1 + 23;
    if ( a1 + 23 < (unsigned __int64)(a1 + 32) && *(_BYTE *)v6 == 32 )
    {
      if ( *(_BYTE *)(a1 + 24) == 32 )
      {
        if ( *(_BYTE *)(a1 + 25) == 32 )
        {
          if ( *(_BYTE *)(a1 + 26) == 32 )
          {
            if ( *(_BYTE *)(a1 + 27) == 32 )
            {
              if ( *(_BYTE *)(a1 + 28) == 32 )
              {
                if ( *(_BYTE *)(a1 + 29) == 32 )
                {
                  if ( *(_BYTE *)(a1 + 30) == 32 )
                  {
                    v6 = a1 + 31;
                    if ( *(_BYTE *)(a1 + 31) == 32 )
                      v6 = a1 + 32;
                  }
                  else
                  {
                    v6 = a1 + 30;
                  }
                }
                else
                {
                  v6 = a1 + 29;
                }
              }
              else
              {
                v6 = a1 + 28;
              }
            }
            else
            {
              v6 = a1 + 27;
            }
          }
          else
          {
            v6 = a1 + 26;
          }
        }
        else
        {
          v6 = a1 + 25;
        }
      }
      else
      {
        v6 = a1 + 24;
      }
    }
    v64 = (_DWORD *)(a1 + 32);
    v8 = *(unsigned __int8 *)v6 - 112;
    if ( *(_BYTE *)v6 == 112 )
    {
      v8 = *(unsigned __int8 *)(v6 + 1) - 112;
      if ( *(_BYTE *)(v6 + 1) == 112 )
        v8 = *(unsigned __int8 *)(v6 + 2) - 99;
    }
    *(_BYTE *)(a1 + 772) = v8 == 0;
    v9 = !strncmp((const char *)v6, "x86_64", 6u) || strncmp((const char *)v6, "arm64", 5u) == 0;
    *(_BYTE *)(a1 + 773) = v9;
    v10 = *(unsigned int *)(a1 + 32);
    if ( v10 > 0x38 )
    {
      if ( (unsigned int)v10 > 0x74 )
      {
        if ( (unsigned int)v10 > 0x88 )
        {
          if ( (unsigned int)v10 > 0x138 )
          {
            if ( (unsigned int)v10 > 0x188 )
            {
LABEL_39:
              v66 = a2;
              if ( (a2 & 1) == 0 )
                goto LABEL_60;
              LODWORD(v6) = 0;
              if ( qlseek(*(_QWORD *)(a1 + 8), v10, 0) != *(_DWORD *)(a1 + 32) )
                return (unsigned int)v6;
              v11 = a1 + 528;
              v12 = *(unsigned int *)(a1 + 36);
              v13 = *(_QWORD *)(a1 + 536);
              if ( v13 >= v12 )
              {
                if ( v13 != v12 )
                {
                  v70 = 0;
                  *(_OWORD *)__s = 0;
                  sub_10001DFB0(v11, v12, __s);
                }
              }
              else
              {
                v14 = *(char **)(a1 + 528);
                if ( *(_QWORD *)(a1 + 544) < v12 )
                {
                  v14 = (char *)qvector_reserve(v11, *(void **)(a1 + 528), *(unsigned int *)(a1 + 36), 0x20u);
                  *(_QWORD *)(a1 + 528) = v14;
                  v13 = *(_QWORD *)(a1 + 536);
                }
                __bzero(&v14[32 * v13], 32 * (v12 - v13));
                *(_QWORD *)(a1 + 536) = v12;
              }
              v6 = *(_QWORD *)(a1 + 8);
              v15 = *(unsigned int *)(a1 + 36);
              v16 = qlseek(v6, 0, 1);
              v17 = qlsize(v6);
              v18 = 0;
              if ( v16 >= 0 )
              {
                v19 = v17 - v16;
                if ( v19 >= 0 )
                {
                  if ( v19 >= (unsigned __int64)(32 * v15) )
                  {
                    if ( qlread(*(_QWORD *)(a1 + 8), *(void **)(a1 + 528), 32LL * *(unsigned int *)(a1 + 36)) != 32LL * *(unsigned int *)(a1 + 36) )
                      goto LABEL_4;
                    v20 = 32LL * *(_QWORD *)(a1 + 536);
                    if ( v20 )
                    {
                      v21 = *(_QWORD *)(a1 + 528);
                      for ( i = 0; i != v20; i += 32 )
                        *(_QWORD *)(v21 + i) += *(_QWORD *)(a1 + 696);
                    }
                    LODWORD(v10) = *v64;
                    a2 = v66;
                    if ( *v64 < 0xF9u && *(_QWORD *)(a1 + 536) >= 3u )
                    {
                      v23 = *(__int64 **)(a1 + 528);
                      v24 = *v23;
                      *(_QWORD *)(a1 + 240) = *v23;
                      *(_QWORD *)(a1 + 248) = &_mh_execute_header;
                      *(_QWORD *)(a1 + 256) = (char *)&_mh_execute_header + v24 - v23[9] - v23[8];
                    }
LABEL_60:
                    v25 = (_DWORD *)(a1 + 44);
                    v26 = (unsigned int *)(a1 + 464);
                    if ( (unsigned int)v10 < 0x1C8 )
                      v26 = (unsigned int *)(a1 + 40);
                    else
                      v25 = (_DWORD *)(a1 + 468);
                    v63 = (unsigned int)*v25;
                    if ( ((a2 >> 1) & (*v26 != 0) & (*v25 != 0)) == 1 )
                    {
                      v27 = *v26;
                      if ( qlseek(*(_QWORD *)(a1 + 8), v27, 0) == v27 )
                      {
                        sub_1000151C0(a1 + 552, v63);
                        sub_100014390(*(_QWORD *)(a1 + 8), v63, 0x20u, "count of images in the cache file", -1, -1);
                        if ( qlread(*(_QWORD *)(a1 + 8), *(void **)(a1 + 552), 32 * v63) == 32 * v63 )
                        {
                          v28 = 0;
                          v6 = (__int64)__s;
                          while ( 1 )
                          {
                            *(_QWORD *)(*(_QWORD *)(a1 + 552) + v28) += *(_QWORD *)(a1 + 696);
                            v29 = *(_QWORD *)(a1 + 552);
                            v30 = *(_QWORD *)(v29 + v28);
                            if ( v30 < *(_QWORD *)(a1 + 760) )
                              *(_QWORD *)(a1 + 760) = v30;
                            if ( !qlgetz(*(_QWORD *)(a1 + 8), *(unsigned int *)(v29 + v28 + 24), __s, 1024) )
                              break;
                            v67 = 0;
                            v68 = 0;
                            v31 = strlen(__s);
                            v32 = v31;
                            v33 = v31 + 1;
                            if ( v31 == -1 )
                            {
                              v34 = nullptr;
                            }
                            else
                            {
                              v34 = qvector_reserve((__int64)&v67, nullptr, v31 + 1, 1u);
                              *(_QWORD *)&v67 = v34;
                            }
                            *((_QWORD *)&v67 + 1) = v33;
                            memmove(v34, __s, v32);
                            *(_BYTE *)(v67 + v32) = 0;
                            sub_100015270((void **)(a1 + 600), (char *)&v67);
                            a2 = v66;
                            if ( (_QWORD)v67 )
                            {
                              *((_QWORD *)&v67 + 1) = 0;
                              qfree((void *)v67);
                            }
                            v28 += 32;
                            if ( 32 * v63 == v28 )
                              goto LABEL_76;
                          }
                        }
                      }
                      goto LABEL_4;
                    }
LABEL_76:
                    if ( (a2 & 4) != 0 )
                    {
                      sub_1000153C0(a1, a3);
                      a2 = v66;
                    }
                    if ( (a2 & 8) != 0 && *(_DWORD *)(a1 + 132) && *(_DWORD *)(a1 + 128) )
                    {
                      if ( qlseek(*(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 128), 0) != *(_DWORD *)(a1 + 128) )
                        goto LABEL_4;
                      LODWORD(v6) = a1 + 132;
                      sub_1000138D0(
                        *(_QWORD *)(a1 + 8),
                        (unsigned int *)(a1 + 132),
                        8u,
                        (__int64)"branch islands entries count",
                        -1,
                        -1);
                      sub_100015720(a1 + 624, *(unsigned int *)(a1 + 132));
                      if ( qlread(*(_QWORD *)(a1 + 8), *(void **)(a1 + 624), 8LL * *(unsigned int *)(a1 + 132)) != 8LL * *(unsigned int *)(a1 + 132) )
                        goto LABEL_4;
                      v35 = *(_QWORD *)(a1 + 632);
                      a2 = v66;
                      if ( 8 * v35 )
                      {
                        v36 = *(_QWORD *)(a1 + 624);
                        v37 = (const __m128i *)(v36 + 8 * v35);
                        v38 = (const __m128i *)(a1 + 696);
                        v39 = (v35 + 0x1FFFFFFFFFFFFFFFLL) & 0x1FFFFFFFFFFFFFFFLL;
                        if ( v39 >= 0xF )
                        {
                          if ( v38 < v37 && v36 < a1 + 704 )
                          {
                            v40 = *(const __m128i **)(a1 + 624);
                          }
                          else
                          {
                            v41 = v39 + 1;
                            v42 = v41 & 0xFFFFFFFFFFFFFFFCLL;
                            v40 = (const __m128i *)(v36 + 8 * (v41 & 0xFFFFFFFFFFFFFFFCLL));
                            v43 = _mm_shuffle_epi32(_mm_loadl_epi64(v38), 68);
                            v44 = 0;
                            do
                            {
                              v45 = _mm_add_epi64(_mm_loadu_si128((const __m128i *)(v36 + 8 * v44 + 16)), v43);
                              *(__m128i *)(v36 + 8 * v44) = _mm_add_epi64(
                                                              _mm_loadu_si128((const __m128i *)(v36 + 8 * v44)),
                                                              v43);
                              *(__m128i *)(v36 + 8 * v44 + 16) = v45;
                              v44 += 4;
                            }
                            while ( v42 != v44 );
                            if ( v41 == v42 )
                              goto LABEL_92;
                          }
                        }
                        else
                        {
                          v40 = *(const __m128i **)(a1 + 624);
                        }
                        do
                        {
                          v40->i64[0] += v38->i64[0];
                          v40 = (const __m128i *)((char *)v40 + 8);
                        }
                        while ( v40 != v37 );
                      }
                    }
LABEL_92:
                    if ( (a2 & 0x10) != 0 )
                    {
                      v46 = *(_QWORD *)(a1 + 72);
                      if ( v46 )
                      {
                        v47 = *(_QWORD *)(a1 + 80);
                        if ( v47 )
                        {
                          v48 = 32LL * *(_QWORD *)(a1 + 536);
                          if ( v48 )
                          {
                            v49 = *(_QWORD *)(a1 + 528);
                            v50 = 0;
                            while ( *(_DWORD *)(v49 + v50 + 24) != 3 )
                            {
                              v50 += 32;
                              if ( v48 == v50 )
                                goto LABEL_101;
                            }
                            sub_100013DB0(a1, v46, v47, *(_QWORD *)(v49 + v50), *(_QWORD *)(v49 + v50 + 8));
                          }
                        }
                      }
LABEL_101:
                      if ( *(_DWORD *)(a1 + 328) && *(_DWORD *)(a1 + 332) )
                      {
                        v51 = 0;
                        v6 = (__int64)__s;
                        v52 = 0;
                        do
                        {
                          v53 = v51 + *(unsigned int *)(a1 + 328);
                          if ( v53 != qlseek(*(_QWORD *)(a1 + 8), v53, 0) || qlread(*(_QWORD *)(a1 + 8), __s, 56) != 56 )
                            goto LABEL_4;
                          *(_QWORD *)__s += *(_QWORD *)(a1 + 696);
                          sub_100013DB0(a1, *((off_t *)&v70 + 1), v71, *(__int64 *)__s, *(__int64 *)&__s[8]);
                          ++v52;
                          v51 += 56;
                        }
                        while ( v52 < *(unsigned int *)(a1 + 332) );
                      }
                    }
                    v54 = v66;
                    if ( (v66 & 0x20) != 0 )
                    {
                      v55 = *(_QWORD *)(a1 + 152);
                      if ( v55 )
                      {
                        if ( *(_QWORD *)(a1 + 160) )
                        {
                          if ( qlseek(*(_QWORD *)(a1 + 8), v55, 0) != *(_QWORD *)(a1 + 152) )
                            goto LABEL_4;
                          LODWORD(v6) = a1 + 576;
                          sub_1000157C0(a1 + 576, *(_QWORD *)(a1 + 160));
                          sub_100015870(
                            *(_QWORD *)(a1 + 8),
                            *(_QWORD *)(a1 + 160),
                            0x20u,
                            "count of image text infos in the cache file",
                            -1,
                            -1);
                          if ( qlread(*(_QWORD *)(a1 + 8), *(void **)(a1 + 576), 32LL * *(_QWORD *)(a1 + 160)) != 32LL * *(_QWORD *)(a1 + 160) )
                            goto LABEL_4;
                          v56 = 32LL * *(_QWORD *)(a1 + 584);
                          v54 = v66;
                          if ( v56 )
                          {
                            v57 = *(_QWORD *)(a1 + 576);
                            for ( j = 0; j != v56; j += 32 )
                              *(_QWORD *)(v57 + j + 16) += *(_QWORD *)(a1 + 696);
                          }
                        }
                      }
                    }
                    if ( (v54 & 0xC0) != 0 && *(_DWORD *)(a1 + 408) && *(_DWORD *)(a1 + 412) )
                    {
                      v59 = *(unsigned int *)(a1 + 412);
                      v65 = *(_DWORD *)(a1 + 32);
                      LODWORD(v6) = 0;
                      if ( qlseek(*(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 408), 0) != *(_DWORD *)(a1 + 408) )
                        return (unsigned int)v6;
                      sub_100015950(a1 + 672, v59);
                      LOBYTE(v6) = v65 >= 0x1C9;
                      v6 = (unsigned int)(32 * v6) | 0x18LL;
                      sub_100014390(*(_QWORD *)(a1 + 8), v59, v6, "count of subcache infos in the cache file", -1, -1);
                      v60 = 0;
                      do
                      {
                        v61 = (char *)(*(_QWORD *)(a1 + 672) + 56 * v60);
                        if ( qlread(*(_QWORD *)(a1 + 8), v61, v6) != v6 )
                          goto LABEL_4;
                        ++v60;
                        if ( v65 < 0x1C9 )
                          qsnprintf(v61 + 24, 32, ".%u", v60);
                      }
                      while ( v60 != v59 );
                    }
                    if ( (v66 & 1) != 0
                      && !(_DWORD)v63
                      && *(_DWORD *)(a1 + 536) == 1
                      && (~*(_BYTE *)(*(_QWORD *)(a1 + 528) + 24LL) & 5) == 0 )
                    {
                      *(_BYTE *)(a1 + 860) = 1;
                    }
                    if ( (v66 & 0x80u) == 0 || a3 == nullptr )
                    {
                      if ( !a3 )
                      {
LABEL_133:
                        LOBYTE(v6) = 1;
                        return (unsigned int)v6;
                      }
                    }
                    else
                    {
                      sub_100015A00((_QWORD *)a1, a3);
                    }
                    sub_100016200(a1, (__int64 *)(a1 + 576));
                    goto LABEL_133;
                  }
                  v18 = (unsigned __int64)v19 >> 5;
                }
              }
              sub_10001D7A0(
                (__int64)"%s is incorrect, maximum possible value is %u%s",
                "count of cache mapping infos",
                v18,
                (const char *)&dword_10008FEDC);
            }
LABEL_38:
            *(_QWORD *)(a1 + 464) = 0;
            *(_QWORD *)(a1 + 408) = 0;
            goto LABEL_39;
          }
LABEL_37:
          *(_QWORD *)(a1 + 328) = 0;
          goto LABEL_38;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 128) = 0;
      }
    }
    else
    {
      *(_OWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 128) = 0;
    }
    *(_OWORD *)(a1 + 152) = 0;
    goto LABEL_37;
  }
  return (unsigned int)v6;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
// 10008FEDC: using guessed type int dword_10008FEDC;
