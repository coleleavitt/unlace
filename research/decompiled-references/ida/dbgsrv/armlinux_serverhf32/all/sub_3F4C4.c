/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F4C4
// Address: 0x0003F4C4

//----- (0003F4C4) --------------------------------------------------------
size_t __fastcall sub_3F4C4(const char *a1, char *a2)
{
  size_t result; // r0
  const char *v5; // r3
  int v6; // t1
  char v7; // r3

  result = strlen(a1);
  if ( result && (v5 = &a1[result - 1], *v5 == 4) )
  {
    do
    {
      if ( !--result )
        break;
      v6 = *(unsigned __int8 *)--v5;
    }
    while ( v6 == 4 );
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  if ( a2 )
    *a2 = v7;
  return result;
}
