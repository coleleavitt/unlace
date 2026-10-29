/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140021740
// Address: 0x0000000140021740

//----- (0000000140021740) ----------------------------------------------------
__int64 __fastcall sub_140021740(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v3; // rcx
  const char *v4; // rax

  v3 = Str1;
  v4 = Str1;
  if ( *(_QWORD *)(a3 + 8) )
    v4 = *(const char **)a3;
  if ( *(_QWORD *)(a2 + 8) )
    v3 = *(const char **)a2;
  return (unsigned int)strcmp(v3, v4) >> 31;
}
