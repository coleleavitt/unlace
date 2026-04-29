_QWORD *__fastcall sub_39F920(_QWORD *a1, __int64 a2, _QWORD *a3, int a4)
{
  bool v7; // zf
  __int64 v9; // rsi
  __int64 v10; // rdx
  __m128i v11; // xmm0
  unsigned __int64 v12; // rdx
  __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  __m128i *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbp
  const __m128i *v18; // rcx
  __int64 v19; // rax
  unsigned __int32 v21; // ebp
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // r14
  __int64 v25; // rax
  unsigned __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rbp
  __m128i v30; // xmm1
  const __m128i *v31; // rax
  __m128i v32; // xmm0
  __int64 v33; // rdx
  __int64 v34; // r14
  __int64 k; // r13
  __int64 *v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // r14
  __int64 m; // r13
  __int64 *v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rcx
  __int64 v45; // rbp
  const __m128i *v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rdx
  __m128i v49; // xmm0
  bool v50; // cf
  __int64 v51; // rdx
  __int64 v52; // r13
  __int64 i; // rbp
  __int64 *v54; // rax
  __int64 v55; // rdi
  __int64 v56; // rdi
  __int64 v57; // rdx
  __int64 v58; // r13
  __int64 j; // rbp
  __int64 *v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rsi
  const __m128i *v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rdx
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
  const __m128i *v80; // [rsp+0h] [rbp-88h]
  __int64 v81; // [rsp+0h] [rbp-88h]
  const __m128i *v82; // [rsp+0h] [rbp-88h]
  __int64 v83; // [rsp+0h] [rbp-88h]
  __int64 v84; // [rsp+0h] [rbp-88h]
  __int64 v85; // [rsp+0h] [rbp-88h]
  __int64 v86; // [rsp+18h] [rbp-70h] BYREF
  __m128i v87; // [rsp+20h] [rbp-68h] BYREF
  const __m128i *v88; // [rsp+30h] [rbp-58h] BYREF
  __m128i v89; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v90; // [rsp+48h] [rbp-40h]

  v7 = a3[4] == 0;
  v90 = __readfsqword(0x28u);
  if ( !v7 && !get_func(a3[3]) || (v9 = a3[2], sub_146700(&v86, v9, a3 + 4, nullptr, 0), !v86) )
  {
    *a1 = 0;
    return a1;
  }
  v88 = nullptr;
  v11.m128i_i64[0] = 0;
  v89 = 0;
  sub_250E60(v86, v9, v10);
  v13 = v86;
  if ( a4 )
  {
    v21 = a4 - 1;
    v22 = sub_384DC0(v86, v21, v12, 0.0);
    v23 = v22;
    if ( v22 )
    {
      v87.m128i_i64[0] = v22;
      v24 = (__int64)v88;
      v25 = v89.m128i_i64[0];
      v87.m128i_i32[3] = v21;
      v87.m128i_i32[2] = -2;
      v26 = v89.m128i_i64[0] + 1;
      if ( &v87 >= v88 && &v87 < &v88[v89.m128i_i64[1]] )
      {
        if ( v89.m128i_i64[1] < v26 )
        {
          v84 = v89.m128i_i64[1];
          v24 = qvector_reserve(&v88, 0, v89.m128i_i64[0] + 1, 16);
          v74 = v89.m128i_i64[1];
          v75 = v88;
          v89.m128i_i64[1] = v84;
          v76 = v89.m128i_i64[0] - 1;
          if ( v89.m128i_i64[0] - 1 >= 0 )
          {
            v77 = v24;
            do
            {
              v78 = _mm_loadu_si128(v75);
              v77 += 16;
              ++v75;
              *(__m128i *)(v77 - 16) = v78;
              v50 = v76-- == 0;
            }
            while ( !v50 );
            v75 = v88;
          }
          v85 = v74;
          qfree(v75);
          v25 = v89.m128i_i64[0];
          v88 = (const __m128i *)v24;
          v89.m128i_i64[1] = v85;
        }
        v68 = v24 + 16 * v25;
        *(_QWORD *)v68 = v23;
        *(_DWORD *)(v68 + 8) = -2;
        *(_DWORD *)(v68 + 12) = v21;
      }
      else
      {
        if ( v89.m128i_i64[1] < v26 )
        {
          v83 = v89.m128i_i64[1];
          v24 = qvector_reserve(&v88, 0, v89.m128i_i64[0] + 1, 16);
          v69 = v89.m128i_i64[1];
          v70 = v88;
          v89.m128i_i64[1] = v83;
          v71 = v89.m128i_i64[0] - 1;
          if ( v89.m128i_i64[0] - 1 >= 0 )
          {
            v72 = v24;
            do
            {
              v73 = _mm_loadu_si128(v70);
              v72 += 16;
              ++v70;
              *(__m128i *)(v72 - 16) = v73;
              v50 = v71-- == 0;
            }
            while ( !v50 );
            v70 = v88;
          }
          qfree(v70);
          v88 = (const __m128i *)v24;
          v25 = v89.m128i_i64[0];
          v89.m128i_i64[1] = v69;
        }
        *(__m128i *)(v24 + 16 * v25) = _mm_load_si128(&v87);
      }
      ++v89.m128i_i64[0];
    }
  }
  else
  {
    v14 = *(int *)(v86 + 152);
    if ( v14 < *(_QWORD *)(v86 + 136) )
    {
      do
      {
        v16 = sub_384DC0(v13, (unsigned int)v14, v12, *(double *)v11.m128i_i64);
        v17 = v16;
        if ( v16 )
        {
          v18 = v88;
          v87.m128i_i64[0] = v16;
          v19 = v89.m128i_i64[0];
          v87.m128i_i32[2] = -2;
          v87.m128i_i32[3] = v14;
          v12 = v89.m128i_i64[0] + 1;
          if ( &v87 < v88 || &v87 >= &v88[v89.m128i_i64[1]] )
          {
            if ( v89.m128i_i64[1] < v12 )
            {
              v79 = v89.m128i_i64[1];
              v44 = qvector_reserve(&v88, 0, v12, 16);
              v45 = v89.m128i_i64[1];
              v46 = v88;
              v89.m128i_i64[1] = v79;
              v47 = v89.m128i_i64[0] - 1;
              if ( v89.m128i_i64[0] - 1 >= 0 )
              {
                v48 = v44;
                do
                {
                  v49 = _mm_loadu_si128(v46);
                  v48 += 16;
                  ++v46;
                  *(__m128i *)(v48 - 16) = v49;
                  v50 = v47-- == 0;
                }
                while ( !v50 );
                v46 = v88;
              }
              v80 = (const __m128i *)v44;
              qfree(v46);
              v18 = v80;
              v19 = v89.m128i_i64[0];
              v89.m128i_i64[1] = v45;
              v88 = v80;
            }
            v11 = _mm_load_si128(&v87);
            v18[v19] = v11;
          }
          else
          {
            if ( v89.m128i_i64[1] < v12 )
            {
              v81 = v89.m128i_i64[1];
              v63 = qvector_reserve(&v88, 0, v12, 16);
              v64 = v89.m128i_i64[1];
              v65 = v88;
              v89.m128i_i64[1] = v81;
              v66 = v89.m128i_i64[0] - 1;
              if ( v89.m128i_i64[0] - 1 >= 0 )
              {
                v67 = v63;
                do
                {
                  v11 = _mm_loadu_si128(v65);
                  v67 += 16;
                  ++v65;
                  *(__m128i *)(v67 - 16) = v11;
                  v50 = v66-- == 0;
                }
                while ( !v50 );
                v65 = v88;
              }
              v82 = (const __m128i *)v63;
              qfree(v65);
              v18 = v82;
              v19 = v89.m128i_i64[0];
              v88 = v82;
              v89.m128i_i64[1] = v64;
            }
            v15 = (__m128i *)&v18[v19];
            v15->m128i_i64[0] = v17;
            v15->m128i_i32[2] = -2;
            v15->m128i_i32[3] = v14;
          }
          ++v89.m128i_i64[0];
        }
        v13 = v86;
        LODWORD(v14) = v14 + 1;
      }
      while ( (unsigned __int64)(int)v14 < *(_QWORD *)(v86 + 136) );
    }
  }
  v27 = operator new(0x40u);
  v28 = v86;
  v29 = v27;
  v30 = _mm_loadu_si128(&v89);
  v31 = v88;
  if ( !v86 )
  {
    v62 = *(_QWORD *)(a2 + 40);
    *(_DWORD *)(v29 + 8) = 1;
    *(_QWORD *)v29 = &off_4B3850;
    *(_QWORD *)(v29 + 16) = v62;
    *(_QWORD *)(v29 + 24) = 0;
    *(_DWORD *)(v29 + 56) = 0;
    *(_QWORD *)(v29 + 32) = v31;
    *a1 = v29;
    *(__m128i *)(v29 + 40) = v30;
    return a1;
  }
  ++*(_DWORD *)(v86 + 104);
  v32 = _mm_loadl_epi64((const __m128i *)(a2 + 40));
  *(_DWORD *)(v29 + 8) = 1;
  *(_QWORD *)v29 = &off_4B3850;
  *(__m128i *)(v29 + 16) = _mm_unpacklo_epi64(v32, (__m128i)(unsigned __int64)v28);
  ++*(_DWORD *)(v28 + 104);
  *(_DWORD *)(v29 + 56) = 0;
  *(_QWORD *)(v29 + 32) = v31;
  *(__m128i *)(v29 + 40) = v30;
  v7 = (*(_DWORD *)(v28 + 104))-- == 1;
  v88 = nullptr;
  v89 = 0;
  if ( !v7 )
  {
    *a1 = v29;
LABEL_52:
    v7 = (*(_DWORD *)(v28 + 104))-- == 1;
    if ( v7 )
    {
      sub_2515F0((__int64 *)v28);
      v51 = *(_QWORD *)(v28 + 184);
      if ( v51 )
      {
        v52 = *(_QWORD *)(v28 + 192);
        if ( v52 )
        {
          for ( i = 0; i != v52; ++i )
          {
            v54 = (__int64 *)(v51 + 24 * i);
            v55 = *v54;
            if ( *v54 )
            {
              v54[1] = 0;
              qfree(v55);
              v51 = *(_QWORD *)(v28 + 184);
            }
          }
        }
        *(_QWORD *)(v28 + 192) = 0;
        qfree(v51);
      }
      v56 = *(_QWORD *)(v28 + 160);
      if ( v56 )
      {
        *(_QWORD *)(v28 + 168) = 0;
        qfree(v56);
      }
      v57 = *(_QWORD *)(v28 + 128);
      if ( v57 )
      {
        v58 = *(_QWORD *)(v28 + 136);
        if ( v58 )
        {
          for ( j = 0; j != v58; ++j )
          {
            v60 = (__int64 *)(v57 + 32 * j);
            v61 = *v60;
            if ( *v60 )
            {
              v60[1] = 0;
              qfree(v61);
              v57 = *(_QWORD *)(v28 + 128);
            }
          }
        }
        *(_QWORD *)(v28 + 136) = 0;
        qfree(v57);
      }
      sub_24DCD0(v28 + 16);
      j__qfree(v28);
    }
    return a1;
  }
  sub_2515F0((__int64 *)v28);
  v33 = *(_QWORD *)(v28 + 184);
  if ( v33 )
  {
    v34 = *(_QWORD *)(v28 + 192);
    if ( v34 )
    {
      for ( k = 0; k != v34; ++k )
      {
        v36 = (__int64 *)(v33 + 24 * k);
        v37 = *v36;
        if ( *v36 )
        {
          v36[1] = 0;
          qfree(v37);
          v33 = *(_QWORD *)(v28 + 184);
        }
      }
    }
    *(_QWORD *)(v28 + 192) = 0;
    qfree(v33);
  }
  v38 = *(_QWORD *)(v28 + 160);
  if ( v38 )
  {
    *(_QWORD *)(v28 + 168) = 0;
    qfree(v38);
  }
  v39 = *(_QWORD *)(v28 + 128);
  if ( v39 )
  {
    v40 = *(_QWORD *)(v28 + 136);
    if ( v40 )
    {
      for ( m = 0; m != v40; ++m )
      {
        v42 = (__int64 *)(v39 + 32 * m);
        v43 = *v42;
        if ( *v42 )
        {
          v42[1] = 0;
          qfree(v43);
          v39 = *(_QWORD *)(v28 + 128);
        }
      }
    }
    *(_QWORD *)(v28 + 136) = 0;
    qfree(v39);
  }
  sub_24DCD0(v28 + 16);
  j__qfree(v28);
  if ( v88 )
  {
    v89.m128i_i64[0] = 0;
    qfree(v88);
  }
  v28 = v86;
  *a1 = v29;
  if ( v28 )
    goto LABEL_52;
  return a1;
}
