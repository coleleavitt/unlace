/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4818F1
// Address: 0x004818F1

//----- (004818F1) --------------------------------------------------------
SIZE_T __usercall sub_4818F1@<eax>(int a1@<ebx>, int a2@<edi>, LPCVOID lpMem)
{
  if ( lpMem )
    return HeapSize(hHeap, 0, lpMem);
  *sub_46B984() = 22;
  sub_467EF4(a1, a2);
  return -1;
}
