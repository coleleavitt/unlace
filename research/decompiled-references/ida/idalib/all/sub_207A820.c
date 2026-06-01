unsigned __int64 __fastcall sub_207A820(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // r12
  _QWORD *v3; // rbx
  _QWORD *v6; // rsi
  unsigned __int64 v7; // [rsp+0h] [rbp-68h] BYREF
  __m128i si128; // [rsp+8h] [rbp-60h]
  __m128i v9; // [rsp+18h] [rbp-50h]
  __m128i v10; // [rsp+28h] [rbp-40h]

  v2 = a2 - (_QWORD)a1;
  v3 = a1;
  if ( (unsigned __int64)(a2 - (_QWORD)a1) <= 0x40 )
    return sub_2012F20(a1, a2 - (_QWORD)a1, 0xFF51AFD7ED558CCDLL);
  v7 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8CC0);
  v9 = _mm_load_si128((const __m128i *)&xmmword_23A8CD0);
  v10 = _mm_load_si128((const __m128i *)&xmmword_23A8CE0);
  do
  {
    v6 = v3;
    v3 += 8;
    sub_9B6F20(&v7, v6);
  }
  while ( (_QWORD *)((char *)a1 + (v2 & 0xFFFFFFFFFFFFFFC0LL)) != v3 );
  if ( (v2 & 0x3F) != 0 )
    sub_9B6F20(&v7, (_QWORD *)(a2 - 64));
  return sub_20131D0(&v7, v2);
}
