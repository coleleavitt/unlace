/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000765D0
// Address: 0x00000001000765D0

//----- (00000001000765D0) ----------------------------------------------------
__int64 __fastcall sub_1000765D0(unsigned __int64 *a1, __int128 *a2, signed int a3, int a4)
{
  __int16 v5; // r15
  __int16 v6; // ax
  unsigned __int16 v7; // ax
  __int16 v8; // cx
  __int16 v9; // ax
  unsigned int v10; // ecx
  __int64 result; // rax
  unsigned int v12; // esi
  signed int v13; // r12d
  unsigned __int64 v14; // rcx
  __int16 v15; // [rsp+0h] [rbp-60h] BYREF
  unsigned __int16 v16; // [rsp+2h] [rbp-5Eh]
  __m128i v17; // [rsp+4h] [rbp-5Ch] BYREF
  __int16 v18; // [rsp+14h] [rbp-4Ch]
  __int128 v19; // [rsp+20h] [rbp-40h] BYREF

  if ( a4 )
  {
    v19 = *a2;
    v5 = HIWORD(v19);
    eadd((__int64)&qword_1000A1700, (__int64)&v19, (__int64)&v19, HIWORD(v19) >> 15);
    v6 = 0;
    if ( HIWORD(v19) )
      v6 = HIWORD(v19) ^ 0x8000;
    if ( v5 >= 0 )
      v6 = HIWORD(v19);
    v15 = (unsigned int)v6 >> 15;
    v7 = v6 & 0x7FFF;
    v16 = v7;
    v17.i16[0] = 0;
    *(__int64 *)((char *)v17.i64 + 2) = _mm_shufflelo_epi16(_mm_loadl_epi64((const __m128i *)((char *)&v19 + 6)), 27).u64[0];
    *(__int32 *)((char *)&v17.i32[2] + 2) = _mm_cvtsi128_si32(
                                              _mm_shufflelo_epi16(
                                                _mm_cvtsi32_si128(*(unsigned int *)((char *)&v19 + 2)),
                                                225));
    v8 = v19;
  }
  else
  {
    v9 = *((_WORD *)a2 + 7);
    v15 = (unsigned int)v9 >> 15;
    v7 = v9 & 0x7FFF;
    v16 = v7;
    v17.i16[0] = 0;
    *(__int64 *)((char *)v17.i64 + 2) = _mm_shufflelo_epi16(_mm_loadl_epi64((const __m128i *)((char *)a2 + 6)), 27).u64[0];
    *(__int32 *)((char *)&v17.i32[2] + 2) = _mm_cvtsi128_si32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(*(_DWORD *)((char *)a2 + 2)), 225));
    v8 = *(_WORD *)a2;
  }
  v17.i16[7] = v8;
  v18 = 0;
  *a1 = 0;
  v10 = v7;
  result = 1;
  if ( v10 >= 0x3FFF )
  {
    v12 = v10 - 16382;
    result = 5;
    if ( (int)(v10 - 16382) <= a3 )
    {
      if ( v10 < 0x400F )
      {
        eshift((__int64)&v15, v12);
        v14 = v17.u16[0];
      }
      else
      {
        v13 = v12 & 0xFFFFFFF0;
        eshift((__int64)&v15, ((_BYTE)v10 + 2) & 0xF);
        v14 = v17.u16[0];
        do
        {
          v17 = _mm_loadu_si128((const __m128i *)&v17.i16[1]);
          v18 = 0;
          v14 = v17.u16[0] | (v14 << 16);
          v13 -= 16;
        }
        while ( v13 > 0 );
      }
      result = 5;
      if ( v15 )
      {
        if ( a3 == 64 )
          return result;
        v14 = -(__int64)v14;
      }
      *a1 = v14;
      return 1;
    }
  }
  return result;
}
// 1000A1700: using guessed type __int64 qword_1000A1700;
