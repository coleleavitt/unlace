/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_429ED0
// Address: 0x00429ED0

//----- (00429ED0) --------------------------------------------------------
int __stdcall sub_429ED0(_DWORD *a1)
{
  const char *v1; // esi
  char **v2; // edi

  v1 = MultiByteStr;
  if ( a1[5] )
    v1 = (const char *)a1[4];
  if ( sub_42D310(a1 + 18, v1) == -1 )
  {
    v2 = (char **)(a1 + 15);
    if ( sub_42D310(a1 + 15, v1) == -1 && sub_42D310(v2, v1) == -1 && sub_42EB90(v2, v1) != -1 )
      return 0;
  }
  sub_45CB10(0, v1);
  return sub_45CC20(52);
}
