__int64 __fastcall parse_license_source_plugin_options(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v6; // cc
  const char *v7; // rsi
  __int64 v8; // rax
  char *v9; // r13
  char *v10; // rbx
  char *v11; // r15
  char *v12; // rcx
  const char *v13; // rdi
  __int64 v14; // rax
  size_t v15; // rbx
  const char *v16; // rdi
  void *v17; // rdi
  __int64 v18; // rax
  void *v19; // rdx
  char *v20; // rdi
  __int64 v21; // r12
  __int64 v22; // r14
  char *v23; // rbx
  void *v24; // rdi
  void *v25; // rdi
  int v27; // eax
  void *v28; // rdi
  __int64 v29; // r13
  char *v30; // r15
  char *v31; // rdi
  const char *v32; // rsi
  char *v33; // rax
  char *v34; // r13
  char *v35; // rbx
  char *v36; // r14
  char *v37; // rcx
  const char *v38; // rdi
  __int64 v39; // rax
  void *v40; // rbx
  __int16 v41; // r13
  void *v42; // rdx
  __m128i v43; // xmm0
  __m128i si128; // xmm1
  void *v45; // rax
  __int64 v46; // r15
  __int64 v47; // r13
  char *v48; // rbx
  char *v49; // rdi
  const char *v50; // rdi
  __int64 i; // rax
  char **v52; // r15
  __int64 v53; // rbx
  char *v54; // r13
  char *v55; // rdi
  __int64 v56; // rax
  char *v57; // r13
  const char **v58; // rbx
  const char **v59; // r15
  char *v60; // rcx
  const char *v61; // rdi
  const char *v62; // rax
  unsigned __int64 v63; // rbx
  void *v64; // rdi
  const char *v65; // r13
  unsigned __int64 v66; // rbx
  void *v67; // rax
  const void *v68; // rsi
  _BYTE *v69; // rsi
  void *v70; // rax
  const char *v71; // r13
  char v73; // [rsp+17h] [rbp-169h]
  char *v75; // [rsp+30h] [rbp-150h]
  char *v76; // [rsp+30h] [rbp-150h]
  char *v77; // [rsp+30h] [rbp-150h]
  void *dest; // [rsp+38h] [rbp-148h]
  char **desta; // [rsp+38h] [rbp-148h]
  void *destb; // [rsp+38h] [rbp-148h]
  char **destc; // [rsp+38h] [rbp-148h]
  void *destd; // [rsp+38h] [rbp-148h]
  void *v83; // [rsp+40h] [rbp-140h] BYREF
  __int128 v84; // [rsp+48h] [rbp-138h]
  void *ptr; // [rsp+60h] [rbp-120h] BYREF
  __int128 v86; // [rsp+68h] [rbp-118h] BYREF
  char *s2; // [rsp+80h] [rbp-100h] BYREF
  void *v88[3]; // [rsp+88h] [rbp-F8h] BYREF
  __int16 v89; // [rsp+A0h] [rbp-E0h]
  void *v90; // [rsp+A8h] [rbp-D8h]
  __int128 v91; // [rsp+B0h] [rbp-D0h]
  void *v92; // [rsp+C0h] [rbp-C0h]
  __int128 v93; // [rsp+C8h] [rbp-B8h]
  void *v94; // [rsp+D8h] [rbp-A8h]
  __int128 v95; // [rsp+E0h] [rbp-A0h]
  __int16 v96; // [rsp+F0h] [rbp-90h]
  void *v97; // [rsp+F8h] [rbp-88h]
  __int128 v98; // [rsp+100h] [rbp-80h]
  void *v99; // [rsp+110h] [rbp-70h]
  __int128 v100; // [rsp+118h] [rbp-68h]
  int v101; // [rsp+128h] [rbp-58h]
  _DWORD v102[1]; // [rsp+130h] [rbp-50h] BYREF
  char v103; // [rsp+134h] [rbp-4Ch] BYREF
  char v104; // [rsp+138h] [rbp-48h] BYREF
  char v105; // [rsp+13Ch] [rbp-44h] BYREF
  char v106; // [rsp+140h] [rbp-40h] BYREF
  unsigned __int64 v107; // [rsp+148h] [rbp-38h]

  v107 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a3 + 8) <= 1u;
  v73 = 0;
  v83 = nullptr;
  v84 = 0;
  if ( !v6 )
    v73 = parse_plugin_options();
  v7 = nullptr;
  *(_OWORD *)v88 = 0;
  s2 = nullptr;
  v8 = qvector_reserve(&s2, 0, 8, 1);
  s2 = (char *)v8;
  v88[0] = byte_8;
  *(_DWORD *)v8 = 1886676339;
  *(_DWORD *)(v8 + 3) = 1717924464;
  s2[7] = 0;
  v9 = s2;
  v10 = (char *)v83 + 48 * v84;
  if ( v83 == v10 )
  {
LABEL_13:
    if ( v9 )
    {
      v88[0] = nullptr;
      qfree(v9);
    }
    goto LABEL_15;
  }
  v11 = (char *)v83;
  dest = v88[0];
  v12 = (char *)haystack;
  if ( v88[0] )
    v12 = s2;
  v75 = v12;
  while ( 1 )
  {
    v14 = *((_QWORD *)v11 + 1);
    if ( dest )
    {
      v13 = haystack;
      v7 = v9;
      if ( !v14 )
        goto LABEL_8;
      goto LABEL_12;
    }
    if ( !v14 )
      break;
LABEL_12:
    v13 = *(const char **)v11;
    v7 = v75;
LABEL_8:
    if ( !strcmp(v13, v7) )
      break;
    v11 += 48;
    if ( v10 == v11 )
      goto LABEL_13;
  }
  if ( v9 )
  {
    v88[0] = nullptr;
    qfree(v9);
  }
  if ( v11 )
  {
    v46 = v84;
    *(_DWORD *)(a2 + 20) &= ~1u;
    if ( v46 )
    {
      v47 = 0;
      destc = (char **)v83;
      while ( 1 )
      {
        if ( destc[1] )
        {
          v48 = *destc;
          v7 = "setpref";
          if ( !strcmp(*destc, "setpref") )
            break;
        }
        ++v47;
        destc += 6;
        if ( v47 == v46 )
          goto LABEL_15;
      }
      v49 = destc[3];
      if ( v49 )
      {
        destc[4] = nullptr;
        qfree(v49);
        v48 = *destc;
      }
      if ( v48 )
      {
        destc[1] = nullptr;
        qfree(v48);
      }
      v7 = (const char *)(destc + 6);
      memmove(destc, destc + 6, (_BYTE *)v83 + 48 * v84 - (_BYTE *)destc - 48);
      *(_QWORD *)&v84 = v84 - 1;
    }
  }
