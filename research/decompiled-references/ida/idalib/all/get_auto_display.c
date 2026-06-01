__int64 __fastcall get_auto_display(__m128i *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = sub_3FB5F0();
  if ( (_BYTE)result )
  {
    if ( a1 )
    {
      v2 = *(_QWORD *)(qword_2CCB598 + 1536);
      *a1 = _mm_loadu_si128((const __m128i *)(v2 + 8));
      a1[1].m128i_i32[0] = *(_DWORD *)(v2 + 24);
    }
  }
  else if ( a1 )
  {
    a1->m128i_i32[0] = 0;
    a1->m128i_i64[1] = -1;
    a1[1].m128i_i32[0] = 0;
  }
  return result;
}
