/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40114
// Address: 0x00040114

//----- (00040114) --------------------------------------------------------
const char *__fastcall sub_40114(const char *a1, int a2, const char *a3, void **a4)
{
  _DWORD v5[2]; // [sp+Ch] [bp-10h] BYREF

  if ( !a3 )
    return nullptr;
  v5[1] = a2;
  v5[0] = &off_D0AA0;
  return sub_3FD54(a1, a3, a4, (int)v5, 0);
}
// D0AA0: using guessed type _UNKNOWN *off_D0AA0;
