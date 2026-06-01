/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807FC10
// Address: 0x0807FC10

//----- (0807FC10) --------------------------------------------------------
int __cdecl sub_807FC10(_DWORD *a1, int a2)
{
  if ( a1[3] - a2 <= 1 )
    sub_807E100();
  return *(unsigned __int16 *)(*a1 + a2);
}
