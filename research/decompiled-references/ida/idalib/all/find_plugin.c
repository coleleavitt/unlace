__int64 __fastcall find_plugin(const char *a1, unsigned __int8 a2, __m128 a3, __m128 a4)
{
  _QWORD *v5; // rdi

  v5 = nullptr;
  if ( (unsigned __int8)sub_3FB5F0() )
    v5 = *(_QWORD **)(qword_2CCB598 + 1744);
  return sub_4EE510(v5, a1, a2, 0, a3, a4);
}
