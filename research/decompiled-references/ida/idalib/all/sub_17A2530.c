unsigned __int64 __fastcall sub_17A2530(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 result; // rax
  _QWORD *v7; // rdi
  unsigned __int64 v8; // [rsp+0h] [rbp-20h] BYREF
  __m128 v9; // [rsp+8h] [rbp-18h] BYREF

  result = a2;
  if ( a3 )
  {
    v7 = *(_QWORD **)(a1 + 248);
    v8 = a2;
    v9 = _mm_loadh_ps((const double *)&v8);
    return (unsigned __int64)sub_BA6010(v7, &v9, 2u, a4, a5, a6) | 1;
  }
  return result;
}
