/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43E818
// Address: 0x000000000043E818

//----- (000000000043E818) ----------------------------------------------------
__int64 __fastcall sub_43E818(__int64 *a1, char *a2)
{
  unsigned int v3; // w19
  const char **v5; // x0

  v3 = sub_43DE50(a1, a2);
  if ( v3 == -1 && (v3 = 0x7FFFFFFF, a2) && (v5 = sub_43C678(a2)) != nullptr && v5[1] )
    return 858993459 * (unsigned int)(((char *)v5 - (char *)off_520150) >> 3);
  else
    return v3;
}
// 520150: using guessed type _UNKNOWN **off_520150;
