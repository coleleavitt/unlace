/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001F610
// Address: 0x000000014001F610

//----- (000000014001F610) ----------------------------------------------------
__int64 __fastcall sub_14001F610(__int64 a1, __int64 a2)
{
  const char *v2; // rax

  v2 = Str1;
  if ( *(_QWORD *)(a1 + 16) )
    v2 = *(const char **)(a1 + 8);
  *(_QWORD *)(a2 + 8) = *v2;
  return 0;
}
