/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001ED00
// Address: 0x000000014001ED00

//----- (000000014001ED00) ----------------------------------------------------
__int64 __fastcall sub_14001ED00(__int64 a1, __int64 a2)
{
  char *v3; // rdx
  _BOOL8 v4; // rcx

  v3 = (char *)Str1;
  if ( *(_QWORD *)(a1 + 48) )
    v3 = *(char **)(a1 + 40);
  v4 = (unsigned int)sub_1400290D0(a1, v3) == 0;
  *(_QWORD *)(a2 + 8) = v4;
  return 0;
}
