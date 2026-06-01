void __fastcall sub_3DCD80(char **a1, const __m128i *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // r12d
  char *v5; // rbp
  __int64 v6; // r12
  __int64 v7; // rax
  char *v8; // rdi
  __int64 v9; // rdx

  v3 = *((unsigned int *)a1 + 2);
  v4 = *((_DWORD *)a1 + 3);
  if ( (unsigned int)v3 >= v4 )
  {
    v6 = 2 * v4;
    v7 = sub_186B270(16 * v6);
    v8 = *a1;
    v9 = 0;
    v5 = (char *)v7;
    v3 = *((unsigned int *)a1 + 2);
    if ( (_DWORD)v3 )
    {
      do
      {
        *(__m128i *)(v7 + v9) = _mm_loadu_si128((const __m128i *)&v8[v9]);
        v9 += 16;
      }
      while ( 16 * v3 != v9 );
    }
    if ( v8 && v8 != (char *)(a1 + 2) )
    {
      sub_186B220(v8);
      v3 = *((unsigned int *)a1 + 2);
    }
    *a1 = v5;
    *((_DWORD *)a1 + 3) = v6;
  }
  else
  {
    v5 = *a1;
  }
  *(__m128i *)&v5[16 * v3] = _mm_loadu_si128(a2);
  ++*((_DWORD *)a1 + 2);
}

