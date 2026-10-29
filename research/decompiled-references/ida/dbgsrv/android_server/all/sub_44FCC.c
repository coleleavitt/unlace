/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44FCC
// Address: 0x0000000000044FCC

//----- (0000000000044FCC) ----------------------------------------------------
__int64 __fastcall sub_44FCC(__int64 a1)
{
  int v1; // w8

  v1 = *(_DWORD *)(a1 + 80);
  if ( (v1 & 5) == 0 )
    return 0;
  *(_BYTE *)(a1 + 896) = v1 & 1;
  *(_BYTE *)(a1 + 897) = (v1 & 4) != 0;
  return 1;
}
