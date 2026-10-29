/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47B725
// Address: 0x0047B725

//----- (0047B725) --------------------------------------------------------
int __usercall sub_47B725@<eax>(int ebx0@<ebx>, int edi0@<edi>, unsigned __int8 *a1, unsigned __int8 *a2, int a3)
{
  if ( dword_4B7A48 )
    return sub_47B74E(ebx0, edi0, (CHAR *)a1, (const CHAR *)a2, a3, nullptr);
  else
    return sub_46BCAB(ebx0, edi0, a1, a2, a3);
}
// 4B7A48: using guessed type int dword_4B7A48;
