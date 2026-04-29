__int64 __fastcall sub_335360(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 v6; // rbp
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  int v11; // r15d
  __int64 v12; // rdi
  __int64 v13; // r14
  __int64 v14; // r13
  __int64 v15; // rbp
  __int64 v16; // rdi
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rdx
  size_t v20; // r13
  unsigned __int64 v21; // r13
  __int64 v22; // rbp
  __int64 v23; // rax
  void *v24; // rax
  void *v25; // rsi
  unsigned __int64 v26; // rbp
  __int64 v27; // r12
  __int64 v28; // rdi
  __int64 v29; // r13
  __int64 v30; // r14
  __int64 v31; // r15
  __int64 v32; // rbp
  unsigned __int64 v33; // r8
  size_t v34; // r9
  const void *v35; // r10
  void *v36; // rax
  unsigned int v37; // eax
  char v38; // al
  __int64 v39; // rbp
  __int64 v40; // rax
  void *v41; // rax
  void *v42; // rsi
  unsigned __int8 tinfo_details; // [rsp+7h] [rbp-189h]
  unsigned __int64 v44; // [rsp+10h] [rbp-180h]
  unsigned __int64 v45; // [rsp+10h] [rbp-180h]
  size_t v46; // [rsp+18h] [rbp-178h]
  size_t v47; // [rsp+20h] [rbp-170h]
  size_t v48; // [rsp+20h] [rbp-170h]
  size_t n; // [rsp+40h] [rbp-150h]
  _QWORD v50[2]; // [rsp+48h] [rbp-148h] BYREF
  __m128i si128; // [rsp+58h] [rbp-138h] BYREF
  void *v52; // [rsp+68h] [rbp-128h]
  size_t v53[2]; // [rsp+70h] [rbp-120h]
  _QWORD v54[2]; // [rsp+80h] [rbp-110h] BYREF
  int v55; // [rsp+90h] [rbp-100h]
  unsigned __int8 v56[16]; // [rsp+98h] [rbp-F8h] BYREF
  __int64 v57; // [rsp+A8h] [rbp-E8h]
  __int64 v58; // [rsp+B0h] [rbp-E0h] BYREF
  void *src; // [rsp+B8h] [rbp-D8h]
  __int128 v60; // [rsp+C0h] [rbp-D0h]
  _DWORD v61[4]; // [rsp+D0h] [rbp-C0h] BYREF
  int v62; // [rsp+E0h] [rbp-B0h]
  __int64 v63; // [rsp+E8h] [rbp-A8h] BYREF
  __int128 v64; // [rsp+F0h] [rbp-A0h]
  __int64 v65; // [rsp+100h] [rbp-90h]
  __int64 v66; // [rsp+108h] [rbp-88h] BYREF
  __int64 v67; // [rsp+110h] [rbp-80h] BYREF
  __int128 v68; // [rsp+118h] [rbp-78h]
  __int64 v69; // [rsp+128h] [rbp-68h]
  __int128 v70; // [rsp+130h] [rbp-60h]
  char v71; // [rsp+140h] [rbp-50h]
  unsigned __int64 v72; // [rsp+150h] [rbp-40h]

  v72 = __readfsqword(0x28u);
  v3 = *a2;
  v63 = 0;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v69 = 0;
  v71 = 16;
  v64 = 0;
  v68 = 0;
  v70 = 0;
  tinfo_details = get_tinfo_details(v3, 12, &v63);
  if ( tinfo_details && ((get_tinfo_property(v66, 2) & 0x3F) == 1 || (_DWORD)v67) )
  {
    v11 = v64;
    v12 = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 8) = v64;
    if ( v12 )
    {
      v13 = *(_QWORD *)(a1 + 32);
      if ( v13 )
      {
        v14 = 0;
        do
        {
          v15 = v12 + 80 * v14;
          cleanup_argloc(v15 + 56);
          v16 = *(_QWORD *)(v15 + 32);
          if ( v16 )
          {
            *(_QWORD *)(v15 + 40) = 0;
            qfree(v16);
          }
          ++v14;
          clear_tinfo_t(v15 + 24);
          sub_11C7E0(v15);
          v12 = *(_QWORD *)(a1 + 24);
        }
        while ( v14 != v13 );
      }
      *(_QWORD *)(a1 + 32) = 0;
      qfree(v12);
      *(_QWORD *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 40) = 0;
    }
    v17 = *(_QWORD *)(a1 + 32);
    if ( v11 != v17 )
    {
      v50[1] = 0;
      v50[0] = 0xFFFFFFFF00000000LL;
      si128 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
      v52 = nullptr;
      v54[0] = 0;
      v54[1] = 0;
      v55 = 0;
      *(_OWORD *)v53 = 0;
      if ( v11 < v17 )
      {
        v26 = v11;
        do
        {
          v27 = *(_QWORD *)(a1 + 24) + 80 * v26;
          cleanup_argloc(v27 + 56);
          v28 = *(_QWORD *)(v27 + 32);
          if ( v28 )
          {
            *(_QWORD *)(v27 + 40) = 0;
            qfree(v28);
          }
          ++v26;
          clear_tinfo_t(v27 + 24);
          sub_11C7E0(v27);
        }
        while ( v26 < v17 );
        *(_QWORD *)(a1 + 32) = v11;
      }
      else
      {
        v18 = *(_QWORD *)(a1 + 24);
        v19 = *(_QWORD *)(a1 + 40);
        if ( (unsigned __int64)v50 < v18 || (unsigned __int64)v50 >= v18 + 80 * v19 )
        {
          if ( v19 < v11 )
          {
            *(_QWORD *)(a1 + 24) = qvector_reserve(a1 + 24, v18, v11, 80);
            v17 = *(_QWORD *)(a1 + 32);
          }
          for ( ; v17 < v11; *(_DWORD *)(v39 + 72) = v55 )
          {
            v39 = *(_QWORD *)(a1 + 24) + 80 * v17;
            sub_123480(v39, (unsigned __int8 *)v50);
            v40 = si128.m128i_i64[0];
            *(_QWORD *)(v39 + 24) = 0;
            *(_QWORD *)(v39 + 16) = v40;
            copy_tinfo_t(v39 + 24, &si128.m128i_u64[1]);
            *(_QWORD *)(v39 + 32) = 0;
            *(_OWORD *)(v39 + 40) = 0;
            if ( v53[0] )
            {
              v47 = v53[0];
              v41 = (void *)qalloc_or_throw(v53[0]);
              *(_QWORD *)(v39 + 32) = v41;
              v42 = v52;
              *(_QWORD *)(v39 + 48) = v47;
              memcpy(v41, v42, v47);
              *(_QWORD *)(v39 + 40) = v47;
            }
            *(_DWORD *)(v39 + 56) = 0;
            copy_argloc(v39 + 56, v54);
            ++v17;
          }
          *(_QWORD *)(a1 + 32) = v11;
        }
        else
        {
          sub_123480((__int64)v56, (unsigned __int8 *)v50);
          v58 = 0;
          v57 = si128.m128i_i64[0];
          copy_tinfo_t(&v58, &si128.m128i_u64[1]);
          v20 = v53[0];
          src = nullptr;
          v60 = 0;
          if ( v53[0] )
          {
            src = (void *)qalloc_or_throw(v53[0]);
            *((_QWORD *)&v60 + 1) = v20;
            memcpy(src, v52, v20);
            *(_QWORD *)&v60 = v20;
          }
          v61[0] = 0;
          copy_argloc(v61, v54);
          v62 = v55;
          if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)v11 )
            *(_QWORD *)(a1 + 24) = qvector_reserve(a1 + 24, *(_QWORD *)(a1 + 24), v11, 80);
          v21 = *(_QWORD *)(a1 + 32);
          if ( v21 < v11 )
          {
            do
            {
              v22 = *(_QWORD *)(a1 + 24) + 80 * v21;
              sub_123480(v22, v56);
              v23 = v57;
              *(_QWORD *)(v22 + 24) = 0;
              *(_QWORD *)(v22 + 16) = v23;
              copy_tinfo_t(v22 + 24, &v58);
              *(_QWORD *)(v22 + 32) = 0;
              *(_OWORD *)(v22 + 40) = 0;
              if ( (_QWORD)v60 )
              {
                n = v60;
                v24 = (void *)qalloc_or_throw(v60);
                *(_QWORD *)(v22 + 32) = v24;
                v25 = src;
                *(_QWORD *)(v22 + 48) = n;
                memcpy(v24, v25, n);
                *(_QWORD *)(v22 + 40) = n;
              }
              *(_DWORD *)(v22 + 56) = 0;
              copy_argloc(v22 + 56, v61);
              ++v21;
              *(_DWORD *)(v22 + 72) = v62;
            }
            while ( v11 != v21 );
          }
          *(_QWORD *)(a1 + 32) = v11;
          cleanup_argloc(v61);
          if ( src )
          {
            *(_QWORD *)&v60 = 0;
            qfree(src);
          }
          clear_tinfo_t(&v58);
          sub_11C7E0((__int64)v56);
        }
      }
      cleanup_argloc(v54);
      if ( v52 )
      {
        v53[0] = 0;
        qfree(v52);
      }
      clear_tinfo_t(&si128.m128i_u64[1]);
      sub_11C7E0((__int64)v50);
    }
    if ( v11 > 0 )
    {
      v29 = 0;
      v30 = 16 * (5LL * (unsigned int)(v11 - 1) + 5);
      do
      {
        v31 = v29 + v63;
        v32 = v29 + *(_QWORD *)(a1 + 24);
        *(_DWORD *)(v32 + 4) = get_tinfo_size(0, *(_QWORD *)(v29 + v63 + 64), 0);
        copy_tinfo_t(v32 + 24, v31 + 64);
        if ( v32 + 32 != v31 + 16 )
        {
          v33 = *(_QWORD *)(v31 + 24);
          if ( !v33 || (v34 = v33 - 1, v33 == 1) )
          {
            *(_QWORD *)(v32 + 40) = 0;
          }
          else
          {
            v35 = *(const void **)(v31 + 16);
            v36 = *(void **)(v32 + 32);
            if ( *(_QWORD *)(v32 + 48) < v33 )
            {
              v48 = *(_QWORD *)(v31 + 16);
              v46 = v33 - 1;
              v45 = *(_QWORD *)(v31 + 24);
              v36 = (void *)qvector_reserve(v32 + 32, *(_QWORD *)(v32 + 32), v45, 1);
              v35 = (const void *)v48;
              v34 = v46;
              *(_QWORD *)(v32 + 32) = v36;
              v33 = v45;
            }
            *(_QWORD *)(v32 + 40) = v33;
            v44 = v33;
            memmove(v36, v35, v34);
            *(_BYTE *)(*(_QWORD *)(v32 + 32) + v44 - 1) = 0;
          }
        }
        copy_argloc(v32 + 56, v31);
        v29 += 80;
        *(_DWORD *)(v32 + 72) = *(_DWORD *)(v31 + 72);
      }
      while ( v30 != v29 );
    }
    v37 = v71 & 0xF0;
    if ( (v71 & 0xF0) == 0xC0 )
      v37 = HIDWORD(v65);
    if ( v37 <= 0x10 )
      v37 = getinf(99);
    *(_DWORD *)(a1 + 20) = v37;
    copy_argloc(a1 + 80, &v67);
    copy_tinfo_t(a1 + 72, &v66);
    v38 = v65;
    if ( (v65 & 4) != 0 )
      *(_DWORD *)(a1 + 280) |= 0x10u;
    if ( (v38 & 2) != 0 )
      *(_DWORD *)(a1 + 280) |= 8u;
  }
  else
  {
    tinfo_details = 0;
  }
  if ( v69 )
  {
    *(_QWORD *)&v70 = 0;
    qfree(v69);
  }
  cleanup_argloc(&v67);
  clear_tinfo_t(&v66);
  v4 = v63;
  if ( v63 )
  {
    v5 = v64;
    if ( (_QWORD)v64 )
    {
      v6 = 0;
      do
      {
        v7 = (_QWORD *)(v4 + 80 * v6);
        clear_tinfo_t(v7 + 8);
        v8 = v7[5];
        if ( v8 )
        {
          v7[6] = 0;
          qfree(v8);
        }
        v9 = v7[2];
        if ( v9 )
        {
          v7[3] = 0;
          qfree(v9);
        }
        ++v6;
        cleanup_argloc(v7);
        v4 = v63;
      }
      while ( v5 != v6 );
    }
    *(_QWORD *)&v64 = 0;
    qfree(v4);
  }
  return tinfo_details;
}
