/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B3530
// Address: 0x000B3530

//----- (000B3530) --------------------------------------------------------
char *__cdecl sub_B3530(char *a1)
{
  char *v1; // edi
  char v2; // cl
  char *v3; // esi
  int v4; // eax
  char v6; // [esp+Bh] [ebp-11h]

  v1 = a1;
  v2 = *a1;
  if ( *a1 )
  {
    v3 = a1 + 1;
    v1 = a1;
    do
    {
      if ( v2 < 0 || (v6 = v2, v4 = isspace((unsigned __int8)v2), v2 = v6, !v4) )
        *v1++ = v2;
      v2 = *v3++;
    }
    while ( v2 );
  }
  *v1 = 0;
  return a1;
}
