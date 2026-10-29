__int64 __fastcall parse_license_source_plugin_options(__int64 a1, __int64 a2, const char **a3, __int64 a4)
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
  __int64 v29; // r14
  __int64 v30; // r13
  char *v31; // r15
  char *v32; // rdi
  char *v33; // rax
  char *v34; // r13
  char *v35; // rbx
  char *v36; // r14
  char *v37; // rcx
  const char *v38; // rsi
  const char *v39; // rdi
  __int64 v40; // rax
  void *v41; // rbx
  __int16 v42; // r13
  void *v43; // rdx
  __m128i v44; // xmm0
  __m128i si128; // xmm1
  void *v46; // rax
  __int64 v47; // r15
  __int64 v48; // r13
  char *v49; // rbx
  char *v50; // rdi
  const char *v51; // rdi
  __int64 i; // rax
  char **v53; // r15
  char *v54; // rbx
  char *v55; // r13
  char *v56; // rdi
  __int64 v57; // rax
  char *v58; // r13
  const char **v59; // rbx
  const char **v60; // r15
  char *v61; // rcx
  const char *v62; // rdi
  const char *v63; // rax
  unsigned __int64 v64; // rbx
  void *v65; // rdi
  const char *v66; // r13
  unsigned __int64 v67; // rbx
  void *v68; // rax
  const void *v69; // rsi
  _BYTE *v70; // rsi
  void *v71; // rax
  const char *v72; // r13
  char v74; // [rsp+17h] [rbp-169h]
  char *v76; // [rsp+30h] [rbp-150h]
  char *v77; // [rsp+30h] [rbp-150h]
  char *v78; // [rsp+30h] [rbp-150h]
  void *dest; // [rsp+38h] [rbp-148h]
  char **desta; // [rsp+38h] [rbp-148h]
  void *destb; // [rsp+38h] [rbp-148h]
  char **destc; // [rsp+38h] [rbp-148h]
  char *destd; // [rsp+38h] [rbp-148h]
  void *deste; // [rsp+38h] [rbp-148h]
  void *v85; // [rsp+40h] [rbp-140h] BYREF
  __int128 v86; // [rsp+48h] [rbp-138h]
  void *ptr; // [rsp+60h] [rbp-120h] BYREF
  __int128 v88; // [rsp+68h] [rbp-118h] BYREF
  char *s2; // [rsp+80h] [rbp-100h] BYREF
  void *v90[3]; // [rsp+88h] [rbp-F8h] BYREF
  __int16 v91; // [rsp+A0h] [rbp-E0h]
  void *v92; // [rsp+A8h] [rbp-D8h]
  __int128 v93; // [rsp+B0h] [rbp-D0h]
  void *v94; // [rsp+C0h] [rbp-C0h]
  __int128 v95; // [rsp+C8h] [rbp-B8h]
  void *v96; // [rsp+D8h] [rbp-A8h]
  __int128 v97; // [rsp+E0h] [rbp-A0h]
  __int16 v98; // [rsp+F0h] [rbp-90h]
  void *v99; // [rsp+F8h] [rbp-88h]
  __int128 v100; // [rsp+100h] [rbp-80h]
  void *v101; // [rsp+110h] [rbp-70h]
  __int128 v102; // [rsp+118h] [rbp-68h]
  int v103; // [rsp+128h] [rbp-58h]
  _DWORD v104[1]; // [rsp+130h] [rbp-50h] BYREF
  char v105; // [rsp+134h] [rbp-4Ch] BYREF
  char v106; // [rsp+138h] [rbp-48h] BYREF
  char v107; // [rsp+13Ch] [rbp-44h] BYREF
  unsigned __int64 v108; // [rsp+148h] [rbp-38h]

  v108 = __readfsqword(0x28u);
  v6 = (unsigned __int64)a3[1] <= 1;
  v74 = 0;
  v85 = nullptr;
  v86 = 0;
  if ( !v6 )
    v74 = parse_plugin_options(&v85, *a3);
  v7 = nullptr;
  *(_OWORD *)v90 = 0;
  s2 = nullptr;
  v8 = qvector_reserve(&s2, 0, 8, 1);
  s2 = (char *)v8;
  v90[0] = byte_8;
  *(_DWORD *)v8 = 1886676339;
  *(_DWORD *)(v8 + 3) = 1717924464;
  s2[7] = 0;
  v9 = s2;
  v10 = (char *)v85 + 48 * v86;
  if ( v85 == v10 )
  {
LABEL_13:
    if ( v9 )
    {
      v90[0] = nullptr;
      qfree(v9);
    }
    goto LABEL_15;
  }
  v11 = (char *)v85;
  dest = v90[0];
  v12 = (char *)haystack;
  if ( v90[0] )
    v12 = s2;
  v76 = v12;
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
    v7 = v76;
