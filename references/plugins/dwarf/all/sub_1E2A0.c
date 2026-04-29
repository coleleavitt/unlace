unsigned __int64 __fastcall sub_1E2A0(__int64 a1)
{
  const char *plugin_options; // rax
  const char *v4; // rbp
  size_t v5; // rax
  size_t v6; // r13
  size_t v7; // r12
  void *v8; // rdi
  const char *i; // rax
  char *v10; // rbp
  const char *v11; // rbp
  size_t v12; // rax
  size_t v13; // r15
  size_t v14; // r12
  char *v15; // rax
  char *v16; // r12
  const char *v17; // r12
  size_t v18; // rbp
  const char *j; // r12
  unsigned int v20; // r12d
  unsigned int v21; // eax
  __int64 v22; // rdx
  unsigned int *v23; // rsi
  unsigned int *v24; // rcx
  unsigned int *v25; // rax
  unsigned __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int16 v30; // dx
  __int16 v31; // ax
  int v32; // eax
  __int64 v33; // rax
  __m128i *v34; // rdi
  __int64 v35; // r12
  char *v36; // rbp
  unsigned __int64 v37; // rdx
  char *v38; // rdi
  char *v39; // r12
  unsigned int v40; // ecx
  unsigned int v41; // edx
  char *v42; // rax
  char *v43; // rsi
  char *src; // [rsp+8h] [rbp-C0h]
  char *srca; // [rsp+8h] [rbp-C0h]
  int v46; // [rsp+18h] [rbp-B0h] BYREF
  unsigned int v47; // [rsp+1Ch] [rbp-ACh] BYREF
  char v48[8]; // [rsp+20h] [rbp-A8h] BYREF
  char v49[8]; // [rsp+28h] [rbp-A0h] BYREF
  void *v50; // [rsp+30h] [rbp-98h] BYREF
  __int128 v51; // [rsp+38h] [rbp-90h]
  char *s1; // [rsp+50h] [rbp-78h] BYREF
  __int128 v53; // [rsp+58h] [rbp-70h]
  void *v54; // [rsp+70h] [rbp-58h] BYREF
  __int128 v55; // [rsp+78h] [rbp-50h]
  unsigned __int64 v56; // [rsp+88h] [rbp-40h]

  v56 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 2796) )
    return v56 - __readfsqword(0x28u);
  read_config2("dwarf", 1, &off_C7660, 14, 0, 0, 0, a1 + 296);
  plugin_options = (const char *)get_plugin_options("dwarf");
  v50 = nullptr;
  v4 = plugin_options;
  v51 = 0;
  if ( !plugin_options )
  {
    *(_BYTE *)(a1 + 2796) = 1;
    return v56 - __readfsqword(0x28u);
  }
  v5 = strlen(plugin_options);
  v6 = v5 + 1;
  v7 = v5;
  v50 = (void *)qvector_reserve(&v50, 0, v5 + 1, 1);
  *(_QWORD *)&v51 = v6;
  memmove(v50, v4, v7);
  *((_BYTE *)v50 + v7) = 0;
  v8 = v50;
  if ( (unsigned __int64)v51 > 1 )
  {
    for ( i = (const char *)qstrtok(v50, ";", v48); ; i = (const char *)qstrtok(0, ";", v48) )
    {
      v11 = i;
      if ( !i )
      {
        v8 = v50;
        break;
      }
      s1 = nullptr;
      v53 = 0;
      v12 = strlen(i);
      v13 = v12 + 1;
      v14 = v12;
      s1 = (char *)qvector_reserve(&s1, 0, v12 + 1, 1);
      *(_QWORD *)&v53 = v13;
      memmove(s1, v11, v14);
      s1[v14] = 0;
      v15 = strchr(v11, 61);
      v16 = v15;
      if ( !v15 )
      {
        if ( !(_QWORD)v53 )
          goto LABEL_22;
        v10 = s1;
        if ( strcmp(s1, "off") )
          goto LABEL_10;
        *(_WORD *)(a1 + 298) &= ~8u;
        goto LABEL_12;
      }
      *v15 = 0;
      if ( strcmp(v11, "cu_dies") )
      {
        if ( strcmp(v11, "import_lnnums") )
        {
          if ( !(_QWORD)v53 )
            goto LABEL_22;
          goto LABEL_9;
        }
        if ( (unsigned int)qsscanf(v16 + 1, "%u", &v54) != 1 )
          goto LABEL_21;
        v30 = *(_WORD *)(a1 + 296);
        v31 = v30 & 0xFF7F;
        if ( (_DWORD)v54 )
        {
          HIBYTE(v31) = HIBYTE(v30);
          LOBYTE(v31) = v30 | 0x80;
        }
        *(_WORD *)(a1 + 296) = v31;
        v10 = s1;
        goto LABEL_12;
      }
      v17 = v16 + 1;
      v54 = nullptr;
      v55 = 0;
      v18 = strlen(v17);
      v54 = (void *)qvector_reserve(&v54, 0, v18 + 1, 1);
      *(_QWORD *)&v55 = v18 + 1;
      memmove(v54, v17, v18);
      *((_BYTE *)v54 + v18) = 0;
      for ( j = (const char *)qstrtok(v54, ",", v49); ; j = (const char *)qstrtok(0, ",", v49) )
      {
        if ( !j )
        {
          v33 = *(_QWORD *)(a1 + 312);
          v34 = *(__m128i **)(a1 + 304);
          v35 = 4 * v33;
          v36 = &v34->m128i_i8[4 * v33];
          if ( v34 == (__m128i *)v36 )
            goto LABEL_57;
          if ( v35 >> 2 )
          {
            _BitScanReverse64(&v37, v35 >> 2);
            src = *(char **)(a1 + 304);
            sub_14020(v34, (unsigned int *)v34 + v33, 2LL * (int)v37);
            v38 = src;
            if ( v35 > 64 )
            {
              v39 = src + 64;
              sub_13840(src, src + 64);
              do
              {
                v40 = *(_DWORD *)v39;
                v41 = *((_DWORD *)v39 - 1);
                v42 = v39 - 4;
                if ( *(_DWORD *)v39 >= v41 )
                {
                  v43 = v39;
                }
                else
                {
                  do
                  {
                    *((_DWORD *)v42 + 1) = v41;
                    v43 = v42;
                    v41 = *((_DWORD *)v42 - 1);
                    v42 -= 4;
                  }
                  while ( v40 < v41 );
                }
                v39 += 4;
                *(_DWORD *)v43 = v40;
              }
              while ( v36 != v39 );
LABEL_57:
              if ( v54 )
              {
                *(_QWORD *)&v55 = 0;
                qfree(v54);
              }
              goto LABEL_11;
            }
          }
          else
          {
            srca = *(char **)(a1 + 304);
            sub_14020(v34, (unsigned int *)v34 + v33, -2);
            v38 = srca;
          }
          sub_13840(v38, v36);
          goto LABEL_57;
        }
        v46 = -1;
        v47 = -1;
        if ( strstr(j, "..") )
        {
          qsscanf(j, "%u..%u", &v46, &v47);
          v20 = v46;
          v21 = v47;
          goto LABEL_31;
        }
        v32 = qsscanf(j, "%u", &v46);
        v20 = v46;
        if ( v32 == 1 )
          break;
        v21 = v47;
LABEL_31:
        if ( v21 >= v20 )
          goto LABEL_32;
LABEL_43:
        ;
      }
      v47 = v46;
LABEL_32:
      v22 = *(_QWORD *)(a1 + 312);
      while ( 1 )
      {
        v23 = *(unsigned int **)(a1 + 304);
        v24 = &v23[v22];
        if ( v23 != v24 )
        {
          v25 = *(unsigned int **)(a1 + 304);
          while ( *v25 != v20 )
          {
            if ( v24 == ++v25 )
              goto LABEL_40;
          }
          if ( v24 != v25 )
            break;
        }
LABEL_40:
        v26 = v22 + 1;
        if ( *(_QWORD *)(a1 + 320) < v26 )
        {
          v28 = qvector_reserve(a1 + 304, v23, v26, 4);
          v29 = *(_QWORD *)(a1 + 312);
          *(_QWORD *)(a1 + 304) = v28;
          v24 = (unsigned int *)(v28 + 4 * v29);
        }
        *v24 = v20;
        v22 = *(_QWORD *)(a1 + 312) + 1LL;
        v27 = v46;
        *(_QWORD *)(a1 + 312) = v22;
        v20 = v27 + 1;
        v46 = v27 + 1;
        if ( v47 < v27 + 1 )
          goto LABEL_43;
      }
      if ( v54 )
      {
        *(_QWORD *)&v55 = 0;
        qfree(v54);
      }
LABEL_21:
      if ( !(_QWORD)v53 )
      {
LABEL_22:
        v10 = (char *)::src;
        goto LABEL_10;
      }
LABEL_9:
      v10 = s1;
LABEL_10:
      sub_1E060((__int64)"Invalid/malformed command-line option: \"%s\".", v10);
LABEL_11:
      v10 = s1;
LABEL_12:
      if ( v10 )
      {
        *(_QWORD *)&v53 = 0;
        qfree(v10);
      }
    }
  }
  *(_BYTE *)(a1 + 2796) = 1;
  if ( v8 )
  {
    *(_QWORD *)&v51 = 0;
    qfree(v8);
  }
  return v56 - __readfsqword(0x28u);
}
