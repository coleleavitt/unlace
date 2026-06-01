/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_414230
// Address: 0x0000000000414230

//----- (0000000000414230) ----------------------------------------------------
__int64 __fastcall sub_414230(__int64 *a1)
{
  _DWORD *v1; // rbp

  v1 = (_DWORD *)a1[166];
  if ( v1 )
  {
    if ( v1[56] == 1 )
      sub_40E9C0(a1[166]);
    operator delete(v1, 0xE8u);
  }
  a1[166] = 0;
  sub_413C90(a1);
  return sub_46D440((__int64)a1);
}
