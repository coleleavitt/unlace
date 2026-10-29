/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45C8B0
// Address: 0x0045C8B0

//----- (0045C8B0) --------------------------------------------------------
int __userpurge sub_45C8B0@<eax>(int a1@<ebx>, int a2@<edi>, int a3)
{
  if ( !a3 )
    return -1;
  if ( *(int *)a3 < 2 )
    return sub_45D660(a1, a2, *(unsigned int **)(a3 + 8));
  return *(_DWORD *)(a3 + 16);
}
