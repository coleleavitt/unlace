/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42A590
// Address: 0x0042A590

//----- (0042A590) --------------------------------------------------------
int __stdcall sub_42A590(char **a1)
{
  const char *v1; // esi

  v1 = MultiByteStr;
  if ( a1[5] )
    v1 = a1[4];
  if ( sub_42D310(a1 + 18, v1) == -1 && sub_42EB90(a1 + 18, v1) != -1 )
    return 0;
  sub_45CB10(0, v1);
  return sub_45CC20(52);
}
