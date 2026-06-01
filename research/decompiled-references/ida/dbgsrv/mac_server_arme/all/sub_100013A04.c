/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100013A04
// Address: 0x0000000100013A04

//----- (0000000100013A04) ----------------------------------------------------
__int64 __fastcall sub_100013A04(__int64 a1, char a2, char *a3)
{
  __int64 result; // x0
  __int64 v7; // x23
  const char *v8; // x22
  int v9; // w8
  bool v10; // w8
  off_t v11; // x1
  unsigned __int64 v12; // x22
  unsigned __int64 v13; // x8
  _QWORD *v14; // x1
  __int64 v15; // x24
  __int64 v16; // x26
  off_t v17; // x22
  __int64 v18; // x0
  __int64 v19; // x9
  _QWORD *v20; // x8
  __int64 v21; // x9
  __int64 *v22; // x8
  __int64 v23; // x9
  __int64 v24; // x9
  __int64 v25; // x8
  unsigned __int64 v26; // x22
  off_t v27; // x23
  bool v28; // zf
  __int64 v29; // x26
  __int64 v30; // x8
  unsigned __int64 v31; // x9
  size_t v32; // x24
  void *v33; // x0
  off_t v34; // x1
  __int64 v35; // x11
  int64x2_t *v36; // x10
  int64x2_t *v37; // x8
  const double *v38; // x9
  unsigned __int64 v39; // x11
  unsigned __int64 v40; // x11
  int64x2_t *v41; // x13
  int64x2_t v42; // q0
  int64x2_t *v43; // x10
  __int64 v44; // x14
  int64x2_t v45; // q2
  int64x2_t v46; // q3
  int64x2_t v47; // q4
  off_t v48; // x1
  __int64 v49; // x2
  __int64 v50; // x9
  __int64 v51; // x8
  __int64 v52; // x9
  __int64 v53; // x24
  unsigned __int64 v54; // x25
  off_t v55; // x23
  off_t v56; // x1
  __int64 v57; // x9
  _QWORD *v58; // x8
  __int64 v59; // x9
  off_t v60; // x1
  unsigned __int64 v61; // x23
  unsigned int v62; // w27
  unsigned __int64 v63; // x24
  __int64 v64; // x28
  char *v65; // x26
  __int64 v66; // x3
  __int64 v67; // x4
  __int64 v68; // x5
  __int64 v69; // x6
  __int64 v70; // x7
  void *v71; // [xsp+18h] [xbp-478h] BYREF
  size_t v72; // [xsp+20h] [xbp-470h]
  __int64 v73; // [xsp+28h] [xbp-468h]
  char __s[16]; // [xsp+30h] [xbp-460h] BYREF
  __int128 v75; // [xsp+40h] [xbp-450h]
  __int64 v76; // [xsp+50h] [xbp-440h]

  result = *(_QWORD *)(a1 + 8);
  if ( !result )
    return result;
  qlseek(result, 0, 0);
  v7 = a1 + 16;
  if ( qlread(*(_QWORD *)(a1 + 8), (void *)(a1 + 16), 0x200u) != 512 || strncmp((const char *)(a1 + 16), "dyld_v", 6u) )
    return 0;
  v8 = (const char *)(a1 + 23);
  if ( a1 + 23 < (unsigned __int64)(a1 + 32) && *v8 == 32 )
  {
    v8 = (const char *)(a1 + 24);
    if ( *(_BYTE *)(a1 + 24) == 32 )
    {
      v8 = (const char *)(a1 + 25);
      if ( *(_BYTE *)(a1 + 25) == 32 )
      {
        v8 = (const char *)(a1 + 26);
        if ( *(_BYTE *)(a1 + 26) == 32 )
        {
          v8 = (const char *)(a1 + 27);
          if ( *(_BYTE *)(a1 + 27) == 32 )
          {
            v8 = (const char *)(a1 + 28);
            if ( *(_BYTE *)(a1 + 28) == 32 )
            {
              v8 = (const char *)(a1 + 29);
              if ( *(_BYTE *)(a1 + 29) == 32 )
              {
                v8 = (const char *)(a1 + 30);
                if ( *(_BYTE *)(a1 + 30) == 32 )
                {
                  if ( *(_BYTE *)(a1 + 31) == 32 )
                    v8 = (const char *)(a1 + 32);
                  else
                    v8 = (const char *)(a1 + 31);
                }
              }
            }
          }
        }
      }
    }
  }
  v9 = *(unsigned __int8 *)v8 - 112;
  if ( *v8 == 112 )
  {
    v9 = *((unsigned __int8 *)v8 + 1) - 112;
    if ( v8[1] == 112 )
      v9 = *((unsigned __int8 *)v8 + 2) - 99;
  }
  *(_BYTE *)(a1 + 772) = v9 == 0;
  v10 = !strncmp(v8, "x86_64", 6u) || strncmp(v8, "arm64", 5u) == 0;
  *(_BYTE *)(a1 + 773) = v10;
  v11 = *(unsigned int *)(a1 + 32);
  if ( (unsigned int)v11 <= 0x38 )
  {
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 80) = 0;
LABEL_27:
    *(_QWORD *)(a1 + 128) = 0;
LABEL_28:
    *(_QWORD *)(a1 + 152) = 0;
    *(_QWORD *)(a1 + 160) = 0;
LABEL_29:
    *(_QWORD *)(a1 + 328) = 0;
LABEL_30:
    *(_QWORD *)(a1 + 464) = 0;
    *(_QWORD *)(a1 + 408) = 0;
    goto LABEL_31;
  }
  if ( (unsigned int)v11 <= 0x74 )
    goto LABEL_27;
  if ( (unsigned int)v11 <= 0x88 )
    goto LABEL_28;
  if ( (unsigned int)v11 <= 0x138 )
    goto LABEL_29;
  if ( (unsigned int)v11 <= 0x188 )
    goto LABEL_30;
