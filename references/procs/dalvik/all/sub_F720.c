__int64 *__fastcall sub_F720(__int64 *a1, __int64 a2, const __m128i *a3)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // r13
  unsigned __int64 v8; // r14
  __int64 v10; // rax
  __m128i v11; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+10h] [rbp-38h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v11 = _mm_loadu_si128(a3);
  v12 = a3[1].m128i_i64[0];
  v4 = (int)qvsnprintf(0, 0, a2, a3);
  if ( (_DWORD)v4 )
  {
    v5 = (int)v4 + 1LL;
    v6 = *a1;
    v7 = (a1[1] == 0) + a1[1] - 1;
    v8 = (a1[1] == 0) + a1[1] + (int)v4;
    if ( a1[2] < v8 )
    {
      v10 = qvector_reserve(a1, v6, (a1[1] == 0) + a1[1] + v4, 1);
      *a1 = v10;
      v6 = v10;
    }
    a1[1] = v8;
    qvsnprintf(v6 + v7, v5, a2, &v11);
  }
  return a1;
}
