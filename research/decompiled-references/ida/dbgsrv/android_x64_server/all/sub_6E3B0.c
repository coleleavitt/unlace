/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6E3B0
// Address: 0x000000000006E3B0

//----- (000000000006E3B0) ----------------------------------------------------
size_t __fastcall sub_6E3B0(const char *a1, char *a2)
{
  size_t result; // rax
  unsigned int v3; // ecx
  char v4; // dl

  result = strlen(a1);
  if ( (int)result <= 0 )
  {
    v4 = 0;
    if ( !a2 )
      return result;
    goto LABEL_10;
  }
  v3 = result;
  result = (unsigned int)(result - 1);
  if ( a1[(int)result] != 4 )
  {
    v4 = 0;
LABEL_9:
    result = v3;
    if ( !a2 )
      return result;
LABEL_10:
    *a2 = v4;
    return result;
  }
  while ( (int)result > 0 )
  {
    --v3;
    result = (unsigned int)(result - 1);
    if ( a1[(int)result] != 4 )
    {
      v4 = 1;
      goto LABEL_9;
    }
  }
  v4 = 1;
  if ( a2 )
    goto LABEL_10;
  return result;
}
