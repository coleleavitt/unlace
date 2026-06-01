void __fastcall sub_22BE340(__int64 a1, char a2)
{
  const __m128i *v2; // rbx
  __int64 v3; // rbp
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  int v6; // edx
  __int64 v7; // r8
  __int64 *v8; // rax
  __int64 v9; // [rsp+8h] [rbp-40h]

  v2 = (const __m128i *)off_2BF7B80;
  do
  {
    while ( 1 )
    {
      if ( v2[3].m128i_i8[1] )
        goto LABEL_3;
      v3 = v2->m128i_i64[1];
      if ( !v3 || (v2[1].m128i_i8[13] & 2) == 0 && a2 )
        goto LABEL_3;
      v4 = *(unsigned int *)(a1 + 8);
      v5 = *(unsigned int *)(a1 + 12);
      v6 = *(_DWORD *)(a1 + 8);
      if ( v4 >= v5 )
        break;
      *(__m128i *)(*(_QWORD *)a1 + 16 * v4) = _mm_loadu_si128(v2);
      *(_DWORD *)(a1 + 8) = v6 + 1;
LABEL_3:
      v2 = (const __m128i *)((char *)v2 + 56);
      if ( &unk_2BF97F0 == (_UNKNOWN *)v2 )
        return;
    }
    v7 = v2->m128i_i64[0];
    if ( v5 < v4 + 1 )
    {
      v9 = v2->m128i_i64[0];
      sub_2237220(a1, (const void *)(a1 + 16), v4 + 1, 16);
      v4 = *(unsigned int *)(a1 + 8);
      v7 = v9;
    }
    v2 = (const __m128i *)((char *)v2 + 56);
    v8 = (__int64 *)(*(_QWORD *)a1 + 16 * v4);
    *v8 = v7;
    v8[1] = v3;
    ++*(_DWORD *)(a1 + 8);
  }
  while ( &unk_2BF97F0 != (_UNKNOWN *)v2 );
}
