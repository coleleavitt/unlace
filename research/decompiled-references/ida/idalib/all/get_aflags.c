_QWORD *__fastcall get_aflags(unsigned __int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // r8
  _QWORD *result; // rax
  _QWORD *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx

  v1 = *(_QWORD *)(qword_2CCB598 + 1672);
  v2 = (_QWORD *)(v1 + 1488);
  result = *(_QWORD **)(v1 + 1496);
  if ( !result )
    return nullptr;
  v4 = v2;
  do
  {
    while ( 1 )
    {
      v5 = result[2];
      v6 = result[3];
      if ( result[4] >= a1 )
        break;
      result = (_QWORD *)result[3];
      if ( !v6 )
        goto LABEL_6;
    }
    v4 = result;
    result = (_QWORD *)result[2];
  }
  while ( v5 );
LABEL_6:
  if ( v2 != v4 && a1 >= v4[4] )
    return (_QWORD *)*((unsigned int *)v4 + 10);
  return result;
}
