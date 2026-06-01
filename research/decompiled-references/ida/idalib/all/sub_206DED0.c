__int64 __fastcall sub_206DED0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  unsigned __int64 **v4; // r9
  __int64 v5; // r8
  __m128d v7; // xmm0
  __int64 v8; // [rsp+8h] [rbp-10h] BYREF

  v3 = a1;
  v8 = a2;
  if ( a3 == a2 )
  {
LABEL_6:
    *(_BYTE *)(v3 + 16) = 0;
    return v3;
  }
  if ( *(_QWORD *)a2 != 4096 )
  {
    v4 = (unsigned __int64 **)&v8;
    do
    {
      a2 += 8LL * (unsigned int)sub_206DAF0(v4);
      v8 = a2;
      if ( v5 == a2 )
        goto LABEL_6;
    }
    while ( *(_QWORD *)a2 != 4096 );
  }
  v7 = (__m128d)_mm_loadu_si128((const __m128i *)(a2 + 8));
  *(_BYTE *)(v3 + 16) = 1;
  *(__m128d *)v3 = _mm_shuffle_pd(v7, v7, 1);
  return v3;
}
