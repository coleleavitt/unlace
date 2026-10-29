/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001F380
// Address: 0x000000014001F380

//----- (000000014001F380) ----------------------------------------------------
__int64 __fastcall sub_14001F380(__int64 a1, __int64 a2)
{
  const char *v3; // rcx
  __int64 v4; // rcx

  if ( *(_QWORD *)(a1 + 16) )
    v3 = *(const char **)(a1 + 8);
  else
    v3 = Str1;
  v4 = (int)sub_140064C60((__int64)v3);
  *(_QWORD *)(a2 + 8) = v4;
  return 0;
}
