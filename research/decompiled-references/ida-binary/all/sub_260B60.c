__int64 __fastcall sub_260B60(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 debugger_plugins; // rax
  __int64 v11; // rdx
  char *v12; // rcx
  int v13; // r8d
  int v14; // r9d
  double v15; // xmm4_8
  double v16; // xmm5_8
  char *v17; // rsi
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rsi
  char *v27; // r8
  char *v28; // r8
  __int64 v29; // r8
  __int64 v30; // r12
  __int64 v31; // r9
  __int64 v32; // rdx
  const char *v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // r8
  size_t v36; // r9
  void *v37; // rdx
  __int64 v38; // r8
  void *v39; // r10
  __int64 v40; // rsi
  __int64 v41; // rbx
  __int64 v42; // rbp
  __int64 v43; // r15
  __m128i si128; // xmm0
  __int64 v45; // rbx
  __int64 v46; // r9
  __m128 v47; // xmm4
  __m128 v48; // xmm5
  _DWORD *v49; // rsi
  __int64 v50; // r15
  __int64 v51; // rbp
  __int64 v52; // rdx
  __int64 v53; // rsi
  __m128i v54; // xmm0
  __int64 v55; // rax
  __m128i v56; // xmm0
  bool v57; // zf
  const char *v58; // rdi
  _QWORD *v59; // rbx
  __int64 v60; // rdx
  char *v61; // rcx
  int v62; // r8d
  int v63; // r9d
  double v64; // xmm4_8
  double v65; // xmm5_8
  __int64 v66; // rax
  char *v67; // rax
  const char *v68; // rdi
  const char *v69; // r15
  _QWORD *v70; // rbp
  const char *v71; // rdi
  const char *v72; // rsi
  const char *v73; // rdi
  __int64 v74; // rdx
  size_t v75; // rax
  __int64 v76; // rcx
  const char *v77; // rdx
  char *v78; // rax
  char v79; // di
  __int64 v80; // r12
  __int64 v81; // rbp
  __int64 *v82; // rax
  __int64 v83; // rdi
  __int64 v84; // rbp
  __int64 *v85; // rax
  __int64 v86; // rdi
  char v87; // [rsp+0h] [rbp-308h]
  void *destb; // [rsp+10h] [rbp-2F8h]
  void *destc; // [rsp+10h] [rbp-2F8h]
  void *desta; // [rsp+10h] [rbp-2F8h]
  void *destd; // [rsp+10h] [rbp-2F8h]
  _QWORD *dest; // [rsp+10h] [rbp-2F8h]
  const char *deste; // [rsp+10h] [rbp-2F8h]
  char *v94; // [rsp+18h] [rbp-2F0h]
  void *v95; // [rsp+18h] [rbp-2F0h]
  const char *v96; // [rsp+18h] [rbp-2F0h]
  __int64 v97; // [rsp+20h] [rbp-2E8h]
  __int64 v98; // [rsp+20h] [rbp-2E8h]
  size_t v99; // [rsp+20h] [rbp-2E8h]
  __int64 v100; // [rsp+20h] [rbp-2E8h]
  __int64 v101; // [rsp+28h] [rbp-2E0h]
  __int16 v102; // [rsp+34h] [rbp-2D4h] BYREF
  __int16 v103; // [rsp+36h] [rbp-2D2h] BYREF
  __int64 v104; // [rsp+38h] [rbp-2D0h] BYREF
  __int64 v105; // [rsp+40h] [rbp-2C8h] BYREF
  __int128 v106; // [rsp+48h] [rbp-2C0h]
  __int64 v107; // [rsp+60h] [rbp-2A8h] BYREF
  __int128 v108; // [rsp+68h] [rbp-2A0h]
  __int64 v109; // [rsp+80h] [rbp-288h] BYREF
  __int128 v110; // [rsp+88h] [rbp-280h]
  void *src; // [rsp+A0h] [rbp-268h] BYREF
  __int128 v112; // [rsp+A8h] [rbp-260h]
  char s[511]; // [rsp+C0h] [rbp-248h] BYREF
  char v114; // [rsp+2BFh] [rbp-49h] BYREF
  char v115; // [rsp+2C0h] [rbp-48h] BYREF
  unsigned __int64 v116; // [rsp+2C8h] [rbp-40h]

  v116 = __readfsqword(0x28u);
  debugger_plugins = get_debugger_plugins(&v104);
  if ( !debugger_plugins )
  {
LABEL_2:
    v17 = (_BYTE *)(&dword_0 + 1);
    sub_258CA0(nullptr, 1, v11, v12, v13, v14, a2, a3, a4, a5, v15, v16, a8, a9);
    goto LABEL_3;
  }
  v19 = debugger_plugins;
  v106 = 0;
  v105 = 0;
  v20 = qvector_reserve(&v105, 0, 4, 1);
  v105 = v20;
  *(_QWORD *)&v106 = 4;
  *(_WORD *)v20 = 17486;
  *(_BYTE *)(v20 + 2) = 75;
  *(_BYTE *)(v105 + 3) = 0;
  v107 = 0;
  v108 = 0;
  v21 = qvector_reserve(&v107, 0, 60, 1);
  v107 = v21;
  v22 = 0;
  *(_QWORD *)&v108 = 60;
  *(__m128i *)v21 = _mm_load_si128((const __m128i *)&xmmword_5DCB10);
  v23 = v107;
  v102 = 0;
  *(__m128i *)(v21 + 16) = _mm_load_si128((const __m128i *)&xmmword_5DCB20);
  *(__m128i *)(v21 + 32) = _mm_load_si128((const __m128i *)&xmmword_5DCB30);
  *(__m128i *)(v21 + 43) = _mm_load_si128((const __m128i *)&xmmword_5DCB40);
  *(_BYTE *)(v23 + 59) = 0;
  do
  {
    v29 = 16 * v22;
    if ( *(_QWORD *)(v104 + 16 * v22 + 8) == dbg )
      v102 = v22 + 1;
    v30 = v108;
    if ( (_QWORD)v108 )
    {
      v31 = v108 + 1;
      v32 = v108 + 2;
      v30 = v108 - 1;
      if ( *((_QWORD *)&v108 + 1) < (unsigned __int64)(v108 + 2) )
        goto LABEL_25;
    }
    else
    {
      v32 = 3;
      v31 = 2;
      if ( *((_QWORD *)&v108 + 1) < 3u )
      {
LABEL_25:
        v98 = v31;
        destc = (void *)v32;
        v107 = qvector_reserve(&v107, v23, v32, 1);
        v31 = v98;
        v23 = v107;
        v29 = 16 * v22;
        v32 = (__int64)destc;
      }
    }
    *(_QWORD *)&v108 = v32;
    *(_BYTE *)(v23 + v31) = 0;
    v33 = (const char *)&v105;
    *(_WORD *)(v107 + v30) = 15370;
    sub_22CF10((__int64)&src, (__int64)&v105, *(const char **)(*(_QWORD *)(v104 + v29) + 24LL));
    v37 = (void *)v112;
    if ( (_QWORD)v112 )
    {
      v36 = v112 - 1;
      if ( (_QWORD)v112 != 1 )
      {
        v38 = v108;
        v39 = (void *)(v112 - 1);
        if ( (_QWORD)v108 )
        {
          v38 = v108 - 1;
          v39 = (void *)(v36 + v108 - 1);
          v37 = (void *)(v112 + v108 - 1);
        }
        v40 = v107;
        if ( *((_QWORD *)&v108 + 1) < (unsigned __int64)v37 )
        {
          v101 = v38;
          v99 = v112 - 1;
          v95 = v39;
          desta = v37;
          v107 = qvector_reserve(&v107, v107, v37, 1);
          v38 = v101;
          v40 = v107;
          v36 = v99;
          v39 = v95;
          v37 = desta;
        }
        *(_QWORD *)&v108 = v37;
        *((_BYTE *)v39 + v40) = 0;
        v33 = (const char *)src;
        memcpy((void *)(v38 + v107), src, v36);
      }
    }
    if ( src )
    {
      *(_QWORD *)&v112 = 0;
      qfree(src, v33, v37, v34, v35, v36);
    }
    v27 = (char *)v108;
    if ( (_QWORD)v108 )
    {
      v24 = v108 + 2;
      v25 = v108 + 3;
      v26 = v107;
      v27 = (char *)(v108 - 1);
      if ( *((_QWORD *)&v108 + 1) >= (unsigned __int64)(v108 + 3) )
        goto LABEL_7;
    }
    else
    {
      v26 = v107;
      v25 = 4;
      v24 = 3;
      if ( *((_QWORD *)&v108 + 1) >= 4u )
        goto LABEL_7;
    }
    v97 = v24;
    v94 = v27;
    destb = (void *)v25;
    v107 = qvector_reserve(&v107, v26, v25, 1);
    v24 = v97;
    v26 = v107;
    v27 = v94;
    v25 = (__int64)destb;
LABEL_7:
    *(_QWORD *)&v108 = v25;
    ++v22;
    *(_BYTE *)(v26 + v24) = 0;
    v28 = &v27[v107];
    *(_WORD *)v28 = 21050;
    v28[2] = 62;
    v23 = v107;
  }
  while ( v19 != v22 );
  v41 = v108;
  if ( (_QWORD)v108 )
  {
    v43 = v108 + 56;
    v42 = v108 + 57;
    v41 = v108 - 1;
    if ( *((_QWORD *)&v108 + 1) < (unsigned __int64)(v108 + 57) )
      goto LABEL_50;
  }
  else
  {
    v42 = 58;
    v43 = 57;
    if ( *((_QWORD *)&v108 + 1) >= 0x3Au )
      goto LABEL_28;
LABEL_50:
    v107 = qvector_reserve(&v107, v107, v42, 1);
    v23 = v107;
  }
LABEL_28:
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DCB50);
  *(_QWORD *)&v108 = v42;
  *(_BYTE *)(v23 + v43) = 0;
  v45 = v107 + v41;
  *(__m128i *)v45 = si128;
  v109 = 0;
  *(__m128i *)(v45 + 16) = _mm_load_si128((const __m128i *)&xmmword_5DCB60);
  *(__m128i *)(v45 + 32) = _mm_load_si128((const __m128i *)&xmmword_5DCB70);
  *(__m128i *)(v45 + 41) = _mm_load_si128((const __m128i *)&xmmword_5DCB80);
  v110 = 0;
  if ( !(unsigned __int8)reg_str_get(&v109, "DefaultDebuggers", 0) )
  {
    v49 = (_DWORD *)v109;
    if ( *((_QWORD *)&v110 + 1) <= 4u )
    {
      v109 = qvector_reserve(&v109, v109, 5, 1);
      v49 = (_DWORD *)v109;
    }
    *(_QWORD *)&v110 = 5;
    *v49 = 1162760014;
    *(_BYTE *)(v109 + 4) = 0;
  }
  v50 = v108;
  if ( (_QWORD)v108 )
  {
    v51 = v108 + 81;
    v52 = v108 + 82;
    v53 = v107;
    v50 = v108 - 1;
    if ( *((_QWORD *)&v108 + 1) >= (unsigned __int64)(v108 + 82) )
      goto LABEL_34;
LABEL_52:
    destd = (void *)v52;
    v107 = qvector_reserve(&v107, v53, v52, 1);
    v52 = (__int64)destd;
    v53 = v107;
  }
  else
  {
    v53 = v107;
    v52 = 83;
    v51 = 82;
    if ( *((_QWORD *)&v108 + 1) < 0x53u )
      goto LABEL_52;
  }
