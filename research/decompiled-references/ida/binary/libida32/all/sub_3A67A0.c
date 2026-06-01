unsigned __int64 __fastcall sub_3A67A0(__int64 *a1, _QWORD *a2, __int64 *a3, unsigned int a4)
{
  __int64 v7; // rdi
  __int64 dir_size; // rax
  __int64 v9; // r12
  __int64 i; // r14
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  size_t v16; // r10
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v22; // rax
  unsigned int ptr; // [rsp+10h] [rbp-88h]
  void *ptra; // [rsp+10h] [rbp-88h]
  void *src; // [rsp+18h] [rbp-80h]
  int na; // [rsp+20h] [rbp-78h]
  size_t n; // [rsp+20h] [rbp-78h]
  size_t v28; // [rsp+28h] [rbp-70h]
  int v29; // [rsp+28h] [rbp-70h]
  unsigned int v30; // [rsp+30h] [rbp-68h] BYREF
  __int64 v31; // [rsp+38h] [rbp-60h]
  void *v32; // [rsp+40h] [rbp-58h] BYREF
  __int128 v33; // [rsp+48h] [rbp-50h]
  unsigned __int64 v34; // [rsp+58h] [rbp-40h]

  v7 = *a3;
  v34 = __readfsqword(0x28u);
  v30 = a4;
  v31 = -1;
  dir_size = dirtree_get_dir_size(v7, a4);
  if ( dir_size )
  {
    v9 = dir_size;
    for ( i = 0; i != v9; ++i )
    {
      v11 = *a3;
      v31 = i;
      LODWORD(v32) = -1;
      BYTE4(v32) = 0;
      dirtree_resolve_cursor(&v32, v11, &v30);
      ptr = (unsigned int)v32;
      if ( (_DWORD)v32 != -1 )
      {
        if ( BYTE4(v32) )
        {
          ++*a2;
          if ( a1 )
          {
            v12 = *a3;
            v33 = 0;
            v32 = nullptr;
            dirtree_get_abspath_by_cursor(&v32, v12, &v30, 0);
            v16 = v33;
            v17 = ptr;
            ptra = nullptr;
            src = v32;
            if ( (_QWORD)v33 )
            {
              v29 = v17;
              n = v33;
              ptra = (void *)qalloc_or_throw(v33, v12, v13, v14, v15, v17);
              memcpy(ptra, src, n);
              LODWORD(v17) = v29;
              v16 = n;
            }
            v18 = a1[1];
            v19 = *a1;
            if ( a1[2] < (unsigned __int64)(v18 + 1) )
            {
              v28 = v16;
              na = v17;
              v22 = qvector_reserve(a1, v19, v18 + 1, 24);
              v18 = a1[1];
              v16 = v28;
              *a1 = v22;
              v19 = v22;
              LODWORD(v17) = na;
            }
            v20 = v19 + 24 * v18;
            *(_QWORD *)v20 = ptra;
            *(__m128i *)(v20 + 8) = _mm_unpacklo_epi64((__m128i)v16, (__m128i)v16);
            ++a1[1];
            sub_3A67A0(a1, a2, a3, (unsigned int)v17);
            if ( src )
              qfree(src);
          }
        }
      }
    }
  }
  return v34 - __readfsqword(0x28u);
}

