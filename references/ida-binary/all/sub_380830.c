unsigned __int64 __fastcall sub_380830(__int64 *a1)
{
  char *p_src; // rsi
  __int64 v3; // rax
  const char *v4; // rdx
  int j; // eax
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // r15
  size_t v9; // rax
  size_t v10; // r9
  __int64 v11; // rbx
  char *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  char *v16; // r9
  char *v17; // rdi
  __int64 v18; // rbx
  void *v19; // rdi
  __int64 v20; // r13
  __int64 v21; // rbx
  char *v22; // rbp
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 *v25; // rbx
  __int64 *v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rbp
  __int64 v29; // rbx
  __int64 *v30; // rax
  __int64 v31; // rdi
  void *v33; // rdi
  size_t v34; // rdx
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  char *v37; // r8
  char *v38; // r9
  void *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned __int64 i; // [rsp+0h] [rbp-5138h]
  size_t v43; // [rsp+8h] [rbp-5130h]
  size_t v44; // [rsp+8h] [rbp-5130h]
  char *v45; // [rsp+8h] [rbp-5130h]
  char *v46; // [rsp+8h] [rbp-5130h]
  char *v47; // [rsp+8h] [rbp-5130h]
  size_t v48; // [rsp+18h] [rbp-5120h]
  char *v49; // [rsp+18h] [rbp-5120h]
  char *v50; // [rsp+18h] [rbp-5120h]
  char *v51; // [rsp+20h] [rbp-5118h] BYREF
  __int128 v52; // [rsp+28h] [rbp-5110h]
  __int64 v53; // [rsp+40h] [rbp-50F8h] BYREF
  __int128 v54; // [rsp+48h] [rbp-50F0h]
  void *src; // [rsp+60h] [rbp-50D8h] BYREF
  __int128 v56; // [rsp+68h] [rbp-50D0h]
  _BYTE v57[48]; // [rsp+80h] [rbp-50B8h] BYREF
  char v58[4]; // [rsp+B0h] [rbp-5088h] BYREF
  char s[8228]; // [rsp+B4h] [rbp-5084h] BYREF
  __int64 v60; // [rsp+20D8h] [rbp-3060h]
  int v61; // [rsp+20E4h] [rbp-3054h]
  _BYTE v62[4104]; // [rsp+40F0h] [rbp-1048h] BYREF
  unsigned __int64 v63; // [rsp+50F8h] [rbp-40h]

  v63 = __readfsqword(0x28u);
  v52 = 0;
  v51 = nullptr;
  get_idasgn_desc(0, &v51, 0);
  v53 = 0;
  p_src = "sig";
  v54 = 0;
  get_ida_subdirs(&v53, "sig", 1);
  for ( i = 0; i < (unsigned __int64)v54; ++i )
  {
    v3 = v53 + 24 * i;
    v4 = &s1;
    if ( *(_QWORD *)(v3 + 8) )
      v4 = *(const char **)v3;
    qmakepath(v62, 4096, v4, "*.sig", 0);
    v60 = 0;
    v61 = 0;
    p_src = v58;
    for ( j = qfindfirst(v62, v58, 0); !j; j = qfindnext(v58) )
    {
      src = nullptr;
      p_src = (char *)&src;
      v56 = 0;
      if ( (unsigned __int8)get_idasgn_header_by_short_name(v57, &src, s) && (v57[16] & 1) == 0 )
      {
        v6 = a1[25];
        v7 = a1[24];
        if ( a1[26] < (unsigned __int64)(v6 + 1) )
        {
          v35 = qvector_reserve(a1 + 24, v7, v6 + 1, 56);
          a1[24] = v35;
          v6 = a1[25];
          v7 = v35;
        }
        v8 = v7 + 56 * v6;
        *(_QWORD *)v8 = 0;
        *(_QWORD *)(v8 + 24) = 0;
        *(_OWORD *)(v8 + 8) = 0;
        *(_OWORD *)(v8 + 32) = 0;
        ++a1[25];
        v9 = strlen(s);
        v10 = v9;
        if ( v9 )
        {
          v33 = *(void **)v8;
          v34 = v9 + 1;
          if ( *(_QWORD *)(v8 + 16) < v9 + 1 )
          {
            v48 = v9;
            v44 = v9 + 1;
            v40 = qvector_reserve(v8, *(_QWORD *)v8, v34, 1);
            v10 = v48;
            v34 = v44;
            *(_QWORD *)v8 = v40;
            v33 = (void *)v40;
          }
          *(_QWORD *)(v8 + 8) = v34;
          v43 = v10;
          memmove(v33, s, v10);
          *(_BYTE *)(*(_QWORD *)v8 + v43) = 0;
        }
        else
        {
          *(_QWORD *)(v8 + 8) = 0;
        }
        v11 = *(_QWORD *)v8;
        v12 = strrchr(*(const char **)v8, 46);
        if ( v12 )
        {
          v16 = &v12[-v11];
          if ( v12 == (char *)v11 )
          {
            if ( v11 )
            {
              *(_QWORD *)(v8 + 8) = 0;
              qfree(v11, (_BYTE *)&qword_28 + 6, v13, v14, v15, v16);
              *(_QWORD *)v8 = 0;
              *(_QWORD *)(v8 + 16) = 0;
            }
          }
          else
          {
            v36 = *(_QWORD *)(v8 + 8);
            v37 = v16 + 1;
            if ( v36 < (unsigned __int64)(v16 + 1) )
            {
              if ( *(_QWORD *)(v8 + 16) < (unsigned __int64)v37 )
              {
                v50 = &v12[-v11];
                v47 = v16 + 1;
                v41 = qvector_reserve(v8, v11, v16 + 1, 1);
                v36 = *(_QWORD *)(v8 + 8);
                v16 = v50;
                *(_QWORD *)v8 = v41;
                v11 = v41;
                v37 = v47;
              }
              v45 = v37;
              v49 = v16;
              memset((void *)(v11 + v36), 0, (size_t)&v37[-v36]);
              v12 = &v49[*(_QWORD *)v8];
              *(_QWORD *)(v8 + 8) = v45;
            }
            else if ( v37 != (char *)v36 )
            {
              *(_QWORD *)(v8 + 8) = v37;
            }
            *v12 = 0;
          }
        }
        p_src = (char *)&s1;
        if ( (_QWORD)v52 )
          p_src = v51;
        v17 = (char *)&s1;
        if ( *(_QWORD *)(v8 + 8) )
          v17 = *(char **)v8;
        *(_DWORD *)(v8 + 48) = (unsigned __int8)sub_37F290(v17, p_src);
        if ( (void **)(v8 + 24) != &src )
        {
          v18 = v56;
          if ( (unsigned __int64)v56 > 1 )
          {
            v38 = (char *)src;
            v39 = *(void **)(v8 + 24);
            if ( *(_QWORD *)(v8 + 40) < (unsigned __int64)v56 )
            {
              v46 = (char *)src;
              v39 = (void *)qvector_reserve(v8 + 24, *(_QWORD *)(v8 + 24), v56, 1);
              *(_QWORD *)(v8 + 24) = v39;
              v38 = v46;
            }
            *(_QWORD *)(v8 + 32) = v18;
            p_src = v38;
            memmove(v39, v38, v18 - 1);
            *(_BYTE *)(*(_QWORD *)(v8 + 24) + v18 - 1) = 0;
          }
          else
          {
            *(_QWORD *)(v8 + 32) = 0;
          }
        }
        v19 = src;
        if ( src )
        {
LABEL_21:
          *(_QWORD *)&v56 = 0;
          qfree(v19, p_src);
          continue;
        }
      }
      else
      {
        v19 = src;
        if ( src )
          goto LABEL_21;
      }
    }
    qfindclose(v58);
  }
  v20 = a1[24];
  v21 = 56 * a1[25];
  v22 = (char *)(v20 + v21);
  if ( v20 != v20 + v21 )
  {
    v23 = 0x6DB6DB6DB6DB6DB7LL * (v21 >> 3);
    if ( v23 )
    {
      _BitScanReverse64(&v24, v23);
      sub_37FCA0(a1[24], v22, 2LL * (int)v24);
      if ( v21 > 896 )
      {
        v25 = (__int64 *)(v20 + 896);
        p_src = (char *)(v20 + 896);
        sub_37E840(v20, v20 + 896);
        do
        {
          v26 = v25;
          v25 += 7;
          sub_37E6A0(v26, p_src);
        }
        while ( v22 != (char *)v25 );
        goto LABEL_34;
      }
    }
    else
    {
      sub_37FCA0(a1[24], v22, -2);
    }
    p_src = (char *)(v20 + v21);
    sub_37E840(v20, (__int64)v22);
  }
LABEL_34:
  v27 = v53;
  if ( v53 )
  {
    v28 = v54;
    if ( (_QWORD)v54 )
    {
      v29 = 0;
      do
      {
        v30 = (__int64 *)(v27 + 24 * v29);
        v31 = *v30;
        if ( *v30 )
        {
          v30[1] = 0;
          qfree(v31, p_src);
          v27 = v53;
        }
        ++v29;
      }
      while ( v28 != v29 );
    }
    *(_QWORD *)&v54 = 0;
    qfree(v27, p_src);
  }
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v51, p_src);
  }
  return v63 - __readfsqword(0x28u);
}
