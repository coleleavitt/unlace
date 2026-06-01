/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140030730
// Address: 0x0000000140030730

//----- (0000000140030730) ----------------------------------------------------
__int64 __fastcall sub_140030730(_QWORD *a1)
{
  char *v1; // rbx
  _QWORD *v2; // rdi

  v1 = (char *)Str1;
  if ( a1[5] )
    v1 = (char *)a1[4];
  v2 = a1 + 16;
  if ( sub_140033510(a1 + 16, v1) == -1 && sub_140034D00(v2, v1) != -1 )
    return 0;
  sub_140063F70(0, v1);
  return sub_1400640B0(0x34u);
}
