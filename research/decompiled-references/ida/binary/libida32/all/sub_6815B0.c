void __fastcall sub_6815B0(char *src, char *a2, __int64 (__fastcall *a3)(__m128i *, char *))
{
  char *i; // rbx
  __int64 v6; // r8
  int v7; // r14d
  __int64 v8; // r15
  const __m128i *v9; // rdi
  __int64 v10; // [rsp+0h] [rbp-40h]

  if ( src != a2 )
  {
    for ( i = src + 20; a2 != i; *(_QWORD *)(src + 12) = v8 )
    {
      while ( !(unsigned __int8)a3((__m128i *)i, src) )
      {
        v9 = (const __m128i *)i;
        i += 20;
        sub_681520(v9, a3);
        if ( a2 == i )
          return;
      }
      v6 = *(_QWORD *)i;
      v7 = *((_DWORD *)i + 2);
      v8 = *(_QWORD *)(i + 12);
      if ( i - src <= 20 )
      {
        if ( i - src == 20 )
        {
          *(__m128i *)i = _mm_loadu_si128((const __m128i *)src);
          *((_DWORD *)i + 4) = *((_DWORD *)src + 4);
        }
      }
      else
      {
        v10 = *(_QWORD *)i;
        memmove(src + 20, src, i - src);
        v6 = v10;
      }
      i += 20;
      *(_QWORD *)src = v6;
      *((_DWORD *)src + 2) = v7;
    }
  }
}

