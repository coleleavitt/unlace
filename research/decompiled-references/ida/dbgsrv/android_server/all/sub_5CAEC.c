/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5CAEC
// Address: 0x000000000005CAEC

//----- (000000000005CAEC) ----------------------------------------------------
__int64 __fastcall sub_5CAEC(__int64 a1, __int64 a2)
{
  char *v3; // x1

  if ( *(_QWORD *)(a1 + 48) )
    v3 = *(char **)(a1 + 40);
  else
    v3 = &byte_F154B;
  *(_QWORD *)(a2 + 8) = (unsigned int)del_idcv_attr(a1, v3) == 0;
  return 0;
}
// F154B: using guessed type char byte_F154B;
