_QWORD *__fastcall sub_7BA650(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // rcx
  _QWORD *result; // rax
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdi

  v3 = *a2;
  result = **(_QWORD ***)(a1 + 1736);
  v5 = result[736];
  if ( v5 >= *a2 && v5 < a2[1] )
  {
    result[736] = a3 + v5;
    v3 = *a2;
  }
  v6 = result[737];
  if ( v6 >= v3 && v6 < a2[1] )
  {
    result[737] = a3 + v6;
    v3 = *a2;
  }
  v7 = result[738];
  if ( v7 >= v3 && v7 < a2[1] )
  {
    result[738] = a3 + v7;
    v3 = *a2;
  }
  v8 = result[739];
  if ( v8 >= v3 && v8 < a2[1] )
    result[739] = v8 + a3;
  return result;
}
