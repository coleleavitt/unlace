/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrncpy
// Address: 0x00000000000C5740

//----- (00000000000C5740) ----------------------------------------------------
_BYTE *__fastcall qstrncpy(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r8
  _BYTE *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // al

  if ( a3 < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1225);
LABEL_14:
    BUG();
  }
  if ( &a1[a3] <= a1 )
  {
    if ( !(_BYTE)under_debugger )
      interr(520);
    goto LABEL_14;
  }
  v3 = (__int64)&a1[a3 - 1];
  v4 = a1;
  if ( (_BYTE *)v3 == a1 )
  {
LABEL_8:
    *v4 = 0;
  }
  else
  {
    v5 = a3 - 1;
    v6 = 0;
    while ( 1 )
    {
      v7 = *(_BYTE *)(a2 + v6);
      a1[v6] = v7;
      if ( !v7 )
        break;
      if ( v5 == ++v6 )
      {
        v4 = (_BYTE *)v3;
        goto LABEL_8;
      }
    }
  }
  return a1;
}
// 158B40: using guessed type __int64 under_debugger;
