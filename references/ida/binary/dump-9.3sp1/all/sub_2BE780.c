__int64 *__fastcall sub_2BE780(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 *v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rdi
  int v13; // eax
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // r12
  __int64 v16; // rbx
  _QWORD *v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // r12
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rcx
  void *v27; // rax
  void *v28; // rsi
  unsigned __int64 v29; // rbx
  __int64 v30; // r13
  __int64 v31; // rdi
  unsigned __int64 v32; // r12
  __int64 v33; // rbx
  int *v34; // r15
  __int64 v35; // rbx
  unsigned int v36; // r13d
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rcx
  void *v40; // rax
  void *v41; // rsi
  __int64 v42; // rax
  __int64 v43; // [rsp+0h] [rbp-140h]
  size_t v45; // [rsp+20h] [rbp-120h]
  size_t n; // [rsp+40h] [rbp-100h]
  __m128i v47; // [rsp+48h] [rbp-F8h] BYREF
  _QWORD v48[2]; // [rsp+58h] [rbp-E8h] BYREF
  __m128i si128; // [rsp+68h] [rbp-D8h] BYREF
  void *v50; // [rsp+78h] [rbp-C8h] BYREF
  __int128 v51; // [rsp+80h] [rbp-C0h]
  __int64 v52; // [rsp+90h] [rbp-B0h]
  __int64 v53; // [rsp+98h] [rbp-A8h]
  int v54; // [rsp+A0h] [rbp-A0h]
  unsigned __int8 v55[16]; // [rsp+A8h] [rbp-98h] BYREF
  __int64 v56; // [rsp+B8h] [rbp-88h]
  __int64 v57; // [rsp+C0h] [rbp-80h] BYREF
  void *src; // [rsp+C8h] [rbp-78h] BYREF
  __int128 v59; // [rsp+D0h] [rbp-70h]
  int v60; // [rsp+E0h] [rbp-60h]
  int v61; // [rsp+F0h] [rbp-50h]
  unsigned __int64 v62; // [rsp+100h] [rbp-40h]

  v62 = __readfsqword(0x28u);
  v47 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a3, (__m128i)(unsigned __int64)a4);
  v5 = qalloc_or_throw(24, a2, (__int64)a3, a4);
  *(_QWORD *)v5 = 0;
  v6 = (__int64 *)v5;
  *(_OWORD *)(v5 + 8) = 0;
  v43 = *(_QWORD *)(a1 + 24);
  if ( v47.m128i_i64[1] - v47.m128i_i64[0] >= (unsigned __int64)((unsigned __int8)is_cvt64() == 0 ? 4 : 0) + 5 )
  {
    v13 = unpack_dd();
    if ( !v13 )
    {
      if ( !under_debugger )
        sub_383060(51188);
      BUG();
    }
    v14 = v13;
    if ( v13 == v6[1] )
      goto LABEL_34;
    v48[1] = 0;
    v50 = nullptr;
    si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
    v52 = 0;
    v53 = 0;
    v54 = 0;
    v51 = 0;
    v15 = v6[1];
    v48[0] = 0xFFFFFFFF00000000LL;
    if ( v13 < v15 )
    {
      v29 = v13;
      do
      {
        v30 = *v6 + 80 * v29;
        cleanup_argloc();
        v31 = *(_QWORD *)(v30 + 32);
        if ( v31 )
        {
          *(_QWORD *)(v30 + 40) = 0;
          qfree(v31);
        }
        ++v29;
        clear_tinfo_t();
        sub_11CDA0(v30);
      }
      while ( v29 < v15 );
      v6[1] = v14;
    }
    else if ( v15 < v13 )
    {
      v16 = *v6;
      v17 = v48;
      v18 = v6[2];
      if ( (unsigned __int64)v48 < *v6 || (unsigned __int64)v48 >= v16 + 80 * v18 )
      {
        if ( v18 >= v13
          || (v42 = qvector_reserve((__int64)v6, v16, v13, 80), v15 = v6[1], *v6 = v42, v16 = v42, v15 < v14) )
        {
          while ( 1 )
          {
            v37 = 80 * v15 + v16;
            sub_123A40(v37, (unsigned __int8 *)v48, v18, (__int64)v17);
            v38 = si128.m128i_i64[0];
            *(_QWORD *)(v37 + 24) = 0;
            *(_QWORD *)(v37 + 16) = v38;
            copy_tinfo_t();
            *(_QWORD *)(v37 + 32) = 0;
            *(_OWORD *)(v37 + 40) = 0;
            if ( (_QWORD)v51 )
            {
              v45 = v51;
              v40 = (void *)qalloc_or_throw(v51, (__int64)&si128.m128i_i64[1], v51, v39);
              *(_QWORD *)(v37 + 32) = v40;
              v41 = v50;
              *(_QWORD *)(v37 + 48) = v45;
              memcpy(v40, v41, v45);
              *(_QWORD *)(v37 + 40) = v45;
            }
            *(_DWORD *)(v37 + 56) = 0;
            copy_argloc();
            ++v15;
            *(_DWORD *)(v37 + 72) = v54;
            if ( v15 >= v14 )
              break;
            v16 = *v6;
          }
        }
        v6[1] = v14;
      }
      else
      {
        sub_123A40((__int64)v55, (unsigned __int8 *)v48, v18, (__int64)v48);
        v57 = 0;
        v56 = si128.m128i_i64[0];
        copy_tinfo_t();
        src = nullptr;
        v59 = 0;
        sub_2AE320(&src, (__int64)&v50, v19, v20);
        v60 = 0;
        copy_argloc();
        v61 = v54;
        if ( v6[2] < v14 )
          *v6 = qvector_reserve((__int64)v6, *v6, v14, 80);
        v23 = v6[1];
        if ( v23 < v14 )
        {
          do
          {
            v24 = *v6 + 80 * v23;
            sub_123A40(v24, v55, v21, v22);
            v25 = v56;
            *(_QWORD *)(v24 + 24) = 0;
            *(_QWORD *)(v24 + 16) = v25;
            copy_tinfo_t();
            *(_QWORD *)(v24 + 32) = 0;
            *(_OWORD *)(v24 + 40) = 0;
            if ( (_QWORD)v59 )
            {
              n = v59;
              v27 = (void *)qalloc_or_throw(v59, (__int64)&v57, v59, v26);
              *(_QWORD *)(v24 + 32) = v27;
              v28 = src;
              *(_QWORD *)(v24 + 48) = n;
              memcpy(v27, v28, n);
              *(_QWORD *)(v24 + 40) = n;
            }
            *(_DWORD *)(v24 + 56) = 0;
            copy_argloc();
            ++v23;
            *(_DWORD *)(v24 + 72) = v61;
          }
          while ( v14 != v23 );
        }
        v6[1] = v14;
        sub_82400((__int64)v55);
      }
    }
    cleanup_argloc();
    if ( v50 )
    {
      *(_QWORD *)&v51 = 0;
      qfree((__int64)v50);
    }
    clear_tinfo_t();
    sub_11CDA0((__int64)v48);
    if ( v6[1] )
    {
LABEL_34:
      v32 = 0;
      do
      {
        while ( 1 )
        {
          v33 = *v6 + 80 * v32;
          v34 = (int *)(v33 + 56);
          sub_2B2DE0(v33 + 56, (const void **)&v47, v47.m128i_u64[1]);
          v35 = v33 + 24;
          v36 = unpack_dd();
          if ( !(unsigned __int8)sub_2B6F30((const void **)&v47, v47.m128i_u64[1], v35, nullptr) )
            break;
          if ( ++v32 >= v6[1] )
            goto LABEL_38;
        }
        sub_2B79B0(v43, v35, v34, v36);
        ++v32;
      }
      while ( v32 < v6[1] );
    }
LABEL_38:
    *a3 = v47.m128i_i64[0];
  }
  else
  {
    *a3 = v47.m128i_i64[0];
    if ( v6 )
    {
      v7 = *v6;
      if ( *v6 )
      {
        v8 = v6[1];
        if ( v8 )
        {
          v9 = 0;
          do
          {
            v10 = v7 + 80 * v9;
            cleanup_argloc();
            v11 = *(_QWORD *)(v10 + 32);
            if ( v11 )
            {
              *(_QWORD *)(v10 + 40) = 0;
              qfree(v11);
            }
            ++v9;
            clear_tinfo_t();
            sub_11CDA0(v10);
            v7 = *v6;
          }
          while ( v8 != v9 );
        }
        v6[1] = 0;
        qfree(v7);
      }
      qfree((__int64)v6);
    }
    return nullptr;
  }
  return v6;
}
