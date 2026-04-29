__int64 __fastcall sub_1510(__int64 *a1, __int64 *a2, __int64 a3)
{
  unsigned __int8 *v5; // rax
  __int16 v6; // dx
  __int16 v7; // cx
  __int64 v8; // rbx
  __int64 v10; // rsi
  __m128i si128; // xmm0
  _DWORD *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  _BYTE v15[2]; // [rsp+8h] [rbp-80h] BYREF
  unsigned __int16 v16; // [rsp+Ah] [rbp-7Eh] BYREF
  _BYTE v17[4]; // [rsp+Ch] [rbp-7Ch] BYREF
  _BYTE v18[47]; // [rsp+10h] [rbp-78h] BYREF
  __int16 v19; // [rsp+3Fh] [rbp-49h] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  if ( qlread(a3, v18, 49) == 49 )
  {
    v5 = v18;
    v6 = 0;
    do
    {
      v7 = *v5++;
      v6 += v7;
    }
    while ( v5 != (unsigned __int8 *)&v19 );
    if ( v6 == v19 )
    {
      v8 = 0;
      while ( qlread(a3, v15, 2) == 2 && qlread(a3, v17, 4) == 4 && qlread(a3, &v16, 2) == 2 )
      {
        if ( !v16 )
        {
          if ( !v8 )
            return 0;
          v10 = *a1;
          if ( (unsigned __int64)a1[2] <= 0x26 )
          {
            v13 = qvector_reserve(a1, v10, 39, 1);
            *a1 = v13;
            v10 = v13;
          }
          si128 = _mm_load_si128((const __m128i *)&xmmword_2120);
          a1[1] = 39;
          *(__m128i *)v10 = si128;
          *(__m128i *)(v10 + 16) = _mm_load_si128((const __m128i *)&xmmword_2130);
          *(_QWORD *)(v10 + 30) = 0x48626D4720676E69LL;
          *(_BYTE *)(*a1 + 38) = 0;
          v12 = (_DWORD *)*a2;
          if ( (unsigned __int64)a2[2] <= 4 )
          {
            v14 = qvector_reserve(a2, v12, 5, 1);
            *a2 = v14;
            v12 = (_DWORD *)v14;
          }
          a2[1] = 5;
          *v12 = 909521219;
          *(_BYTE *)(*a2 + 4) = 0;
          return 1;
        }
        qlseek(a3, v16 + 2LL, 1);
        v8 += v16;
      }
    }
  }
  return 0;
}
