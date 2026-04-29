unsigned __int64 __fastcall sub_82440(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  size_t v11; // r14
  void *v12; // rax
  void *v13; // rsi
  unsigned __int64 v14; // r14
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  size_t v20; // rbx
  unsigned __int64 v21; // rbp
  void *v22; // rax
  void *v23; // rsi
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rcx
  size_t v27; // [rsp+28h] [rbp-F0h]
  _QWORD v28[2]; // [rsp+30h] [rbp-E8h] BYREF
  __m128i si128; // [rsp+40h] [rbp-D8h] BYREF
  void *src; // [rsp+50h] [rbp-C8h]
  size_t n[2]; // [rsp+58h] [rbp-C0h]
  __int64 v32; // [rsp+68h] [rbp-B0h]
  __int64 v33; // [rsp+70h] [rbp-A8h]
  int v34; // [rsp+78h] [rbp-A0h]
  _BYTE v35[16]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v36; // [rsp+90h] [rbp-88h]
  __int64 v37; // [rsp+98h] [rbp-80h] BYREF
  void *v38; // [rsp+A0h] [rbp-78h]
  __int128 v39; // [rsp+A8h] [rbp-70h]
  int v40; // [rsp+B8h] [rbp-60h]
  int v41; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v42; // [rsp+D8h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 == a2 )
    return v42 - __readfsqword(0x28u);
  v28[0] = 0xFFFFFFFF00000000LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
  v28[1] = 0;
  src = nullptr;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  *(_OWORD *)n = 0;
  if ( a2 < v2 )
  {
    v14 = a2;
    do
    {
      v15 = *a1 + 80 * v14;
      cleanup_argloc();
      v16 = *(_QWORD *)(v15 + 32);
      if ( v16 )
      {
        *(_QWORD *)(v15 + 40) = 0;
        qfree(v16);
      }
      ++v14;
      clear_tinfo_t();
      sub_11CDA0(v15);
    }
    while ( v2 != v14 );
  }
  else
  {
    v5 = *a1;
    v6 = a1[2];
    if ( (unsigned __int64)v28 >= *a1 && (unsigned __int64)v28 < v5 + 80 * v6 )
    {
      sub_123A40(v35);
      v37 = 0;
      v36 = si128.m128i_i64[0];
      copy_tinfo_t();
      v20 = n[0];
      v38 = nullptr;
      v39 = 0;
      if ( n[0] )
      {
        v38 = (void *)qalloc_or_throw(n[0], (__int64)&si128.m128i_i64[1], v18, v19);
        *((_QWORD *)&v39 + 1) = v20;
        memcpy(v38, src, v20);
        *(_QWORD *)&v39 = v20;
      }
      v40 = 0;
      copy_argloc();
      v41 = v34;
      if ( a1[2] < a2 )
        *a1 = qvector_reserve((__int64)a1, *a1, a2, 80);
      v21 = a1[1];
      if ( v21 < a2 )
      {
        do
        {
          v24 = *a1 + 80 * v21;
          sub_123A40(v24);
          v25 = v36;
          *(_QWORD *)(v24 + 24) = 0;
          *(_QWORD *)(v24 + 16) = v25;
          copy_tinfo_t();
          *(_QWORD *)(v24 + 32) = 0;
          *(_OWORD *)(v24 + 40) = 0;
          if ( (_QWORD)v39 )
          {
            v27 = v39;
            v22 = (void *)qalloc_or_throw(v39, (__int64)&v37, v39, v26);
            *(_QWORD *)(v24 + 32) = v22;
            v23 = v38;
            *(_QWORD *)(v24 + 48) = v27;
            memcpy(v22, v23, v27);
            *(_QWORD *)(v24 + 40) = v27;
          }
          *(_DWORD *)(v24 + 56) = 0;
          copy_argloc();
          ++v21;
          *(_DWORD *)(v24 + 72) = v41;
        }
        while ( a2 != v21 );
      }
      a1[1] = a2;
      cleanup_argloc();
      if ( v38 )
      {
        *(_QWORD *)&v39 = 0;
        qfree((__int64)v38);
      }
      clear_tinfo_t();
      sub_11CDA0(v35);
      goto LABEL_16;
    }
    if ( v6 < a2 )
    {
      *a1 = qvector_reserve((__int64)a1, v5, a2, 80);
      v2 = a1[1];
    }
    for ( ; v2 < a2; *(_DWORD *)(v7 + 72) = v34 )
    {
      v7 = *a1 + 80 * v2;
      sub_123A40(v7);
      v8 = si128.m128i_i64[0];
      *(_QWORD *)(v7 + 24) = 0;
      *(_QWORD *)(v7 + 16) = v8;
      copy_tinfo_t();
      *(_QWORD *)(v7 + 32) = 0;
      *(_OWORD *)(v7 + 40) = 0;
      v11 = n[0];
      if ( n[0] )
      {
        v12 = (void *)qalloc_or_throw(n[0], (__int64)&si128.m128i_i64[1], v9, v10);
        *(_QWORD *)(v7 + 32) = v12;
        v13 = src;
        *(_QWORD *)(v7 + 48) = v11;
        memcpy(v12, v13, v11);
        *(_QWORD *)(v7 + 40) = v11;
      }
      *(_DWORD *)(v7 + 56) = 0;
      copy_argloc();
      ++v2;
    }
  }
  a1[1] = a2;
LABEL_16:
  cleanup_argloc();
  if ( src )
  {
    n[0] = 0;
    qfree((__int64)src);
  }
  clear_tinfo_t();
  sub_11CDA0(v28);
  return v42 - __readfsqword(0x28u);
}
