_QWORD *__fastcall sub_4F37A0(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // r8
  _QWORD *result; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 1752LL);
  v3 = (_QWORD *)(v2 + 16);
  result = *(_QWORD **)(v2 + 24);
  if ( !result )
    return nullptr;
  v5 = v3;
  do
  {
    while ( 1 )
    {
      v6 = result[2];
      v7 = result[3];
      if ( result[4] >= a2 )
        break;
      result = (_QWORD *)result[3];
      if ( !v7 )
        goto LABEL_6;
    }
    v5 = result;
    result = (_QWORD *)result[2];
  }
  while ( v6 );
LABEL_6:
  if ( v3 != v5 && a2 >= v5[4] )
    return (_QWORD *)*((unsigned int *)v5 + 10);
  return result;
}
