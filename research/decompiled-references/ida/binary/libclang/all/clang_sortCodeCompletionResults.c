void __fastcall clang_sortCodeCompletionResults(unsigned __int16 **src, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned __int16 **v3; // r14
  __int64 i; // rcx
  signed __int64 v5; // r15
  __m128i *v6; // rax
  __m128i *v7; // r12
  __int64 v8; // [rsp+8h] [rbp-40h]

  v2 = 16LL * a2;
  v3 = &src[(unsigned __int64)v2 / 8];
  if ( &src[(unsigned __int64)v2 / 8] != src )
  {
    for ( i = ((v2 >> 4) + 1) >> 1; ; i = (v8 + 1) >> 1 )
    {
      v8 = i;
      v5 = 2 * i;
      v6 = (__m128i *)operator new(16 * i, (const std::nothrow_t *)&std::nothrow);
      v7 = v6;
      if ( v6 )
        break;
      if ( v8 == 1 )
      {
        v5 = 0;
        sub_62B260(src, v3);
        goto LABEL_6;
      }
    }
    if ( ((v2 >> 4) + 1) >> 1 == v8 )
    {
      sub_629C90(src, &src[v5], v6->m128i_i8);
      sub_629C90(&src[v5], v3, v7->m128i_i8);
      sub_629E90((const __m128i *)src, (__m128i *)&src[v5], (__m128i *)v3, (v5 * 8) >> 4, (v2 - v5 * 8) >> 4, v7);
    }
    else
    {
      sub_62A840(src, v3, v6, v8);
    }
LABEL_6:
    operator delete(v7, v5 * 8);
  }
}

