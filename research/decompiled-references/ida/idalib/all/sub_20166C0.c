_QWORD *__fastcall sub_20166C0(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax
  __int64 v3; // rdx

  result = (_QWORD *)a1[2];
  if ( result )
  {
    v3 = a1[1];
    *result = v3;
    if ( v3 )
    {
      *(_QWORD *)(v3 + 16) = result;
      a1[1] = 0;
    }
    a1[2] = 0;
  }
  *a1 = a2;
  if ( a2 && *(_BYTE *)a2 > 9u )
  {
    result = *(_QWORD **)(a2 + 16);
    a1[1] = result;
    if ( result )
      result[2] = a1 + 1;
    a1[2] = a2 + 16;
    *(_QWORD *)(a2 + 16) = a1;
  }
  return result;
}
