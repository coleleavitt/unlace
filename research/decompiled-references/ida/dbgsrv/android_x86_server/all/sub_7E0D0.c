/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7E0D0
// Address: 0x0007E0D0

//----- (0007E0D0) --------------------------------------------------------
int __cdecl sub_7E0D0(int a1, unsigned int *a2, int *a3, int *a4, unsigned int *a5)
{
  unsigned int v5; // eax
  _BYTE *v6; // ecx
  int result; // eax

  v5 = *a5;
  v6 = (_BYTE *)*a5;
  while ( (unsigned int)v6 < a5[1] )
  {
    if ( *v6++ == 0 )
    {
      *a5 = (unsigned int)v6;
      goto LABEL_6;
    }
  }
  v5 = 0;
LABEL_6:
  *a2 = v5;
  *a3 = unpack_dd(a5, a5[1]);
  result = unpack_dd(a5, a5[1]);
  *a4 = result;
  if ( *(_BYTE *)(a1 + 96) )
    return sub_1C900();
  return result;
}
