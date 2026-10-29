__m128i *__fastcall sub_674100(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rbp
  __m128i *result; // rax
  __int64 v5; // rdi
  __m128i *v6; // rbp

  v3 = *(_QWORD **)(a1 + 128);
  result = (__m128i *)(*(__int64 (__fastcall **)(_QWORD *))(*v3 + 32LL))(v3);
  if ( *a2 )
  {
    v5 = v3[7];
    if ( !v5 || (result = (__m128i *)(*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v5 + 32LL))(v5, a2), *a2) )
    {
      result = sub_673C60(a1);
      v6 = result;
      if ( result )
      {
        ++result->m128i_i32[2];
        result = (__m128i *)(*(__int64 (__fastcall **)(__m128i *, _QWORD *))(result->m128i_i64[0] + 32))(result, a2);
        if ( v6->m128i_i32[2]-- == 1 )
        {
          (*(void (__fastcall **)(__m128i *))v6->m128i_i64[0])(v6);
          return (__m128i *)sub_186B220(v6);
        }
      }
    }
  }
  return result;
}

