unsigned __int64 __fastcall sub_22CDE20(_BYTE *a1, int a2, unsigned __int64 a3)
{
  int v3; // esi
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  char v7; // r10
  __int64 v8; // r8
  char v9; // al
  __int64 v10; // rcx
  _OWORD v12[11]; // [rsp+0h] [rbp-E8h]
  __m128i v13[2]; // [rsp+B0h] [rbp-38h]
  unsigned __int64 v14; // [rsp+D8h] [rbp-10h]

  v3 = a2 - 1;
  v14 = __readfsqword(0x28u);
  v4 = a3;
  v12[0] = _mm_load_si128((const __m128i *)&xmmword_23ABEF0);
  v12[1] = _mm_load_si128((const __m128i *)&xmmword_23ABF00);
  v12[2] = _mm_load_si128((const __m128i *)&xmmword_23ABF10);
  v12[3] = _mm_load_si128((const __m128i *)&xmmword_23ABF20);
  v12[4] = _mm_load_si128((const __m128i *)&xmmword_23ABF30);
  v12[5] = _mm_load_si128((const __m128i *)&xmmword_23ABF40);
  v12[6] = _mm_load_si128((const __m128i *)&xmmword_23ABF50);
  v12[7] = _mm_load_si128((const __m128i *)&xmmword_23ABF60);
  v12[8] = _mm_load_si128((const __m128i *)&xmmword_23ABF70);
  v12[9] = _mm_load_si128((const __m128i *)&xmmword_23ABF80);
  v12[10] = _mm_load_si128((const __m128i *)&xmmword_23ABF90);
  v13[0] = _mm_load_si128((const __m128i *)&xmmword_23ABFA0);
  *(__m128i *)((char *)v13 + 9) = _mm_load_si128(xmmword_23ABFB0);
  if ( a3 > 0x63 )
  {
    do
    {
      v5 = v4
         - 20 * (v4 / 0x64 + (((0x28F5C28F5C28F5C3LL * (unsigned __int128)(v4 >> 2)) >> 64) & 0xFFFFFFFFFFFFFFFCLL));
      v6 = v4;
      v4 /= 0x64u;
      v5 *= 2;
      v7 = *((_BYTE *)v12 + v5 + 1);
      LOBYTE(v5) = *((_BYTE *)v12 + v5);
      a1[v3] = v7;
      v8 = (unsigned int)(v3 - 1);
      v3 -= 2;
      a1[v8] = v5;
    }
    while ( v6 > 0x270F );
  }
  v9 = v4 + 48;
  if ( v4 > 9 )
  {
    v10 = 2 * v4;
    a1[1] = *((_BYTE *)v12 + v10 + 1);
    v9 = *((_BYTE *)v12 + v10);
  }
  *a1 = v9;
  return v14 - __readfsqword(0x28u);
}
