/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrncpy
// Address: 0x000000010007DBD0

//----- (000000010007DBD0) ----------------------------------------------------
const char *__fastcall qstrncpy(_BYTE *a1, __int64 a2, __int64 a3)
{
  _BYTE *v3; // rax
  _BYTE *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // r8
  __int64 v9; // rdx

  if ( a3 < 0 )
  {
    if ( under_debugger == 1 )
      goto LABEL_13;
    interr(0x4C9u);
LABEL_12:
    if ( under_debugger != 1 )
    {
      interr(0x208u);
      return qstrncat((const char *)0x208, a2, v9);
    }
LABEL_13:
    BUG();
  }
  if ( &a1[a3] <= a1 )
    goto LABEL_12;
  v3 = &a1[a3 - 1];
  v4 = a1;
  if ( v3 == a1 )
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
        v4 = v3;
        goto LABEL_8;
      }
    }
  }
  return a1;
}
// 10007DC4F: variable 'v9' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
