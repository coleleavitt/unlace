__int64 __fastcall sub_49F310(__int64 a1, int a2, __int64 a3, unsigned int a4, const __m128i *a5)
{
  __int64 **v5; // rbx
  __int64 v9; // rax
  __m128i v11; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+10h] [rbp-38h]
  unsigned __int64 i; // [rsp+18h] [rbp-30h]

  v5 = *(__int64 ***)(a1 + 8LL * a2 + 72);
  for ( i = __readfsqword(0x28u); v5; a3 = v9 )
  {
    v11 = _mm_loadu_si128(a5);
    v12 = a5[1].m128i_i64[0];
    v9 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, __m128i *))*v5[1])(v5[1], a3, a4, &v11);
    v5 = (__int64 **)*v5;
  }
  return a3;
}

