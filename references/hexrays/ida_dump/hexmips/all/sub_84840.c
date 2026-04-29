__int64 __fastcall sub_84840(_QWORD *a1, _QWORD *a2)
{
  int v2; // eax
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // rbp
  size_t v6; // r13
  size_t v7; // r13
  unsigned __int64 v8; // r14
  __int64 v9; // r13
  _QWORD *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // [rsp+0h] [rbp-118h] BYREF
  __m128i si128; // [rsp+8h] [rbp-110h]
  __int64 v15; // [rsp+18h] [rbp-100h]
  void *v16; // [rsp+20h] [rbp-F8h]
  size_t v17[2]; // [rsp+28h] [rbp-F0h]
  void *src; // [rsp+38h] [rbp-E0h]
  size_t n[2]; // [rsp+40h] [rbp-D8h]
  __int64 v20; // [rsp+50h] [rbp-C8h] BYREF
  unsigned __int64 v21; // [rsp+58h] [rbp-C0h]
  __int64 v22; // [rsp+60h] [rbp-B8h]
  _DWORD v23[4]; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+80h] [rbp-98h]
  int v25; // [rsp+88h] [rbp-90h]
  void *v26; // [rsp+90h] [rbp-88h]
  __int128 v27; // [rsp+98h] [rbp-80h]
  void *v28; // [rsp+A8h] [rbp-70h]
  __int128 v29; // [rsp+B0h] [rbp-68h]
  _QWORD v30[11]; // [rsp+C0h] [rbp-58h] BYREF

  v30[3] = __readfsqword(0x28u);
  v2 = sub_792F0(a1);
  if ( v2 < 0 )
    return 0;
  v3 = a2[1];
  v4 = v2;
  if ( v2 != v3 )
  {
    v13 = 0;
    v15 = 1;
    si128 = _mm_load_si128((const __m128i *)&xmmword_407240);
    v16 = nullptr;
    src = nullptr;
    v20 = 0;
    v21 = 0xFFFFFFFF00000000LL;
    v22 = 0;
    *(_OWORD *)v17 = 0;
    *(_OWORD *)n = 0;
    if ( v2 < v3 )
    {
      v8 = v2;
      v9 = 104LL * v2;
      do
      {
        v10 = (_QWORD *)(v9 + *a2);
        clear_tinfo_t(v10 + 10);
        v11 = v10[7];
        if ( v11 )
        {
          v10[8] = 0;
          qfree(v11);
        }
        v12 = v10[4];
        if ( v12 )
        {
          v10[5] = 0;
          qfree(v12);
        }
        ++v8;
        v9 += 104;
        cleanup_argloc(v10);
      }
      while ( v8 < v3 );
      a2[1] = v4;
    }
    else if ( (unsigned __int64)&v13 < *a2 || (unsigned __int64)&v13 >= *a2 + 104LL * a2[2] )
    {
      sub_84670(a2, v2, (__int64)&v13);
    }
    else
    {
      v23[0] = 0;
      copy_argloc(v23, &v13);
      v6 = v17[0];
      v26 = nullptr;
      v27 = 0;
      v24 = si128.m128i_i64[1];
      v25 = v15;
      if ( v17[0] )
      {
        v26 = (void *)qalloc_or_throw(v17[0]);
        *((_QWORD *)&v27 + 1) = v6;
        memcpy(v26, v16, v6);
        *(_QWORD *)&v27 = v6;
      }
      v7 = n[0];
      v28 = nullptr;
      v29 = 0;
      if ( n[0] )
      {
        v28 = (void *)qalloc_or_throw(n[0]);
        *((_QWORD *)&v29 + 1) = v7;
        memcpy(v28, src, v7);
        *(_QWORD *)&v29 = v7;
      }
      v30[0] = 0;
      copy_tinfo_t(v30, &v20);
      v30[1] = v21;
      v30[2] = v22;
      sub_84670(a2, v4, (__int64)v23);
      clear_tinfo_t(v30);
      if ( v28 )
      {
        *(_QWORD *)&v29 = 0;
        qfree(v28);
      }
      if ( v26 )
      {
        *(_QWORD *)&v27 = 0;
        qfree(v26);
      }
      cleanup_argloc(v23);
    }
    clear_tinfo_t(&v20);
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
    if ( v16 )
    {
      v17[0] = 0;
      qfree(v16);
    }
    cleanup_argloc(&v13);
  }
  return 1;
}
