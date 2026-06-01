/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80AAC00
// Address: 0x080AAC00

//----- (080AAC00) --------------------------------------------------------
int __cdecl sub_80AAC00(int a1, unsigned int *a2, int *a3, int *a4, unsigned int *a5)
{
  unsigned int v5; // ecx
  unsigned int v6; // eax
  int result; // eax

  v5 = *a5;
  v6 = *a5;
  do
  {
    if ( v6 >= a5[1] )
    {
      v5 = 0;
      goto LABEL_5;
    }
    ++v6;
  }
  while ( *(_BYTE *)(v6 - 1) );
  *a5 = v6;
LABEL_5:
  *a2 = v5;
  *a3 = sub_80CDEC0(a5, a5[1]);
  result = sub_80CDEC0(a5, a5[1]);
  *a4 = result;
  if ( *(_BYTE *)(a1 + 96) )
    return sub_8058290();
  return result;
}
