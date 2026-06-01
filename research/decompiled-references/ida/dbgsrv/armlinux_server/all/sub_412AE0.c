/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_412AE0
// Address: 0x0000000000412AE0

//----- (0000000000412AE0) ----------------------------------------------------
__int64 __fastcall sub_412AE0(__int64 a1, __off64_t a2, void *a3, int a4)
{
  if ( *(_BYTE *)(a1 + 2053) || *(_DWORD *)(a1 + 2044) == -1 )
    return 0;
  else
    return (int)sub_412600(a1, 0xFFFFFFFF, a2, a3, a4, 1u);
}