LABEL_8:
    if ( !strcmp(v13, v7) )
      break;
    v11 += 48;
    if ( v10 == v11 )
      goto LABEL_13;
  }
  if ( v9 )
  {
    v90[0] = nullptr;
    qfree(v9);
  }
  if ( v11 )
  {
    v47 = v86;
    *(_DWORD *)(a2 + 20) &= ~1u;
    if ( v47 )
    {
      v48 = 0;
      destc = (char **)v85;
      while ( 1 )
      {
        if ( destc[1] )
        {
          v49 = *destc;
          v7 = "setpref";
          if ( !strcmp(*destc, "setpref") )
            break;
        }
        ++v48;
        destc += 6;
        if ( v48 == v47 )
          goto LABEL_15;
      }
      v50 = destc[3];
      if ( v50 )
      {
        destc[4] = nullptr;
        qfree(v50);
        v49 = *destc;
      }
      if ( v49 )
      {
        destc[1] = nullptr;
        qfree(v49);
      }
      v7 = (const char *)(destc + 6);
      memmove(destc, destc + 6, (_BYTE *)v85 + 48 * v86 - (_BYTE *)destc - 48);
      *(_QWORD *)&v86 = v86 - 1;
    }
  }
LABEL_15:
  if ( (unsigned __int64)a3[1] <= 6 )
  {
    *(_BYTE *)(a1 + 32) = 0;
    goto LABEL_17;
  }
  v7 = "server";
  v27 = strncmp(*a3, "server", 6u);
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
    v29 = v86;
    if ( (_QWORD)v86 )
    {
      v30 = 0;
      desta = (char **)v85;
      while ( 1 )
      {
        if ( desta[1] )
        {
          v31 = *desta;
          if ( !strcmp(*desta, "server") )
            break;
        }
        ++v30;
        desta += 6;
        if ( v30 == v29 )
          goto LABEL_47;
      }
      v32 = desta[3];
      if ( v32 )
      {
        desta[4] = nullptr;
        qfree(v32);
        v31 = *desta;
      }
      if ( v31 )
      {
        desta[1] = nullptr;
        qfree(v31);
      }
      memmove(desta, desta + 6, (_BYTE *)v85 + 48 * v86 - (_BYTE *)desta - 48);
      *(_QWORD *)&v86 = v86 - 1;
    }
