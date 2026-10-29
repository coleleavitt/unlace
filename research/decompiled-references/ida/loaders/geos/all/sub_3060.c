__int64 *__fastcall sub_3060(__int64 *a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  unsigned __int64 v13; // rbp
  __int64 v15; // rax
  __m128i v16; // [rsp+0h] [rbp-38h] BYREF
  __int64 v17; // [rsp+10h] [rbp-28h]
  unsigned __int64 v18; // [rsp+18h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  v16 = _mm_loadu_si128(a3);
  v17 = a3[1].m128i_i64[0];
  v8 = *a1;
  if ( v8 )
  {
    a1[1] = 0;
    qfree(v8, a2, a3, a4);
    *a1 = 0;
    a1[2] = 0;
  }
  v9 = (int)qvsnprintf(0, 0, a2, a3, a5, a6, v16.m128i_i64[0], v16.m128i_i64[1], v17, v18);
  if ( (_DWORD)v9 )
  {
    v12 = *a1;
    v13 = (int)v9 + 1LL;
    if ( a1[2] < v13 )
    {
      v15 = qvector_reserve(a1, *a1, v9 + 1, 1);
      *a1 = v15;
      v12 = v15;
    }
    a1[1] = v13;
    ((void (__fastcall *)(__int64, unsigned __int64, __int64, __m128i *, __int64, __int64))qvsnprintf)(
      v12,
      v13,
      a2,
      &v16,
      v10,
      v11);
  }
  return a1;
}

