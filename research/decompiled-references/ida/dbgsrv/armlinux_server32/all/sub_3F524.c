/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F524
// Address: 0x0003F524

//----- (0003F524) --------------------------------------------------------
int __fastcall sub_3F524(_DWORD *a1, char *a2)
{
  int result; // r0
  const char **v4; // r0

  result = sub_3EEFC(a1, a2);
  if ( result == -1 )
  {
    if ( a2 && (v4 = sub_3DF88(a2)) != nullptr && v4[1] )
      return 1431655765 * (((char *)v4 - (char *)off_D3CEC) >> 3);
    else
      return 0x7FFFFFFF;
  }
  return result;
}
// D3CEC: using guessed type _UNKNOWN **off_D3CEC;
