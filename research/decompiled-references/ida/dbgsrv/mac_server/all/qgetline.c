/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qgetline
// Address: 0x000000010007CC20

//----- (000000010007CC20) ----------------------------------------------------
__int64 __fastcall qgetline(_QWORD *a1, FILE *a2)
{
  __int64 v3; // r12
  __int64 v4; // r15
  __int64 v5; // rax
  bool v6; // cf
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  int *v10; // rax

  a1[1] = 0;
  v3 = 0;
  if ( !feof(a2) )
  {
    while ( 1 )
    {
      v5 = a1[1];
      v6 = v5 == 0;
      v7 = v5 - 1;
      v8 = 0;
      if ( !v6 )
        v8 = v7;
      sub_100012FB0((__int64)a1, v8 + 1024);
      LODWORD(v9) = qfgets((char *)(v3 + *a1), (FILE *)(a1[1] - v3), a2);
      if ( !v9 )
        break;
      v3 += strlen((const char *)(v3 + *a1));
      if ( !v3 )
        goto LABEL_17;
      v4 = v3 - 1;
      v10 = (int *)(*a1 + v3 - 1);
      if ( !((v3 - 1) | a1[1]) )
        v10 = &dword_1000AC1CC;
      if ( *(_BYTE *)v10 != 10 )
      {
LABEL_17:
        v4 = v3;
        if ( !feof(a2) )
          continue;
      }
      goto LABEL_3;
    }
  }
  v4 = v3;
  if ( !v3 )
    return -1;
LABEL_3:
  sub_100012FB0((__int64)a1, v4);
  return v4;
}
// 10007CCB7: variable 'v9' is possibly undefined
// 1000AC1CC: using guessed type int dword_1000AC1CC;
