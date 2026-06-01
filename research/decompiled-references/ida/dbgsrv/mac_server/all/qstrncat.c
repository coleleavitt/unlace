/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrncat
// Address: 0x000000010007DC50

//----- (000000010007DC50) ----------------------------------------------------
const char *__fastcall qstrncat(const char *a1, __int64 a2, __int64 a3)
{
  size_t v6; // rax
  const char *v7; // rcx
  const char *v8; // rdx
  size_t v9; // rax
  __int64 v10; // rsi
  char v11; // di

  if ( a3 < 0 )
  {
    if ( under_debugger == 1 )
      goto LABEL_13;
    interr(0x4C9u);
LABEL_12:
    if ( under_debugger != 1 )
    {
      interr(0x208u);
      return qstrerror(0x208u);
    }
LABEL_13:
    BUG();
  }
  v6 = strlen(a1);
  v7 = &a1[v6];
  if ( &a1[v6] >= &a1[a3] )
    goto LABEL_12;
  v8 = &a1[a3 - 1];
  if ( v7 == v8 )
  {
LABEL_8:
    *v7 = 0;
  }
  else
  {
    v9 = a3 + ~v6;
    v10 = 0;
    while ( 1 )
    {
      v11 = *(_BYTE *)(a2 + v10);
      v7[v10] = v11;
      if ( !v11 )
        break;
      if ( v9 == ++v10 )
      {
        v7 = v8;
        goto LABEL_8;
      }
    }
  }
  return a1;
}
// 1000AE23D: using guessed type char under_debugger;
