__m128i *__fastcall sub_4F76F0(__m128i *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // al
  unsigned __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rax
  __m128i v10; // xmm0
  char s2[2]; // [rsp+6h] [rbp-12h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-10h]

  v6 = a2;
  v7 = (unsigned int)(a2 - 68);
  v13 = __readfsqword(0x28u);
  v8 = 0;
  if ( (unsigned __int8)v7 <= 0x31u )
  {
    v8 = 0x28F0000200B11LL;
    if ( _bittest64(&v8, v7) )
    {
      v6 = 78;
    }
    else
    {
      v8 = 105;
      if ( (_BYTE)v7 == 5 )
        v6 = 105;
    }
  }
  s2[0] = v6;
  s2[1] = 0;
  v9 = sub_4F7580(s2, v7, v8, a4, a5, a6);
  v10 = _mm_loadu_si128((const __m128i *)(v9 + 24));
  a1[1].m128i_i64[0] = *(_QWORD *)(v9 + 40);
  *a1 = v10;
  if ( v10.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)v10.m128i_i64[0], 1u);
  return a1;
}
