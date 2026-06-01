/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_414B50
// Address: 0x0000000000414B50

//----- (0000000000414B50) ----------------------------------------------------
unsigned __int64 __fastcall sub_414B50(__int64 a1, _QWORD *a2, unsigned __int64 *a3)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r13
  _QWORD *v6; // rbx
  unsigned __int64 v7; // r14
  const char *v8; // rsi
  const char *v9; // rdi

  if ( (unsigned __int64)a3 < *a2 || (v4 = 80LL * a2[1] + *a2, (unsigned __int64)a3 >= v4) )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(30067);
    goto LABEL_20;
  }
  v5 = a3[1];
  if ( v5 )
  {
    v6 = a3 + 10;
    if ( a3 + 10 != (unsigned __int64 *)v4 )
    {
      v7 = a3[3];
      while ( !v6[3] )
      {
        v8 = s1;
        if ( v7 )
        {
LABEL_7:
          v9 = (const char *)a3[2];
LABEL_8:
          if ( strcmp(v9, v8) )
            goto LABEL_13;
          v5 = v6[1];
          v6 += 10;
          if ( v6 == (_QWORD *)v4 )
            goto LABEL_13;
        }
        else
        {
          v5 = v6[1];
          v6 += 10;
          if ( v6 == (_QWORD *)v4 )
            goto LABEL_13;
        }
      }
      v8 = (const char *)v6[2];
      v9 = s1;
      if ( !v7 )
        goto LABEL_8;
      goto LABEL_7;
    }
LABEL_13:
    if ( *a3 < v5 )
    {
      v5 -= *a3;
      return v5;
    }
    if ( !byte_4C94E1 )
      sub_481AC0(30068);
LABEL_20:
    BUG();
  }
  return v5;
}
// 4C94E1: using guessed type char byte_4C94E1;
