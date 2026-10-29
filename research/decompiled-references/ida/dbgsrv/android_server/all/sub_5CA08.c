/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5CA08
// Address: 0x000000000005CA08

//----- (000000000005CA08) ----------------------------------------------------
__int64 __fastcall sub_5CA08(__int64 a1, __int64 a2)
{
  char *v2; // x2

  if ( *(_QWORD *)(a1 + 48) )
    v2 = *(char **)(a1 + 40);
  else
    v2 = &byte_F154B;
  return get_idcv_attr(a2, a1, v2, 0);
}
// F154B: using guessed type char byte_F154B;
