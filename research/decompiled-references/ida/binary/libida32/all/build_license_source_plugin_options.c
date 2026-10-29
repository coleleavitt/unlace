__int64 __fastcall build_license_source_plugin_options(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rax
  _BYTE *v8; // rax
  size_t v9; // r12
  unsigned __int64 v10; // r12
  const void *v11; // r15
  void *v12; // rdi
  int v13; // eax
  char *v14; // r15
  size_t v15; // r9
  unsigned __int64 v16; // r14
  char *v17; // rsi
  size_t v18; // rax
  __int64 v19; // rbx
  char *v20; // rbx
  char *v21; // r12
  const char *v22; // rsi
  size_t v23; // r12
  __int64 v24; // r14
  char *v25; // rbx
  void *v26; // rdi
  void *v27; // rdi
  char *v28; // rdi
  __int64 v29; // r12
  __int64 v30; // rbp
  char *v31; // rbx
  void *v32; // rdi
  void *v33; // rdi
  void *v34; // rax
  size_t v35; // r14
  size_t v36; // r14
  void *v37; // rax
  char *v38; // r12
  __int64 v39; // rsi
  _DWORD *v40; // rax
  unsigned __int64 v41; // r14
  const void *v42; // rbx
  void *v43; // rax
  unsigned __int64 v44; // [rsp+8h] [rbp-150h]
  size_t v45; // [rsp+18h] [rbp-140h]
  void *v46; // [rsp+20h] [rbp-138h] BYREF
  __int128 v47; // [rsp+28h] [rbp-130h]
  void *src; // [rsp+40h] [rbp-118h] BYREF
  size_t n[3]; // [rsp+48h] [rbp-110h]
  __int64 v50; // [rsp+60h] [rbp-F8h] BYREF
  void *dest; // [rsp+68h] [rbp-F0h] BYREF
  __int128 v52; // [rsp+70h] [rbp-E8h]
  __int16 v53; // [rsp+80h] [rbp-D8h]
  void *v54; // [rsp+88h] [rbp-D0h]
  __int128 v55; // [rsp+90h] [rbp-C8h]
  void *v56; // [rsp+A0h] [rbp-B8h]
  __int128 v57; // [rsp+A8h] [rbp-B0h]
  void *v58; // [rsp+B8h] [rbp-A0h]
  __int128 v59; // [rsp+C0h] [rbp-98h]
  __int16 v60; // [rsp+D0h] [rbp-88h]
  void *v61; // [rsp+D8h] [rbp-80h]
  __int128 v62; // [rsp+E0h] [rbp-78h]
  void *ptr; // [rsp+F0h] [rbp-68h]
  __int128 v64; // [rsp+F8h] [rbp-60h]
  int v65; // [rsp+108h] [rbp-50h]
  unsigned __int64 v66; // [rsp+118h] [rbp-40h]

  result = *(unsigned __int8 *)(a2 + 32);
  v66 = __readfsqword(0x28u);
  if ( (_BYTE)result )
  {
    if ( *(_QWORD *)(a2 + 8) <= 1u )
      return 0;
    v47 = 0;
    v46 = nullptr;
    v46 = (void *)qvector_reserve(&v46, 0, 1, 48);
    v5 = (char *)v46 + 48 * v47;
    *(_QWORD *)v5 = 0;
    *((_QWORD *)v5 + 3) = 0;
    *(_OWORD *)(v5 + 8) = 0;
    *(_QWORD *)&v47 = v47 + 1;
    v6 = *(_QWORD *)v5;
    *((_OWORD *)v5 + 2) = 0;
    v7 = qvector_reserve(v5, v6, 7, 1);
    *(_QWORD *)v5 = v7;
    *((_QWORD *)v5 + 1) = 7;
    *(_DWORD *)v7 = 1987208563;
    *(_WORD *)(v7 + 4) = 29285;
    *(_BYTE *)(*(_QWORD *)v5 + 6LL) = 0;
    src = nullptr;
    *(_OWORD *)n = 0;
    v8 = (_BYTE *)qvector_reserve(&src, 0, 1, 1);
    n[0] = 1;
    src = v8;
    *v8 = 0;
    v9 = n[0];
    dest = nullptr;
    v52 = 0;
    if ( n[0] )
    {
      dest = (void *)qalloc_or_throw(n[0], nullptr);
      *((_QWORD *)&v52 + 1) = v9;
      memcpy(dest, src, v9);
      *(_QWORD *)&v52 = v9;
    }
    v53 = 0;
    v54 = nullptr;
    v56 = nullptr;
    v50 = (__int64)&off_2B07160;
    v58 = nullptr;
    v60 = 0;
    v61 = nullptr;
    ptr = nullptr;
    v65 = 0;
    v55 = 0;
    v57 = 0;
    v59 = 0;
    v62 = 0;
    v64 = 0;
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
    v10 = *(_QWORD *)(a2 + 8);
    if ( v10 < 2 )
    {
      *(_QWORD *)&v52 = 0;
    }
    else
    {
      v11 = *(const void **)a2;
      v12 = dest;
      if ( *((_QWORD *)&v52 + 1) < v10 )
      {
        dest = (void *)qvector_reserve(&dest, dest, *(_QWORD *)(a2 + 8), 1);
        v12 = dest;
      }
      *(_QWORD *)&v52 = v10;
      memmove(v12, v11, v10 - 1);
      *((char *)dest + v10 - 1) = 0;
    }
    v53 = *(_WORD *)(a2 + 24);
    v13 = v65 & 0xFFFFFFFE;
    if ( !*(_BYTE *)(a2 + 26) )
      v13 = v65 | 1;
    v65 = v13;
    src = nullptr;
    *(_OWORD *)n = 0;
    sub_79D1E0((__int64)&v50, (__int64 *)&src);
    v14 = (char *)src;
    v15 = 48 * n[0];
    v16 = 0xAAAAAAAAAAAAAAABLL * ((signed __int64)(48 * n[0]) >> 4);
    v44 = v16;
    if ( v16 )
    {
      v17 = (char *)v46;
      v18 = 0;
      v19 = 48 * v47;
      if ( *((_QWORD *)&v47 + 1) < v16 + (unsigned __int64)v47 )
      {
        v45 = 48 * n[0];
        v46 = (void *)qvector_reserve(&v46, v46, v16 + v47, 48);
        v17 = (char *)v46;
        v15 = v45;
        v18 = 48 * v47 - v19;
      }
      v20 = &v17[v19];
      v21 = &v14[v15];
      v22 = v20;
      memmove(&v20[v15], v20, v18);
      for ( ; v21 != v14; v20 += 48 )
      {
        *(_QWORD *)v20 = 0;
        *(_OWORD *)(v20 + 8) = 0;
        v36 = *((_QWORD *)v14 + 1);
        if ( v36 )
        {
          v34 = (void *)qalloc_or_throw(*((_QWORD *)v14 + 1), v22);
          *(_QWORD *)v20 = v34;
          *((_QWORD *)v20 + 2) = v36;
          v22 = *(const char **)v14;
          memcpy(v34, *(const void **)v14, v36);
          *((_QWORD *)v20 + 1) = v36;
        }
        *((_QWORD *)v20 + 3) = 0;
        *((_OWORD *)v20 + 2) = 0;
        v35 = *((_QWORD *)v14 + 4);
        if ( v35 )
        {
          v37 = (void *)qalloc_or_throw(*((_QWORD *)v14 + 4), v22);
          *((_QWORD *)v20 + 3) = v37;
          *((_QWORD *)v20 + 5) = v35;
          v22 = *((const char **)v14 + 3);
          memcpy(v37, v22, v35);
          *((_QWORD *)v20 + 4) = v35;
        }
        v14 += 48;
      }
      *(_QWORD *)&v47 = v44 + v47;
      v14 = (char *)src;
    }
    if ( v14 )
    {
      v23 = n[0];
      if ( n[0] )
      {
        v24 = 0;
        do
        {
          v25 = &v14[48 * v24];
          v26 = *((void **)v25 + 3);
          if ( v26 )
          {
            *((_QWORD *)v25 + 4) = 0;
            qfree(v26);
          }
          v27 = *(void **)v25;
          if ( *(_QWORD *)v25 )
          {
            *((_QWORD *)v25 + 1) = 0;
            qfree(v27);
          }
          ++v24;
          v14 = (char *)src;
        }
        while ( v23 != v24 );
      }
      n[0] = 0;
      qfree(v14);
    }
    v50 = (__int64)&off_2B07160;
    if ( ptr )
    {
      *(_QWORD *)&v64 = 0;
      qfree(ptr);
    }
    if ( v61 )
    {
      *(_QWORD *)&v62 = 0;
      qfree(v61);
    }
    if ( v58 )
    {
      *(_QWORD *)&v59 = 0;
      qfree(v58);
    }
    if ( v56 )
    {
      *(_QWORD *)&v57 = 0;
      qfree(v56);
    }
    if ( v54 )
    {
      *(_QWORD *)&v55 = 0;
      qfree(v54);
    }
    if ( dest )
    {
      *(_QWORD *)&v52 = 0;
      qfree(dest);
    }
  }
  else
  {
    if ( *(_QWORD *)(a2 + 48) <= 1u )
      return result;
    v47 = 0;
    v46 = nullptr;
    v46 = (void *)qvector_reserve(&v46, 0, 1, 48);
    v38 = (char *)v46 + 48 * v47;
    *(_QWORD *)v38 = 0;
    *((_QWORD *)v38 + 3) = 0;
    *(_OWORD *)(v38 + 8) = 0;
    *(_QWORD *)&v47 = v47 + 1;
    v39 = *(_QWORD *)v38;
    *((_OWORD *)v38 + 2) = 0;
    v40 = (_DWORD *)qvector_reserve(v38, v39, 8, 1);
    *(_QWORD *)v38 = v40;
    *((_QWORD *)v38 + 1) = 8;
    *v40 = 1719231851;
    *(_DWORD *)((char *)v40 + 3) = 1701603686;
    *(_BYTE *)(*(_QWORD *)v38 + 7LL) = 0;
    v41 = *(_QWORD *)(a2 + 48);
    if ( v41 > 1 && v38 + 24 != (char *)(a2 + 40) )
    {
      v42 = *(const void **)(a2 + 40);
      v43 = *((void **)v38 + 3);
      if ( *((_QWORD *)v38 + 5) < v41 )
      {
        v43 = (void *)qvector_reserve(v38 + 24, *((_QWORD *)v38 + 3), v41, 1);
        *((_QWORD *)v38 + 3) = v43;
      }
      *((_QWORD *)v38 + 4) = v41;
      memmove(v43, v42, v41 - 1);
      *(_BYTE *)(*((_QWORD *)v38 + 3) + v41 - 1) = 0;
    }
  }
  build_plugin_options(a1, &v46, "license");
  quote_cmdline_arg(a1);
  v28 = (char *)v46;
  if ( v46 )
  {
    v29 = v47;
    if ( (_QWORD)v47 )
    {
      v30 = 0;
      do
      {
        v31 = &v28[48 * v30];
        v32 = *((void **)v31 + 3);
        if ( v32 )
        {
          *((_QWORD *)v31 + 4) = 0;
          qfree(v32);
        }
        v33 = *(void **)v31;
        if ( *(_QWORD *)v31 )
        {
          *((_QWORD *)v31 + 1) = 0;
          qfree(v33);
        }
        ++v30;
        v28 = (char *)v46;
      }
      while ( v29 != v30 );
    }
    *(_QWORD *)&v47 = 0;
    qfree(v28);
  }
  return 1;
}

