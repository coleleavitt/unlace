void __fastcall sub_9C7EB0(__int64 **a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 v3; // rcx
  __m128i v4; // xmm0
  __int64 v5; // rdx
  __int64 *v6; // r13
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // rdi

  v2 = *a1;
  v3 = (__int64)&(*a1)[3 * *((unsigned int *)a1 + 2)];
  if ( *a1 != (__int64 *)v3 )
  {
    do
    {
      v4 = _mm_loadu_si128((const __m128i *)(v2 + 1));
      v5 = *v2;
      v2 += 3;
      a2 += 24;
      *(_QWORD *)(a2 - 24) = v5;
      *(__m128i *)(a2 - 16) = v4;
      *(v2 - 3) = 0;
      *((_DWORD *)v2 - 4) = 0;
      *((_DWORD *)v2 - 3) = 0;
      *((_DWORD *)v2 - 2) = 0;
    }
    while ( (__int64 *)v3 != v2 );
    v6 = *a1;
    v7 = (__int64)&(*a1)[3 * *((unsigned int *)a1 + 2)];
    if ( *a1 != (__int64 *)v7 )
    {
      do
      {
        v7 -= 24;
        if ( *(_DWORD *)(v7 + 12) )
        {
          v8 = *(_DWORD *)(v7 + 8);
          if ( v8 )
          {
            v9 = 0;
            v10 = 8LL * (unsigned int)(v8 - 1) + 8;
            do
            {
              v11 = *(_QWORD *)(*(_QWORD *)v7 + v9);
              if ( v11 != -8 )
              {
                if ( v11 )
                  operator delete();
              }
              v9 += 8;
            }
            while ( v9 != v10 );
          }
        }
        free(*(void **)v7);
      }
      while ( (__int64 *)v7 != v6 );
    }
  }
}

