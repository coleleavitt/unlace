unsigned __int64 __fastcall sub_4E6A20(
        __int64 *src,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8,
        char a9)
{
  __int64 *i; // rbx
  char v10; // al
  __int64 v11; // rbp
  __int64 *v12; // r15
  __m128i v13; // xmm0
  __int64 v14; // rdx
  __int64 *v15; // r12
  __m128i v17; // [rsp+10h] [rbp-68h] BYREF
  __int64 v18; // [rsp+20h] [rbp-58h]
  char v19; // [rsp+28h] [rbp-50h]
  unsigned __int64 v20; // [rsp+38h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  if ( src != a2 )
  {
    for ( i = src + 1; a2 != i; ++i )
    {
      while ( 1 )
      {
        v10 = sub_4DE4A0(&a7, *i, *src);
        v11 = *i;
        if ( v10 )
          break;
        v12 = i;
        v13 = _mm_loadu_si128((const __m128i *)&a7);
        v18 = a8;
        v17 = v13;
        v19 = a9;
        while ( 1 )
        {
          v14 = *(v12 - 1);
          v15 = v12--;
          if ( !sub_4DE4A0(&v17, v11, v14) )
            break;
          v12[1] = *v12;
        }
        *v15 = v11;
        if ( a2 == ++i )
          return v20 - __readfsqword(0x28u);
      }
      if ( (char *)i - (char *)src <= 8 )
      {
        if ( (char *)i - (char *)src == 8 )
          *i = *src;
      }
      else
      {
        memmove(src + 1, src, (char *)i - (char *)src);
      }
      *src = v11;
    }
  }
  return v20 - __readfsqword(0x28u);
}
