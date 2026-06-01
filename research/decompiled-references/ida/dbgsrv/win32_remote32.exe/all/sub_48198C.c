/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48198C
// Address: 0x0048198C

//----- (0048198C) --------------------------------------------------------
int __cdecl sub_48198C(unsigned int *a1)
{
  unsigned int v1; // edx
  char v2; // fps
  int v4; // [esp+0h] [ebp-8h] BYREF
  unsigned int v5; // [esp+4h] [ebp-4h]

  v4 = 0;
  v5 = 0;
  if ( sub_481924((unsigned int *)&v4) )
    return 1;
  v1 = v4;
  a1[1] = v5;
  *a1 = v1;
  v4 = v1 | 0x1F;
  if ( sub_481941((unsigned int *)&v4) )
    return 1;
  sub_47EACB(v2);
  return 0;
}
