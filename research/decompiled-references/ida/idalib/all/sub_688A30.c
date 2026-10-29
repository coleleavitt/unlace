__int64 __fastcall sub_688A30(_QWORD *a1, int a2)
{
  _QWORD *v2; // r12
  int v3; // edx
  __int64 result; // rax
  int v5; // edx

  v2 = a1 + 344;
  v3 = sub_7BE710(a1 + 344, *a1, -2, 65);
  result = 1;
  if ( a2 < v3 )
  {
    v5 = sub_7BE710(v2, *a1, -1, 65);
    result = 4;
    if ( a2 < v5 )
      return (unsigned int)((unsigned __int8)sub_7BE710(v2, *a1, a2, 4176) == 0) + 2;
  }
  return result;
}
