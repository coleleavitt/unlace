/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006A360
// Address: 0x000000014006A360

//----- (000000014006A360) ----------------------------------------------------
char *__fastcall sub_14006A360(char *a1)
{
  char *v1; // rbx

  v1 = a1;
  if ( a1 )
  {
    while ( *v1 >= 0 && isspace((unsigned __int8)*v1) )
      ++v1;
  }
  return v1;
}
