/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B064
// Address: 0x000000000006B064

//----- (000000000006B064) ----------------------------------------------------
size_t __fastcall sub_6B064(const char *a1, char *a2)
{
  size_t result; // x0
  unsigned int v5; // w9
  unsigned int v6; // w8
  unsigned int v7; // w9
  char v8; // w9

  result = strlen(a1);
  v5 = result - 1;
  if ( (int)result < 1 )
  {
    v8 = 0;
    if ( !a2 )
      return result;
LABEL_11:
    *a2 = v8;
    return result;
  }
  v6 = result;
  if ( a1[v5] != 4 )
  {
    v8 = 0;
    result = (unsigned int)result;
    if ( !a2 )
      return result;
    goto LABEL_11;
  }
  result = v5;
  while ( 1 )
  {
    v7 = result - 1;
    if ( (int)result < 1 )
      break;
    --v6;
    result = v7;
    if ( a1[v7] != 4 )
    {
      v8 = 1;
      result = v6;
      if ( a2 )
        goto LABEL_11;
      return result;
    }
  }
  v8 = 1;
  if ( a2 )
    goto LABEL_11;
  return result;
}
