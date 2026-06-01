/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8054BA0
// Address: 0x08054BA0

//----- (08054BA0) --------------------------------------------------------
int __cdecl sub_8054BA0(int a1, int a2)
{
  __pid_t v2; // eax

  v2 = *(_DWORD *)(a2 + 724);
  if ( v2 != -1 )
    sub_8054B10(v2, 9);
  return 0;
}
