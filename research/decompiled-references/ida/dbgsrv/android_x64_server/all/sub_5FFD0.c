/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5FFD0
// Address: 0x000000000005FFD0

//----- (000000000005FFD0) ----------------------------------------------------
__int64 __fastcall sub_5FFD0(__int64 a1, __int64 a2)
{
  const char *v2; // rax

  if ( *(_QWORD *)(a1 + 16) )
    v2 = *(const char **)(a1 + 8);
  else
    v2 = s1;
  *(_QWORD *)(a2 + 8) = *v2;
  return 0;
}
