bool __fastcall sub_5E6680(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rbp
  unsigned __int64 v6; // r12
  __int64 v7; // r13
  size_t v8; // r12
  void *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rax
  void *v12; // rdi
  const void *v14; // r14
  void *v15; // rax

  v1 = *(_QWORD *)(a1 + 472);
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 464);
    v4 = a1 + 40;
    v5 = v3 + 72 * v1 - 72;
    if ( v5 != v4 )
    {
      v6 = *(_QWORD *)(v5 + 8);
      if ( v6 > 1 )
      {
        v14 = *(const void **)v5;
        v15 = *(void **)(a1 + 40);
        if ( *(_QWORD *)(a1 + 56) < v6 )
        {
          v15 = (void *)qvector_reserve(v4, *(_QWORD *)(a1 + 40), *(_QWORD *)(v5 + 8), 1);
          *(_QWORD *)(a1 + 40) = v15;
        }
        *(_QWORD *)(a1 + 48) = v6;
        memmove(v15, v14, v6 - 1);
        *(_BYTE *)(*(_QWORD *)(a1 + 40) + v6 - 1) = 0;
        v1 = *(_QWORD *)(a1 + 472);
        v3 = *(_QWORD *)(a1 + 464);
        v7 = v3 + 72 * v1 - 72;
LABEL_6:
        *(_WORD *)(a1 + 64) = *(_WORD *)(v5 + 24);
        *(_QWORD *)(a1 + 72) = *(_QWORD *)(v5 + 32);
        *(_BYTE *)(a1 + 80) = *(_BYTE *)(v5 + 40);
        *(__m128i *)(a1 + 88) = _mm_loadu_si128((const __m128i *)(v5 + 48));
        *(_DWORD *)(a1 + 488) = *(_DWORD *)(v5 + 64);
        v8 = *(_QWORD *)(v7 + 8);
        if ( v8 )
        {
          v9 = (void *)qalloc_or_throw(*(_QWORD *)(v7 + 8));
          memcpy(v9, *(const void **)v7, v8);
          v1 = *(_QWORD *)(a1 + 472);
          if ( !v1 )
          {
LABEL_11:
            if ( v9 )
              qfree(v9);
            return 1;
          }
          v3 = *(_QWORD *)(a1 + 464);
        }
        else
        {
          if ( !v1 )
            return 1;
          v9 = nullptr;
        }
        v10 = v1 - 1;
        *(_QWORD *)(a1 + 472) = v10;
        v11 = v3 + 72 * v10;
        v12 = *(void **)v11;
        if ( *(_QWORD *)v11 )
        {
          *(_QWORD *)(v11 + 8) = 0;
          qfree(v12);
        }
        goto LABEL_11;
      }
      *(_QWORD *)(a1 + 48) = 0;
    }
    v7 = v3 + 72 * v1 - 72;
    goto LABEL_6;
  }
  return (unsigned int)lex_get_token(*(_QWORD *)(a1 + 240)) == 0;
}
