unsigned __int64 __fastcall sub_1F5AE0(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  __int64 v7; // r14
  size_t v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rax
  size_t v11; // r15
  void *v12; // rax
  void *v13; // rsi
  unsigned __int64 v14; // r15
  __int64 v15; // r14
  _QWORD *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rdi
  size_t v20; // rbp
  size_t v21; // rbp
  void *v22; // rax
  void *v23; // rsi
  __int64 v24; // [rsp+10h] [rbp-118h] BYREF
  __m128i si128; // [rsp+18h] [rbp-110h]
  __int64 v26; // [rsp+28h] [rbp-100h]
  void *src; // [rsp+30h] [rbp-F8h]
  size_t n[2]; // [rsp+38h] [rbp-F0h]
  void *v29; // [rsp+48h] [rbp-E0h]
  size_t v30[2]; // [rsp+50h] [rbp-D8h]
  __int64 v31; // [rsp+60h] [rbp-C8h] BYREF
  unsigned __int64 v32; // [rsp+68h] [rbp-C0h]
  __int64 v33; // [rsp+70h] [rbp-B8h]
  _DWORD v34[4]; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+90h] [rbp-98h]
  int v36; // [rsp+98h] [rbp-90h]
  void *v37; // [rsp+A0h] [rbp-88h]
  __int128 v38; // [rsp+A8h] [rbp-80h]
  void *v39; // [rsp+B8h] [rbp-70h]
  __int128 v40; // [rsp+C0h] [rbp-68h]
  _QWORD v41[3]; // [rsp+D0h] [rbp-58h] BYREF
  unsigned __int64 v42; // [rsp+E8h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 == a2 )
    return v42 - __readfsqword(0x28u);
  v24 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
  v26 = 1;
  src = nullptr;
  v29 = nullptr;
  v31 = 0;
  v32 = 0xFFFFFFFF00000000LL;
  v33 = 0;
  *(_OWORD *)n = 0;
  *(_OWORD *)v30 = 0;
  if ( a2 < v2 )
  {
    v14 = a2;
    v15 = 104 * a2;
    do
    {
      v16 = (_QWORD *)(v15 + *a1);
      clear_tinfo_t(v16 + 10);
      v17 = v16[7];
      if ( v17 )
      {
        v16[8] = 0;
        qfree(v17);
      }
      v18 = v16[4];
      if ( v18 )
      {
        v16[5] = 0;
        qfree(v18);
      }
      ++v14;
      v15 += 104;
      cleanup_argloc(v16);
    }
    while ( v2 != v14 );
  }
  else
  {
    v5 = *a1;
    v6 = a1[2];
    if ( (unsigned __int64)&v24 >= *a1 && (unsigned __int64)&v24 < v5 + 104 * v6 )
    {
      v34[0] = 0;
      copy_argloc(v34, &v24);
      v20 = n[0];
      v37 = nullptr;
      v38 = 0;
      v35 = si128.m128i_i64[1];
      v36 = v26;
      if ( n[0] )
      {
        v37 = (void *)qalloc_or_throw(n[0]);
        *((_QWORD *)&v38 + 1) = v20;
        memcpy(v37, src, v20);
        *(_QWORD *)&v38 = v20;
      }
      v21 = v30[0];
      v39 = nullptr;
      v40 = 0;
      if ( v30[0] )
      {
        v39 = (void *)qalloc_or_throw(v30[0]);
        *((_QWORD *)&v40 + 1) = v21;
        memcpy(v39, v29, v21);
        *(_QWORD *)&v40 = v21;
      }
      v41[0] = 0;
      copy_tinfo_t(v41, &v31);
      v41[1] = v32;
      v41[2] = v33;
      sub_88870(a1, a2, (__int64)v34);
      clear_tinfo_t(v41);
      if ( v39 )
      {
        *(_QWORD *)&v40 = 0;
        qfree(v39);
      }
      if ( v37 )
      {
        *(_QWORD *)&v38 = 0;
        qfree(v37);
      }
      cleanup_argloc(v34);
      goto LABEL_20;
    }
    if ( v6 < a2 )
    {
      *a1 = qvector_reserve(a1, v5, a2, 104);
      v2 = a1[1];
    }
    if ( v2 < a2 )
    {
      v7 = 104 * v2;
      do
      {
        v9 = v7 + *a1;
        *(_DWORD *)v9 = 0;
        copy_argloc(v9, &v24);
        v10 = si128.m128i_i64[1];
        *(_QWORD *)(v9 + 32) = 0;
        *(_OWORD *)(v9 + 40) = 0;
        *(_QWORD *)(v9 + 16) = v10;
        *(_DWORD *)(v9 + 24) = v26;
        v11 = n[0];
        if ( n[0] )
        {
          v12 = (void *)qalloc_or_throw(n[0]);
          *(_QWORD *)(v9 + 32) = v12;
          v13 = src;
          *(_QWORD *)(v9 + 48) = v11;
          memcpy(v12, v13, v11);
          *(_QWORD *)(v9 + 40) = v11;
        }
        *(_QWORD *)(v9 + 56) = 0;
        *(_OWORD *)(v9 + 64) = 0;
        v8 = v30[0];
        if ( v30[0] )
        {
          v22 = (void *)qalloc_or_throw(v30[0]);
          *(_QWORD *)(v9 + 56) = v22;
          v23 = v29;
          *(_QWORD *)(v9 + 72) = v8;
          memcpy(v22, v23, v8);
          *(_QWORD *)(v9 + 64) = v8;
        }
        *(_QWORD *)(v9 + 80) = 0;
        copy_tinfo_t(v9 + 80, &v31);
        ++v2;
        v7 += 104;
        *(_QWORD *)(v9 + 88) = v32;
        *(_QWORD *)(v9 + 96) = v33;
      }
      while ( v2 < a2 );
    }
  }
  a1[1] = a2;
LABEL_20:
  clear_tinfo_t(&v31);
  if ( v29 )
  {
    v30[0] = 0;
    qfree(v29);
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  cleanup_argloc(&v24);
  return v42 - __readfsqword(0x28u);
}
