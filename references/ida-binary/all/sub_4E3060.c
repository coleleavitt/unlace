__int64 __fastcall vault_files_dirtree_widget_t__::vfunc_14(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  int v6; // eax
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int8 *v17; // rsi
  unsigned int v18; // r12d
  unsigned __int64 i; // rbx
  unsigned __int8 **v20; // rax
  signed __int64 v21; // rdx
  unsigned __int64 v22; // rbx
  void *v23; // r13
  __int64 v24; // rdi
  __m128i v25; // xmm0
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rbp
  __int64 v29; // rbx
  __int64 *v30; // rax
  __int64 v31; // rdi
  void *v33; // rax
  __int128 v34; // xmm0
  unsigned __int64 v35; // rdx
  __m128i v36; // [rsp+0h] [rbp-E8h] BYREF
  __m128i v37; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v38; // [rsp+20h] [rbp-C8h] BYREF
  __int128 v39; // [rsp+28h] [rbp-C0h]
  void *src; // [rsp+38h] [rbp-B0h] BYREF
  __int128 v41; // [rsp+40h] [rbp-A8h]
  __int64 v42; // [rsp+50h] [rbp-98h]
  __int128 v43; // [rsp+58h] [rbp-90h]
  __int128 v44; // [rsp+68h] [rbp-80h]
  __int128 v45; // [rsp+78h] [rbp-70h]
  __int128 v46; // [rsp+88h] [rbp-60h]
  int v47; // [rsp+98h] [rbp-50h]
  __int64 v48; // [rsp+A0h] [rbp-48h]
  __int64 v49; // [rsp+A8h] [rbp-40h]
  __int64 v50; // [rsp+B0h] [rbp-38h]
  unsigned __int64 v51; // [rsp+B8h] [rbp-30h]

  v4 = *a1;
  v51 = __readfsqword(0x28u);
  v6 = (*(__int64 (__fastcall **)(__int64 *))(v4 + 288))(a1);
  v38 = 0;
  v39 = 0;
  v7 = v6;
  v41 = 0;
  v43 = 0;
  src = nullptr;
  v42 = 0;
  v47 = -1;
  v48 = 12;
  v49 = -1;
  v50 = -1;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  if ( v6 )
  {
    v8 = qvector_reserve(&v38, 0, v6, 24);
    v9 = v39;
    v38 = v8;
    if ( (unsigned __int64)v39 < v7 )
    {
      v10 = 24 * v39;
      v11 = 24 * v39 + v8;
      *(_QWORD *)v11 = 0;
      *(_OWORD *)(v11 + 8) = 0;
      v12 = v9 + 1;
      if ( v9 + 1 < v7 )
      {
        v13 = v10 + 24;
        do
        {
          ++v12;
          v14 = v13 + v38;
          v13 += 24;
          *(_QWORD *)v14 = 0;
          *(_OWORD *)(v14 + 8) = 0;
        }
        while ( v7 != v12 );
      }
    }
    v15 = v41;
    *(_QWORD *)&v39 = v7;
    if ( v7 != (_QWORD)v41 )
    {
      v37 = 0;
      if ( v7 >= (unsigned __int64)v41 )
      {
        if ( &v37 < src || &v37 >= (__m128i *)((char *)src + 16 * *((_QWORD *)&v41 + 1)) )
        {
          if ( *((_QWORD *)&v41 + 1) < v7 )
          {
            src = (void *)qvector_reserve(&src, src, v7, 16);
            v15 = v41;
          }
          if ( v15 < v7 )
          {
            do
            {
              v16 = v15++;
              *((__m128i *)src + v16) = _mm_load_si128(&v37);
            }
            while ( v7 != v15 );
          }
        }
        else
        {
          v34 = 0;
          if ( *((_QWORD *)&v41 + 1) < v7 )
          {
            src = (void *)qvector_reserve(&src, src, v7, 16);
            v34 = 0;
            v15 = v41;
          }
          if ( v15 < v7 )
          {
            do
            {
              v35 = v15++;
              *((_OWORD *)src + v35) = v34;
            }
            while ( v7 != v15 );
          }
        }
      }
      *(_QWORD *)&v41 = v7;
    }
  }
  v17 = (unsigned __int8 *)&v38;
  v18 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64))(*a1 + 120))(a1, &v38, a3);
  if ( (_BYTE)v18 )
  {
    sub_4D8E40(&v38);
    for ( i = 0; i < (unsigned __int64)v39; ++i )
    {
      v17 = (unsigned __int8 *)&s1;
      v20 = (unsigned __int8 **)(v38 + 24 * i);
      v21 = (signed __int64)v20[1];
      if ( v21 )
      {
        v17 = *v20;
        --v21;
      }
      sub_4DC370((__int64 **)a2, v17, v21);
    }
    v22 = v41;
    v23 = nullptr;
    *(_QWORD *)(a2 + 112) = v48;
    *(_DWORD *)(a2 + 120) = v49;
    if ( v22 )
    {
      v33 = (void *)qalloc_or_throw(16 * v22);
      v17 = (unsigned __int8 *)src;
      v23 = v33;
      memcpy(v33, src, 16 * v22);
    }
    v24 = *(_QWORD *)(a2 + 32);
    v25 = _mm_unpacklo_epi64((__m128i)v22, (__m128i)v22);
    if ( v24 )
    {
      *(_QWORD *)(a2 + 40) = 0;
      v36 = v25;
      qfree(v24, (const char *)v17);
      v25 = _mm_load_si128(&v36);
    }
    v26 = HIDWORD(v49);
    *(_QWORD *)(a2 + 32) = v23;
    *(__m128i *)(a2 + 40) = v25;
    *(_DWORD *)(a2 + 124) = v26;
    *(_QWORD *)(a2 + 128) = v50;
  }
  if ( (_QWORD)v44 )
  {
    *((_QWORD *)&v44 + 1) = 0;
    qfree(v44, (const char *)v17);
  }
  if ( v42 )
  {
    *(_QWORD *)&v43 = 0;
    qfree(v42, (const char *)v17);
  }
  if ( src )
  {
    *(_QWORD *)&v41 = 0;
    qfree(src, (const char *)v17);
  }
  v27 = v38;
  if ( v38 )
  {
    v28 = v39;
    if ( (_QWORD)v39 )
    {
      v29 = 0;
      do
      {
        v30 = (__int64 *)(v27 + 24 * v29);
        v31 = *v30;
        if ( *v30 )
        {
          v30[1] = 0;
          qfree(v31, (const char *)v17);
          v27 = v38;
        }
        ++v29;
      }
      while ( v28 != v29 );
    }
    *(_QWORD *)&v39 = 0;
    qfree(v27, (const char *)v17);
  }
  return v18;
}
