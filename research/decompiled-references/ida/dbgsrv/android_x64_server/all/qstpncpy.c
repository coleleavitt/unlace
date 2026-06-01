/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstpncpy
// Address: 0x00000000000C57C0

//----- (00000000000C57C0) ----------------------------------------------------
_BYTE *__fastcall qstpncpy(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v6; // al

  if ( a3 < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1225);
LABEL_15:
    BUG();
  }
  if ( &a1[a3] <= a1 )
  {
    if ( !(_BYTE)under_debugger )
      interr(520);
    goto LABEL_15;
  }
  v3 = (__int64)&a1[a3 - 1];
  if ( (_BYTE *)v3 == a1 )
  {
LABEL_8:
    *a1 = 0;
  }
  else
  {
    v4 = a3 - 1;
    v5 = 0;
    while ( 1 )
    {
      v6 = *(_BYTE *)(a2 + v5);
      a1[v5] = v6;
      if ( !v6 )
        break;
      if ( v4 == ++v5 )
      {
        a1 = (_BYTE *)v3;
        goto LABEL_8;
      }
    }
    a1 += v5;
  }
  return a1;
}
// 158B40: using guessed type __int64 under_debugger;
