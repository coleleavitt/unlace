unsigned __int64 __fastcall sub_505BD0(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v4; // rdx
  _QWORD *v5; // r12
  char **v7; // rax
  size_t v8; // rbp
  char **v9; // rbx
  char *v10; // rdi
  __m128i v11; // xmm0
  void *v12; // rdi
  __m128i v13; // [rsp+0h] [rbp-58h] BYREF
  void *src; // [rsp+10h] [rbp-48h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-40h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v4 = *(unsigned int *)(a1 + 116);
  if ( (_DWORD)v4 || (unsigned __int8)must_journal(a1, a2, v4) )
  {
    v5 = sub_503A70((_QWORD *)(a1 + 24), *a3);
    if ( !v5 )
    {
      src = nullptr;
      *(_OWORD *)n = 0;
      sub_503B10(a2, (__int64 *)&src, a3);
      v7 = sub_505460((char **)(a1 + 24), a3);
      v8 = n[0];
      v9 = v7;
      if ( n[0] )
      {
        v5 = (_QWORD *)qalloc_or_throw(n[0]);
        memcpy(v5, src, v8);
      }
      v10 = *v9;
      v11 = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v8);
      if ( *v9 )
      {
        v9[1] = nullptr;
        v13 = v11;
        qfree(v10);
        v11 = _mm_load_si128(&v13);
      }
      *v9 = (char *)v5;
      v12 = src;
      *(__m128i *)(v9 + 1) = v11;
      if ( v12 )
      {
        n[0] = 0;
        qfree(v12);
      }
    }
  }
  return v16 - __readfsqword(0x28u);
}
