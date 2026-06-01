__int64 __fastcall sub_222B070(__int64 a1, __int64 *a2, char *a3, size_t a4)
{
  __int64 v4; // rax
  __m128i v5; // xmm0
  __int64 v7; // rdx
  __int64 v8; // rax

  v4 = sub_222AD60(a2, a3, a4);
  if ( v4 )
  {
    if ( *(_WORD *)v4 == 6 )
    {
      v7 = *(_QWORD *)(v4 + 8);
      v8 = *(_QWORD *)(v4 + 16);
      *(_BYTE *)(a1 + 16) = 1;
      *(_QWORD *)(a1 + 8) = v8;
      *(_QWORD *)a1 = v7;
      return a1;
    }
    if ( *(_WORD *)v4 == 5 )
    {
      v5 = _mm_loadu_si128((const __m128i *)(v4 + 8));
      *(_BYTE *)(a1 + 16) = 1;
      *(__m128i *)a1 = v5;
      return a1;
    }
  }
  *(_BYTE *)(a1 + 16) = 0;
  return a1;
}