LABEL_15:
  if ( *(_QWORD *)(a3 + 8) <= 6u )
  {
    *(_BYTE *)(a1 + 32) = 0;
    goto LABEL_17;
  }
  v7 = "server";
  v27 = strncmp(*(const char **)a3, "server", 6u);
  *(_BYTE *)(a1 + 32) = v27 == 0;
  if ( !v27 )
  {
    v28 = *(void **)(a1 + 40);
    if ( v28 )
    {
      *(_QWORD *)(a1 + 48) = 0;
      qfree(v28);
      *(_QWORD *)(a1 + 40) = 0;
      *(_QWORD *)(a1 + 56) = 0;
    }
    if ( (_QWORD)v84 )
    {
      v29 = 0;
      desta = (char **)v83;
      while ( 1 )
      {
        if ( desta[1] )
        {
          v30 = *desta;
          if ( !strcmp(*desta, "server") )
            break;
        }
        ++v29;
        desta += 6;
        if ( v29 == (_QWORD)v84 )
          goto LABEL_47;
      }
      v31 = desta[3];
      if ( v31 )
      {
        desta[4] = nullptr;
        qfree(v31);
        v30 = *desta;
      }
      if ( v30 )
      {
        desta[1] = nullptr;
        qfree(v30);
      }
      memmove(desta, desta + 6, (_BYTE *)v83 + 48 * v84 - (_BYTE *)desta - 48);
      *(_QWORD *)&v84 = v84 - 1;
    }
LABEL_47:
    v32 = nullptr;
    *(_OWORD *)v88 = 0;
    s2 = nullptr;
    v33 = (char *)qvector_reserve(&s2, 0, 4, 1);
    s2 = v33;
    v88[0] = &byte_4;
    *(_WORD *)v33 = 26988;
    v33[2] = 100;
    s2[3] = 0;
    v34 = s2;
    v35 = (char *)v83 + 48 * v84;
    if ( v83 == v35 )
    {
LABEL_57:
      if ( v34 )
      {
        v88[0] = nullptr;
        qfree(v34);
      }
      goto LABEL_59;
    }
    v36 = (char *)v83;
    destb = v88[0];
    v37 = (char *)haystack;
    if ( v88[0] )
      v37 = s2;
    v76 = v37;
    while ( 2 )
    {
      v39 = *((_QWORD *)v36 + 1);
      if ( destb )
      {
        v32 = v34;
        v38 = haystack;
        if ( v39 )
          goto LABEL_56;
      }
      else
      {
        if ( !v39 )
        {
LABEL_91:
          if ( v34 )
          {
            v88[0] = nullptr;
            qfree(v34);
          }
          if ( v36 )
          {
            v50 = haystack;
            if ( *((_QWORD *)v36 + 4) )
              v50 = *((const char **)v36 + 3);
            v32 = "%02X-%02X%02X-%02X%02X-%02X";
            if ( (unsigned int)qsscanf(
                                 (int)v50,
                                 (int)"%02X-%02X%02X-%02X%02X-%02X",
                                 (int)v102,
                                 (int)&v103,
                                 (int)&v104,
                                 (int)&v105,
                                 (char)&v106) == 6 )
            {
              for ( i = 0; i != 6; ++i )
                *(_BYTE *)(a2 + i) = v102[i];
            }
            if ( (_QWORD)v84 )
            {
              v52 = (char **)v83;
              v53 = 0;
              while ( 1 )
              {
                if ( v52[1] )
                {
                  v54 = *v52;
                  v32 = "lid";
                  if ( !strcmp(*v52, "lid") )
                    break;
                }
                ++v53;
                v52 += 6;
                if ( v53 == (_QWORD)v84 )
                  goto LABEL_59;
              }
              v55 = v52[3];
              if ( v55 )
              {
                v52[4] = nullptr;
                qfree(v55);
                v54 = *v52;
              }
              if ( v54 )
              {
                v52[1] = nullptr;
                qfree(v54);
              }
              v32 = (const char *)(v52 + 6);
              memmove(v52, v52 + 6, (_BYTE *)v83 + 48 * v84 - (_BYTE *)v52 - 48);
              *(_QWORD *)&v84 = v84 - 1;
            }
          }
LABEL_59:
          v40 = *(void **)(a1 + 8);
          v41 = *(_WORD *)(a1 + 24);
          memset(v88, 0, sizeof(v88));
          if ( v40 )
          {
            v67 = (void *)qalloc_or_throw(v40, v32);
            v68 = *(const void **)a1;
            v88[0] = v67;
            v88[2] = v40;
            memcpy(v67, v68, (size_t)v40);
            v88[1] = v40;
          }
          v89 = v41;
          v90 = nullptr;
          v92 = nullptr;
          s2 = (char *)&off_2B07160;
          v94 = nullptr;
          v96 = 0;
          v97 = nullptr;
          v99 = nullptr;
          v101 = 0;
          v91 = 0;
          v93 = 0;
          v95 = 0;
          v98 = 0;
          v100 = 0;
          if ( (unsigned __int64)v40 <= 1 )
          {
            v69 = v88[0];
            if ( v88[2] <= byte_9 )
            {
              v88[0] = (void *)qvector_reserve(v88, v88[0], 10, 1);
              v69 = v88[0];
            }
            v88[1] = byte_9 + 1;
            *(_QWORD *)v69 = 0x736F686C61636F6CLL;
            v69[8] = 116;
            *((_BYTE *)v88[0] + 9) = 0;
            v41 = v89;
          }
          if ( !v41 )
            v89 = -102;
          if ( (unsigned __int8)sub_79CDD0((__int64)&s2, (const char ***)&v83, "license") )
          {
            v42 = v88[0];
            v43 = _mm_loadu_si128((const __m128i *)(a1 + 8));
            si128 = _mm_load_si128((const __m128i *)&v88[1]);
            *(_BYTE *)(a1 + 26) = ~(_BYTE)v101;
            v45 = *(void **)a1;
            *(_BYTE *)(a1 + 26) &= 1u;
            v88[0] = v45;
            LOWORD(v45) = v89;
            *(_QWORD *)a1 = v42;
            *(_WORD *)(a1 + 24) = (_WORD)v45;
            *(__m128i *)(a1 + 8) = si128;
            *(__m128i *)&v88[1] = v43;
          }
          s2 = (char *)&off_2B07160;
          if ( v99 )
          {
            *(_QWORD *)&v100 = 0;
            qfree(v99);
          }
          if ( v97 )
          {
            *(_QWORD *)&v98 = 0;
            qfree(v97);
          }
          if ( v94 )
          {
            *(_QWORD *)&v95 = 0;
            qfree(v94);
          }
          if ( v92 )
          {
            *(_QWORD *)&v93 = 0;
            qfree(v92);
          }
          if ( v90 )
          {
            *(_QWORD *)&v91 = 0;
            qfree(v90);
          }
          if ( v88[0] )
          {
            v88[1] = nullptr;
            qfree(v88[0]);
          }
          goto LABEL_24;
        }
LABEL_56:
        v38 = *(const char **)v36;
        v32 = v76;
      }
      if ( !strcmp(v38, v32) )
        goto LABEL_91;
      v36 += 48;
      if ( v35 == v36 )
        goto LABEL_57;
      continue;
    }
  }
