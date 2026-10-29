__m128i *__fastcall sub_224EE70(__int64 a1, char a2)
{
  __int64 v2; // rbx
  __m128i **v3; // rbp
  __m128i *result; // rax
  __m128i v5; // xmm4
  __m128d v6; // xmm1
  __int64 v7; // rax
  double v8; // xmm0_8
  __m128i v9; // xmm7
  __m128i v10; // [rsp+10h] [rbp-98h] BYREF
  __m128i v11; // [rsp+20h] [rbp-88h] BYREF
  __m128i *v12; // [rsp+30h] [rbp-78h]
  __m128d v13; // [rsp+40h] [rbp-68h] BYREF
  double v14; // [rsp+50h] [rbp-58h]
  __int64 v15; // [rsp+58h] [rbp-50h]
  __int64 v16; // [rsp+60h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 )
  {
    v3 = (__m128i **)(a1 + 72);
    do
    {
      while ( !*(_BYTE *)(v2 + 145) )
      {
LABEL_5:
        v2 = *(_QWORD *)(v2 + 168);
        if ( !v2 )
          return result;
      }
      if ( !*(_BYTE *)(v2 + 144) )
      {
        result = sub_224EB80(v3, (const __m128i *)v2, v2 + 80, v2 + 112);
        if ( a2 )
        {
          result = nullptr;
          *(_QWORD *)(v2 + 56) = 0;
          *(_QWORD *)(v2 + 64) = 0;
          v5 = _mm_loadu_si128((const __m128i *)(v2 + 56));
          *(_WORD *)(v2 + 144) = 0;
          *(_QWORD *)(v2 + 72) = 0;
          *(_QWORD *)(v2 + 32) = 0;
          *(_OWORD *)(v2 + 40) = 0;
          *(_OWORD *)v2 = 0;
          *(__m128i *)(v2 + 16) = v5;
        }
        goto LABEL_5;
      }
      *(_BYTE *)(v2 + 144) = 0;
      sub_224DEC0((__int64)&v13, 0);
      v6 = _mm_sub_pd(_mm_add_pd(*(__m128d *)v2, v13), *(__m128d *)(v2 + 40));
      v7 = *(_QWORD *)(v2 + 32) + v16 - *(_QWORD *)(v2 + 72);
      v8 = *(double *)(v2 + 16) + v14 - *(double *)(v2 + 56);
      *(_QWORD *)(v2 + 24) = *(_QWORD *)(v2 + 24) + v15 - *(_QWORD *)(v2 + 64);
      *(_QWORD *)(v2 + 32) = v7;
      *(__m128d *)v2 = v6;
      *(double *)(v2 + 16) = v8;
      sub_224EB80(v3, (const __m128i *)v2, v2 + 80, v2 + 112);
      if ( a2 )
      {
        *(_QWORD *)(v2 + 56) = 0;
        *(_QWORD *)(v2 + 64) = 0;
        v9 = _mm_loadu_si128((const __m128i *)(v2 + 56));
        *(_QWORD *)(v2 + 72) = 0;
        *(_QWORD *)(v2 + 32) = 0;
        *(_OWORD *)(v2 + 40) = 0;
        *(_OWORD *)v2 = 0;
        *(__m128i *)(v2 + 16) = v9;
      }
      *(_WORD *)(v2 + 144) = 257;
      sub_224DEC0((__int64)&v10, 1);
      *(__m128i *)(v2 + 40) = _mm_loadu_si128(&v10);
      *(__m128i *)(v2 + 56) = _mm_loadu_si128(&v11);
      result = v12;
      *(_QWORD *)(v2 + 72) = v12;
      v2 = *(_QWORD *)(v2 + 168);
    }
    while ( v2 );
  }
  return result;
}
