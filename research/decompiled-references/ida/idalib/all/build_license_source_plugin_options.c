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
  size_t v22; // r12
  __int64 v23; // r14
  char *v24; // rbx
  void *v25; // rdi
  void *v26; // rdi
  char *v27; // rdi
  __int64 v28; // r12
  __int64 v29; // rbp
  char *v30; // rbx
  void *v31; // rdi
  void *v32; // rdi
  void *v33; // rax
  size_t v34; // r14
  size_t v35; // r14
  void *v36; // rax
  char *v37; // r12
  __int64 v38; // rsi
  _DWORD *v39; // rax
  unsigned __int64 v40; // r14
  const void *v41; // rbx
  void *v42; // rax
  unsigned __int64 v43; // [rsp+8h] [rbp-150h]
  size_t v44; // [rsp+18h] [rbp-140h]
  void *v45; // [rsp+20h] [rbp-138h] BYREF
  __int128 v46; // [rsp+28h] [rbp-130h]
  void *src; // [rsp+40h] [rbp-118h] BYREF
  size_t n[3]; // [rsp+48h] [rbp-110h]
  __int64 v49; // [rsp+60h] [rbp-F8h] BYREF
  void *dest; // [rsp+68h] [rbp-F0h] BYREF
  __int128 v51; // [rsp+70h] [rbp-E8h]
  __int16 v52; // [rsp+80h] [rbp-D8h]
  void *v53; // [rsp+88h] [rbp-D0h]
  __int128 v54; // [rsp+90h] [rbp-C8h]
  void *v55; // [rsp+A0h] [rbp-B8h]
  __int128 v56; // [rsp+A8h] [rbp-B0h]
  void *v57; // [rsp+B8h] [rbp-A0h]
  __int128 v58; // [rsp+C0h] [rbp-98h]
  __int16 v59; // [rsp+D0h] [rbp-88h]
  void *v60; // [rsp+D8h] [rbp-80h]
  __int128 v61; // [rsp+E0h] [rbp-78h]
  void *ptr; // [rsp+F0h] [rbp-68h]
  __int128 v63; // [rsp+F8h] [rbp-60h]
  int v64; // [rsp+108h] [rbp-50h]
  unsigned __int64 v65; // [rsp+118h] [rbp-40h]

  result = *(unsigned __int8 *)(a2 + 32);
  v65 = __readfsqword(0x28u);
  if ( (_BYTE)result )
  {
    if ( *(_QWORD *)(a2 + 8) <= 1u )
      return 0;
    v46 = 0;
    v45 = nullptr;
    v45 = (void *)qvector_reserve(&v45, 0, 1, 48);
    v5 = (char *)v45 + 48 * v46;
    *(_QWORD *)v5 = 0;
    *((_QWORD *)v5 + 3) = 0;
    *(_OWORD *)(v5 + 8) = 0;
    *(_QWORD *)&v46 = v46 + 1;
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
    v51 = 0;
    if ( n[0] )
    {
      dest = (void *)qalloc_or_throw(n[0]);
      *((_QWORD *)&v51 + 1) = v9;
      memcpy(dest, src, v9);
      *(_QWORD *)&v51 = v9;
    }
    v52 = 0;
    v53 = nullptr;
    v55 = nullptr;
    v49 = (__int64)&off_2B31120;
    v57 = nullptr;
    v59 = 0;
    v60 = nullptr;
    ptr = nullptr;
    v64 = 0;
    v54 = 0;
    v56 = 0;
    v58 = 0;
    v61 = 0;
    v63 = 0;
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
    v10 = *(_QWORD *)(a2 + 8);
    if ( v10 < 2 )
    {
      *(_QWORD *)&v51 = 0;
    }
    else
    {
      v11 = *(const void **)a2;
      v12 = dest;
      if ( *((_QWORD *)&v51 + 1) < v10 )
      {
        dest = (void *)qvector_reserve(&dest, dest, *(_QWORD *)(a2 + 8), 1);
        v12 = dest;
      }
      *(_QWORD *)&v51 = v10;
      memmove(v12, v11, v10 - 1);
      *((char *)dest + v10 - 1) = 0;
    }
    v52 = *(_WORD *)(a2 + 24);
    v13 = v64 & 0xFFFFFFFE;
    if ( !*(_BYTE *)(a2 + 26) )
      v13 = v64 | 1;
    v64 = v13;
    src = nullptr;
    *(_OWORD *)n = 0;
    sub_7C0630((__int64)&v49, (__int64 *)&src);
    v14 = (char *)src;
    v15 = 48 * n[0];
    v16 = 0xAAAAAAAAAAAAAAABLL * ((signed __int64)(48 * n[0]) >> 4);
    v43 = v16;
    if ( v16 )
    {
      v17 = (char *)v45;
      v18 = 0;
      v19 = 48 * v46;
      if ( *((_QWORD *)&v46 + 1) < v16 + (unsigned __int64)v46 )
      {
        v44 = 48 * n[0];
        v45 = (void *)qvector_reserve(&v45, v45, v16 + v46, 48);
        v17 = (char *)v45;
        v15 = v44;
        v18 = 48 * v46 - v19;
      }
      v20 = &v17[v19];
      v21 = &v14[v15];
      memmove(&v20[v15], v20, v18);
      for ( ; v21 != v14; v20 += 48 )
      {
        *(_QWORD *)v20 = 0;
        *(_OWORD *)(v20 + 8) = 0;
        v35 = *((_QWORD *)v14 + 1);
        if ( v35 )
        {
          v33 = (void *)qalloc_or_throw(*((_QWORD *)v14 + 1));
          *(_QWORD *)v20 = v33;
          *((_QWORD *)v20 + 2) = v35;
          memcpy(v33, *(const void **)v14, v35);
          *((_QWORD *)v20 + 1) = v35;
        }
        *((_QWORD *)v20 + 3) = 0;
        *((_OWORD *)v20 + 2) = 0;
        v34 = *((_QWORD *)v14 + 4);
        if ( v34 )
        {
          v36 = (void *)qalloc_or_throw(*((_QWORD *)v14 + 4));
          *((_QWORD *)v20 + 3) = v36;
          *((_QWORD *)v20 + 5) = v34;
          memcpy(v36, *((const void **)v14 + 3), v34);
          *((_QWORD *)v20 + 4) = v34;
        }
        v14 += 48;
      }
      *(_QWORD *)&v46 = v43 + v46;
      v14 = (char *)src;
    }
    if ( v14 )
    {
      v22 = n[0];
      if ( n[0] )
      {
        v23 = 0;
        do
        {
          v24 = &v14[48 * v23];
          v25 = *((void **)v24 + 3);
          if ( v25 )
          {
            *((_QWORD *)v24 + 4) = 0;
            qfree(v25);
          }
          v26 = *(void **)v24;
          if ( *(_QWORD *)v24 )
          {
            *((_QWORD *)v24 + 1) = 0;
            qfree(v26);
          }
          ++v23;
          v14 = (char *)src;
        }
        while ( v22 != v23 );
      }
      n[0] = 0;
      qfree(v14);
    }
    v49 = (__int64)&off_2B31120;
    if ( ptr )
    {
      *(_QWORD *)&v63 = 0;
      qfree(ptr);
    }
    if ( v60 )
    {
      *(_QWORD *)&v61 = 0;
      qfree(v60);
    }
    if ( v57 )
    {
      *(_QWORD *)&v58 = 0;
      qfree(v57);
    }
    if ( v55 )
    {
      *(_QWORD *)&v56 = 0;
      qfree(v55);
    }
    if ( v53 )
    {
      *(_QWORD *)&v54 = 0;
      qfree(v53);
    }
    if ( dest )
    {
      *(_QWORD *)&v51 = 0;
      qfree(dest);
    }
  }
  else
  {
    if ( *(_QWORD *)(a2 + 48) <= 1u )
      return result;
    v46 = 0;
    v45 = nullptr;
    v45 = (void *)qvector_reserve(&v45, 0, 1, 48);
    v37 = (char *)v45 + 48 * v46;
    *(_QWORD *)v37 = 0;
    *((_QWORD *)v37 + 3) = 0;
    *(_OWORD *)(v37 + 8) = 0;
    *(_QWORD *)&v46 = v46 + 1;
    v38 = *(_QWORD *)v37;
    *((_OWORD *)v37 + 2) = 0;
    v39 = (_DWORD *)qvector_reserve(v37, v38, 8, 1);
    *(_QWORD *)v37 = v39;
    *((_QWORD *)v37 + 1) = 8;
    *v39 = 1719231851;
    *(_DWORD *)((char *)v39 + 3) = 1701603686;
    *(_BYTE *)(*(_QWORD *)v37 + 7LL) = 0;
    v40 = *(_QWORD *)(a2 + 48);
    if ( v40 > 1 && v37 + 24 != (char *)(a2 + 40) )
    {
      v41 = *(const void **)(a2 + 40);
      v42 = *((void **)v37 + 3);
      if ( *((_QWORD *)v37 + 5) < v40 )
      {
        v42 = (void *)qvector_reserve(v37 + 24, *((_QWORD *)v37 + 3), v40, 1);
        *((_QWORD *)v37 + 3) = v42;
      }
      *((_QWORD *)v37 + 4) = v40;
      memmove(v42, v41, v40 - 1);
      *(_BYTE *)(*((_QWORD *)v37 + 3) + v40 - 1) = 0;
    }
  }
  build_plugin_options(a1, (__int64 *)&v45, (__int64)"license");
  quote_cmdline_arg(a1, (const char *)&v45);
  v27 = (char *)v45;
  if ( v45 )
  {
    v28 = v46;
    if ( (_QWORD)v46 )
    {
      v29 = 0;
      do
      {
        v30 = &v27[48 * v29];
        v31 = *((void **)v30 + 3);
        if ( v31 )
        {
          *((_QWORD *)v30 + 4) = 0;
          qfree(v31);
        }
        v32 = *(void **)v30;
        if ( *(_QWORD *)v30 )
        {
          *((_QWORD *)v30 + 1) = 0;
          qfree(v32);
        }
        ++v29;
        v27 = (char *)v45;
      }
      while ( v28 != v29 );
    }
    *(_QWORD *)&v46 = 0;
    qfree(v27);
  }
  return 1;
}
