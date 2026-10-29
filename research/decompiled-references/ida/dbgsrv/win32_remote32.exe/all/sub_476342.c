/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_476342
// Address: 0x00476342

//----- (00476342) --------------------------------------------------------
int __usercall sub_476342@<eax>(int a1@<ebx>, int a2@<edi>, int a3, _DWORD *a4)
{
  if ( --a4[2] < 0 )
    return sub_47CD8E(a1, a2, a3, (int)a4);
  *(_BYTE *)(*a4)++ = a3;
  return (unsigned __int8)a3;
}
