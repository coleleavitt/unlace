/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_462220
// Address: 0x00462220

//----- (00462220) --------------------------------------------------------
char *__userpurge sub_462220@<eax>(int a1@<ebx>, char *a2)
{
  char *v2; // esi

  v2 = a2;
  if ( a2 )
  {
    while ( *v2 >= 0 && sub_46B7F0(a1, (unsigned __int8)*v2) )
      ++v2;
  }
  return v2;
}
