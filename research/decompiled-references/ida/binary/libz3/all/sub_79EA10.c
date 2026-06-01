__int64 __fastcall sub_79EA10(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  _DWORD *v6; // rdx
  __int64 result; // rax
  __m128i v9; // xmm0
  _QWORD *v10; // r13
  void *v11; // rdi
  _QWORD *v12; // rsi
  size_t v13; // rdx

  if ( *(_WORD *)(a2 + 4) )
    return 0;
  v6 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  result = 0;
  if ( v6 && !*v6 && v6[1] == 3 )
  {
    if ( *a4 )
    {
      v9 = _mm_loadl_epi64((const __m128i *)(*a4 - 8LL));
      v10 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v9) + 8);
      v11 = v10 + 1;
      v12 = (_QWORD *)*a4;
      *v10 = v9.m128i_i64[0];
      if ( v12 )
      {
        v13 = 8LL * *((unsigned int *)v12 - 1);
        if ( v13 <= 8 )
        {
          if ( v13 == 8 )
            v10[1] = *v12;
        }
        else
        {
          v11 = memmove(v11, v12, v13);
        }
      }
      if ( a3 )
        sub_79DD10(a1, a2, (__int64)v11);
      else
        sub_79C670(a1, a2, (__int64)v11);
      sub_186B220(v10);
    }
    else if ( a3 )
    {
      sub_79DD10(a1, a2, 0);
    }
    else
    {
      sub_79C670(a1, a2, 0);
    }
    return 1;
  }
  return result;
}

