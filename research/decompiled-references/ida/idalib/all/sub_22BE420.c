void __fastcall sub_22BE420(__int64 a1, char a2)
{
  const __m128i *v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // r8
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  int v7; // edx
  __int64 *v8; // rax
  __int64 v9; // [rsp+8h] [rbp-40h]

  v2 = (const __m128i *)off_2BF7B80;
  do
  {
    while ( 1 )
    {
      if ( v2[3].m128i_i8[1] )
        goto LABEL_11;
      v3 = v2->m128i_i64[1];
      if ( !v3 || (v2[1].m128i_i8[13] & 2) == 0 && a2 )
        goto LABEL_11;
      v4 = v2->m128i_i64[0];
      if ( v3 != 9 )
        goto LABEL_9;
      if ( *(_QWORD *)v4 == 0x762D34362D363878LL && *(_BYTE *)(v4 + 8) == 50 )
        goto LABEL_11;
      if ( *(_QWORD *)v4 != 0x762D34362D363878LL )
        goto LABEL_9;
      if ( *(_BYTE *)(v4 + 8) == 51 )
        goto LABEL_11;
      if ( *(_QWORD *)v4 != 0x762D34362D363878LL )
      {
LABEL_9:
        v5 = *(unsigned int *)(a1 + 8);
        v6 = *(unsigned int *)(a1 + 12);
        v7 = *(_DWORD *)(a1 + 8);
        if ( v5 >= v6 )
          break;
        goto LABEL_10;
      }
      if ( *(_BYTE *)(v4 + 8) == 52 )
        goto LABEL_11;
      v5 = *(unsigned int *)(a1 + 8);
      v6 = *(unsigned int *)(a1 + 12);
      v7 = *(_DWORD *)(a1 + 8);
      if ( v5 >= v6 )
        break;
LABEL_10:
      *(__m128i *)(*(_QWORD *)a1 + 16 * v5) = _mm_loadu_si128(v2);
      *(_DWORD *)(a1 + 8) = v7 + 1;
LABEL_11:
      v2 = (const __m128i *)((char *)v2 + 56);
      if ( &unk_2BF97F0 == (_UNKNOWN *)v2 )
        return;
    }
    if ( v6 < v5 + 1 )
    {
      v9 = v2->m128i_i64[0];
      sub_2237220(a1, (const void *)(a1 + 16), v5 + 1, 16);
      v5 = *(unsigned int *)(a1 + 8);
      v4 = v9;
    }
    v2 = (const __m128i *)((char *)v2 + 56);
    v8 = (__int64 *)(*(_QWORD *)a1 + 16 * v5);
    *v8 = v4;
    v8[1] = v3;
    ++*(_DWORD *)(a1 + 8);
  }
  while ( &unk_2BF97F0 != (_UNKNOWN *)v2 );
}
