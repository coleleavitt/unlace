/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001EC30
// Address: 0x000000014001EC30

//----- (000000014001EC30) ----------------------------------------------------
__int64 __fastcall sub_14001EC30(__int64 a1, char *a2)
{
  char *v2; // r8

  v2 = (char *)Str1;
  if ( *(_QWORD *)(a1 + 48) )
    v2 = *(char **)(a1 + 40);
  return sub_140029410(a2, a1, v2, 0);
}
