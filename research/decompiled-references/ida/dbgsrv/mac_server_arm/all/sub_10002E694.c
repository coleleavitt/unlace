/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002E694
// Address: 0x000000010002E694

//----- (000000010002E694) ----------------------------------------------------
size_t __fastcall sub_10002E694(const char *a1, char *a2)
{
  size_t result; // x0
  int v5; // w9
  char v6; // w8

  result = strlen(a1);
  if ( (int)result < 1 || a1[(result & 0x7FFFFFFF) - 1] != 4 )
  {
    v6 = 0;
    if ( !a2 )
      return result;
    goto LABEL_11;
  }
  if ( (_DWORD)result == 1 )
  {
LABEL_7:
    result = 0;
  }
  else
  {
    v5 = result + 1;
    while ( 1 )
    {
      result = (unsigned int)(v5 - 2);
      if ( a1[(unsigned int)result - 1] != 4 )
        break;
      if ( (unsigned int)--v5 <= 2 )
        goto LABEL_7;
    }
  }
  v6 = 1;
  if ( a2 )
LABEL_11:
    *a2 = v6;
  return result;
}
