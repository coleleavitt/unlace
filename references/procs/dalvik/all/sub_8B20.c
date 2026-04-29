__int64 *__fastcall sub_8B20(__int64 *a1, __int64 a2, const __m128i *a3, __int64 a4)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // rbp
  __int64 v11; // rax
  __m128i v12; // [rsp+0h] [rbp-38h] BYREF
  __int64 v13; // [rsp+10h] [rbp-28h]
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  v12 = _mm_loadu_si128(a3);
  v13 = a3[1].m128i_i64[0];
  v6 = *a1;
  if ( v6 )
  {
    a1[1] = 0;
    qfree(v6, a2, a3, a4);
    *a1 = 0;
    a1[2] = 0;
  }
  v7 = (int)qvsnprintf(0, 0, a2, a3);
  if ( (_DWORD)v7 )
  {
    v8 = *a1;
    v9 = (int)v7 + 1LL;
    if ( a1[2] < v9 )
    {
      v11 = qvector_reserve(a1, *a1, v7 + 1, 1);
      *a1 = v11;
      v8 = v11;
    }
    a1[1] = v9;
    qvsnprintf(v8, v9, a2, &v12);
  }
  return a1;
}
