/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001F660
// Address: 0x000000014001F660

//----- (000000014001F660) ----------------------------------------------------
__int64 __fastcall sub_14001F660(__int64 a1, __int64 a2)
{
  const char *v3; // rcx
  __int64 v4; // rcx

  if ( *(_QWORD *)(a1 + 16) )
    v3 = *(const char **)(a1 + 8);
  else
    v3 = Str1;
  v4 = (int)unknown_libname_43(v3);
  *(_QWORD *)(a2 + 8) = v4;
  return 0;
}
// 140070E80: using guessed type __int64 __fastcall unknown_libname_43(_QWORD);
