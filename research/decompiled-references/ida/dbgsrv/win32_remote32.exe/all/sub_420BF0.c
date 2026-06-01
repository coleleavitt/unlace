/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_420BF0
// Address: 0x00420BF0

//----- (00420BF0) --------------------------------------------------------
bool __usercall sub_420BF0@<al>(int a1@<ebx>, char *a2)
{
  char *v2; // esi
  char v3; // al
  bool v5; // sf

  v2 = a2;
  v3 = *a2;
  if ( *a2 )
  {
    if ( v3 == 48 )
      return a2[1] == 0;
    v5 = v3 < 0;
    while ( !v5 && sub_46B760(a1, (unsigned __int8)v3) )
    {
      v3 = *++v2;
      v5 = v3 < 0;
      if ( !v3 )
        return 1;
    }
  }
  return 0;
}
