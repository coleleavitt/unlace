/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qgetline
// Address: 0x000B0950

//----- (000B0950) --------------------------------------------------------
int __cdecl qgetline(_DWORD *a1, FILE *stream)
{
  int v2; // edi
  int v3; // eax
  bool v4; // zf
  int v5; // eax
  int v6; // esi
  char *v7; // eax

  a1[1] = 0;
  v2 = 0;
  if ( !feof(stream) )
  {
    v2 = 0;
    while ( 1 )
    {
      v3 = a1[1];
      v4 = v3 == 0;
      v5 = v3 + 1023;
      if ( v4 )
        v5 = 1024;
      sub_B0A50((int)a1, v5);
      if ( !qfgets((char *)(v2 + *a1), a1[1] - v2, stream) )
        break;
      v2 += strlen((const char *)(v2 + *a1));
      if ( !v2 )
        goto LABEL_18;
      v6 = v2 - 1;
      v7 = byte_13BD21;
      if ( (v2 - 1) | a1[1] )
        v7 = (char *)(v6 + *a1);
      if ( *v7 != 10 )
      {
LABEL_18:
        v6 = v2;
        if ( !feof(stream) )
          continue;
      }
      goto LABEL_13;
    }
  }
  v6 = v2;
  if ( !v2 )
    return -1;
LABEL_13:
  sub_B0A50((int)a1, v6);
  return v6;
}