LABEL_47:
    *(_OWORD *)v90 = 0;
    s2 = nullptr;
    v33 = (char *)qvector_reserve(&s2, 0, 4, 1);
    s2 = v33;
    v90[0] = &byte_4;
    *(_WORD *)v33 = 26988;
    v33[2] = 100;
    s2[3] = 0;
    v34 = s2;
    v35 = (char *)v85 + 48 * v86;
    if ( v85 == v35 )
    {
LABEL_57:
      if ( v34 )
      {
        v90[0] = nullptr;
        qfree(v34);
      }
      goto LABEL_59;
    }
    v36 = (char *)v85;
    destb = v90[0];
    v37 = (char *)haystack;
    if ( v90[0] )
      v37 = s2;
    v77 = v37;
    while ( 2 )
    {
      v40 = *((_QWORD *)v36 + 1);
      if ( destb )
      {
        v38 = v34;
        v39 = haystack;
        if ( v40 )
          goto LABEL_56;
      }
      else
      {
        if ( !v40 )
        {
LABEL_91:
          if ( v34 )
          {
            v90[0] = nullptr;
            qfree(v34);
          }
          if ( v36 )
          {
            v51 = haystack;
            if ( *((_QWORD *)v36 + 4) )
              v51 = *((const char **)v36 + 3);
            if ( (unsigned int)qsscanf(
                                 (_DWORD)v51,
                                 (unsigned int)"%02X-%02X%02X-%02X%02X-%02X",
                                 (unsigned int)v104,
                                 (unsigned int)&v105,
                                 (unsigned int)&v106,
                                 (unsigned int)&v107) == 6 )
            {
              for ( i = 0; i != 6; ++i )
                *(_BYTE *)(a2 + i) = v104[i];
            }
            destd = (char *)v86;
            if ( (_QWORD)v86 )
            {
              v53 = (char **)v85;
              v54 = nullptr;
              while ( 1 )
              {
                if ( v53[1] )
                {
                  v55 = *v53;
                  if ( !strcmp(*v53, "lid") )
                    break;
                }
                ++v54;
                v53 += 6;
                if ( v54 == destd )
                  goto LABEL_59;
              }
              v56 = v53[3];
              if ( v56 )
              {
                v53[4] = nullptr;
                qfree(v56);
                v55 = *v53;
              }
              if ( v55 )
              {
                v53[1] = nullptr;
                qfree(v55);
              }
              memmove(v53, v53 + 6, (_BYTE *)v85 + 48 * v86 - (_BYTE *)v53 - 48);
              *(_QWORD *)&v86 = v86 - 1;
            }
          }
LABEL_59:
          v41 = *(void **)(a1 + 8);
          v42 = *(_WORD *)(a1 + 24);
          memset(v90, 0, sizeof(v90));
          if ( v41 )
          {
            v68 = (void *)qalloc_or_throw(v41);
            v69 = *(const void **)a1;
            v90[0] = v68;
            v90[2] = v41;
            memcpy(v68, v69, (size_t)v41);
            v90[1] = v41;
          }
          v91 = v42;
          v92 = nullptr;
          v94 = nullptr;
          s2 = (char *)&off_2B31120;
          v96 = nullptr;
          v98 = 0;
          v99 = nullptr;
          v101 = nullptr;
          v103 = 0;
          v93 = 0;
          v95 = 0;
          v97 = 0;
          v100 = 0;
          v102 = 0;
          if ( (unsigned __int64)v41 <= 1 )
          {
            v70 = v90[0];
            if ( v90[2] <= byte_9 )
            {
              v90[0] = (void *)qvector_reserve(v90, v90[0], 10, 1);
              v70 = v90[0];
            }
            v90[1] = byte_9 + 1;
            *(_QWORD *)v70 = 0x736F686C61636F6CLL;
            v70[8] = 116;
            *((_BYTE *)v90[0] + 9) = 0;
            v42 = v91;
          }
          if ( !v42 )
            v91 = -102;
          if ( (unsigned __int8)sub_7C0220((__int64)&s2, (const char ***)&v85, "license") )
          {
            v43 = v90[0];
            v44 = _mm_loadu_si128((const __m128i *)(a1 + 8));
            si128 = _mm_load_si128((const __m128i *)&v90[1]);
            *(_BYTE *)(a1 + 26) = ~(_BYTE)v103;
            v46 = *(void **)a1;
            *(_BYTE *)(a1 + 26) &= 1u;
            v90[0] = v46;
            LOWORD(v46) = v91;
            *(_QWORD *)a1 = v43;
            *(_WORD *)(a1 + 24) = (_WORD)v46;
            *(__m128i *)(a1 + 8) = si128;
            *(__m128i *)&v90[1] = v44;
          }
          s2 = (char *)&off_2B31120;
          if ( v101 )
          {
            *(_QWORD *)&v102 = 0;
            qfree(v101);
          }
          if ( v99 )
          {
            *(_QWORD *)&v100 = 0;
            qfree(v99);
          }
          if ( v96 )
          {
            *(_QWORD *)&v97 = 0;
            qfree(v96);
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
          if ( v90[0] )
          {
            v90[1] = nullptr;
            qfree(v90[0]);
          }
          goto LABEL_24;
        }
LABEL_56:
        v39 = *(const char **)v36;
        v38 = v77;
      }
      if ( !strcmp(v39, v38) )
        goto LABEL_91;
      v36 += 48;
      if ( v35 == v36 )
        goto LABEL_57;
      continue;
    }
  }
