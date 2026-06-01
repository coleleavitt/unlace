_QWORD *__fastcall sub_3D0E60(__int64 a1, void *a2, int a3, unsigned int a4)
{
  _QWORD *v7; // rcx
  _QWORD *result; // rax
  _QWORD *v9; // r10
  __int64 v10; // r9
  __int64 v11; // r8

  v7 = (_QWORD *)(a1 + 1488);
  result = *(_QWORD **)(a1 + 1496);
  if ( !result )
  {
    result = nullptr;
    goto LABEL_8;
  }
  v9 = v7;
  do
  {
    while ( 1 )
    {
      v10 = result[2];
      v11 = result[3];
      if ( result[4] < (unsigned __int64)a2 )
        break;
      v9 = result;
      result = (_QWORD *)result[2];
      if ( !v10 )
        goto LABEL_6;
    }
    result = (_QWORD *)result[3];
  }
  while ( v11 );
LABEL_6:
  if ( v9 == v7 || (unsigned __int64)a2 < v9[4] )
  {
LABEL_8:
    if ( (_DWORD)result == a4 )
      return result;
    return set_aflags(a2, a4);
  }
  result = (_QWORD *)*((unsigned int *)v9 + 10);
  a4 |= (unsigned int)result & ~a3;
  if ( (_DWORD)result != a4 )
    return set_aflags(a2, a4);
  return result;
}
