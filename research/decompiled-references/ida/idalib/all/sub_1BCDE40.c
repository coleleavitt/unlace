void __fastcall sub_1BCDE40(
        unsigned __int64 *src,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  unsigned __int64 *v8; // r15
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r12
  unsigned __int64 *v11; // rbx
  __m128i v12; // xmm1
  unsigned __int64 v13; // rdx
  unsigned __int64 *v14; // r13
  unsigned __int64 *v15; // [rsp+0h] [rbp-60h]
  _OWORD v16[5]; // [rsp+8h] [rbp-58h] BYREF

  if ( src != a2 )
  {
    v8 = src + 1;
    if ( a2 != src + 1 )
    {
      v15 = &src[((unsigned __int64)((char *)(a2 - 2) - (char *)src) >> 3) + 2];
      do
      {
        while ( !sub_1BCD630(&a7, *v8, *src) )
        {
          v10 = *v8;
          v11 = v8;
          v12 = _mm_loadu_si128((const __m128i *)&a8);
          v16[0] = _mm_loadu_si128((const __m128i *)&a7);
          v16[1] = v12;
          while ( 1 )
          {
            v13 = *(v11 - 1);
            v14 = v11--;
            if ( !sub_1BCD630(v16, v10, v13) )
              break;
            v11[1] = *v11;
          }
          *v14 = v10;
          if ( ++v8 == v15 )
            return;
        }
        v9 = *v8;
        if ( src != v8 )
          memmove(src + 1, src, (char *)v8 - (char *)src);
        *src = v9;
        ++v8;
      }
      while ( v8 != v15 );
    }
  }
}