LABEL_31:
  if ( (a2 & 1) != 0 )
  {
    if ( qlseek(*(_QWORD *)(a1 + 8), v11, 0) != *(_DWORD *)(a1 + 32) )
      return 0;
    v12 = *(unsigned int *)(a1 + 36);
    v13 = *(_QWORD *)(a1 + 536);
    if ( v13 >= v12 )
    {
      if ( v13 != v12 )
      {
        *(_OWORD *)__s = 0u;
        v75 = 0u;
        sub_10001C57C((_QWORD **)(a1 + 528), v12, __s);
      }
    }
    else
    {
      v14 = *(_QWORD **)(a1 + 528);
      if ( *(_QWORD *)(a1 + 544) < v12 )
      {
        v14 = qvector_reserve((_QWORD *)(a1 + 528), v14, *(unsigned int *)(a1 + 36), 0x20u);
        *(_QWORD *)(a1 + 528) = v14;
        v13 = *(_QWORD *)(a1 + 536);
      }
      bzero(&v14[4 * v13], 32 * (v12 - v13));
      *(_QWORD *)(a1 + 536) = v12;
    }
    v15 = *(_QWORD *)(a1 + 8);
    v16 = *(unsigned int *)(a1 + 36);
    v17 = qlseek(v15, 0, 1);
    v18 = qlsize(v15);
    if ( v17 < 0 || v18 - v17 < 0 || v18 - v17 < (unsigned __int64)(32 * v16) )
      sub_10001BFD4((__int64)"%s is incorrect, maximum possible value is %u%s");
    if ( qlread(*(_QWORD *)(a1 + 8), *(void **)(a1 + 528), 32LL * *(unsigned int *)(a1 + 36)) != 32LL
                                                                                               * *(unsigned int *)(a1 + 36) )
      return 0;
    v19 = *(_QWORD *)(a1 + 536);
    if ( (v19 & 0x7FFFFFFFFFFFFFFLL) != 0 )
    {
      v20 = *(_QWORD **)(a1 + 528);
      v21 = 32 * v19;
      do
      {
        *v20 += *(_QWORD *)(a1 + 696);
        v20 += 4;
        v21 -= 32;
      }
      while ( v21 );
    }
    LODWORD(v11) = *(_DWORD *)(a1 + 32);
    if ( (unsigned int)v11 < 0xF9 && *(_QWORD *)(a1 + 536) >= 3u )
    {
      v22 = *(__int64 **)(a1 + 528);
      v23 = *v22;
      *(_QWORD *)(a1 + 240) = *v22;
      *(_QWORD *)(a1 + 248) = &_mh_execute_header;
      *(_QWORD *)(a1 + 256) = (char *)&_mh_execute_header + v23 - (v22[8] + v22[9]);
    }
  }
  v24 = 452;
  if ( (unsigned int)v11 <= 0x1C7 )
    v24 = 28;
  v25 = 24;
  if ( (unsigned int)v11 > 0x1C7 )
    v25 = 448;
  v26 = *(unsigned int *)(v7 + v24);
  if ( (a2 & 2) == 0 || ((v27 = *(unsigned int *)(v7 + v25), (_DWORD)v27) ? (v28 = (_DWORD)v26 == 0) : (v28 = 1), v28) )
  {
LABEL_73:
    if ( (a2 & 4) != 0 )
      sub_100014554(a1, a3);
    if ( (a2 & 8) != 0 )
    {
      if ( *(_DWORD *)(a1 + 132) )
      {
        v34 = *(unsigned int *)(a1 + 128);
        if ( (_DWORD)v34 )
        {
          if ( qlseek(*(_QWORD *)(a1 + 8), v34, 0) != *(_DWORD *)(a1 + 128) )
            return 0;
          sub_100012D04(*(_QWORD *)(a1 + 8), (_DWORD *)(a1 + 132), 8u, (__int64)"branch islands entries count", -1, -1);
          sub_100014818(a1 + 624, *(unsigned int *)(a1 + 132));
          if ( qlread(*(_QWORD *)(a1 + 8), *(void **)(a1 + 624), 8LL * *(unsigned int *)(a1 + 132)) != 8LL * *(unsigned int *)(a1 + 132) )
            return 0;
          v35 = *(_QWORD *)(a1 + 632);
          if ( (v35 & 0x1FFFFFFFFFFFFFFFLL) != 0 )
          {
            v36 = *(int64x2_t **)(a1 + 624);
            v37 = (int64x2_t *)((char *)v36 + 8 * v35);
            v38 = (const double *)(a1 + 696);
            v39 = (v35 - 1) & 0x1FFFFFFFFFFFFFFFLL;
            if ( v39 < 9 || (unsigned __int64)v36 < a1 + 704 && v38 < (const double *)v37 )
              goto LABEL_137;
            v40 = v39 + 1;
            v41 = (int64x2_t *)((char *)v36 + 8 * (v40 & 0x3FFFFFFFFFFFFFF8LL));
            v42 = (int64x2_t)vld1q_dup_f64(v38);
            v43 = v36 + 2;
            v44 = v40 & 0x3FFFFFFFFFFFFFF8LL;
            do
            {
              v45 = vaddq_s64(v43[-1], v42);
              v46 = vaddq_s64(*v43, v42);
              v47 = vaddq_s64(v43[1], v42);
              v43[-2] = vaddq_s64(v43[-2], v42);
              v43[-1] = v45;
              *v43 = v46;
              v43[1] = v47;
              v43 += 4;
              v44 -= 8;
            }
            while ( v44 );
            v36 = v41;
            if ( v40 != (v40 & 0x3FFFFFFFFFFFFFF8LL) )
            {
LABEL_137:
              do
              {
                v36->i64[0] += *(_QWORD *)v38;
                v36 = (int64x2_t *)((char *)v36 + 8);
              }
              while ( v36 != v37 );
            }
          }
        }
      }
    }
    if ( (a2 & 0x10) != 0 )
    {
      v48 = *(_QWORD *)(a1 + 72);
      if ( v48 )
      {
        v49 = *(_QWORD *)(a1 + 80);
        if ( v49 )
        {
          v50 = *(_QWORD *)(a1 + 536);
          if ( (v50 & 0x7FFFFFFFFFFFFFFLL) != 0 )
          {
            v51 = *(_QWORD *)(a1 + 528);
            v52 = 32 * v50;
            while ( *(_DWORD *)(v51 + 24) != 3 )
            {
              v51 += 32;
              v52 -= 32;
              if ( !v52 )
                goto LABEL_97;
            }
            sub_1000131E8(a1, v48, v49, *(_QWORD *)v51, *(_QWORD *)(v51 + 8));
          }
        }
      }
LABEL_97:
      if ( *(_DWORD *)(a1 + 328) && *(_DWORD *)(a1 + 332) )
      {
        v53 = 0;
        v54 = 0;
        do
        {
          v55 = v53 + *(unsigned int *)(a1 + 328);
          if ( v55 != qlseek(*(_QWORD *)(a1 + 8), v55, 0) || qlread(*(_QWORD *)(a1 + 8), __s, 0x38u) != 56 )
            return 0;
          *(_QWORD *)__s += *(_QWORD *)(a1 + 696);
          sub_1000131E8(a1, *((off_t *)&v75 + 1), v76, *(__int64 *)__s, *(__int64 *)&__s[8]);
          ++v54;
          v53 += 56;
        }
        while ( v54 < *(unsigned int *)(a1 + 332) );
      }
    }
    if ( (a2 & 0x20) == 0 || (v56 = *(_QWORD *)(a1 + 152)) == 0 || !*(_QWORD *)(a1 + 160) )
    {
LABEL_111:
      if ( (a2 & 0xC0) != 0 )
      {
        v60 = *(unsigned int *)(a1 + 408);
        if ( (_DWORD)v60 )
        {
          v61 = *(unsigned int *)(a1 + 412);
          if ( (_DWORD)v61 )
          {
            v62 = *(_DWORD *)(a1 + 32);
            if ( qlseek(*(_QWORD *)(a1 + 8), v60, 0) == *(_DWORD *)(a1 + 408) )
            {
              sub_100014A70(a1 + 672, v61);
              if ( v62 <= 0x1C8 )
                v63 = 24;
              else
                v63 = 56;
              sub_100013744(*(_QWORD *)(a1 + 8), v61, v63, (__int64)"count of subcache infos in the cache file", -1, -1);
              v64 = 0;
              while ( 1 )
              {
                v65 = (char *)(*(_QWORD *)(a1 + 672) + 56 * v64);
                if ( qlread(*(_QWORD *)(a1 + 8), v65, v63) != v63 )
                  break;
                ++v64;
                if ( v62 < 0x1C9 )
                  qsnprintf(v65 + 24, 0x20u, ".%u", v66, v67, v68, v69, v70, v64);
                if ( v64 == v61 )
                  goto LABEL_123;
              }
            }
            return 0;
          }
        }
      }
LABEL_123:
      if ( (a2 & 1) != 0
        && !(_DWORD)v26
        && *(_DWORD *)(a1 + 536) == 1
        && (~*(_DWORD *)(*(_QWORD *)(a1 + 528) + 24LL) & 5) == 0 )
      {
        *(_BYTE *)(a1 + 860) = 1;
      }
      if ( a2 < 0 && a3 )
      {
        sub_100014B44((_QWORD *)a1, (char)a3);
      }
      else if ( !a3 )
      {
        return 1;
      }
      sub_100015100(a1, (__int64 *)(a1 + 576));
      return 1;
    }
    if ( qlseek(*(_QWORD *)(a1 + 8), v56, 0) == *(_QWORD *)(a1 + 152) )
    {
      sub_1000148D8(a1 + 576, *(_QWORD *)(a1 + 160));
      sub_10001499C(
        *(_QWORD *)(a1 + 8),
        *(_QWORD *)(a1 + 160),
        0x20u,
        (__int64)"count of image text infos in the cache file",
        -1,
        -1);
      if ( qlread(*(_QWORD *)(a1 + 8), *(void **)(a1 + 576), 32LL * *(_QWORD *)(a1 + 160)) == 32LL
                                                                                            * *(_QWORD *)(a1 + 160) )
      {
        v57 = *(_QWORD *)(a1 + 584);
        if ( (v57 & 0x7FFFFFFFFFFFFFFLL) != 0 )
        {
          v58 = (_QWORD *)(*(_QWORD *)(a1 + 576) + 16LL);
          v59 = 32 * v57;
          do
          {
            *v58 += *(_QWORD *)(a1 + 696);
            v58 += 4;
            v59 -= 32;
          }
          while ( v59 );
        }
        goto LABEL_111;
      }
    }
    return 0;
  }
  if ( qlseek(*(_QWORD *)(a1 + 8), v27, 0) != v27 )
    return 0;
  sub_100014340(a1 + 552, v26);
  sub_100013744(*(_QWORD *)(a1 + 8), v26, 0x20u, (__int64)"count of images in the cache file", -1, -1);
  if ( qlread(*(_QWORD *)(a1 + 8), *(void **)(a1 + 552), 32 * v26) != 32 * v26 )
    return 0;
  v29 = 0;
  while ( 1 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 552) + v29) += *(_QWORD *)(a1 + 696);
    v30 = *(_QWORD *)(a1 + 552);
    v31 = *(_QWORD *)(v30 + v29);
    if ( v31 < *(_QWORD *)(a1 + 760) )
      *(_QWORD *)(a1 + 760) = v31;
    result = (__int64)qlgetz(*(_QWORD *)(a1 + 8), *(unsigned int *)(v30 + v29 + 24), (unsigned __int8 *)__s, 1024);
    if ( !result )
      return result;
    v71 = nullptr;
    v72 = 0;
    v73 = 0;
    v32 = strlen(__s);
    v33 = nullptr;
    if ( v32 != -1 )
    {
      v33 = qvector_reserve(&v71, nullptr, v32 + 1, 1u);
      v71 = v33;
    }
    v72 = v32 + 1;
    memmove(v33, __s, v32);
    *((_BYTE *)v71 + v32) = 0;
    sub_100014404((_QWORD **)(a1 + 600), &v71);
    if ( v71 )
    {
      v72 = 0;
      qfree(v71);
    }
    v29 += 32;
    if ( 32 * v26 == v29 )
      goto LABEL_73;
  }
}
// 100014264: variable 'v66' is possibly undefined
// 100014264: variable 'v67' is possibly undefined
// 100014264: variable 'v68' is possibly undefined
// 100014264: variable 'v69' is possibly undefined
// 100014264: variable 'v70' is possibly undefined
