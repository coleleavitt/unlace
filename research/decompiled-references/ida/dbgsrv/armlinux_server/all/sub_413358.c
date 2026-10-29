/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_413358
// Address: 0x0000000000413358

//----- (0000000000413358) ----------------------------------------------------
__int64 __fastcall sub_413358(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  if ( *(_BYTE *)(a1 + 2053) || *(_DWORD *)(a1 + 2044) == -1 )
    return 0;
  else
    return (int)sub_413008(a1, 0xFFFFFFFF, a2, a3, a4, 1u);
}
