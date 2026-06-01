/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4712C3
// Address: 0x004712C3

//----- (004712C3) --------------------------------------------------------
char __userpurge sub_4712C3@<al>(int a1@<ecx>, int a2@<edi>, int a3)
{
  int v4; // eax

  if ( a3 == 1 )
    sub_47130B(a1);
  v4 = sub_471003(a1 + 24) - 1;
  if ( !v4 )
    return sub_46E215(a1, a2, a3, 0);
  if ( v4 == 1 )
    return sub_46E372(a1, a2, a3, 0);
  return 0;
}
