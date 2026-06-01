/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D79C
// Address: 0x0003D79C

//----- (0003D79C) --------------------------------------------------------
const char *__fastcall sub_3D79C(int a1, int a2, const char *a3, void **a4)
{
  _DWORD v9[2]; // [sp+4h] [bp-10h] BYREF

  if ( a1 )
  {
    sub_455C8((unsigned __int8 *)a1);
    *(_BYTE *)a1 = 2;
    *(_DWORD *)(a1 + 8) = 0;
  }
  v9[1] = a2;
  v9[0] = &off_CFAA0;
  return sub_3FE50((unsigned __int8 *)a1, a3, a4, (int)v9);
}
// CFAA0: using guessed type _UNKNOWN *off_CFAA0;
