__int64 __fastcall sub_683120(__m128i *a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // r12d
  int v5; // r14d
  __int64 v6; // r13
  __int64 v7; // rcx
  __m128i *v8; // rax
  __int64 v9; // rdx
  __int128 v10; // xmm0
  unsigned int v11; // eax
  __m128i **v12; // r13
  unsigned int v13; // r12d
  bool v14; // zf
  __m128i **v15; // r13
  __m128i **v17; // rdi
  __m128i *v18; // r14
  __m128i *v19; // rbp
  __m128i **v20; // rdi
  __m128i **v21; // rdi
  __m128i *v22; // r13
  __int64 v23; // rbp
  __int64 v24; // r14
  __int64 v25; // rdx
  _QWORD *v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // rbp
  _QWORD *v29; // r15
  __m128i **v30; // rdi
  __m128i *v31; // r14
  __m128i *v32; // rbp
  __m128i **v33; // rdi
  __m128i **v34; // rdi
  __m128i *v35; // r13
  __int64 v36; // rbp
  __int64 v37; // r14
  __int64 v38; // rdx
  _QWORD *v39; // rax
  __int64 v40; // rdx
  _QWORD *v41; // rbp
  _QWORD *v42; // r15
  __int64 v43; // rbp
  __int64 v44; // r13
  __int64 v45; // rdx
  _QWORD *v46; // rax
  __int64 v47; // rdx
  _QWORD *v48; // rbp
  _QWORD *v49; // r14
  __m128i v50; // [rsp+20h] [rbp-308h] BYREF
  __m128i v51; // [rsp+30h] [rbp-2F8h] BYREF
  __m128i *v52; // [rsp+48h] [rbp-2E0h] BYREF
  __m128i v53; // [rsp+50h] [rbp-2D8h] BYREF
  __m128i v54; // [rsp+60h] [rbp-2C8h] BYREF
  __int128 v55; // [rsp+70h] [rbp-2B8h]
  __int128 v56; // [rsp+80h] [rbp-2A8h]
  __m128i v57[4]; // [rsp+90h] [rbp-298h] BYREF
  __int64 v58; // [rsp+D0h] [rbp-258h]
  int v59; // [rsp+D8h] [rbp-250h]
  __int64 v60; // [rsp+F0h] [rbp-238h]
  _BYTE v61[64]; // [rsp+100h] [rbp-228h] BYREF
  __int128 v62; // [rsp+140h] [rbp-1E8h]
  __int64 v63; // [rsp+150h] [rbp-1D8h]
  int v64; // [rsp+158h] [rbp-1D0h]
  __int64 v65; // [rsp+160h] [rbp-1C8h]
  __int64 v66; // [rsp+170h] [rbp-1B8h]
  __int64 v67; // [rsp+178h] [rbp-1B0h]
  int v68; // [rsp+180h] [rbp-1A8h]
  __int128 v69; // [rsp+198h] [rbp-190h]
  __int64 v70; // [rsp+1C8h] [rbp-160h]
  int v71; // [rsp+1D0h] [rbp-158h]
  __int64 v72; // [rsp+1E8h] [rbp-140h]
  _BYTE *v73; // [rsp+280h] [rbp-A8h] BYREF
  int v74; // [rsp+288h] [rbp-A0h]
  _QWORD *v75; // [rsp+290h] [rbp-98h]
  __m128i *v76; // [rsp+298h] [rbp-90h]
  __m128i v77; // [rsp+2A0h] [rbp-88h]
  __m128i v78; // [rsp+2B0h] [rbp-78h]
  __m128i *v79; // [rsp+2C0h] [rbp-68h]
  __int64 v80; // [rsp+2C8h] [rbp-60h]
  unsigned int v81; // [rsp+2D0h] [rbp-58h]
  __int64 v82; // [rsp+2D8h] [rbp-50h]

  ++a1[15].m128i_i32[0];
  v52 = a1;
  v3 = sub_7BB6B0(a2);
  v4 = *(_DWORD *)(a2 + 24);
  v5 = *(_DWORD *)(a2 + 96);
  v68 = 4;
  v72 = 0;
  v70 = 0;
  v71 = 0;
  v64 = 1;
  v66 = 0;
  v65 = 0;
  v67 = 0;
  v74 = 2;
  v60 = 0;
  v69 = 0;
  v6 = *(_QWORD *)(v3 + 88);
  v63 = 0x100000001LL;
  v62 = 0;
  v58 = 0;
  v59 = 0;
  v57[1] = 0;
  sub_67F660((__int64)a1, v6, v57, (__int64)&v52);
  if ( (a1[2].m128i_i8[0] & 1) != 0 )
    sub_67E0B0((__int64)a1, v6, v4);
  v75 = &v73;
  if ( v6 )
  {
    v7 = a1[2].m128i_i64[1];
    v76 = v57;
    sub_639C80((__int64)&v50, v6, v4, v7);
  }
  else
  {
    v76 = nullptr;
    clang_getNullCursor(&v50);
  }
  v77 = _mm_loadu_si128(&v50);
  v78 = _mm_loadu_si128(&v51);
  v8 = nullptr;
  v9 = a1[2].m128i_i64[1];
  if ( v4 )
    v8 = a1;
  v81 = v4;
  v79 = v8;
  v80 = 0;
  v82 = 0;
  sub_639160((__int64)&v53, a2, v9, 0, 1u);
  v10 = (__int128)_mm_load_si128(&v54);
  v55 = (__int128)_mm_load_si128(&v53);
  v56 = v10;
  v73 = v61;
  v11 = sub_680210(a1, a2, v5, (__int64)v61, 0, nullptr, v55, v10);
  v12 = (__m128i **)v60;
  v13 = v11;
  if ( v60 )
  {
    v14 = (*(_DWORD *)(v60 + 712))-- == 1;
    if ( v14 )
    {
      v30 = (__m128i **)v12[85];
      if ( v30 != v12 + 87 )
        free(v30);
      v31 = v12[21];
      v32 = (__m128i *)((char *)v31 + 248 * *((unsigned int *)v12 + 44));
      if ( v31 != v32 )
      {
        do
        {
          v33 = (__m128i **)v32[-5].m128i_i64[0];
          v32 = (__m128i *)((char *)v32 - 248);
          sub_67AA40(v33);
        }
        while ( v31 != v32 );
        v32 = v12[21];
      }
      if ( v32 != (__m128i *)(v12 + 23) )
        free(v32);
      v34 = (__m128i **)v12[1];
      if ( v34 != v12 + 3 )
        free(v34);
      --(*v12)[15].m128i_i32[0];
      v35 = *v12;
      if ( !v35[15].m128i_i32[0] )
      {
        v36 = v35[13].m128i_i64[0];
        v37 = v36 + 16LL * v35[13].m128i_u32[2];
        while ( v37 != v36 )
        {
          v36 += 16;
          operator delete();
        }
        v38 = v35[10].m128i_u32[2];
        v35[13].m128i_i32[2] = 0;
        if ( (_DWORD)v38 )
        {
          v39 = (_QWORD *)v35[10].m128i_i64[0];
          v40 = v38;
          v35[14].m128i_i64[0] = 0;
          v41 = &v39[v40];
          v42 = v39 + 1;
          v35[9] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v39, (__m128i)(unsigned __int64)(*v39 + 4096LL));
          if ( v40 != 1 )
          {
            do
            {
              ++v42;
              operator delete();
            }
            while ( v41 != v42 );
          }
          v35[10].m128i_i32[2] = 1;
        }
      }
    }
  }
  v15 = (__m128i **)v72;
  if ( v72 )
  {
    v14 = (*(_DWORD *)(v72 + 712))-- == 1;
    if ( v14 )
    {
      v17 = (__m128i **)v15[85];
      if ( v17 != v15 + 87 )
        free(v17);
      v18 = v15[21];
      v19 = (__m128i *)((char *)v18 + 248 * *((unsigned int *)v15 + 44));
      if ( v18 != v19 )
      {
        do
        {
          v20 = (__m128i **)v19[-5].m128i_i64[0];
          v19 = (__m128i *)((char *)v19 - 248);
          sub_67AA40(v20);
        }
        while ( v18 != v19 );
        v19 = v15[21];
      }
      if ( v19 != (__m128i *)(v15 + 23) )
        free(v19);
      v21 = (__m128i **)v15[1];
      if ( v21 != v15 + 3 )
        free(v21);
      --(*v15)[15].m128i_i32[0];
      v22 = *v15;
      if ( !v22[15].m128i_i32[0] )
      {
        v23 = v22[13].m128i_i64[0];
        v24 = v23 + 16LL * v22[13].m128i_u32[2];
        while ( v24 != v23 )
        {
          v23 += 16;
          operator delete();
        }
        v25 = v22[10].m128i_u32[2];
        v22[13].m128i_i32[2] = 0;
        if ( (_DWORD)v25 )
        {
          v26 = (_QWORD *)v22[10].m128i_i64[0];
          v27 = v25;
          v22[14].m128i_i64[0] = 0;
          v28 = &v26[v27];
          v29 = v26 + 1;
          v22[9] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v26, (__m128i)(unsigned __int64)(*v26 + 4096LL));
          if ( v27 != 1 )
          {
            do
            {
              ++v29;
              operator delete();
            }
            while ( v28 != v29 );
          }
          v22[10].m128i_i32[2] = 1;
        }
      }
    }
  }
  v14 = a1[15].m128i_i32[0]-- == 1;
  if ( v14 )
  {
    v43 = a1[13].m128i_i64[0];
    v44 = v43 + 16LL * a1[13].m128i_u32[2];
    while ( v44 != v43 )
    {
      v43 += 16;
      operator delete();
    }
    a1[13].m128i_i32[2] = 0;
    v45 = a1[10].m128i_u32[2];
    if ( (_DWORD)v45 )
    {
      v46 = (_QWORD *)a1[10].m128i_i64[0];
      v47 = v45;
      a1[14].m128i_i64[0] = 0;
      v48 = &v46[v47];
      v49 = v46 + 1;
      a1[9] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v46, (__m128i)(unsigned __int64)(*v46 + 4096LL));
      if ( v47 != 1 )
      {
        do
        {
          ++v49;
          operator delete();
        }
        while ( v48 != v49 );
      }
      a1[10].m128i_i32[2] = 1;
    }
  }
  return v13;
}

