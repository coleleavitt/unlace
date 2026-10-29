/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41AD70
// Address: 0x0041AD70

//----- (0041AD70) --------------------------------------------------------
int __userpurge sub_41AD70@<eax>(char a1@<bl>, int a2@<edi>, int a3, int a4)
{
  unsigned int v4; // eax

  if ( *(_DWORD *)(a3 + 12) )
    v4 = sub_469088(a1, a2, *(unsigned __int8 **)(a3 + 8));
  else
    v4 = sub_469088(a1, a2, (unsigned __int8 *)MultiByteStr);
  *(_DWORD *)(a4 + 8) = v4;
  return 0;
}
