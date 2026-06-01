/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5CAA0
// Address: 0x000000000005CAA0

//----- (000000000005CAA0) ----------------------------------------------------
__int64 __fastcall sub_5CAA0(__int64 a1, __int64 a2)
{
  char *v2; // x2

  if ( *(_QWORD *)(a1 + 48) )
    v2 = *(char **)(a1 + 40);
  else
    v2 = &byte_F154B;
  *(_QWORD *)(a2 + 8) = (unsigned int)get_idcv_attr(0, a1, v2, 0) == 0;
  return 0;
}
// F154B: using guessed type char byte_F154B;
