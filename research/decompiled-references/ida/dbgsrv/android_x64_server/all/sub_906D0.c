/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_906D0
// Address: 0x00000000000906D0

//----- (00000000000906D0) ----------------------------------------------------
const char *__fastcall sub_906D0(__int64 a1, __int64 a2)
{
  char *v2; // rax

  if ( *(_QWORD *)(a1 + 24) )
    v2 = *(char **)(a1 + 16);
  else
    v2 = (char *)s1;
  return sub_906F0(a2, v2);
}
