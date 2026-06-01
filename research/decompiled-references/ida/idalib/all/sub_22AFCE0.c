char __fastcall sub_22AFCE0(__int64 a1, char a2)
{
  char **v2; // rbx
  char **v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  __m128i si128; // xmm0
  int v7; // edx
  char *v8; // r14
  char *v9; // r15

  v2 = &off_2BF4CA0;
  do
  {
    while ( 1 )
    {
      LOBYTE(v3) = 0;
      if ( (unsigned __int64)v2[3] > 3 )
        LOBYTE(v3) = *(_DWORD *)v2[2] == 875984498;
      if ( a2 != (_BYTE)v3 )
        goto LABEL_2;
      v4 = *(unsigned int *)(a1 + 8);
      v5 = *(unsigned int *)(a1 + 12);
      if ( v4 < v5 )
        break;
      v8 = v2[1];
      v9 = *v2;
      if ( v5 < v4 + 1 )
      {
        sub_2237220(a1, (const void *)(a1 + 16), v4 + 1, 16);
        v4 = *(unsigned int *)(a1 + 8);
      }
      v3 = (char **)(*(_QWORD *)a1 + 16 * v4);
      *v3 = v9;
      v3[1] = v8;
      ++*(_DWORD *)(a1 + 8);
LABEL_2:
      v2 += 8;
      if ( &off_2BF5820 == v2 )
        return (char)v3;
    }
    si128 = _mm_load_si128((const __m128i *)v2);
    v7 = v4 + 1;
    v3 = (char **)(*(_QWORD *)a1 + 16 * v4);
    v2 += 8;
    *(__m128i *)v3 = si128;
    *(_DWORD *)(a1 + 8) = v7;
  }
  while ( &off_2BF5820 != v2 );
  return (char)v3;
}
