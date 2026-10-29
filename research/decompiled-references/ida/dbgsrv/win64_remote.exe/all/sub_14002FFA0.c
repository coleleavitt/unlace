/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002FFA0
// Address: 0x000000014002FFA0

//----- (000000014002FFA0) ----------------------------------------------------
__int64 __fastcall sub_14002FFA0(_QWORD *a1)
{
  char *v1; // rbx
  __int64 *v3; // rdi

  v1 = (char *)Str1;
  if ( a1[5] )
    v1 = (char *)a1[4];
  if ( sub_140033510(a1 + 16, v1) == -1 )
  {
    v3 = a1 + 13;
    if ( sub_140033510(v3, v1) == -1 && sub_140033510(v3, v1) == -1 && sub_140034D00(v3, v1) != -1 )
      return 0;
  }
  sub_140063F70(0, v1);
  return sub_1400640B0(0x34u);
}
