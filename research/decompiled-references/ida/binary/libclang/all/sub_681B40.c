__int64 __fastcall sub_681B40(__m128i *a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned int v3; // eax
  __m128i **v4; // rbp
  unsigned int v5; // r12d
  __m128i **v8; // rdi
  __m128i *v9; // r13
  __m128i *v10; // rbx
  __m128i **v11; // rdi
  __m128i **v12; // rdi
  __m128i *v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // r13
  __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rbx
  _QWORD *v20; // r14
  __m128i v21; // [rsp+20h] [rbp-1C8h] BYREF
  __m128i v22; // [rsp+30h] [rbp-1B8h] BYREF
  char v23[64]; // [rsp+40h] [rbp-1A8h] BYREF
  __int128 v24; // [rsp+80h] [rbp-168h]
  __int64 v25; // [rsp+90h] [rbp-158h]
  int v26; // [rsp+98h] [rbp-150h]
  __int64 v27; // [rsp+A0h] [rbp-148h]
  __int64 v28; // [rsp+B0h] [rbp-138h]
  __int64 v29; // [rsp+B8h] [rbp-130h]
  int v30; // [rsp+C0h] [rbp-128h]
  __int128 v31; // [rsp+D8h] [rbp-110h]
  __int64 v32; // [rsp+108h] [rbp-E0h]
  int v33; // [rsp+110h] [rbp-D8h]
  __int64 v34; // [rsp+128h] [rbp-C0h]

  v2 = a1[2].m128i_i64[1];
  v30 = 0;
  v34 = 0;
  v32 = 0;
  v33 = 0;
  v25 = 0x100000000LL;
  v26 = 0;
  v28 = 0;
  v27 = 0;
  v29 = 0;
  v31 = 0;
  v24 = 0;
  sub_639160((__int64)&v21, a2, v2, 0, 1u);
  v3 = sub_680210(
         a1,
         a2,
         *(_DWORD *)(a2 + 24),
         (__int64)v23,
         0,
         nullptr,
         (__int128)_mm_load_si128(&v21),
         (__int128)_mm_load_si128(&v22));
  v4 = (__m128i **)v34;
  v5 = v3;
  if ( v34 )
  {
    if ( (*(_DWORD *)(v34 + 712))-- == 1 )
    {
      v8 = (__m128i **)v4[85];
      if ( v8 != v4 + 87 )
        free(v8);
      v9 = v4[21];
      v10 = (__m128i *)((char *)v9 + 248 * *((unsigned int *)v4 + 44));
      if ( v9 != v10 )
      {
        do
        {
          v11 = (__m128i **)v10[-5].m128i_i64[0];
          v10 = (__m128i *)((char *)v10 - 248);
          sub_67AA40(v11);
        }
        while ( v9 != v10 );
        v10 = v4[21];
      }
      if ( v10 != (__m128i *)(v4 + 23) )
        free(v10);
      v12 = (__m128i **)v4[1];
      if ( v12 != v4 + 3 )
        free(v12);
      --(*v4)[15].m128i_i32[0];
      v13 = *v4;
      if ( !v13[15].m128i_i32[0] )
      {
        v14 = v13[13].m128i_i64[0];
        v15 = v14 + 16LL * v13[13].m128i_u32[2];
        while ( v15 != v14 )
        {
          v14 += 16;
          operator delete();
        }
        v13[13].m128i_i32[2] = 0;
        v16 = v13[10].m128i_u32[2];
        if ( (_DWORD)v16 )
        {
          v17 = (_QWORD *)v13[10].m128i_i64[0];
          v18 = v16;
          v13[14].m128i_i64[0] = 0;
          v19 = &v17[v18];
          v20 = v17 + 1;
          v13[9] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v17, (__m128i)(unsigned __int64)(*v17 + 4096LL));
          if ( v18 != 1 )
          {
            do
            {
              ++v20;
              operator delete();
            }
            while ( v19 != v20 );
          }
          v13[10].m128i_i32[2] = 1;
        }
      }
    }
  }
  return v5;
}

