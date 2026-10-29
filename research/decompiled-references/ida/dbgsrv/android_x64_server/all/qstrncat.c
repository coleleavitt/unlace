/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrncat
// Address: 0x00000000000C5840

//----- (00000000000C5840) ----------------------------------------------------
const char *__fastcall qstrncat(const char *a1, __int64 a2, __int64 a3)
{
  const char *v5; // rax
  __int64 v6; // rsi
  const char *v7; // rbx
  __int64 v8; // rdx
  char v9; // cl

  if ( a3 < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1225);
LABEL_14:
    BUG();
  }
  v5 = &a1[strlen(a1)];
  if ( v5 >= &a1[a3] )
  {
    if ( !(_BYTE)under_debugger )
      interr(520);
    goto LABEL_14;
  }
  v6 = (__int64)&a1[a3 - 1];
  if ( v5 == (const char *)v6 )
  {
LABEL_8:
    *v5 = 0;
  }
  else
  {
    v7 = &a1[a3 - 1 - (_QWORD)v5];
    v8 = 0;
    while ( 1 )
    {
      v9 = *(_BYTE *)(a2 + v8);
      v5[v8] = v9;
      if ( !v9 )
        break;
      if ( v7 == (const char *)++v8 )
      {
        v5 = (const char *)v6;
        goto LABEL_8;
      }
    }
  }
  return a1;
}
// 158B40: using guessed type __int64 under_debugger;
