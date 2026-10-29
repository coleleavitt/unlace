/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A0390
// Address: 0x080A0390

//----- (080A0390) --------------------------------------------------------
int __cdecl sub_80A0390(int a1, int a2, char *a3, int a4)
{
  if ( a2 && !*(_BYTE *)(a2 + 36) )
    return sub_80BC4A0(a1, a2);
  else
    return sub_80BF8E0(a1, a3, a4);
}
