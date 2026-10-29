__int64 __fastcall sub_6FC970(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 lexer; // rax
  int v4; // ebx
  const char *v5; // rcx
  unsigned int v6; // ebx
  __int64 tinfo_property; // rax
  __int64 v9; // rbp
  unsigned __int64 v10; // rax
  void *v11; // r14
  __m128i v12; // xmm0
  void *v13; // rdi
  size_t v14; // r13
  __m128i v15; // [rsp+0h] [rbp-B8h] BYREF
  void *v16; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v17; // [rsp+18h] [rbp-A0h]
  void *v18; // [rsp+30h] [rbp-88h] BYREF
  __int128 v19; // [rsp+38h] [rbp-80h]
  void *v20; // [rsp+48h] [rbp-70h]
  __int128 v21; // [rsp+50h] [rbp-68h]
  void *ptr; // [rsp+60h] [rbp-58h]
  __int128 v23; // [rsp+68h] [rbp-50h]
  __int64 v24; // [rsp+78h] [rbp-40h] BYREF
  int v25; // [rsp+80h] [rbp-38h]
  unsigned __int8 v26; // [rsp+84h] [rbp-34h]
  unsigned __int64 v27; // [rsp+88h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  v17 = 0;
  v16 = nullptr;
  sub_35A790((char **)&v16);
  v2 = (debug & 0x4000) == 0 ? 0xFFFFFFFE : 0;
  lexer = create_lexer(0, 0, 0, 0);
  v4 = v2 + 1058;
  v18 = nullptr;
  v5 = haystack;
  v20 = nullptr;
  ptr = nullptr;
  v24 = 0;
  v25 = 8;
  v26 = 0;
  v19 = 0;
  v21 = 0;
  v23 = 0;
  if ( (_QWORD)v17 )
    v5 = (const char *)v16;
  if ( !(unsigned int)sub_5F6DE0(
                        (__int64 *)a1,
                        *(void **)(a1 + 8),
                        lexer,
                        (__int64)v5,
                        v4,
                        0,
                        (__int64)sub_607E90,
                        nullptr,
                        (__int64)&v18,
                        0)
    && (v6 = v26) != 0
    && (tinfo_property = get_tinfo_property(v24, 311), (v9 = tinfo_property) != 0) )
  {
    v10 = *(_QWORD *)(tinfo_property + 72);
    v11 = nullptr;
    v12 = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v10);
    if ( v10 )
    {
      v14 = 8 * v10;
      v15 = v12;
      v11 = (void *)qalloc_or_throw(8 * v10);
      memcpy(v11, *(const void **)(v9 + 64), v14);
      v12 = _mm_load_si128(&v15);
    }
    v13 = *(void **)a2;
    if ( *(_QWORD *)a2 )
    {
      *(_QWORD *)(a2 + 8) = 0;
      v15 = v12;
      qfree(v13);
      v12 = _mm_load_si128(&v15);
    }
    *(_QWORD *)a2 = v11;
    *(__m128i *)(a2 + 8) = v12;
  }
  else
  {
    v6 = 0;
  }
  clear_tinfo_t(&v24);
  if ( ptr )
  {
    *(_QWORD *)&v23 = 0;
    qfree(ptr);
  }
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20);
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18);
  }
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16);
  }
  return v6;
}
