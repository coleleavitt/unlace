__int64 __fastcall clang_getDiagnosticFixIt(__int64 a1, unsigned int a2, __m128 *a3, __m128 a4)
{
  __m128i v6; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v7; // [rsp+10h] [rbp-28h]

  if ( a1 && a2 < (*(unsigned int (**)(void))(*(_QWORD *)a1 + 80LL))() )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, __m128 *))(*(_QWORD *)a1 + 88LL))(a1, a2, a3);
  if ( a3 )
  {
    clang_getNullRange(&v6);
    a4 = (__m128)_mm_loadu_si128(&v6);
    *a3 = a4;
    a3[1].m128_u64[0] = v7;
  }
  return sub_690460(*(double *)a4.m128_u64);
}

