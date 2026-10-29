/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_415250
// Address: 0x00415250

//----- (00415250) --------------------------------------------------------
int __userpurge sub_415250@<eax>(int a1@<ecx>, int a2@<ebx>, int a3, int a4)
{
  int v5; // ecx

  if ( *(_DWORD *)(a1 + 56) == 23126 )
    v5 = *(_DWORD *)(a1 + 572) + 40;
  else
    v5 = *(_DWORD *)(a1 + 572) + *(unsigned __int16 *)(a1 + 76) + 24;
  return sub_415290(a1, a2, a3, v5, *(unsigned __int16 *)(a1 + 62), a4);
}
