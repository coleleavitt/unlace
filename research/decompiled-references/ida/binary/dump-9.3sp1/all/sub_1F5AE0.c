unsigned __int64 __fastcall sub_1F5AE0(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  __int64 v7; // r14
  size_t v8; // r15
  __int64 *v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  size_t v14; // r15
  void *v15; // rax
  unsigned __int64 v16; // r15
  __int64 v17; // r14
  _QWORD *v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  size_t v25; // rbp
  size_t v26; // rbp
  void *v27; // rax
  void *v28; // rsi
  void *v29; // rax
  __int64 v30; // [rsp+10h] [rbp-118h] BYREF
  __m128i si128; // [rsp+18h] [rbp-110h]
  __int64 v32; // [rsp+28h] [rbp-100h]
  void *src; // [rsp+30h] [rbp-F8h]
  size_t n[2]; // [rsp+38h] [rbp-F0h]
  void *v35; // [rsp+48h] [rbp-E0h]
  size_t v36[2]; // [rsp+50h] [rbp-D8h]
  __int64 v37; // [rsp+60h] [rbp-C8h]
  unsigned __int64 v38; // [rsp+68h] [rbp-C0h]
  __int64 v39; // [rsp+70h] [rbp-B8h]
  int v40[4]; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+90h] [rbp-98h]
  int v42; // [rsp+98h] [rbp-90h]
  __int64 v43; // [rsp+A0h] [rbp-88h]
  __int128 v44; // [rsp+A8h] [rbp-80h]
  void *v45; // [rsp+B8h] [rbp-70h]
  __int128 v46; // [rsp+C0h] [rbp-68h]
  __int64 v47; // [rsp+D0h] [rbp-58h]
  unsigned __int64 v48; // [rsp+D8h] [rbp-50h]
  __int64 v49; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v50; // [rsp+E8h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 == a2 )
    return v50 - __readfsqword(0x28u);
  v30 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
  v32 = 1;
  src = nullptr;
  v35 = nullptr;
  v37 = 0;
  v38 = 0xFFFFFFFF00000000LL;
  v39 = 0;
  *(_OWORD *)n = 0;
  *(_OWORD *)v36 = 0;
  if ( a2 < v2 )
  {
    v16 = a2;
    v17 = 104 * a2;
    do
    {
      v18 = (_QWORD *)(v17 + *a1);
      clear_tinfo_t();
      v19 = v18[7];
      if ( v19 )
      {
        v18[8] = 0;
        qfree(v19);
      }
      v20 = v18[4];
      if ( v20 )
      {
        v18[5] = 0;
        qfree(v20);
      }
      ++v16;
      v17 += 104;
      cleanup_argloc();
    }
    while ( v2 != v16 );
  }
  else
  {
    v5 = *a1;
    v6 = a1[2];
    if ( (unsigned __int64)&v30 >= *a1 && (unsigned __int64)&v30 < v5 + 104 * v6 )
    {
      v22 = &v30;
      v40[0] = 0;
      copy_argloc();
      v25 = n[0];
      v43 = 0;
      v44 = 0;
      v41 = si128.m128i_i64[1];
      v42 = v32;
      if ( n[0] )
      {
        v29 = (void *)qalloc_or_throw(n[0], (__int64)&v30, v23, v24);
        v22 = (__int64 *)src;
        v43 = (__int64)v29;
        *((_QWORD *)&v44 + 1) = v25;
        memcpy(v29, src, v25);
        *(_QWORD *)&v44 = v25;
      }
      v26 = v36[0];
      v45 = nullptr;
      v46 = 0;
      if ( v36[0] )
      {
        v45 = (void *)qalloc_or_throw(v36[0], (__int64)v22, v23, v24);
        *((_QWORD *)&v46 + 1) = v26;
        memcpy(v45, v35, v26);
        *(_QWORD *)&v46 = v26;
      }
      v47 = 0;
      copy_tinfo_t();
      v48 = v38;
      v49 = v39;
      sub_88870(a1, a2, (__int64)v40);
      clear_tinfo_t();
      if ( v45 )
      {
        *(_QWORD *)&v46 = 0;
        qfree((__int64)v45);
      }
      if ( v43 )
      {
        *(_QWORD *)&v44 = 0;
        qfree(v43);
      }
      cleanup_argloc();
      goto LABEL_20;
    }
    if ( v6 < a2 )
    {
      *a1 = qvector_reserve((__int64)a1, v5, a2, 104);
      v2 = a1[1];
    }
    if ( v2 < a2 )
    {
      v7 = 104 * v2;
      do
      {
        v9 = &v30;
        v10 = v7 + *a1;
        *(_DWORD *)v10 = 0;
        copy_argloc();
        v13 = si128.m128i_i64[1];
        *(_QWORD *)(v10 + 32) = 0;
        *(_OWORD *)(v10 + 40) = 0;
        *(_QWORD *)(v10 + 16) = v13;
        *(_DWORD *)(v10 + 24) = v32;
        v14 = n[0];
        if ( n[0] )
        {
          v15 = (void *)qalloc_or_throw(n[0], (__int64)&v30, v11, v12);
          *(_QWORD *)(v10 + 32) = v15;
          v9 = (__int64 *)src;
          *(_QWORD *)(v10 + 48) = v14;
          memcpy(v15, v9, v14);
          *(_QWORD *)(v10 + 40) = v14;
        }
        *(_QWORD *)(v10 + 56) = 0;
        *(_OWORD *)(v10 + 64) = 0;
        v8 = v36[0];
        if ( v36[0] )
        {
          v27 = (void *)qalloc_or_throw(v36[0], (__int64)v9, v11, v12);
          *(_QWORD *)(v10 + 56) = v27;
          v28 = v35;
          *(_QWORD *)(v10 + 72) = v8;
          memcpy(v27, v28, v8);
          *(_QWORD *)(v10 + 64) = v8;
        }
        *(_QWORD *)(v10 + 80) = 0;
        copy_tinfo_t();
        ++v2;
        v7 += 104;
        *(_QWORD *)(v10 + 88) = v38;
        *(_QWORD *)(v10 + 96) = v39;
      }
      while ( v2 < a2 );
    }
  }
  a1[1] = a2;
LABEL_20:
  clear_tinfo_t();
  if ( v35 )
  {
    v36[0] = 0;
    qfree((__int64)v35);
  }
  if ( src )
  {
    n[0] = 0;
    qfree((__int64)src);
  }
  cleanup_argloc();
  return v50 - __readfsqword(0x28u);
}
