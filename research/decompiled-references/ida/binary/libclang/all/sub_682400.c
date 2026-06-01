__int64 __fastcall sub_682400(__m128i *a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // edx
  __int128 v4; // xmm0
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
  __m128i v23; // [rsp+20h] [rbp-1F8h] BYREF
  __m128i v24; // [rsp+30h] [rbp-1E8h] BYREF
  __int128 v25; // [rsp+40h] [rbp-1D8h]
  __int128 v26; // [rsp+50h] [rbp-1C8h]
  _BYTE v27[64]; // [rsp+60h] [rbp-1B8h] BYREF
  __int128 v28; // [rsp+A0h] [rbp-178h]
  __int64 v29; // [rsp+B0h] [rbp-168h]
  int v30; // [rsp+B8h] [rbp-160h]
  __int64 v31; // [rsp+C0h] [rbp-158h]
  __int64 v32; // [rsp+D0h] [rbp-148h]
  __int64 v33; // [rsp+D8h] [rbp-140h]
  int v34; // [rsp+E0h] [rbp-138h]
  __int128 v35; // [rsp+F8h] [rbp-120h]
  __int64 v36; // [rsp+128h] [rbp-F0h]
  int v37; // [rsp+130h] [rbp-E8h]
  __int64 v38; // [rsp+148h] [rbp-D0h]
  _BYTE *v39; // [rsp+1E0h] [rbp-38h]
  int v40; // [rsp+1E8h] [rbp-30h]

  v2 = a1[2].m128i_i64[1];
  v35 = 0;
  v28 = 0;
  v34 = 1;
  v38 = 0;
  v36 = 0;
  v37 = 0;
  v29 = 0x100000001LL;
  v30 = 1;
  v32 = 0;
  v31 = 0;
  v33 = 0;
  v40 = 2;
  sub_639160((__int64)&v23, a2, v2, 0, 1u);
  v3 = *(_DWORD *)(a2 + 24);
  v4 = (__int128)_mm_load_si128(&v24);
  v25 = (__int128)_mm_load_si128(&v23);
  v26 = v4;
  v39 = v27;
  v5 = sub_680210(a1, a2, v3, (__int64)v27, 0, nullptr, v25, v4);
  v6 = (__m128i **)v38;
  v7 = v5;
  if ( v38 )
  {
    if ( (*(_DWORD *)(v38 + 712))-- == 1 )
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

