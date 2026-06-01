unsigned __int64 __fastcall sub_3AAFC0(__int64 *a1, _QWORD *a2, __int64 *a3, __int64 a4)
{
  __int64 v7; // rdi
  __int64 dir_size; // rax
  __int64 v9; // r12
  __int64 i; // r14
  __int64 v11; // rsi
  __int64 v12; // rsi
  size_t v13; // r10
  size_t v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v19; // rax
  void *ptr; // [rsp+10h] [rbp-88h]
  void *ptra; // [rsp+10h] [rbp-88h]
  void *src; // [rsp+18h] [rbp-80h]
  size_t na; // [rsp+20h] [rbp-78h]
  size_t n; // [rsp+20h] [rbp-78h]
  size_t v25; // [rsp+28h] [rbp-70h]
  size_t v26; // [rsp+28h] [rbp-70h]
  __int64 v27; // [rsp+30h] [rbp-68h] BYREF
  __int64 v28; // [rsp+38h] [rbp-60h]
  void *v29; // [rsp+40h] [rbp-58h] BYREF
  __int128 v30; // [rsp+48h] [rbp-50h]
  unsigned __int64 v31; // [rsp+58h] [rbp-40h]

  v7 = *a3;
  v31 = __readfsqword(0x28u);
  v27 = a4;
  v28 = -1;
  dir_size = dirtree_get_dir_size(v7, a4);
  if ( dir_size )
  {
    v9 = dir_size;
    for ( i = 0; i != v9; ++i )
    {
      v11 = *a3;
      v28 = i;
      v29 = (void *)-1LL;
      LOBYTE(v30) = 0;
      dirtree_resolve_cursor(&v29, v11, &v27);
      ptr = v29;
      if ( v29 != (void *)-1LL )
      {
        if ( (_BYTE)v30 )
        {
          ++*a2;
          if ( a1 )
          {
            v12 = *a3;
            v30 = 0;
            v29 = nullptr;
            dirtree_get_abspath_by_cursor(&v29, v12, &v27, 0);
            v13 = v30;
            v14 = (size_t)ptr;
            ptra = nullptr;
            src = v29;
            if ( (_QWORD)v30 )
            {
              v26 = v14;
              n = v30;
              ptra = (void *)qalloc_or_throw(v30);
              memcpy(ptra, src, n);
              v14 = v26;
              v13 = n;
            }
            v15 = a1[1];
            v16 = *a1;
            if ( a1[2] < (unsigned __int64)(v15 + 1) )
            {
              v25 = v13;
              na = v14;
              v19 = qvector_reserve(a1, v16, v15 + 1, 24);
              v15 = a1[1];
              v13 = v25;
              *a1 = v19;
              v16 = v19;
              v14 = na;
            }
            v17 = v16 + 24 * v15;
            *(_QWORD *)v17 = ptra;
            *(__m128i *)(v17 + 8) = _mm_unpacklo_epi64((__m128i)v13, (__m128i)v13);
            ++a1[1];
            sub_3AAFC0(a1, a2, a3, v14);
            if ( src )
              qfree(src);
          }
        }
      }
    }
  }
  return v31 - __readfsqword(0x28u);
}
