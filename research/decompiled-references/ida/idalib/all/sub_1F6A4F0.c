void __fastcall sub_1F6A4F0(char *a1, char *a2)
{
  char *v2; // rcx
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // rbx
  __int64 v5; // r13
  char *v6; // r12
  __m128i *v7; // rax

  if ( a1 != a2 )
  {
    v2 = a1 + 16;
    if ( a2 != a1 + 16 )
    {
      v3 = (unsigned __int64)&a1[((a2 - 32 - a1) & 0xFFFFFFFFFFFFFFF0LL) + 32];
      do
      {
        while ( 1 )
        {
          v4 = *(_QWORD *)v2;
          v5 = *((_QWORD *)v2 + 1);
          v6 = v2 + 16;
          if ( *(_QWORD *)v2 < *(_QWORD *)a1 )
            break;
          v7 = (__m128i *)(v2 - 16);
          if ( v4 < *((_QWORD *)v2 - 2) )
          {
            while ( 1 )
            {
              v7[1] = _mm_loadu_si128(v7);
              if ( v4 >= v7[-1].m128i_i64[0] )
                break;
              --v7;
            }
            v7->m128i_i64[0] = v4;
            v7->m128i_i64[1] = v5;
          }
          else
          {
            *(_QWORD *)v2 = v4;
            *((_QWORD *)v2 + 1) = v5;
          }
          v2 += 16;
          if ( (char *)v3 == v6 )
            return;
        }
        if ( v2 - a1 > 0 )
          memmove(&v6[-16 * ((v2 - a1) >> 4)], &v2[-16 * ((v2 - a1) >> 4)], v2 - a1);
        *(_QWORD *)a1 = v4;
        v2 = v6;
        *((_QWORD *)a1 + 1) = v5;
      }
      while ( (char *)v3 != v6 );
    }
  }
}
