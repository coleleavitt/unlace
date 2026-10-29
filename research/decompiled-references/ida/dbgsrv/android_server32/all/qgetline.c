/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qgetline
// Address: 0x0007E764

//----- (0007E764) --------------------------------------------------------
int __fastcall qgetline(_DWORD *a1, FILE *stream)
{
  int v4; // r6
  int v5; // r7
  int v6; // r2
  int v7; // r1
  char *v8; // r0
  int result; // r0

  a1[1] = 0;
  v4 = 0;
  if ( !feof(stream) )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = a1[1];
      v7 = 1024;
      if ( v6 )
        v7 = v6 + 1023;
      sub_7E804((int)a1, v7);
      if ( !qfgets((char *)(*a1 + v5), a1[1] - v5, stream) )
        break;
      v5 += strlen((const char *)(*a1 + v5));
      if ( !v5 || ((v4 = v5 - 1, !(a1[1] | (v5 - 1))) ? (v8 = byte_DE331) : (v8 = (char *)(*a1 + v4)), *v8 != 10) )
      {
        v4 = v5;
        if ( !feof(stream) )
          continue;
      }
      goto LABEL_15;
    }
    v4 = v5;
  }
  result = -1;
  if ( v4 )
  {
LABEL_15:
    sub_7E804((int)a1, v4);
    return v4;
  }
  return result;
}
