/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qgetline
// Address: 0x000000010007431C

//----- (000000010007431C) ----------------------------------------------------
__int64 __fastcall qgetline(__int64 a1, FILE *a2)
{
  __int64 v4; // x20
  __int64 v5; // x8
  bool v6; // cf
  __int64 v7; // x8
  char *v8; // x9

  *(_QWORD *)(a1 + 8) = 0;
  v4 = 0;
  if ( !feof(a2) )
  {
    v4 = 0;
    while ( 1 )
    {
      v5 = *(_QWORD *)(a1 + 8);
      v6 = v5 != 0;
      v7 = v5 - 1;
      if ( !v6 )
        v7 = 0;
      sub_1000122F4((_QWORD **)a1, v7 + 1024);
      if ( !qfgets((char *)(*(_QWORD *)a1 + v4), *(_QWORD *)(a1 + 8) - v4, a2) )
        break;
      v4 += strlen((const char *)(*(_QWORD *)a1 + v4));
      if ( v4 )
      {
        v8 = *(_QWORD *)(a1 + 8) | (v4 - 1) ? (char *)(*(_QWORD *)a1 + v4 - 1) : &byte_1000A4AEC;
        if ( *v8 == 10 )
        {
          --v4;
          goto LABEL_3;
        }
      }
      if ( feof(a2) )
        goto LABEL_3;
    }
  }
  if ( !v4 )
    return -1;
LABEL_3:
  sub_1000122F4((_QWORD **)a1, v4);
  return v4;
}
// 1000A4AEC: using guessed type char byte_1000A4AEC;
