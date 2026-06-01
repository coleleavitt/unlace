__int64 __fastcall invoke_callbacks(unsigned int a1, unsigned int a2, __m128i *a3)
{
  __int64 v5; // rdi

  v5 = 0;
  if ( (unsigned __int8)sub_3FB5F0() )
    v5 = *(_QWORD *)(qword_2CCB598 + 1712);
  return sub_4B4960(v5, a1, a2, a3);
}
