/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D7600
// Address: 0x000D7600

//----- (000D7600) --------------------------------------------------------
char __cdecl sub_D7600(int a1, int a2)
{
  int v2; // eax
  char v3; // cl

  v2 = *(_DWORD *)(a1 + 12);
  v3 = *(_BYTE *)(v2 + 5);
  if ( v3 == 2 )
    return (**(int (__cdecl ***)(int, int))v2)(v2, a2);
  else
    return v3 == 0;
}
