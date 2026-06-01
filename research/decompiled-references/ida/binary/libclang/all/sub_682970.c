__int64 __fastcall sub_682970(__m128i *a1, __int64 a2)
{
  __m128i *v4; // rsi
  __m128i *v5; // rsi
  __int64 v6; // rdx
  unsigned int v7; // eax
  __m128i **v8; // r13
  unsigned int v9; // r12d
  bool v10; // zf
  __m128i **v11; // r13
  __m128i **v12; // r13
  __m128i **v14; // rdi
  __m128i *v15; // r14
  __m128i *v16; // rbx
  __m128i **v17; // rdi
  __m128i **v18; // rdi
  __m128i *v19; // r13
  __int64 v20; // rbx
  __int64 v21; // r14
  __int64 v22; // rdx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rbx
  _QWORD *v26; // r15
  __m128i **v27; // rdi
  __m128i *v28; // r14
  __m128i *v29; // rbx
  __m128i **v30; // rdi
  __m128i **v31; // rdi
  __m128i *v32; // r13
  __int64 v33; // rbx
  __int64 v34; // r14
  __int64 v35; // rdx
  _QWORD *v36; // rax
  __int64 v37; // rdx
  _QWORD *v38; // rbx
  _QWORD *v39; // r15
  __m128i **v40; // rdi
  __m128i *v41; // r14
  __m128i *v42; // rbx
  __m128i **v43; // rdi
  __m128i **v44; // rdi
  __m128i *v45; // r13
  __int64 v46; // rbx
  __int64 v47; // r14
  __int64 v48; // rdx
  _QWORD *v49; // rax
  __int64 v50; // rdx
  _QWORD *v51; // rbx
  _QWORD *v52; // r15
  __int64 v53; // rbx
  __int64 v54; // r13
  __int64 v55; // rdx
  _QWORD *v56; // rax
  __int64 v57; // rdx
  _QWORD *v58; // rbx
  _QWORD *v59; // r14
  __m128i *v60; // [rsp+28h] [rbp-2E0h] BYREF
  __m128i v61; // [rsp+30h] [rbp-2D8h] BYREF
  __m128i v62; // [rsp+40h] [rbp-2C8h] BYREF
  __m128i v63[4]; // [rsp+50h] [rbp-2B8h] BYREF
  __int64 v64; // [rsp+90h] [rbp-278h]
  int v65; // [rsp+98h] [rbp-270h]
  __int64 v66; // [rsp+B0h] [rbp-258h]
  __m128i v67[4]; // [rsp+C0h] [rbp-248h] BYREF
  __int64 v68; // [rsp+100h] [rbp-208h]
  int v69; // [rsp+108h] [rbp-200h]
  __int64 v70; // [rsp+120h] [rbp-1E8h]
  _BYTE v71[64]; // [rsp+130h] [rbp-1D8h] BYREF
  __int128 v72; // [rsp+170h] [rbp-198h]
  __int64 v73; // [rsp+180h] [rbp-188h]
  int v74; // [rsp+188h] [rbp-180h]
  __int64 v75; // [rsp+190h] [rbp-178h]
  __int64 v76; // [rsp+1A0h] [rbp-168h]
  __int64 v77; // [rsp+1A8h] [rbp-160h]
  int v78; // [rsp+1B0h] [rbp-158h]
  __int128 v79; // [rsp+1C8h] [rbp-140h]
  __int64 v80; // [rsp+1F8h] [rbp-110h]
  int v81; // [rsp+200h] [rbp-108h]
  __int64 v82; // [rsp+218h] [rbp-F0h]
  _BYTE *v83; // [rsp+2B0h] [rbp-58h]
  __m128i *v84; // [rsp+2B8h] [rbp-50h]
  __m128i *v85; // [rsp+2C0h] [rbp-48h]

  ++a1[15].m128i_i32[0];
  v60 = a1;
  v78 = 5;
  v82 = 0;
  v80 = 0;
  v81 = 0;
  v73 = 0;
  v74 = 0;
  v76 = 0;
  v75 = 0;
  v77 = 0;
  v66 = 0;
  v64 = 0;
  v65 = 0;
  v79 = 0;
  v72 = 0;
  v63[1] = 0;
  v70 = 0;
  v4 = *(__m128i **)(a2 + 104);
  v68 = 0;
  v69 = 0;
  v83 = v71;
  v67[1] = 0;
  if ( v4 )
  {
    sub_67F660((__int64)a1, (__int64)v4, v63, (__int64)&v60);
    v4 = v63;
  }
  v84 = v4;
  v5 = *(__m128i **)(a2 + 112);
  if ( v5 )
  {
    sub_67F660((__int64)a1, (__int64)v5, v67, (__int64)&v60);
    v5 = v67;
  }
  v6 = a1[2].m128i_i64[1];
  v85 = v5;
  sub_639160((__int64)&v61, a2, v6, 0, 1u);
  v7 = sub_680210(
         a1,
         a2,
         *(_DWORD *)(a2 + 24),
         (__int64)v71,
         0,
         nullptr,
         (__int128)_mm_load_si128(&v61),
         (__int128)_mm_load_si128(&v62));
  v8 = (__m128i **)v70;
  v9 = v7;
  if ( v70 )
  {
    v10 = (*(_DWORD *)(v70 + 712))-- == 1;
    if ( v10 )
    {
      v40 = (__m128i **)v8[85];
      if ( v40 != v8 + 87 )
        free(v40);
      v41 = v8[21];
      v42 = (__m128i *)((char *)v41 + 248 * *((unsigned int *)v8 + 44));
      if ( v41 != v42 )
      {
        do
        {
          v43 = (__m128i **)v42[-5].m128i_i64[0];
          v42 = (__m128i *)((char *)v42 - 248);
          sub_67AA40(v43);
        }
        while ( v41 != v42 );
        v42 = v8[21];
      }
      if ( v42 != (__m128i *)(v8 + 23) )
        free(v42);
      v44 = (__m128i **)v8[1];
      if ( v44 != v8 + 3 )
        free(v44);
      --(*v8)[15].m128i_i32[0];
      v45 = *v8;
      if ( !v45[15].m128i_i32[0] )
      {
        v46 = v45[13].m128i_i64[0];
        v47 = v46 + 16LL * v45[13].m128i_u32[2];
        while ( v47 != v46 )
        {
          v46 += 16;
          operator delete();
        }
        v48 = v45[10].m128i_u32[2];
        v45[13].m128i_i32[2] = 0;
        if ( (_DWORD)v48 )
        {
          v49 = (_QWORD *)v45[10].m128i_i64[0];
          v50 = v48;
          v45[14].m128i_i64[0] = 0;
          v51 = &v49[v50];
          v52 = v49 + 1;
          v45[9] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v49, (__m128i)(unsigned __int64)(*v49 + 4096LL));
          if ( v50 != 1 )
          {
            do
            {
              ++v52;
              operator delete();
            }
            while ( v51 != v52 );
          }
          v45[10].m128i_i32[2] = 1;
        }
      }
    }
  }
  v11 = (__m128i **)v66;
  if ( v66 )
  {
    v10 = (*(_DWORD *)(v66 + 712))-- == 1;
    if ( v10 )
    {
      v27 = (__m128i **)v11[85];
      if ( v27 != v11 + 87 )
        free(v27);
      v28 = v11[21];
      v29 = (__m128i *)((char *)v28 + 248 * *((unsigned int *)v11 + 44));
      if ( v28 != v29 )
      {
        do
        {
          v30 = (__m128i **)v29[-5].m128i_i64[0];
          v29 = (__m128i *)((char *)v29 - 248);
          sub_67AA40(v30);
        }
        while ( v28 != v29 );
        v29 = v11[21];
      }
      if ( v29 != (__m128i *)(v11 + 23) )
        free(v29);
      v31 = (__m128i **)v11[1];
      if ( v31 != v11 + 3 )
        free(v31);
      --(*v11)[15].m128i_i32[0];
      v32 = *v11;
      if ( !v32[15].m128i_i32[0] )
      {
        v33 = v32[13].m128i_i64[0];
        v34 = v33 + 16LL * v32[13].m128i_u32[2];
        while ( v34 != v33 )
        {
          v33 += 16;
          operator delete();
        }
        v35 = v32[10].m128i_u32[2];
        v32[13].m128i_i32[2] = 0;
        if ( (_DWORD)v35 )
        {
          v36 = (_QWORD *)v32[10].m128i_i64[0];
          v37 = v35;
          v32[14].m128i_i64[0] = 0;
          v38 = &v36[v37];
          v39 = v36 + 1;
          v32[9] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v36, (__m128i)(unsigned __int64)(*v36 + 4096LL));
          if ( v37 != 1 )
          {
            do
            {
              ++v39;
              operator delete();
            }
            while ( v38 != v39 );
          }
          v32[10].m128i_i32[2] = 1;
        }
      }
    }
  }
  v12 = (__m128i **)v82;
  if ( v82 )
  {
    v10 = (*(_DWORD *)(v82 + 712))-- == 1;
    if ( v10 )
    {
      v14 = (__m128i **)v12[85];
      if ( v14 != v12 + 87 )
        free(v14);
      v15 = v12[21];
      v16 = (__m128i *)((char *)v15 + 248 * *((unsigned int *)v12 + 44));
      if ( v15 != v16 )
      {
        do
        {
          v17 = (__m128i **)v16[-5].m128i_i64[0];
          v16 = (__m128i *)((char *)v16 - 248);
          sub_67AA40(v17);
        }
        while ( v15 != v16 );
        v16 = v12[21];
      }
      if ( v16 != (__m128i *)(v12 + 23) )
        free(v16);
      v18 = (__m128i **)v12[1];
      if ( v18 != v12 + 3 )
        free(v18);
      --(*v12)[15].m128i_i32[0];
      v19 = *v12;
      if ( !v19[15].m128i_i32[0] )
      {
        v20 = v19[13].m128i_i64[0];
        v21 = v20 + 16LL * v19[13].m128i_u32[2];
        while ( v21 != v20 )
        {
          v20 += 16;
          operator delete();
        }
        v22 = v19[10].m128i_u32[2];
        v19[13].m128i_i32[2] = 0;
        if ( (_DWORD)v22 )
        {
          v23 = (_QWORD *)v19[10].m128i_i64[0];
          v24 = v22;
          v19[14].m128i_i64[0] = 0;
          v25 = &v23[v24];
          v26 = v23 + 1;
          v19[9] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v23, (__m128i)(unsigned __int64)(*v23 + 4096LL));
          if ( v24 != 1 )
          {
            do
            {
              ++v26;
              operator delete();
            }
            while ( v25 != v26 );
          }
          v19[10].m128i_i32[2] = 1;
        }
      }
    }
  }
  v10 = a1[15].m128i_i32[0]-- == 1;
  if ( v10 )
  {
    v53 = a1[13].m128i_i64[0];
    v54 = v53 + 16LL * a1[13].m128i_u32[2];
    while ( v54 != v53 )
    {
      v53 += 16;
      operator delete();
    }
    a1[13].m128i_i32[2] = 0;
    v55 = a1[10].m128i_u32[2];
    if ( (_DWORD)v55 )
    {
      v56 = (_QWORD *)a1[10].m128i_i64[0];
      v57 = v55;
      a1[14].m128i_i64[0] = 0;
      v58 = &v56[v57];
      v59 = v56 + 1;
      a1[9] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v56, (__m128i)(unsigned __int64)(*v56 + 4096LL));
      if ( v57 != 1 )
      {
        do
        {
          ++v59;
          operator delete();
        }
        while ( v58 != v59 );
      }
      a1[10].m128i_i32[2] = 1;
    }
  }
  return v9;
}

