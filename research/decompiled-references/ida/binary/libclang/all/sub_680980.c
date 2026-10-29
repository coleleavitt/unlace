__int64 __fastcall sub_680980(__m128i *a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64); // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned int v5; // eax
  __m128i **v6; // rbp
  unsigned int v7; // r12d
  __m128i **v10; // rdi
  __m128i *v11; // r13
  __m128i *v12; // rbx
  __m128i **v13; // rdi
  __m128i **v14; // rdi
  __m128i *v15; // rbp
  __int64 v16; // rbx
  __int64 v17; // r13
  __int64 v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rbx
  _QWORD *v22; // r14
  __m128i v23; // [rsp+20h] [rbp-1C8h] BYREF
  __m128i v24; // [rsp+30h] [rbp-1B8h] BYREF
  char v25[64]; // [rsp+40h] [rbp-1A8h] BYREF
  __int128 v26; // [rsp+80h] [rbp-168h]
  _BOOL4 v27; // [rsp+90h] [rbp-158h]
  __int64 v28; // [rsp+94h] [rbp-154h]
  __int64 v29; // [rsp+A0h] [rbp-148h]
  __int64 v30; // [rsp+B0h] [rbp-138h]
  __int64 v31; // [rsp+B8h] [rbp-130h]
  int v32; // [rsp+C0h] [rbp-128h]
  __int128 v33; // [rsp+D8h] [rbp-110h]
  __int64 v34; // [rsp+108h] [rbp-E0h]
  int v35; // [rsp+110h] [rbp-D8h]
  __int64 v36; // [rsp+128h] [rbp-C0h]

  v2 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v2 == sub_67A5A0 )
    v3 = *(_QWORD *)(a2 + 72);
  else
    v3 = v2(a2);
  v4 = a1[2].m128i_i64[1];
  v32 = 0;
  v36 = 0;
  v34 = 0;
  v35 = 0;
  v27 = a2 != v3;
  v28 = 1;
  v30 = 0;
  v29 = 0;
  v31 = 0;
  v33 = 0;
  v26 = 0;
  sub_639160((__int64)&v23, a2, v4, 0, 1u);
  v5 = sub_680210(
         a1,
         a2,
         *(_DWORD *)(a2 + 24),
         (__int64)v25,
         0,
         nullptr,
         (__int128)_mm_load_si128(&v23),
         (__int128)_mm_load_si128(&v24));
  v6 = (__m128i **)v36;
  v7 = v5;
  if ( v36 )
  {
    if ( (*(_DWORD *)(v36 + 712))-- == 1 )
    {
      v10 = (__m128i **)v6[85];
      if ( v10 != v6 + 87 )
        free(v10);
      v11 = v6[21];
      v12 = (__m128i *)((char *)v11 + 248 * *((unsigned int *)v6 + 44));
      if ( v11 != v12 )
      {
        do
        {
          v13 = (__m128i **)v12[-5].m128i_i64[0];
          v12 = (__m128i *)((char *)v12 - 248);
          sub_67AA40(v13);
        }
        while ( v11 != v12 );
        v12 = v6[21];
      }
      if ( v12 != (__m128i *)(v6 + 23) )
        free(v12);
      v14 = (__m128i **)v6[1];
      if ( v14 != v6 + 3 )
        free(v14);
      --(*v6)[15].m128i_i32[0];
      v15 = *v6;
      if ( !v15[15].m128i_i32[0] )
      {
        v16 = v15[13].m128i_i64[0];
        v17 = v16 + 16LL * v15[13].m128i_u32[2];
        while ( v17 != v16 )
        {
          v16 += 16;
          operator delete();
        }
        v15[13].m128i_i32[2] = 0;
        v18 = v15[10].m128i_u32[2];
        if ( (_DWORD)v18 )
        {
          v19 = (_QWORD *)v15[10].m128i_i64[0];
          v20 = v18;
          v15[14].m128i_i64[0] = 0;
          v21 = &v19[v20];
          v22 = v19 + 1;
          v15[9] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v19, (__m128i)(unsigned __int64)(*v19 + 4096LL));
          if ( v20 != 1 )
          {
            do
            {
              ++v22;
              operator delete();
            }
            while ( v21 != v22 );
          }
          v15[10].m128i_i32[2] = 1;
        }
      }
    }
  }
  return v7;
}

