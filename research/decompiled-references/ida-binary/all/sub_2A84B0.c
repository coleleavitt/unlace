void *__fastcall grida_model_data_t__::vfunc_3(_QWORD *a1, unsigned __int64 a2)
{
  void *result; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rax

  result = (void *)gruser_model_data_t__::vfunc_3();
  v4 = a1[15];
  if ( v4 < a2 )
  {
    v5 = a1[14];
    if ( a1[16] < a2 )
    {
      v6 = qvector_reserve(a1 + 14, v5, a2, 4);
      v4 = a1[15];
      a1[14] = v6;
      v5 = v6;
    }
    result = memset((void *)(v5 + 4 * v4), 0, 4 * (a2 - v4));
    a1[15] = a2;
  }
  else if ( a2 != v4 )
  {
    a1[15] = a2;
  }
  return result;
}
