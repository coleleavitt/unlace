void __fastcall sub_33D1B0(const char **a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r14
  unsigned __int64 v5; // rbx
  __int64 i; // r12
  __int64 v7; // r14
  const char *v8; // r12
  __int64 v9; // r8

  v3 = a2 - (_QWORD)a1;
  v5 = a2;
  if ( (__int64)(a2 - (_QWORD)a1) > 16 )
  {
    for ( i = ((v3 >> 4) - 2) / 2; ; --i )
    {
      sub_3351C0((__int64)a1, i, v3 >> 4, a1[2 * i], (unsigned int)a1[2 * i + 1]);
      if ( !i )
        break;
    }
  }
  v7 = v3 >> 4;
  if ( a2 < a3 )
  {
    do
    {
      while ( 1 )
      {
        v8 = *(const char **)v5;
        if ( strcmp(*(const char **)v5, *a1) < 0 )
          break;
        v5 += 16LL;
        if ( v5 >= a3 )
          return;
      }
      v9 = *(_QWORD *)(v5 + 8);
      v5 += 16LL;
      *(__m128i *)(v5 - 16) = _mm_loadu_si128((const __m128i *)a1);
      sub_3351C0((__int64)a1, 0, v7, v8, v9);
    }
    while ( v5 < a3 );
  }
}
