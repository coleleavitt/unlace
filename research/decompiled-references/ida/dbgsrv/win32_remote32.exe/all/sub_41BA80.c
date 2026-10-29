/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41BA80
// Address: 0x0041BA80

//----- (0041BA80) --------------------------------------------------------
int __stdcall sub_41BA80(int a1, int a2)
{
  int v2; // eax

  if ( *(_DWORD *)(a1 + 12) )
    v2 = sub_457C40(*(LPCCH *)(a1 + 8), *(_DWORD *)(a1 + 32));
  else
    v2 = sub_457C40(MultiByteStr, *(_DWORD *)(a1 + 32));
  *(_DWORD *)(a2 + 8) = v2;
  return 0;
}
