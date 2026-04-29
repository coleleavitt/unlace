__int64 *__fastcall sub_3A7220(__int64 *a1, __int64 a2, __int64 a3, int a4)
{
  bool v7; // zf
  __int64 v9; // rsi
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbp
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int32 v20; // ebp
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // r14
  __int64 v24; // rax
  unsigned __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rbp
  __m128i v29; // xmm1
  unsigned __int64 v30; // rax
  __m128i v31; // xmm0
  __int64 v32; // rdx
  __int64 v33; // r14
  __int64 k; // r13
  __int64 *v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // r14
  __int64 m; // r13
  __int64 *v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rcx
  __int64 v44; // rbp
  const __m128i *v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rdx
  __m128i v48; // xmm0
  bool v49; // cf
  __int64 v50; // rdx
  __int64 v51; // r13
  __int64 i; // rbp
  __int64 *v53; // rax
  __int64 v54; // rdi
  __int64 v55; // rdi
  __int64 v56; // rdx
  __int64 v57; // r13
  __int64 j; // rbp
  __int64 *v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rsi
  const __m128i *v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rdx
  __m128i v67; // xmm0
  __int64 v68; // rax
  __int64 v69; // rbx
  const __m128i *v70; // rdi
  __int64 v71; // rax
  __int64 v72; // rdx
  __m128i v73; // xmm0
  __int64 v74; // rcx
  const __m128i *v75; // rdi
  __int64 v76; // rax
  __int64 v77; // rdx
  __m128i v78; // xmm0
  __int64 v79; // [rsp+0h] [rbp-88h]
  unsigned __int64 v80; // [rsp+0h] [rbp-88h]
  __int64 v81; // [rsp+0h] [rbp-88h]
  unsigned __int64 v82; // [rsp+0h] [rbp-88h]
  __int64 v83; // [rsp+0h] [rbp-88h]
  __int64 v84; // [rsp+0h] [rbp-88h]
  __int64 v85; // [rsp+0h] [rbp-88h]
  __int64 v86; // [rsp+18h] [rbp-70h] BYREF
  __m128i v87; // [rsp+20h] [rbp-68h] BYREF
  const __m128i *v88; // [rsp+30h] [rbp-58h] BYREF
  __m128i v89; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v90; // [rsp+48h] [rbp-40h]

  v7 = *(_QWORD *)(a3 + 32) == 0;
  v90 = __readfsqword(0x28u);
  if ( !v7 && !get_func() || (v9 = *(_QWORD *)(a3 + 16), sub_14CDC0(&v86, v9, (_QWORD *)(a3 + 32), nullptr, 0), !v86) )
  {
    *a1 = 0;
    return a1;
  }
  v88 = nullptr;
  v89 = 0;
  sub_2581E0(v86, v9, v10);
  v12 = v86;
  if ( a4 )
  {
    v20 = a4 - 1;
    v21 = sub_38C6C0(v86, v20, v11);
    v22 = v21;
    if ( v21 )
    {
      v87.m128i_i64[0] = v21;
      v23 = (__int64)v88;
      v24 = v89.m128i_i64[0];
      v87.m128i_i32[3] = v20;
      v87.m128i_i32[2] = -2;
      v25 = v89.m128i_i64[0] + 1;
      if ( &v87 >= v88 && &v87 < &v88[v89.m128i_i64[1]] )
      {
        if ( v89.m128i_i64[1] < v25 )
        {
          v84 = v89.m128i_i64[1];
          v23 = qvector_reserve((__int64)&v88, 0, v89.m128i_i64[0] + 1, 16);
          v74 = v89.m128i_i64[1];
          v75 = v88;
          v89.m128i_i64[1] = v84;
          v76 = v89.m128i_i64[0] - 1;
          if ( v89.m128i_i64[0] - 1 >= 0 )
          {
            v77 = v23;
            do
            {
              v78 = _mm_loadu_si128(v75);
              v77 += 16;
              ++v75;
              *(__m128i *)(v77 - 16) = v78;
              v49 = v76-- == 0;
            }
            while ( !v49 );
            v75 = v88;
          }
          v85 = v74;
          qfree((__int64)v75);
          v24 = v89.m128i_i64[0];
          v88 = (const __m128i *)v23;
          v89.m128i_i64[1] = v85;
        }
        v68 = v23 + 16 * v24;
        *(_QWORD *)v68 = v22;
        *(_DWORD *)(v68 + 8) = -2;
        *(_DWORD *)(v68 + 12) = v20;
      }
      else
      {
        if ( v89.m128i_i64[1] < v25 )
        {
          v83 = v89.m128i_i64[1];
          v23 = qvector_reserve((__int64)&v88, 0, v89.m128i_i64[0] + 1, 16);
          v69 = v89.m128i_i64[1];
          v70 = v88;
          v89.m128i_i64[1] = v83;
          v71 = v89.m128i_i64[0] - 1;
          if ( v89.m128i_i64[0] - 1 >= 0 )
          {
            v72 = v23;
            do
            {
              v73 = _mm_loadu_si128(v70);
              v72 += 16;
              ++v70;
              *(__m128i *)(v72 - 16) = v73;
              v49 = v71-- == 0;
            }
            while ( !v49 );
            v70 = v88;
          }
          qfree((__int64)v70);
          v88 = (const __m128i *)v23;
          v24 = v89.m128i_i64[0];
          v89.m128i_i64[1] = v69;
        }
        *(__m128i *)(v23 + 16 * v24) = _mm_load_si128(&v87);
      }
      ++v89.m128i_i64[0];
    }
  }
  else
  {
    v13 = *(int *)(v86 + 152);
    if ( v13 < *(_QWORD *)(v86 + 136) )
    {
      do
      {
        v15 = sub_38C6C0(v12, (unsigned int)v13, v11);
        v16 = v15;
        if ( v15 )
        {
          v17 = (unsigned __int64)v88;
          v87.m128i_i64[0] = v15;
          v18 = v89.m128i_i64[0];
          v87.m128i_i32[2] = -2;
          v87.m128i_i32[3] = v13;
          v11 = v89.m128i_i64[0] + 1;
          if ( &v87 < v88 || &v87 >= &v88[v89.m128i_i64[1]] )
          {
            if ( v89.m128i_i64[1] < v11 )
            {
              v79 = v89.m128i_i64[1];
              v43 = qvector_reserve((__int64)&v88, 0, v11, 16);
              v44 = v89.m128i_i64[1];
              v45 = v88;
              v89.m128i_i64[1] = v79;
              v46 = v89.m128i_i64[0] - 1;
              if ( v89.m128i_i64[0] - 1 >= 0 )
              {
                v47 = v43;
                do
                {
                  v48 = _mm_loadu_si128(v45);
                  v47 += 16;
                  ++v45;
                  *(__m128i *)(v47 - 16) = v48;
                  v49 = v46-- == 0;
                }
                while ( !v49 );
                v45 = v88;
              }
              v80 = v43;
              qfree((__int64)v45);
              v17 = v80;
              v18 = v89.m128i_i64[0];
              v89.m128i_i64[1] = v44;
              v88 = (const __m128i *)v80;
            }
            *(__m128i *)(v17 + 16 * v18) = _mm_load_si128(&v87);
          }
          else
          {
            if ( v89.m128i_i64[1] < v11 )
            {
              v81 = v89.m128i_i64[1];
              v62 = qvector_reserve((__int64)&v88, 0, v11, 16);
              v63 = v89.m128i_i64[1];
              v64 = v88;
              v89.m128i_i64[1] = v81;
              v65 = v89.m128i_i64[0] - 1;
              if ( v89.m128i_i64[0] - 1 >= 0 )
              {
                v66 = v62;
                do
                {
                  v67 = _mm_loadu_si128(v64);
                  v66 += 16;
                  ++v64;
                  *(__m128i *)(v66 - 16) = v67;
                  v49 = v65-- == 0;
                }
                while ( !v49 );
                v64 = v88;
              }
              v82 = v62;
              qfree((__int64)v64);
              v17 = v82;
              v18 = v89.m128i_i64[0];
              v88 = (const __m128i *)v82;
              v89.m128i_i64[1] = v63;
            }
            v14 = v17 + 16 * v18;
            *(_QWORD *)v14 = v16;
            *(_DWORD *)(v14 + 8) = -2;
            *(_DWORD *)(v14 + 12) = v13;
          }
          ++v89.m128i_i64[0];
        }
        v12 = v86;
        LODWORD(v13) = v13 + 1;
      }
      while ( (unsigned __int64)(int)v13 < *(_QWORD *)(v86 + 136) );
    }
  }
  v26 = operator new(0x40u);
  v27 = v86;
  v28 = v26;
  v29 = _mm_loadu_si128(&v89);
  v30 = (unsigned __int64)v88;
  if ( !v86 )
  {
    v61 = *(_QWORD *)(a2 + 40);
    *(_DWORD *)(v28 + 8) = 1;
    *(_QWORD *)v28 = &off_4E7050;
    *(_QWORD *)(v28 + 16) = v61;
    *(_QWORD *)(v28 + 24) = 0;
    *(_DWORD *)(v28 + 56) = 0;
    *(_QWORD *)(v28 + 32) = v30;
    *a1 = v28;
    *(__m128i *)(v28 + 40) = v29;
    return a1;
  }
  ++*(_DWORD *)(v86 + 104);
  v31 = _mm_loadl_epi64((const __m128i *)(a2 + 40));
  *(_DWORD *)(v28 + 8) = 1;
  *(_QWORD *)v28 = &off_4E7050;
  *(__m128i *)(v28 + 16) = _mm_unpacklo_epi64(v31, (__m128i)(unsigned __int64)v27);
  ++*(_DWORD *)(v27 + 104);
  *(_DWORD *)(v28 + 56) = 0;
  *(_QWORD *)(v28 + 32) = v30;
  *(__m128i *)(v28 + 40) = v29;
  v7 = (*(_DWORD *)(v27 + 104))-- == 1;
  v88 = nullptr;
  v89 = 0;
  if ( !v7 )
  {
    *a1 = v28;
LABEL_52:
    v7 = (*(_DWORD *)(v27 + 104))-- == 1;
    if ( v7 )
    {
      sub_258970((__int64 *)v27);
      v50 = *(_QWORD *)(v27 + 184);
      if ( v50 )
      {
        v51 = *(_QWORD *)(v27 + 192);
        if ( v51 )
        {
          for ( i = 0; i != v51; ++i )
          {
            v53 = (__int64 *)(v50 + 24 * i);
            v54 = *v53;
            if ( *v53 )
            {
              v53[1] = 0;
              qfree(v54);
              v50 = *(_QWORD *)(v27 + 184);
            }
          }
        }
        *(_QWORD *)(v27 + 192) = 0;
        qfree(v50);
      }
      v55 = *(_QWORD *)(v27 + 160);
      if ( v55 )
      {
        *(_QWORD *)(v27 + 168) = 0;
        qfree(v55);
      }
      v56 = *(_QWORD *)(v27 + 128);
      if ( v56 )
      {
        v57 = *(_QWORD *)(v27 + 136);
        if ( v57 )
        {
          for ( j = 0; j != v57; ++j )
          {
            v59 = (__int64 *)(v56 + 32 * j);
            v60 = *v59;
            if ( *v59 )
            {
              v59[1] = 0;
              qfree(v60);
              v56 = *(_QWORD *)(v27 + 128);
            }
          }
        }
        *(_QWORD *)(v27 + 136) = 0;
        qfree(v56);
      }
      sub_255050(v27 + 16);
      j__qfree(v27);
    }
    return a1;
  }
  sub_258970((__int64 *)v27);
  v32 = *(_QWORD *)(v27 + 184);
  if ( v32 )
  {
    v33 = *(_QWORD *)(v27 + 192);
    if ( v33 )
    {
      for ( k = 0; k != v33; ++k )
      {
        v35 = (__int64 *)(v32 + 24 * k);
        v36 = *v35;
        if ( *v35 )
        {
          v35[1] = 0;
          qfree(v36);
          v32 = *(_QWORD *)(v27 + 184);
        }
      }
    }
    *(_QWORD *)(v27 + 192) = 0;
    qfree(v32);
  }
  v37 = *(_QWORD *)(v27 + 160);
  if ( v37 )
  {
    *(_QWORD *)(v27 + 168) = 0;
    qfree(v37);
  }
  v38 = *(_QWORD *)(v27 + 128);
  if ( v38 )
  {
    v39 = *(_QWORD *)(v27 + 136);
    if ( v39 )
    {
      for ( m = 0; m != v39; ++m )
      {
        v41 = (__int64 *)(v38 + 32 * m);
        v42 = *v41;
        if ( *v41 )
        {
          v41[1] = 0;
          qfree(v42);
          v38 = *(_QWORD *)(v27 + 128);
        }
      }
    }
    *(_QWORD *)(v27 + 136) = 0;
    qfree(v38);
  }
  sub_255050(v27 + 16);
  j__qfree(v27);
  if ( v88 )
  {
    v89.m128i_i64[0] = 0;
    qfree((__int64)v88);
  }
  v27 = v86;
  *a1 = v28;
  if ( v27 )
    goto LABEL_52;
  return a1;
}
