void __fastcall sub_3E5020(char **a1)
{
  char **v1; // rbx
  char **v2; // r13
  unsigned __int16 v3; // bp
  char *v4; // r14
  int v5; // r12d
  const __m128i *v6; // rax
  __m128i si128; // xmm0
  __m128i *v8; // rdx

  if ( a1 != &off_4C0960 )
  {
    v1 = &off_4C0970;
    if ( a1 != &off_4C0970 )
    {
      v2 = (char **)((char *)&off_4C0960 + (char *)a1 - (char *)&off_4C0970 + 16);
      do
      {
        while ( 1 )
        {
          v3 = *((_WORD *)v1 + 4);
          v4 = *v1;
          v5 = *((_DWORD *)v1 + 3);
          if ( v3 < (unsigned __int16)word_4C0968 )
            break;
          v6 = (const __m128i *)(v1 - 2);
          if ( v3 >= *((_WORD *)v1 - 4) )
          {
            *v1 = v4;
            *((_WORD *)v1 + 4) = v3;
            *((_DWORD *)v1 + 3) = v5;
          }
          else
          {
            do
            {
              si128 = _mm_load_si128(v6);
              v8 = (__m128i *)v6--;
              v6[2] = si128;
            }
            while ( v3 < (unsigned int)v6->m128i_i16[4] );
            v8->m128i_i64[0] = (__int64)v4;
            v8->m128i_i16[4] = v3;
            v8->m128i_i32[3] = v5;
          }
          v1 += 2;
          if ( v1 == v2 )
            return;
        }
        if ( (char *)v1 - (char *)&off_4C0960 <= 16 )
        {
          if ( (char *)v1 - (char *)&off_4C0960 == 16 )
            *(__m128i *)v1 = _mm_load_si128((const __m128i *)&off_4C0960);
        }
        else
        {
          memmove(&off_4C0970, &off_4C0960, (char *)v1 - (char *)&off_4C0960);
        }
        v1 += 2;
        off_4C0960 = v4;
        word_4C0968 = v3;
        dword_4C096C = v5;
      }
      while ( v1 != v2 );
    }
  }
}