LABEL_17:
  ptr = nullptr;
  v86 = 0;
  v15 = *(_QWORD *)(a4 + 8);
  if ( v15 )
  {
    ptr = (void *)qalloc_or_throw(*(_QWORD *)(a4 + 8), v7);
    *((_QWORD *)&v86 + 1) = v15;
    v7 = *(const char **)a4;
    memcpy(ptr, *(const void **)a4, v15);
    *(_QWORD *)&v86 = v15;
    if ( !v73 )
      goto LABEL_19;
  }
  else if ( !v73 )
  {
LABEL_19:
    v16 = haystack;
    if ( *(_QWORD *)(a3 + 8) )
      v16 = *(const char **)a3;
    if ( (unsigned __int8)qfileexist(v16, v7) )
    {
      v63 = *(_QWORD *)(a3 + 8);
      if ( v63 >= 2 )
      {
        v64 = ptr;
        v65 = *(const char **)a3;
        if ( *((_QWORD *)&v86 + 1) < v63 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, *(_QWORD *)(a3 + 8), 1);
          v64 = ptr;
        }
        *(_QWORD *)&v86 = v63;
        memmove(v64, v65, v63 - 1);
        *((char *)ptr + v63 - 1) = 0;
      }
    }
    goto LABEL_22;
  }
  v7 = nullptr;
  *(_OWORD *)v88 = 0;
  s2 = nullptr;
  v56 = qvector_reserve(&s2, 0, 8, 1);
  s2 = (char *)v56;
  v88[0] = byte_8;
  *(_DWORD *)v56 = 1719231851;
  *(_DWORD *)(v56 + 3) = 1701603686;
  s2[7] = 0;
  v57 = s2;
  v58 = (const char **)((char *)v83 + 48 * v84);
  if ( v83 == v58 )
  {
LABEL_133:
    if ( v57 )
    {
      v88[0] = nullptr;
      qfree(v57);
    }
    goto LABEL_19;
  }
  v59 = (const char **)v83;
  destd = v88[0];
  v60 = (char *)haystack;
  if ( v88[0] )
    v60 = s2;
  v77 = v60;
  while ( 2 )
  {
    v62 = v59[1];
    if ( destd )
    {
      v61 = haystack;
      v7 = v57;
      if ( v62 )
        goto LABEL_119;
LABEL_115:
      if ( !strcmp(v61, v7) )
        goto LABEL_124;
      v59 += 6;
      if ( v58 == v59 )
        goto LABEL_133;
      continue;
    }
    break;
  }
  if ( v62 )
  {
LABEL_119:
    v61 = *v59;
    v7 = v77;
    goto LABEL_115;
  }
