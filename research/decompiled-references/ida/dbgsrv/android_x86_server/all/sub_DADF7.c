/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DADF7
// Address: 0x000DADF7

//----- (000DADF7) --------------------------------------------------------
int __usercall sub_DADF7@<eax>(char a1@<al>)
{
  unsigned __int8 v1; // dl
  int result; // eax

  if ( a1 == -1 )
    return 0;
  v1 = a1 & 7;
  if ( (a1 & 7) == 2 )
    return 2;
  if ( v1 <= 2u )
  {
    if ( v1 )
      goto LABEL_10;
    return 4;
  }
  if ( v1 == 3 )
    return 4;
  result = 8;
  if ( v1 != 4 )
LABEL_10:
    abort();
  return result;
}
