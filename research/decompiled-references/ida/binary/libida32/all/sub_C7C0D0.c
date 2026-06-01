__int64 __fastcall sub_C7C0D0(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __m128i *v3; // rax
  __int64 result; // rax

  v3 = *(__m128i **)(a1 + 8);
  if ( v3 == *(__m128i **)(a1 + 16) )
  {
    sub_C7BF40(a1, v3, a2, a3);
    return *(_QWORD *)(a1 + 8) - 16LL;
  }
  else
  {
    v3->m128i_i32[0] = *a2;
    v3->m128i_i64[1] = *a3;
    result = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = result + 16;
  }
  return result;
}

