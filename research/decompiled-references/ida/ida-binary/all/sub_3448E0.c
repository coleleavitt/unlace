unsigned __int64 __fastcall sub_3448E0(__int64 a1, const char *a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  const char *v5; // r13
  unsigned int v6; // eax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  __int64 v10; // rdi
  __m128i v11; // xmm2
  int v12; // ecx
  __m128i v13; // xmm1
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // r14
  __int64 v20; // rbp
  _QWORD *v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdi
  __m128i *v27; // r13
  __int64 v28; // rbx
  __m128i *v29; // rbp
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  __m128i *v32; // rbx
  const __m128i *v33; // rdi
  __m128i v35; // xmm1
  __m128i v36; // xmm1
  __m128i v37; // xmm2
  __m128i v38; // xmm1
  int v39; // ecx
  __int64 v40; // rdx
  __int64 v41; // rax
  unsigned __int64 v42; // r15
  __int64 v43; // rdi
  _QWORD *v44; // r14
  __int64 v45; // rdi
  __int64 v46; // rdi
  __int64 v47; // rdi
  __int64 v48; // rdi
  unsigned int v49; // [rsp+Ch] [rbp-10Ch]
  __m128i v50; // [rsp+10h] [rbp-108h] BYREF
  __m128i v51; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v52; // [rsp+30h] [rbp-E8h]
  __int128 v53; // [rsp+38h] [rbp-E0h]
  __int128 v54; // [rsp+48h] [rbp-D0h]
  __int64 v55; // [rsp+58h] [rbp-C0h]
  __int128 v56; // [rsp+60h] [rbp-B8h]
  __m128i v57; // [rsp+70h] [rbp-A8h] BYREF
  __m128i v58; // [rsp+80h] [rbp-98h] BYREF
  int v59; // [rsp+90h] [rbp-88h]
  __int64 v60; // [rsp+98h] [rbp-80h]
  __int64 v61; // [rsp+A0h] [rbp-78h]
  __int128 v62; // [rsp+A8h] [rbp-70h]
  __int64 v63; // [rsp+B8h] [rbp-60h]
  __int128 v64; // [rsp+C0h] [rbp-58h]
  unsigned __int64 v65; // [rsp+D8h] [rbp-40h]

  v65 = __readfsqword(0x28u);
  v3 = sub_1F4200();
  if ( !v3 )
    return v65 - __readfsqword(0x28u);
  v4 = sub_1EA560(v3 + 384);
  v5 = (const char *)v4;
  if ( !v4 )
    return v65 - __readfsqword(0x28u);
  *(_QWORD *)(a1 + 224) = -1;
  v6 = navstack_t_stack_size(v4);
  v7 = *(_QWORD *)(a1 + 208);
  v8 = v6;
  v49 = v6;
  if ( v6 != v7 )
  {
    v51.m128i_i64[0] = 0;
    v50 = 0;
    v51.m128i_i64[1] = -1;
    v52 = 0;
    v55 = 0;
    v53 = 0;
    v54 = 0;
    v56 = 0;
    if ( v6 < v7 )
    {
      v42 = v6;
      do
      {
        v43 = *(_QWORD *)(*(_QWORD *)(a1 + 200) + 96 * v42 + 40);
        v44 = (_QWORD *)(*(_QWORD *)(a1 + 200) + 96 * v42);
        if ( v43 )
        {
          qfree(v43, a2);
          v44[5] = 0;
        }
        v45 = v44[6];
        if ( v45 )
        {
          v44[7] = 0;
          qfree(v45, a2);
          v44[6] = 0;
          v44[8] = 0;
        }
        v46 = v44[9];
        if ( v46 )
        {
          v44[10] = 0;
          qfree(v46, a2);
        }
        v47 = v44[6];
        if ( v47 )
        {
          v44[7] = 0;
          qfree(v47, a2);
        }
        v48 = v44[5];
        if ( v48 )
          qfree(v48, a2);
        ++v42;
      }
      while ( v42 < v7 );
      *(_QWORD *)(a1 + 208) = v8;
    }
    else
    {
      a2 = *(const char **)(a1 + 200);
      v9 = *(_QWORD *)(a1 + 216);
      v10 = a1 + 200;
      if ( &v50 < (__m128i *)a2 || &v50 >= (__m128i *)&a2[96 * v9] )
      {
        if ( v9 < v6 )
        {
          *(_QWORD *)(a1 + 200) = qvector_reserve(v10, a2, v6, 96);
          v7 = *(_QWORD *)(a1 + 208);
        }
        if ( v7 < v8 )
        {
          v11 = _mm_load_si128(&v50);
          v12 = v52;
          v13 = _mm_load_si128(&v51);
          v14 = 96 * v7;
          do
          {
            ++v7;
            v15 = v14 + *(_QWORD *)(a1 + 200);
            v14 += 96;
            *(_QWORD *)(v15 + 40) = 0;
            *(_DWORD *)(v15 + 32) = v12;
            *(_QWORD *)(v15 + 48) = 0;
            *(_QWORD *)(v15 + 72) = 0;
            *(__m128i *)v15 = v11;
            *(__m128i *)(v15 + 16) = v13;
            *(_OWORD *)(v15 + 56) = 0;
            *(_OWORD *)(v15 + 80) = 0;
          }
          while ( v8 != v7 );
        }
      }
      else
      {
        v35 = _mm_load_si128(&v50);
        v60 = 0;
        v61 = 0;
        v57 = v35;
        v36 = _mm_load_si128(&v51);
        v59 = v52;
        v63 = 0;
        v58 = v36;
        v62 = 0;
        v64 = 0;
        if ( v9 < v6 )
        {
          *(_QWORD *)(a1 + 200) = qvector_reserve(v10, a2, v6, 96);
          v7 = *(_QWORD *)(a1 + 208);
        }
        if ( v7 < v8 )
        {
          v37 = _mm_load_si128(&v57);
          v38 = _mm_load_si128(&v58);
          v39 = v59;
          v40 = 96 * v7;
          do
          {
            ++v7;
            v41 = v40 + *(_QWORD *)(a1 + 200);
            v40 += 96;
            *(_QWORD *)(v41 + 40) = 0;
            *(_DWORD *)(v41 + 32) = v39;
            *(_QWORD *)(v41 + 48) = 0;
            *(_QWORD *)(v41 + 72) = 0;
            *(__m128i *)v41 = v37;
            *(__m128i *)(v41 + 16) = v38;
            *(_OWORD *)(v41 + 56) = 0;
            *(_OWORD *)(v41 + 80) = 0;
          }
          while ( v8 != v7 );
        }
      }
      *(_QWORD *)(a1 + 208) = v8;
    }
  }
  v16 = 0;
  *(_QWORD *)(a1 + 224) = v8 - 1 - (unsigned int)navstack_t_stack_index(v5);
  if ( v8 )
  {
    do
    {
      a2 = v5;
      v17 = v49 - 1 - (unsigned int)v16;
      v18 = 96 * v16++;
      navstack_t_get_stack_entry(*(_QWORD *)(a1 + 200) + v18, v5, v17);
    }
    while ( v8 != v16 );
  }
  v19 = *(_QWORD *)(a1 + 240);
  v20 = 0;
  if ( v19 )
  {
    do
    {
      v21 = (_QWORD *)(*(_QWORD *)(a1 + 232) + 96 * v20);
      v22 = v21[5];
      if ( v22 )
      {
        qfree(v22, a2);
        v21[5] = 0;
      }
      v23 = v21[6];
      if ( v23 )
      {
        v21[7] = 0;
        qfree(v23, a2);
        v21[6] = 0;
        v21[8] = 0;
      }
      v24 = v21[9];
      if ( v24 )
      {
        v21[10] = 0;
        qfree(v24, a2);
      }
      v25 = v21[6];
      if ( v25 )
      {
        v21[7] = 0;
        qfree(v25, a2);
      }
      v26 = v21[5];
      if ( v26 )
        qfree(v26, a2);
      ++v20;
    }
    while ( v19 != v20 );
  }
  *(_QWORD *)(a1 + 240) = 0;
  navstack_t_get_all_current(v5, a1 + 232);
  v27 = *(__m128i **)(a1 + 232);
  v28 = 6LL * *(_QWORD *)(a1 + 240);
  v29 = &v27[v28];
  if ( v27 == &v27[v28] )
    return v65 - __readfsqword(0x28u);
  v30 = 0xAAAAAAAAAAAAAAABLL * ((v28 * 16) >> 5);
  if ( v30 )
  {
    _BitScanReverse64(&v31, v30);
    sub_343E20(*(__m128i **)(a1 + 232), (__int64)v29, (char *)(2LL * (int)v31));
    if ( v28 > 96 )
    {
      v32 = v27 + 96;
      sub_3434C0(v27, v27 + 96);
      do
      {
        v33 = v32;
        v32 += 6;
        sub_3432C0(v33);
      }
      while ( v29 != v32 );
      return v65 - __readfsqword(0x28u);
    }
  }
  else
  {
    sub_343E20(*(__m128i **)(a1 + 232), (__int64)v29, (char *)0xFFFFFFFFFFFFFFFELL);
  }
  return sub_3434C0(v27, v29);
}
