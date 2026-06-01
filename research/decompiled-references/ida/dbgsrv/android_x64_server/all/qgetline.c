/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qgetline
// Address: 0x00000000000C2F00

//----- (00000000000C2F00) ----------------------------------------------------
__int64 __fastcall qgetline(_QWORD *a1, FILE *a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rbx
  char *v7; // rax

  a1[1] = 0;
  v3 = 0;
  if ( !feof(a2) )
  {
    while ( 1 )
    {
      v4 = a1[1];
      v5 = v4 + 1023;
      if ( !v4 )
        v5 = 1024;
      sub_C2FE0((__int64)a1, v5);
      if ( !qfgets((char *)(v3 + *a1), a1[1] - v3, a2) )
        break;
      v3 += strlen((const char *)(v3 + *a1));
      if ( !v3 )
        goto LABEL_17;
      v6 = v3 - 1;
      v7 = byte_155771;
      if ( (v3 - 1) | a1[1] )
        v7 = (char *)(v6 + *a1);
      if ( *v7 != 10 )
      {
LABEL_17:
        v6 = v3;
        if ( !feof(a2) )
          continue;
      }
      goto LABEL_12;
    }
  }
  v6 = v3;
  if ( !v3 )
    return -1;
LABEL_12:
  sub_C2FE0((__int64)a1, v6);
  return v6;
}