LABEL_34:
  *(_QWORD *)&v108 = v52;
  v54 = _mm_load_si128((const __m128i *)&xmmword_5DCB90);
  *(_BYTE *)(v53 + v51) = 0;
  v103 = 0;
  v55 = v50 + v107;
  *(__m128i *)v55 = v54;
  v56 = _mm_load_si128((const __m128i *)&xmmword_5DCBA0);
  v57 = (_QWORD)v108 == 0;
  *(_WORD *)(v55 + 80) = 2570;
  v58 = &s1;
  *(__m128i *)(v55 + 16) = v56;
  *(__m128i *)(v55 + 32) = _mm_load_si128((const __m128i *)&xmmword_5DCBB0);
  *(__m128i *)(v55 + 48) = _mm_load_si128((const __m128i *)&xmmword_5DCBC0);
  a2 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DCBD0);
  *(__m128 *)(v55 + 64) = a2;
  if ( !v57 )
    LODWORD(v58) = v107;
  v17 = (char *)&v102;
  if ( (unsigned int)sub_1697D0(
                       (int)v58,
                       (__int64)&v102,
                       (__int64)&v109,
                       (__int64)&v103,
                       0,
                       v46,
                       a2,
                       a3,
                       a4,
                       a5,
                       v47,
                       v48,
                       a8,
                       a9,
                       v87) )
  {
    if ( v102 <= 0 )
    {
      if ( !v102 && v103 )
      {
        v17 = nullptr;
        reg_delete("DefaultDebuggers", 0);
      }
      v59 = nullptr;
    }
    else
    {
      v59 = (_QWORD *)(v104 + 16LL * (v102 - 1));
      if ( !v103 )
        goto LABEL_39;
      a2 = 0;
      src = nullptr;
      v112 = 0;
      sub_22C090((__int64)&src);
      v66 = qbasename(*(_QWORD *)(*v59 + 8LL));
      qstrncpy(s, v66, 512);
      v67 = strrchr(s, 95);
      if ( v67 )
        *v67 = 0;
      v100 = v112;
      if ( !(_QWORD)v112 )
        goto LABEL_89;
      v68 = &s1;
      dest = src;
      v69 = (const char *)src;
      if ( *((_QWORD *)src + 1) )
        v68 = *(const char **)src;
      v17 = s;
      if ( !strcmp(v68, s) )
      {
        if ( dest )
        {
          v84 = 0;
          do
          {
            v85 = &dest[3 * v84];
            v86 = *v85;
            if ( *v85 )
            {
              v85[1] = 0;
              qfree(v86, s);
              dest = src;
            }
            ++v84;
          }
          while ( v100 != v84 );
LABEL_105:
          *(_QWORD *)&v112 = 0;
          *(double *)a2.m128_u64 = qfree(dest, v17);
        }
      }
      else
      {
        v70 = dest;
        if ( 24 * v100 )
        {
          while ( 1 )
          {
            v71 = &s1;
            if ( v70[1] )
              v71 = (const char *)*v70;
            v72 = (const char *)(v70 + 3);
            if ( !strcmp(v71, s) )
              break;
            if ( &dest[3 * v100] == (_QWORD *)v72 )
            {
              v78 = &s[strlen(s)];
              goto LABEL_79;
            }
            v70 += 3;
          }
          v73 = (const char *)*v70;
          if ( *v70 )
          {
            v70[1] = 0;
            *(double *)a2.m128_u64 = qfree(v73, v72);
            v72 = (const char *)(v70 + 3);
            v100 = v112;
            dest = src;
          }
          memmove(v70, v72, (char *)&dest[3 * v100] - (char *)v70 - 24);
          v69 = (const char *)src;
          v74 = 3 * (v112 - 1);
          *(_QWORD *)&v112 = v112 - 1;
          v96 = (const char *)(8 * v74);
          deste = (char *)src + 8 * v74;
          v75 = strlen(s);
          v77 = v96;
          v72 = deste;
          v78 = &s[v75];
          if ( v96 )
          {
            while ( 1 )
            {
LABEL_79:
              if ( v78 >= &v115 )
              {
                if ( !under_debugger )
                  interr(518, v72, v77, v76, *(double *)a2.m128_u64);
                BUG();
              }
              v77 = v78 + 1;
              *v78 = 44;
              if ( v78 + 1 >= &v115 )
                break;
              ++v78;
              v77 = &s1;
              if ( *((_QWORD *)v69 + 1) )
                goto LABEL_83;
LABEL_84:
              if ( v78 != &v114 )
              {
                do
                {
                  v79 = *v77++;
                  *v78 = v79;
                  if ( !v79 )
                    goto LABEL_88;
                }
                while ( ++v78 != &v114 );
              }
LABEL_96:
              v114 = 0;
              v78 = &v114;
LABEL_88:
              v69 += 24;
              if ( v72 == v69 )
                goto LABEL_89;
            }
            v114 = 0;
            if ( !*((_QWORD *)v69 + 1) )
              goto LABEL_96;
            v78 = &v114;
LABEL_83:
            v77 = *(const char **)v69;
            goto LABEL_84;
          }
        }
LABEL_89:
        v17 = nullptr;
        reg_str_set("DefaultDebuggers", 0, s);
        dest = src;
        if ( src )
        {
          v80 = v112;
          if ( (_QWORD)v112 )
          {
            v81 = 0;
            do
            {
              v82 = &dest[3 * v81];
              v83 = *v82;
              if ( *v82 )
              {
                v82[1] = 0;
                qfree(v83, nullptr);
                dest = src;
              }
              ++v81;
            }
            while ( v80 != v81 );
          }
          goto LABEL_105;
        }
      }
    }
LABEL_39:
    if ( v109 )
    {
      *(_QWORD *)&v110 = 0;
      *(double *)a2.m128_u64 = qfree(v109, v17);
    }
    if ( v107 )
    {
      *(_QWORD *)&v108 = 0;
      *(double *)a2.m128_u64 = qfree(v107, v17, *(double *)a2.m128_u64);
    }
    if ( v105 )
    {
      *(_QWORD *)&v106 = 0;
      *(double *)a2.m128_u64 = qfree(v105, v17, *(double *)a2.m128_u64);
    }
    if ( !v59 )
      goto LABEL_2;
    if ( v59[1] != dbg )
    {
      sub_258CA0(nullptr, 1, v11, v12, v13, v14, a2, a3, a4, a5, v15, v16, a8, a9);
      v17 = nullptr;
      sub_258CA0(v59, 0, v60, v61, v62, v63, a2, a3, a4, a5, v64, v65, a8, a9);
      if ( (*(_BYTE *)(a1 + 360) & 1) == 0 )
        return 1;
LABEL_48:
      sub_260AB0(a2, a3, a4, a5, v15, v16, a8, a9, a1, v17);
      return 1;
    }
  }
  else
  {
    if ( v109 )
    {
      *(_QWORD *)&v110 = 0;
      *(double *)a2.m128_u64 = qfree(v109, (const char *)&v102);
    }
    if ( v107 )
    {
      *(_QWORD *)&v108 = 0;
      *(double *)a2.m128_u64 = qfree(v107, (const char *)&v102, *(double *)a2.m128_u64);
    }
    if ( v105 )
    {
      *(_QWORD *)&v106 = 0;
      *(double *)a2.m128_u64 = qfree(v105, (const char *)&v102, *(double *)a2.m128_u64);
    }
  }
LABEL_3:
  if ( (*(_BYTE *)(a1 + 360) & 1) != 0 )
    goto LABEL_48;
  return 1;
}
