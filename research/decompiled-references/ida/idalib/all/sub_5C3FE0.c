unsigned __int64 *__fastcall sub_5C3FE0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  unsigned __int64 *result; // rax
  unsigned __int64 v5; // rsi
  unsigned int v6; // eax

  v3 = a1 + 1704;
  result = sub_505D70(a1 + 1704, a2[1]);
  v5 = a2[1];
  if ( !result || *result >= v5 || *a2 >= result[1] )
  {
    v6 = sub_505E30(v3, v5);
    return sub_505DE0(v3, v6);
  }
  return result;
}
