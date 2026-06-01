/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002A05C
// Address: 0x000000010002A05C

//----- (000000010002A05C) ----------------------------------------------------
__int64 __fastcall sub_10002A05C(__int64 a1)
{
  char *v1; // x1

  if ( *(_QWORD *)(a1 + 48) )
    v1 = *(char **)(a1 + 40);
  else
    v1 = &byte_10007AE40;
  return sub_100029DB8(a1, v1);
}
// 10007AE40: using guessed type char byte_10007AE40;
