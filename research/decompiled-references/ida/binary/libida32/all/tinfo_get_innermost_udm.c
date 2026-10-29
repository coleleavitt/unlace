unsigned __int64 __fastcall tinfo_get_innermost_udm(
        __int64 *a1,
        _QWORD *a2,
        unsigned __int64 a3,
        __int64 *a4,
        unsigned __int64 *a5,
        char a6)
{
  int tinfo_udt_member; // eax
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 *tinfo_property; // rax
  __int64 *v11; // r13
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r12
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r8
  size_t v18; // r9
  unsigned __int64 v19; // r8
  size_t v20; // r9
  __int64 tinfo_size; // rax
  unsigned __int64 v22; // r13
  __int64 v23; // rdx
  const void *v25; // r10
  void *v26; // rdi
  const void *v27; // r10
  void *v28; // rdi
  unsigned __int64 v29; // [rsp+10h] [rbp-118h]
  unsigned __int64 v30; // [rsp+10h] [rbp-118h]
  unsigned __int64 v31; // [rsp+10h] [rbp-118h]
  unsigned __int64 v32; // [rsp+10h] [rbp-118h]
  size_t v37; // [rsp+38h] [rbp-F0h]
  size_t v38; // [rsp+38h] [rbp-F0h]
  const void *v39; // [rsp+40h] [rbp-E8h]
  const void *v40; // [rsp+40h] [rbp-E8h]
  __int64 v41; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v42; // [rsp+58h] [rbp-D0h] BYREF
  __m128i v43; // [rsp+60h] [rbp-C8h] BYREF
  void *ptr; // [rsp+70h] [rbp-B8h] BYREF
  __int128 v45; // [rsp+78h] [rbp-B0h]
  void *dest; // [rsp+88h] [rbp-A0h] BYREF
  __int128 v47; // [rsp+90h] [rbp-98h]
  _BYTE v48[24]; // [rsp+A0h] [rbp-88h] BYREF
  __m128i v49; // [rsp+B8h] [rbp-70h]
  int v50; // [rsp+C8h] [rbp-60h]
  __int64 v51; // [rsp+D0h] [rbp-58h]
  char v52; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v53; // [rsp+E8h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  if ( a1 )
    clear_tinfo_t(a1);
  if ( (get_tinfo_property(*a2, 2) & 0x2F) == 0xD )
  {
    v41 = 0;
    copy_tinfo_t(&v41);
    while ( 1 )
    {
      ptr = nullptr;
      dest = nullptr;
      v49.m128i_i64[1] = 1;
      v50 = -1;
      v51 = 0;
      v52 = 0;
      v43 = (__m128i)a3;
      v45 = 0;
      v47 = 0;
      *(_OWORD *)v48 = 0;
      tinfo_udt_member = find_tinfo_udt_member((int)&v43);
      v8 = tinfo_udt_member;
      v9 = tinfo_udt_member;
      if ( tinfo_udt_member == -1 )
        break;
      tinfo_property = (__int64 *)get_tinfo_property(v41, 309);
      v11 = tinfo_property;
      if ( !tinfo_property )
      {
        if ( !under_debugger )
          interr(3287);
        BUG();
      }
      v12 = tinfo_property[1];
      v13 = *tinfo_property;
      v14 = (v8 + 1) << 7;
      v15 = v13 + v14;
      if ( v14 != v11[1] << 7 )
      {
        do
        {
          if ( v43.m128i_i64[1] || *(_QWORD *)v15 != a3 )
            break;
          v16 = *(_QWORD *)(v15 + 8);
          if ( v16 )
          {
            v9 = (v15 - v13) >> 7;
            v43 = _mm_unpacklo_epi64((__m128i)a3, (__m128i)v16);
            if ( (__m128i *)v15 != &v43 )
            {
              v17 = *(_QWORD *)(v15 + 24);
              if ( v17 && (v18 = v17 - 1, v17 != 1) )
              {
                v27 = *(const void **)(v15 + 16);
                v28 = ptr;
                if ( *((_QWORD *)&v45 + 1) < v17 )
                {
                  v40 = *(const void **)(v15 + 16);
                  v38 = v17 - 1;
                  v32 = *(_QWORD *)(v15 + 24);
                  ptr = (void *)qvector_reserve(&ptr, ptr, v32, 1);
                  v27 = v40;
                  v28 = ptr;
                  v18 = v38;
                  v17 = v32;
                }
                *(_QWORD *)&v45 = v17;
                v30 = v17;
                memmove(v28, v27, v18);
                *((char *)ptr + v30 - 1) = 0;
              }
              else
              {
                *(_QWORD *)&v45 = 0;
              }
              v19 = *(_QWORD *)(v15 + 48);
              if ( v19 && (v20 = v19 - 1, v19 != 1) )
              {
                v25 = *(const void **)(v15 + 40);
                v26 = dest;
                if ( *((_QWORD *)&v47 + 1) < v19 )
                {
                  v39 = *(const void **)(v15 + 40);
                  v37 = v19 - 1;
                  v31 = *(_QWORD *)(v15 + 48);
                  dest = (void *)qvector_reserve(&dest, dest, v31, 1);
                  v25 = v39;
                  v26 = dest;
                  v20 = v37;
                  v19 = v31;
                }
                v29 = v19;
                *(_QWORD *)&v47 = v19;
                memmove(v26, v25, v20);
                *((char *)dest + v29 - 1) = 0;
              }
              else
              {
                *(_QWORD *)&v47 = 0;
              }
            }
            copy_tinfo_t(v48);
            *(__m128i *)&v48[8] = _mm_loadu_si128((const __m128i *)(v15 + 72));
            v49 = _mm_loadu_si128((const __m128i *)(v15 + 88));
            v50 = *(_DWORD *)(v15 + 104);
            v51 = *(_QWORD *)(v15 + 112);
            v52 = *(_BYTE *)(v15 + 120);
            v13 = *v11;
            v12 = v11[1];
          }
          v15 += 128;
        }
        while ( v15 != v13 + (v12 << 7) );
      }
      a3 -= v43.m128i_i64[0];
      v42 = 0;
      v42 = get_tinfo_property(*(_QWORD *)v48, 289);
      tinfo_size = get_tinfo_size(0, v42, 0);
      v22 = tinfo_size;
      if ( !v43.m128i_i64[1] || tinfo_size == -1 || (get_tinfo_property(v42, 2) & 0x2F) != 0xD )
      {
        if ( a6 )
          copy_tinfo_t(&v41);
        clear_tinfo_t(&v42);
        clear_tinfo_t(v48);
        if ( dest )
        {
          *(_QWORD *)&v47 = 0;
          qfree(dest);
        }
        if ( ptr )
        {
          *(_QWORD *)&v45 = 0;
          qfree(ptr);
        }
        if ( a4 )
          *a4 = v9;
        if ( a5 )
          *a5 = a3;
        if ( a1 )
        {
          v23 = v41;
          v41 = *a1;
          *a1 = v23;
        }
        goto LABEL_42;
      }
      if ( (get_tinfo_property(*(_QWORD *)v48, 2) & 0xF) == 0xB )
        a3 %= v22;
      copy_tinfo_t(&v41);
      clear_tinfo_t(&v42);
      clear_tinfo_t(v48);
      if ( dest )
      {
        *(_QWORD *)&v47 = 0;
        qfree(dest);
      }
      if ( ptr )
      {
        *(_QWORD *)&v45 = 0;
        qfree(ptr);
      }
    }
    clear_tinfo_t(v48);
    if ( dest )
    {
      *(_QWORD *)&v47 = 0;
      qfree(dest);
    }
    if ( ptr )
    {
      *(_QWORD *)&v45 = 0;
      qfree(ptr);
    }
LABEL_42:
    clear_tinfo_t(&v41);
  }
  return v53 - __readfsqword(0x28u);
}

