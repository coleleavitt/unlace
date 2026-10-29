void __fastcall sub_9CCC10(
        __int64 a1,
        unsigned __int16 **a2,
        __int64 *a3,
        __int64 *a4,
        unsigned int a5,
        char a6,
        __int64 a7)
{
  __m128i *v8; // r15
  __m128i *v10; // rbx
  __int32 v12; // edx
  __int64 *v13; // rdx

  v8 = *(__m128i **)(a1 + 40);
  v10 = &v8[2 * *(unsigned int *)(a1 + 48)];
  if ( v8 != v10 )
  {
    if ( a6 )
      a7 = 0;
    do
    {
      while ( 1 )
      {
        v12 = v8[1].m128i_i32[2];
        if ( !v12 )
          break;
        sub_9CC980(a2, a3, v8, v12 != 1, a5, a7);
        v8 += 2;
        if ( v8 == v10 )
          goto LABEL_8;
      }
      v13 = (__int64 *)v8;
      v8 += 2;
      sub_9CC460(a2, a3, v13, a5, a7);
    }
    while ( v8 != v10 );
  }
LABEL_8:
  if ( a6 )
    sub_9CA140(a2, a3, a4);
}
