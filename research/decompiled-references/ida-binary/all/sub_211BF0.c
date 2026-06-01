__int64 __fastcall sub_211BF0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r9
  __int64 v4; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __m128i v13; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v2 = a1 + 15;
  v4 = a1[16];
  v14 = __readfsqword(0x28u);
  v13.m128i_i64[0] = a2;
  v6 = a1[15];
  v13.m128i_i16[4] = 0;
  v7 = a1[17];
  v8 = v4 + 1;
  if ( (unsigned __int64)&v13 >= v6 && (unsigned __int64)&v13 < v6 + 16 * v7 )
  {
    if ( v7 < v8 )
    {
      v12 = qvector_reserve(v2, v6, v4 + 1, 16);
      a1[15] = v12;
      v6 = v12;
      v4 = a1[16];
    }
    v10 = 16 * v4 + v6;
    *(_QWORD *)v10 = a2;
    *(_WORD *)(v10 + 8) = 0;
  }
  else
  {
    if ( v7 < v8 )
    {
      v11 = qvector_reserve(v2, v6, v4 + 1, 16);
      a1[15] = v11;
      v6 = v11;
      v4 = a1[16];
    }
    *(__m128i *)(v6 + 16 * v4) = _mm_load_si128(&v13);
  }
  ++a1[16];
  return sub_211B40((__int64)a1);
}
