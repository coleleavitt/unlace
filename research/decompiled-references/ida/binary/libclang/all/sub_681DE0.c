__int64 __fastcall sub_681DE0(__m128i *a1, __int64 a2)
{
  __int64 v2; // rax
  bool v3; // zf
  __int64 v4; // rax
  _BOOL4 v5; // ecx
  __int64 v6; // rdx
  unsigned int v7; // eax
  __m128i **v8; // rbp
  unsigned int v9; // r12d
  __m128i **v11; // rdi
  __m128i *v12; // r13
  __m128i *v13; // rbx
  __m128i **v14; // rdi
  __m128i **v15; // rdi
  __m128i *v16; // rbp
  __int64 v17; // rbx
  __int64 v18; // r13
  __int64 v19; // rdx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rbx
  _QWORD *v23; // r14
  __m128i v24; // [rsp+20h] [rbp-1C8h] BYREF
  __m128i v25; // [rsp+30h] [rbp-1B8h] BYREF
  char v26[64]; // [rsp+40h] [rbp-1A8h] BYREF
  __int128 v27; // [rsp+80h] [rbp-168h]
  _BOOL4 v28; // [rsp+90h] [rbp-158h]
  _BOOL4 v29; // [rsp+94h] [rbp-154h]
  int v30; // [rsp+98h] [rbp-150h]
  __int64 v31; // [rsp+A0h] [rbp-148h]
  __int64 v32; // [rsp+B0h] [rbp-138h]
  __int64 v33; // [rsp+B8h] [rbp-130h]
  int v34; // [rsp+C0h] [rbp-128h]
  __int128 v35; // [rsp+D8h] [rbp-110h]
  __int64 v36; // [rsp+108h] [rbp-E0h]
  int v37; // [rsp+110h] [rbp-D8h]
  __int64 v38; // [rsp+128h] [rbp-C0h]

  v2 = sub_798D40(a2);
  v3 = (unsigned int)sub_77B6A0(a2, v2) == 0;
  v4 = *(_QWORD *)(a2 + 72);
  v5 = 0;
  if ( (v4 & 1) == 0 )
    v5 = !((v4 >> 1) & 1);
  v6 = a1[2].m128i_i64[1];
  v28 = v5;
  v34 = 0;
  v38 = 0;
  v36 = 0;
  v37 = 0;
  v29 = !v3;
  v30 = 0;
  v32 = 0;
  v31 = 0;
  v33 = 0;
  v35 = 0;
  v27 = 0;
  sub_639160((__int64)&v24, a2, v6, 0, 1u);
  v7 = sub_680210(
         a1,
         a2,
         *(_DWORD *)(a2 + 24),
         (__int64)v26,
         0,
         nullptr,
         (__int128)_mm_load_si128(&v24),
         (__int128)_mm_load_si128(&v25));
  v8 = (__m128i **)v38;
  v9 = v7;
  if ( v38 )
  {
    v3 = (*(_DWORD *)(v38 + 712))-- == 1;
    if ( v3 )
    {
      v11 = (__m128i **)v8[85];
      if ( v11 != v8 + 87 )
        free(v11);
      v12 = v8[21];
      v13 = (__m128i *)((char *)v12 + 248 * *((unsigned int *)v8 + 44));
      if ( v12 != v13 )
      {
        do
        {
          v14 = (__m128i **)v13[-5].m128i_i64[0];
          v13 = (__m128i *)((char *)v13 - 248);
          sub_67AA40(v14);
        }
        while ( v12 != v13 );
        v13 = v8[21];
      }
      if ( v13 != (__m128i *)(v8 + 23) )
        free(v13);
      v15 = (__m128i **)v8[1];
      if ( v15 != v8 + 3 )
        free(v15);
      --(*v8)[15].m128i_i32[0];
      v16 = *v8;
      if ( !v16[15].m128i_i32[0] )
      {
        v17 = v16[13].m128i_i64[0];
        v18 = v17 + 16LL * v16[13].m128i_u32[2];
        while ( v18 != v17 )
        {
          v17 += 16;
          operator delete();
        }
        v16[13].m128i_i32[2] = 0;
        v19 = v16[10].m128i_u32[2];
        if ( (_DWORD)v19 )
        {
          v20 = (_QWORD *)v16[10].m128i_i64[0];
          v21 = v19;
          v16[14].m128i_i64[0] = 0;
          v22 = &v20[v21];
          v23 = v20 + 1;
          v16[9] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v20, (__m128i)(unsigned __int64)(*v20 + 4096LL));
          if ( v21 != 1 )
          {
            do
            {
              ++v23;
              operator delete();
            }
            while ( v22 != v23 );
          }
          v16[10].m128i_i32[2] = 1;
        }
      }
    }
  }
  return v9;
}

