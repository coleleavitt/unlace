/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000E3A4
// Address: 0x000000010000E3A4

//----- (000000010000E3A4) ----------------------------------------------------
__int64 __fastcall sub_10000E3A4(__int64 a1, __int64 a2)
{
  if ( !sub_10001881C(a1, a2) || *(_BYTE *)(a1 + 2) || (*(_BYTE *)(a1 + 1) & 1) != 0 || *(_BYTE *)a1 != 4 )
    return -1;
  else
    return *(unsigned int *)(a1 + 8);
}