LABEL_124:
  if ( v57 )
  {
    v88[0] = nullptr;
    qfree(v57);
  }
  if ( !v59 )
    goto LABEL_19;
  if ( &ptr != (void **)(v59 + 3) )
  {
    v66 = (unsigned __int64)v59[4];
    if ( v66 > 1 )
    {
      v70 = ptr;
      v71 = v59[3];
      if ( *((_QWORD *)&v86 + 1) < v66 )
      {
        v70 = (void *)qvector_reserve(&ptr, ptr, v59[4], 1);
        ptr = v70;
      }
      *(_QWORD *)&v86 = v66;
      memmove(v70, v71, v66 - 1);
      *((char *)ptr + v66 - 1) = 0;
    }
  }
LABEL_22:
  v17 = *(void **)(a1 + 40);
  v18 = *(_QWORD *)(a1 + 56);
  v19 = ptr;
  *(__m128 *)(a1 + 48) = _mm_loadh_ps((const double *)&v86 + 1);
  ptr = v17;
  *(_QWORD *)(a1 + 40) = v19;
  *((_QWORD *)&v86 + 1) = v18;
  if ( v17 )
  {
    *(_QWORD *)&v86 = 0;
    qfree(v17);
  }
LABEL_24:
  v20 = (char *)v83;
  if ( v83 )
  {
    v21 = v84;
    if ( (_QWORD)v84 )
    {
      v22 = 0;
      do
      {
        v23 = &v20[48 * v22];
        v24 = *((void **)v23 + 3);
        if ( v24 )
        {
          *((_QWORD *)v23 + 4) = 0;
          qfree(v24);
        }
        v25 = *(void **)v23;
        if ( *(_QWORD *)v23 )
        {
          *((_QWORD *)v23 + 1) = 0;
          qfree(v25);
        }
        v20 = (char *)v83;
        ++v22;
      }
      while ( v21 != v22 );
    }
    *(_QWORD *)&v84 = 0;
    qfree(v20);
  }
  return 1;
}

