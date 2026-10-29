_QWORD *__fastcall sub_300510(__int64 a1, _DWORD **a2, _QWORD *a3)
{
  _DWORD *v4; // r13
  _DWORD *v5; // r14
  _QWORD *result; // rax
  __m128i v8; // xmm0
  __int64 v9; // rdi
  __int64 v10; // rsi
  unsigned __int64 i; // rdx

  v4 = *(_DWORD **)(a1 + 144);
  if ( v4 )
    ++v4[4];
  v5 = *a2;
  if ( *a2 )
  {
    if ( v5[4]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *))v5)(v5);
      sub_186B220(v5);
    }
  }
  result = (_QWORD *)(a1 + 152);
  *a2 = v4;
  if ( a3 != (_QWORD *)(a1 + 152) )
  {
    if ( *a3 )
      sub_186B220((void *)(*a3 - 8LL));
    result = *(_QWORD **)(a1 + 152);
    if ( result )
    {
      v8 = _mm_loadl_epi64((const __m128i *)(result - 1));
      result = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v8) + 8);
      *a3 = result + 1;
      v9 = *(_QWORD *)(a1 + 152);
      *result = v8.m128i_i64[0];
      if ( v9 )
      {
        v10 = 8LL * *(unsigned int *)(v9 - 4);
        if ( v10 )
        {
          for ( i = 0; i != v10; i += 8LL )
            result[i / 8 + 1] = *(_QWORD *)(v9 + i);
        }
      }
    }
    else
    {
      *a3 = 0;
    }
  }
  return result;
}

