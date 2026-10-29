/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001ECC0
// Address: 0x000000014001ECC0

//----- (000000014001ECC0) ----------------------------------------------------
__int64 __fastcall sub_14001ECC0(__int64 a1, __int64 a2)
{
  char *v2; // r8
  _BOOL8 v4; // rcx

  v2 = (char *)Str1;
  if ( *(_QWORD *)(a1 + 48) )
    v2 = *(char **)(a1 + 40);
  v4 = (unsigned int)sub_140029410(nullptr, a1, v2, 0) == 0;
  *(_QWORD *)(a2 + 8) = v4;
  return 0;
}
