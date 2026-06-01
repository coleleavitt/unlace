unsigned __int64 __fastcall sub_4EE680(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v4; // rdx
  _DWORD *v5; // r12
  const char *v7; // rsi
  char **v8; // rax
  size_t v9; // rbp
  char **v10; // rbx
  char *v11; // rdi
  __m128i v12; // xmm0
  void *v13; // rdi
  __m128i v14; // [rsp+0h] [rbp-58h] BYREF
  void *src; // [rsp+10h] [rbp-48h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-40h]
  unsigned __int64 v17; // [rsp+28h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  v4 = *(unsigned int *)(a1 + 116);
  if ( (_DWORD)v4 || (unsigned __int8)must_journal(a1, a2, v4) )
  {
    v5 = sub_4EC590((_QWORD *)(a1 + 24), *a3);
    if ( !v5 )
    {
      src = nullptr;
      *(_OWORD *)n = 0;
      sub_4EC630(a2, (__int64 *)&src, a3);
      v7 = (const char *)a3;
      v8 = sub_4EDF10((char **)(a1 + 24), a3);
      v9 = n[0];
      v10 = v8;
      if ( n[0] )
      {
        v5 = (_DWORD *)qalloc_or_throw(n[0], v7);
        memcpy(v5, src, v9);
      }
      v11 = *v10;
      v12 = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
      if ( *v10 )
      {
        v10[1] = nullptr;
        v14 = v12;
        qfree(v11);
        v12 = _mm_load_si128(&v14);
      }
      *v10 = (char *)v5;
      v13 = src;
      *(__m128i *)(v10 + 1) = v12;
      if ( v13 )
      {
        n[0] = 0;
        qfree(v13);
      }
    }
  }
  return v17 - __readfsqword(0x28u);
}

