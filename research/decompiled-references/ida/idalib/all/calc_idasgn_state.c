__int64 __fastcall calc_idasgn_state(int a1)
{
  _QWORD *v1; // rbp
  int v2; // edx
  __int64 result; // rax
  int v4; // edx

  v1 = *(_QWORD **)(qword_2CCB598 + 1672);
  v2 = sub_7BE710(v1 + 344, *v1, -2, 65);
  result = 1;
  if ( a1 < v2 )
  {
    v4 = sub_7BE710(v1 + 344, *v1, -1, 65);
    result = 4;
    if ( a1 < v4 )
      return (unsigned int)((unsigned __int8)sub_7BE710(v1 + 344, *v1, a1, 4176) == 0) + 2;
  }
  return result;
}
