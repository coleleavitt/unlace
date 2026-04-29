_QWORD *__fastcall sub_84E40(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  _QWORD *v4; // r9
  _QWORD *result; // rax
  _QWORD *v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdi

  v3 = *(_QWORD *)(a1 + 128);
  if ( !v3 )
    return nullptr;
  v4 = (_QWORD *)(v3 + 8);
  result = *(_QWORD **)(v3 + 16);
  if ( !result )
    return nullptr;
  v6 = v4;
  do
  {
    while ( 1 )
    {
      v7 = result[2];
      v8 = result[3];
      if ( result[4] >= a3 )
        break;
      result = (_QWORD *)result[3];
      if ( !v8 )
        goto LABEL_7;
    }
    v6 = result;
    result = (_QWORD *)result[2];
  }
  while ( v7 );
LABEL_7:
  if ( v4 != v6 && a3 >= v6[4] )
  {
    *a2 = v6[5];
    return (_QWORD *)(&dword_0 + 1);
  }
  return result;
}
