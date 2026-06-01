__int64 __fastcall sub_427F60(__int64 *a1, const char *a2)
{
  const char *v3; // rsi
  __int64 v4; // r15
  __int64 v5; // r13
  __int64 v6; // rax
  const char *v7; // r14
  bool v8; // bl
  char *v9; // rax
  __m128i v10; // xmm1
  __m128i v11; // xmm0
  size_t v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rbp
  __int64 v16; // rbx
  __int64 *v17; // rax
  __int64 v18; // rdi
  __m128i v21; // [rsp+8h] [rbp-D8h] BYREF
  unsigned __int8 v22; // [rsp+1Fh] [rbp-C1h]
  __int64 *v23; // [rsp+20h] [rbp-C0h]
  __int64 v24; // [rsp+28h] [rbp-B8h] BYREF
  __int128 v25; // [rsp+30h] [rbp-B0h]
  _QWORD v26[4]; // [rsp+48h] [rbp-98h] BYREF
  void *v27; // [rsp+68h] [rbp-78h] BYREF
  __int128 v28; // [rsp+70h] [rbp-70h]
  __m128i v29; // [rsp+80h] [rbp-60h]
  __int64 v30; // [rsp+90h] [rbp-50h]
  unsigned __int64 v31; // [rsp+A0h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v25 = 0;
  v24 = 0;
  sub_42B280(v26, a2);
  v3 = (const char *)v26;
  v23 = &v24;
  v22 = sub_42F6A0(&v24, v26, 0);
  if ( v22 )
  {
    v4 = v24;
    v5 = v24 + 80 * v25;
    if ( v24 != v5 )
    {
      do
      {
        v7 = &s1;
        v8 = *(_DWORD *)(v4 + 64) == 0;
        if ( *(_QWORD *)(v4 + 8) )
        {
          v7 = *(const char **)v4;
          v9 = strrchr(*(const char **)v4, 47);
          if ( v9 )
            v7 = v9 + 1;
        }
        v10 = _mm_loadl_epi64((const __m128i *)(v4 + 48));
        v11 = _mm_loadl_epi64((const __m128i *)(v4 + 40));
        v27 = nullptr;
        v28 = 0;
        v12 = *(_QWORD *)(v4 + 8);
        if ( v12 )
        {
          v13 = *(_QWORD *)(v4 + 8);
          v21.m128i_i64[1] = v11.m128i_i64[0];
          v21.m128i_i64[0] = v10.m128i_i64[0];
          v27 = (void *)qalloc_or_throw(v13);
          *((_QWORD *)&v28 + 1) = v12;
          memcpy(v27, *(const void **)v4, v12);
          *(_QWORD *)&v28 = v12;
          v11 = _mm_loadl_epi64((const __m128i *)&v21.m128i_u64[1]);
          v10 = _mm_loadl_epi64(&v21);
        }
        v6 = *a1;
        v3 = a2;
        v29 = _mm_unpacklo_epi64(v11, v10);
        v30 = -1;
        (*(void (__fastcall **)(__int64 *, const char *, const char *, bool, void **))(v6 + 520))(a1, a2, v7, v8, &v27);
        if ( v27 )
        {
          *(_QWORD *)&v28 = 0;
          qfree(v27, a2);
        }
        v4 += 80;
      }
      while ( v5 != v4 );
    }
  }
  if ( v26[0] )
  {
    v26[1] = 0;
    qfree(v26[0], v3);
  }
  v14 = v24;
  if ( v24 )
  {
    v15 = v25;
    if ( (_QWORD)v25 )
    {
      v16 = 0;
      do
      {
        v17 = (__int64 *)(v14 + 80 * v16);
        v18 = *v17;
        if ( *v17 )
        {
          v17[1] = 0;
          qfree(v18, v3);
          v14 = v24;
        }
        ++v16;
      }
      while ( v15 != v16 );
    }
    *(_QWORD *)&v25 = 0;
    qfree(v14, v3);
  }
  return v22;
}
