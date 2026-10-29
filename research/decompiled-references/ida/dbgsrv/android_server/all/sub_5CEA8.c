/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5CEA8
// Address: 0x000000000005CEA8

//----- (000000000005CEA8) ----------------------------------------------------
__int64 __fastcall sub_5CEA8(__int64 a1, __int64 a2)
{
  char *v2; // x0

  if ( *(_QWORD *)(a1 + 16) )
    v2 = *(char **)(a1 + 8);
  else
    v2 = &byte_F154B;
  *(_QWORD *)(a2 + 8) = (int)call_system((__int64)v2);
  return 0;
}
// F154B: using guessed type char byte_F154B;
