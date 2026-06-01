/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_89EC0
// Address: 0x0000000000089EC0

//----- (0000000000089EC0) ----------------------------------------------------
__int64 __fastcall sub_89EC0(__int64 result, char **a2)
{
  char *v2; // x8

  a2[3] = *(char **)result;
  a2[5] = (char *)*(unsigned int *)(result + 8);
  if ( *(_QWORD *)(result + 24) )
    v2 = *(char **)(result + 16);
  else
    v2 = &byte_F154B;
  *a2 = v2;
  a2[6] = (char *)*(unsigned int *)(result + 40);
  a2[9] = (char *)*(unsigned int *)(result + 44);
  a2[1] = *(char **)(result + 56);
  a2[7] = *(char **)(result + 64);
  return result;
}
// F154B: using guessed type char byte_F154B;
