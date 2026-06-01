/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E300
// Address: 0x000000000005E300

//----- (000000000005E300) ----------------------------------------------------
__int64 __fastcall sub_5E300(__int64 a1, __int64 a2)
{
  const char *v2; // x0

  if ( *(_QWORD *)(a1 + 16) )
    v2 = *(const char **)(a1 + 8);
  else
    v2 = &byte_F154B;
  *(_QWORD *)(a2 + 8) = atol(v2);
  return 0;
}
// F154B: using guessed type char byte_F154B;
