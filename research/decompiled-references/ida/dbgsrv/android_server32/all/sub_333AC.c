/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_333AC
// Address: 0x000333AC

//----- (000333AC) --------------------------------------------------------
char *__fastcall sub_333AC(__int64 a1)
{
  unsigned __int64 v1; // r0

  v1 = a1 - 1;
  if ( v1 > 4 )
    return nullptr;
  else
    return off_D95E0[(_DWORD)v1];
}
// D95E0: using guessed type char *off_D95E0[9];
