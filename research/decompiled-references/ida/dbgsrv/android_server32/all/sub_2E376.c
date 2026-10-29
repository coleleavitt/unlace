/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2E376
// Address: 0x0002E376

//----- (0002E376) --------------------------------------------------------
int __fastcall sub_2E376(int a1, int a2)
{
  int v2; // r3
  int result; // r0

  v2 = *(unsigned __int8 *)(a1 + 481);
  if ( *(_BYTE *)(a1 + 481) && !*(_BYTE *)(a1 + 480) && *(_WORD *)(a1 + 406) == 8 )
    return (*(_DWORD *)(a2 + 12) << 24)
         + ((*(_DWORD *)(a2 + 12) << 8) & 0xFF0000)
         + ((*(_DWORD *)(a2 + 12) >> 8) & 0xFF00)
         + HIBYTE(*(_DWORD *)(a2 + 12));
  result = *(_DWORD *)(a2 + 8);
  if ( !v2 )
    return (unsigned __int8)*(_DWORD *)(a2 + 8);
  return result;
}
