void __fastcall sub_4FF560(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rdi
  __m128i v4; // xmm0
  __int64 v5; // rax
  _DWORD *v6; // rsi
  size_t v7; // rdx
  __int64 v8; // [rsp+0h] [rbp-20h]

  if ( a1 != a2 )
  {
    v3 = *a1;
    if ( v3 )
      sub_186B220((void *)(v3 - 8));
    if ( *a2 )
    {
      v4 = _mm_loadl_epi64((const __m128i *)(*a2 - 8));
      v8 = v4.m128i_i64[0];
      v5 = sub_186B270(4LL * (unsigned int)_mm_cvtsi128_si32(v4) + 8);
      *a1 = v5 + 8;
      v6 = (_DWORD *)*a2;
      *(_QWORD *)v5 = v4.m128i_i64[0];
      if ( v6 )
      {
        v7 = 4LL * (unsigned int)*(v6 - 1);
        if ( v7 <= 4 )
        {
          if ( v7 == 4 )
            *(_DWORD *)(v5 + 8) = *v6;
        }
        else
        {
          memmove((void *)(v5 + 8), v6, v7);
        }
      }
    }
    else
    {
      *a1 = 0;
    }
  }
}