LABEL_17:
  ptr = nullptr;
  v88 = 0;
  v15 = *(_QWORD *)(a4 + 8);
  if ( v15 )
  {
    ptr = (void *)qalloc_or_throw(*(_QWORD *)(a4 + 8));
    *((_QWORD *)&v88 + 1) = v15;
    v7 = *(const char **)a4;
    memcpy(ptr, *(const void **)a4, v15);
    *(_QWORD *)&v88 = v15;
    if ( !v74 )
      goto LABEL_19;
  }
  else if ( !v74 )
  {
LABEL_19:
    v16 = haystack;
    if ( a3[1] )
      v16 = *a3;
    if ( (unsigned __int8)qfileexist(v16, v7) )
    {
      v64 = (unsigned __int64)a3[1];
      if ( v64 >= 2 )
      {
        v65 = ptr;
        v66 = *a3;
        if ( *((_QWORD *)&v88 + 1) < v64 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, a3[1], 1);
          v65 = ptr;
        }
        *(_QWORD *)&v88 = v64;
        memmove(v65, v66, v64 - 1);
        *((char *)ptr + v64 - 1) = 0;
      }
    }
    goto LABEL_22;
  }
  v7 = nullptr;
  *(_OWORD *)v90 = 0;
  s2 = nullptr;
  v57 = qvector_reserve(&s2, 0, 8, 1);
  s2 = (char *)v57;
  v90[0] = byte_8;
  *(_DWORD *)v57 = 1719231851;
  *(_DWORD *)(v57 + 3) = 1701603686;
  s2[7] = 0;
  v58 = s2;
  v59 = (const char **)((char *)v85 + 48 * v86);
  if ( v85 == v59 )
  {
LABEL_133:
    if ( v58 )
    {
      v90[0] = nullptr;
      qfree(v58);
    }
    goto LABEL_19;
  }
  v60 = (const char **)v85;
  deste = v90[0];
  v61 = (char *)haystack;
  if ( v90[0] )
    v61 = s2;
  v78 = v61;
  while ( 2 )
  {
    v63 = v60[1];
    if ( deste )
    {
      v62 = haystack;
      v7 = v58;
      if ( v63 )
        goto LABEL_119;
LABEL_115:
      if ( !strcmp(v62, v7) )
        goto LABEL_124;
      v60 += 6;
      if ( v59 == v60 )
        goto LABEL_133;
      continue;
    }
    break;
  }
  if ( v63 )
  {
LABEL_119:
    v62 = *v60;
    v7 = v78;
    goto LABEL_115;
  }
LABEL_124:
  if ( v58 )
  {
    v90[0] = nullptr;
    qfree(v58);
  }
  if ( !v60 )
    goto LABEL_19;
  if ( &ptr != (void **)(v60 + 3) )
  {
    v67 = (unsigned __int64)v60[4];
    if ( v67 > 1 )
    {
      v71 = ptr;
      v72 = v60[3];
      if ( *((_QWORD *)&v88 + 1) < v67 )
      {
        v71 = (void *)qvector_reserve(&ptr, ptr, v60[4], 1);
        ptr = v71;
      }
      *(_QWORD *)&v88 = v67;
      memmove(v71, v72, v67 - 1);
      *((char *)ptr + v67 - 1) = 0;
    }
  }
LABEL_22:
  v17 = *(void **)(a1 + 40);
  v18 = *(_QWORD *)(a1 + 56);
  v19 = ptr;
  *(__m128 *)(a1 + 48) = _mm_loadh_ps((const double *)&v88 + 1);
  ptr = v17;
  *(_QWORD *)(a1 + 40) = v19;
  *((_QWORD *)&v88 + 1) = v18;
  if ( v17 )
  {
    *(_QWORD *)&v88 = 0;
    qfree(v17);
  }
LABEL_24:
  v20 = (char *)v85;
  if ( v85 )
  {
    v21 = v86;
    if ( (_QWORD)v86 )
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
        v20 = (char *)v85;
        ++v22;
      }
      while ( v21 != v22 );
    }
    *(_QWORD *)&v86 = 0;
    qfree(v20);
  }
  return 1;
}
