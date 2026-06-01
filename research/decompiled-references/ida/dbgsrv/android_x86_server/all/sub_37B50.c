/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37B50
// Address: 0x00037B50

//----- (00037B50) --------------------------------------------------------
int __userpurge sub_37B50@<eax>(int a1, int a2)
{
  char *v2; // eax

  v2 = (char *)sub_37350(a2);
  sub_1B530(a1, v2);
  if ( *(_DWORD *)(a1 + 4) <= 1u )
    sub_1F400(a1, "Unknown CPU [%u]", *(unsigned __int16 *)(a2 + 402));
  return a1;
}
