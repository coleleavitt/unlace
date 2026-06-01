/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3FF84
// Address: 0x0003FF84

//----- (0003FF84) --------------------------------------------------------
const char *__fastcall sub_3FF84(const char *a1, int a2, const char *a3, void **a4)
{
  _DWORD v5[2]; // [sp+Ch] [bp-10h] BYREF

  if ( !a3 )
    return nullptr;
  v5[1] = a2;
  v5[0] = &off_CFAA0;
  return sub_3FBC4(a1, a3, a4, (int)v5, 0);
}
// CFAA0: using guessed type _UNKNOWN *off_CFAA0;
