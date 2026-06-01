/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46B293
// Address: 0x0046B293

//----- (0046B293) --------------------------------------------------------
bool __userpurge sub_46B293@<al>(_DWORD **a1@<ecx>, int a2@<ebx>, int a3@<edi>, char a4)
{
  return ((*a1)[3] & 0x1000) != 0 && !(*a1)[1] || sub_476342(a2, a3, a4, *a1) != -1;
}
