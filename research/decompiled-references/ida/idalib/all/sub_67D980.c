unsigned __int64 __fastcall sub_67D980(const __m128i *a1, unsigned __int64 a2, __int64 a3)
{
  __int16 v4; // ax
  int v5; // edx
  __int64 i; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int8 v10; // dl
  const __m128i *v11; // rax
  const __m128i *v12; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-30h]
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  if ( (dword_2CCC3C8 & 0x4000) != 0 )
  {
    *(__m128i *)a3 = _mm_loadu_si128(a1);
    *(__m128i *)(a3 + 16) = _mm_loadu_si128(a1 + 1);
    v4 = a1[2].m128i_i16[0];
    v5 = *(_DWORD *)(a3 + 28);
    *(_WORD *)(a3 + 32) = v4;
    *(_WORD *)(a3 + 148) = v4;
    *(_DWORD *)(a3 + 144) = v5;
    *(_QWORD *)(a3 + 150) = 0x303030303030303LL;
    *(_WORD *)(a3 + 158) = 771;
    for ( i = 0; i != -12; i -= 2 )
      *(_QWORD *)(a3 + 4 * i + 56) = *(unsigned __int16 *)(a3 + i + 26);
    *(_OWORD *)(a3 + 64) = -1;
    *(_OWORD *)(a3 + 80) = -1;
    *(_OWORD *)(a3 + 96) = -1;
    *(_OWORD *)(a3 + 112) = -1;
    *(_OWORD *)(a3 + 128) = -1;
  }
  else
  {
    v12 = a1;
    v8 = 0;
    v13 = a2;
    *(_QWORD *)a3 = unpack_dq(&v12);
    *(_QWORD *)(a3 + 8) = *(_QWORD *)a3 + unpack_dq(&v12);
    do
    {
      v9 = unpack_dq(&v12);
      v10 = 0;
      *(_QWORD *)(a3 + 8 * v8 + 16) = v9 - 1;
      v11 = v12;
      if ( (unsigned __int64)v12 < v13 )
      {
        v10 = v12->m128i_i8[0];
        v11 = (const __m128i *)&v12->m128i_i8[1];
      }
      *(_BYTE *)(a3 + v8++ + 144) = v10;
      v12 = v11;
    }
    while ( v8 != 16 );
  }
  return v14 - __readfsqword(0x28u);
}
