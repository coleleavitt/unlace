/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D934
// Address: 0x0003D934

//----- (0003D934) --------------------------------------------------------
const char *__fastcall sub_3D934(int a1, int a2, const char *a3, void **a4)
{
  _DWORD v9[2]; // [sp+4h] [bp-10h] BYREF

  if ( a1 )
  {
    sub_45758((unsigned __int8 *)a1);
    *(_BYTE *)a1 = 2;
    *(_DWORD *)(a1 + 8) = 0;
  }
  v9[1] = a2;
  v9[0] = &off_D0AA0;
  return sub_3FFE0((unsigned __int8 *)a1, a3, a4, (int)v9);
}
// D0AA0: using guessed type _UNKNOWN *off_D0AA0;
