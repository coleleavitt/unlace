/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36340
// Address: 0x00036340

//----- (00036340) --------------------------------------------------------
int __userpurge sub_36340@<eax>(int a1, int a2, int a3)
{
  char *v3; // eax

  v3 = (char *)sub_3C990(a2, a3);
  sub_1B530(a1, v3);
  if ( *(_DWORD *)(a1 + 4) <= 1u )
    sub_1F400(a1, "%X", a3);
  return a1;
}
