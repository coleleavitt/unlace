void *__fastcall sub_96080(__int64 a1, void *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rax
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rsi
  void *result; // rax

  if ( !a1 )
  {
    if ( !byte_1671A1 )
      sub_96F80(2676);
    BUG();
  }
  v4 = *(_QWORD *)(a1 + 16);
  v6 = a3;
  if ( 2 * v4 >= a3 )
    v6 = 2 * v4;
  if ( v6 && a4 && !is_mul_ok(a4, v6) )
  {
    if ( a3 >= 2 * v4 || a3 && !is_mul_ok(a4, a3) )
      std::__throw_bad_alloc();
    v6 = a3;
    v7 = a3 * a4;
  }
  else
  {
    v7 = v6 * a4;
  }
  result = sub_96050(a2, v7);
  *(_QWORD *)(a1 + 16) = v6;
  return result;
}

