__int64 __fastcall sub_32620(_QWORD *a1, __int64 a2, const __m128i *a3)
{
  int v4; // eax
  size_t v5; // rbp
  void *v6; // rax
  void *v7; // r13
  __int64 result; // rax
  __m128i v9; // [rsp+0h] [rbp-48h] BYREF
  __int64 v10; // [rsp+10h] [rbp-38h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v9 = _mm_loadu_si128(a3);
  v10 = a3[1].m128i_i64[0];
  v4 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64, __int64, __m128i *))__vsnprintf_chk)(
         0,
         0,
         1,
         -1,
         a2,
         &v9);
  *a1 = 0;
  if ( v4 >= 0 )
  {
    v5 = v4 + 1;
    v6 = malloc(v5);
    v7 = v6;
    if ( v6 )
    {
      result = __vsnprintf_chk(v6, v5, 1, -1, a2, a3, v9.m128i_i64[0], v9.m128i_i64[1], v10, v11);
      if ( (int)result >= 0 )
      {
        *a1 = v7;
        return result;
      }
      free(v7);
    }
  }
  return 0xFFFFFFFFLL;
}

