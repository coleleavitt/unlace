__int64 __fastcall sub_6812C0(__m128i *a1, __int64 a2, int a3, unsigned __int64 a4)
{
  __int64 v6; // rax
  _QWORD *v7; // r14
  unsigned int v8; // eax
  __m128i **v9; // rbp
  unsigned int v10; // r12d
  __m128i **v13; // rdi
  __m128i *v14; // r13
  __m128i *v15; // rbx
  __m128i **v16; // rdi
  __m128i **v17; // rdi
  __m128i *v18; // rbp
  __int64 v19; // rbx
  __int64 v20; // r13
  __int64 v21; // rdx
  _QWORD *v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rbx
  _QWORD *v25; // r14
  __m128i v26; // [rsp+20h] [rbp-1C8h] BYREF
  __m128i v27; // [rsp+30h] [rbp-1B8h] BYREF
  char v28[64]; // [rsp+40h] [rbp-1A8h] BYREF
  __int128 v29; // [rsp+80h] [rbp-168h]
  __int64 v30; // [rsp+90h] [rbp-158h]
  int v31; // [rsp+98h] [rbp-150h]
  __int64 v32; // [rsp+A0h] [rbp-148h]
  __int64 v33; // [rsp+B0h] [rbp-138h]
  __int64 v34; // [rsp+B8h] [rbp-130h]
  int v35; // [rsp+C0h] [rbp-128h]
  __int128 v36; // [rsp+D8h] [rbp-110h]
  __int64 v37; // [rsp+108h] [rbp-E0h]
  int v38; // [rsp+110h] [rbp-D8h]
  __int64 v39; // [rsp+128h] [rbp-C0h]

  v35 = 0;
  v30 = 0x100000001LL;
  v6 = *(_QWORD *)(a2 + 16);
  v39 = 0;
  v31 = 0;
  v37 = 0;
  v7 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
  v38 = 0;
  v33 = 0;
  v32 = 0;
  v34 = 0;
  v36 = 0;
  v29 = 0;
  if ( (v6 & 4) != 0 )
    v7 = (_QWORD *)*v7;
  sub_639160((__int64)&v26, a2, a1[2].m128i_i64[1], 0, 1u);
  v8 = sub_680210(a1, a2, a3, (__int64)v28, a4, v7, (__int128)_mm_load_si128(&v26), (__int128)_mm_load_si128(&v27));
  v9 = (__m128i **)v39;
  v10 = v8;
  if ( v39 )
  {
    if ( (*(_DWORD *)(v39 + 712))-- == 1 )
    {
      v13 = (__m128i **)v9[85];
      if ( v13 != v9 + 87 )
        free(v13);
      v14 = v9[21];
      v15 = (__m128i *)((char *)v14 + 248 * *((unsigned int *)v9 + 44));
      if ( v14 != v15 )
      {
        do
        {
          v16 = (__m128i **)v15[-5].m128i_i64[0];
          v15 = (__m128i *)((char *)v15 - 248);
          sub_67AA40(v16);
        }
        while ( v14 != v15 );
        v15 = v9[21];
      }
      if ( v15 != (__m128i *)(v9 + 23) )
        free(v15);
      v17 = (__m128i **)v9[1];
      if ( v17 != v9 + 3 )
        free(v17);
      --(*v9)[15].m128i_i32[0];
      v18 = *v9;
      if ( !v18[15].m128i_i32[0] )
      {
        v19 = v18[13].m128i_i64[0];
        v20 = v19 + 16LL * v18[13].m128i_u32[2];
        while ( v20 != v19 )
        {
          v19 += 16;
          operator delete();
        }
        v18[13].m128i_i32[2] = 0;
        v21 = v18[10].m128i_u32[2];
        if ( (_DWORD)v21 )
        {
          v22 = (_QWORD *)v18[10].m128i_i64[0];
          v23 = v21;
          v18[14].m128i_i64[0] = 0;
          v24 = &v22[v23];
          v25 = v22 + 1;
          v18[9] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v22, (__m128i)(unsigned __int64)(*v22 + 4096LL));
          if ( v23 != 1 )
          {
            do
            {
              ++v25;
              operator delete();
            }
            while ( v24 != v25 );
          }
          v18[10].m128i_i32[2] = 1;
        }
      }
    }
  }
  return v10;
}

