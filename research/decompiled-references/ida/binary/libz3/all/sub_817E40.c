__int64 __fastcall sub_817E40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 i; // r13
  __m128 v9; // xmm0
  __int64 v10; // [rsp+0h] [rbp-58h] BYREF
  __m128 v11; // [rsp+8h] [rbp-50h]

  v6 = *(_QWORD *)(a2 + 24);
  if ( v6 )
  {
    result = *(unsigned int *)(v6 - 4);
    for ( i = v6 + 8 * result;
          i != v6;
          result = ((__int64 (__fastcall *)(__int64, __int64 *, __int64, __int64, __int64, __int64))sub_865240)(
                     a1,
                     &v10,
                     a3,
                     a4,
                     a5,
                     a6) )
    {
      v6 += 8;
      v9 = _mm_loadh_ps((const double *)(v6 - 8));
      v10 = 1;
      v11 = v9;
    }
  }
  return result;
}

