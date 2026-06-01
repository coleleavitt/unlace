unsigned __int64 __fastcall sub_6F24B0(__int64 a1)
{
  void *v2; // rbx
  size_t v4; // rax
  size_t v5; // r13
  void *v6; // r14
  size_t v7; // rax
  size_t v8; // rbx
  _BYTE *v9; // rax
  char *v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  __m128i v14; // xmm0
  __int64 v15; // rax
  void *v16; // rdi
  __int64 v17; // r13
  __int64 v18; // r14
  char *v19; // rax
  void *dest; // [rsp+0h] [rbp-1058h] BYREF
  __m128i v21; // [rsp+8h] [rbp-1050h] BYREF
  char s[4104]; // [rsp+20h] [rbp-1038h] BYREF
  unsigned __int64 v23; // [rsp+1028h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  dest = nullptr;
  v21 = 0;
  v2 = nullptr;
  if ( (unsigned __int8)search_path(s, 4096, "clang", 0) )
  {
    v4 = strlen(s);
    v5 = v4;
    if ( v4 )
    {
      v18 = v4 + 1;
      if ( v21.m128i_i64[1] < v4 + 1 )
      {
        dest = (void *)qvector_reserve(&dest, 0, v4 + 1, 1);
        v2 = dest;
      }
      v21.m128i_i64[0] = v18;
      memmove(v2, s, v5);
      *((_BYTE *)dest + v5) = 0;
      v6 = dest;
    }
    else
    {
      v21.m128i_i64[0] = 0;
      v6 = nullptr;
    }
    qmake_full_path(s, 4096, v6);
    v7 = strlen(s);
    v8 = v7;
    if ( v7 )
    {
      v16 = dest;
      v17 = v7 + 1;
      if ( v21.m128i_i64[1] < v7 + 1 )
      {
        dest = (void *)qvector_reserve(&dest, dest, v7 + 1, 1);
        v16 = dest;
      }
      v21.m128i_i64[0] = v17;
      memmove(v16, s, v8);
      *((_BYTE *)dest + v8) = 0;
    }
    else
    {
      v21.m128i_i64[0] = 0;
    }
    v9 = (_BYTE *)qbasename(dest);
    v10 = (char *)dest;
    v11 = v9 - (_BYTE *)dest;
    if ( v9 == dest )
    {
      if ( dest )
      {
        v21.m128i_i64[0] = 0;
        qfree(dest);
        v10 = nullptr;
        goto LABEL_15;
      }
    }
    else
    {
      v12 = v21.m128i_i64[0];
      v13 = v11 + 1;
      if ( v21.m128i_i64[0] < (unsigned __int64)(v11 + 1) )
      {
        if ( v21.m128i_i64[1] < v13 )
        {
          v19 = (char *)qvector_reserve(&dest, dest, v11 + 1, 1);
          v12 = v21.m128i_i64[0];
          dest = v19;
          v10 = v19;
        }
        memset(&v10[v12], 0, v13 - v12);
        v21.m128i_i64[0] = v11 + 1;
        v9 = (char *)dest + v11;
      }
      else if ( v13 != v21.m128i_i64[0] )
      {
        v21.m128i_i64[0] = v11 + 1;
      }
      *v9 = 0;
      v10 = (char *)dest;
    }
    v11 = v21.m128i_i64[1];
LABEL_15:
    v14 = _mm_loadl_epi64(&v21);
    v2 = *(void **)a1;
    *(_QWORD *)a1 = v10;
    v15 = *(_QWORD *)(a1 + 16);
    dest = v2;
    v21.m128i_i64[1] = v15;
    *(__m128i *)(a1 + 8) = _mm_unpacklo_epi64(v14, (__m128i)(unsigned __int64)v11);
  }
  if ( v2 )
  {
    v21.m128i_i64[0] = 0;
    qfree(v2);
  }
  return v23 - __readfsqword(0x28u);
}
