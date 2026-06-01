_QWORD *__fastcall sub_3B8C30(__int64 a1, unsigned __int64 a2, char a3)
{
  _QWORD *v3; // r8
  _QWORD *result; // rax
  _QWORD *v6; // r9
  __int64 v7; // rdi
  _QWORD *v8; // r8
  _QWORD *v9; // r9
  __int64 v10; // rdi

  v3 = *(_QWORD **)(a1 + 8);
  *(_BYTE *)(a1 + 48) = a3;
  result = (_QWORD *)v3[2];
  if ( a3 )
  {
    v6 = v3 + 1;
    while ( result )
    {
      while ( 1 )
      {
        v7 = result[3];
        if ( result[4] >= a2 )
          break;
        result = (_QWORD *)result[3];
        if ( !v7 )
          goto LABEL_6;
      }
      v6 = result;
      result = (_QWORD *)result[2];
    }
LABEL_6:
    *(_QWORD *)(a1 + 32) = v6;
    result = (_QWORD *)v3[3];
    *(_QWORD *)(a1 + 40) = result;
  }
  else
  {
    v8 = v3 + 1;
    v9 = v8;
    while ( result )
    {
      while ( 1 )
      {
        v10 = result[3];
        if ( result[4] >= a2 )
          break;
        result = (_QWORD *)result[3];
        if ( !v10 )
          goto LABEL_12;
      }
      v9 = result;
      result = (_QWORD *)result[2];
    }
LABEL_12:
    *(_QWORD *)(a1 + 16) = v9;
    *(_QWORD *)(a1 + 24) = v8;
  }
  return result;
}
