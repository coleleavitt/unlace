/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807FBE0
// Address: 0x0807FBE0

//----- (0807FBE0) --------------------------------------------------------
int __cdecl sub_807FBE0(_DWORD *a1, int a2)
{
  if ( a1[3] - a2 <= 0 )
    sub_807E100();
  return *(unsigned __int8 *)(*a1 + a2);
}
