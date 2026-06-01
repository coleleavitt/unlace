/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140004D10
// Address: 0x0000000140004D10

//----- (0000000140004D10) ----------------------------------------------------
char __fastcall sub_140004D10(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a3 <= 4 )
    return 1;
  if ( *(_BYTE *)a2 == 78 && *(_BYTE *)(a2 + 1) == 66 && a3 >= 0x10 )
  {
    *(_BYTE *)(a3 - 1 + a2) = 0;
    return sub_140004D60((_BYTE *)(a2 + 16));
  }
  else if ( *(_DWORD *)a2 == 1396986706 && a3 >= 0x18 )
  {
    *(_BYTE *)(a3 - 1 + a2) = 0;
    return sub_140004D60((_BYTE *)(a2 + 24));
  }
  else
  {
    return 0;
  }
}
