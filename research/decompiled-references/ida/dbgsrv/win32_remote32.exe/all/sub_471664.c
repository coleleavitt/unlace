/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_471664
// Address: 0x00471664

//----- (00471664) --------------------------------------------------------
char __userpurge sub_471664@<al>(int a1@<ecx>, int a2@<ebx>, int a3)
{
  _BYTE *v4; // eax

  if ( *(__int16 *)(sub_478614(a1, a2) + 2 * *(unsigned __int8 *)(a1 + 20)) < 0 )
  {
    v4 = *(_BYTE **)(a1 + 8);
    if ( !*v4 )
    {
      *(_DWORD *)(a1 + 16) = 0;
      *(_WORD *)(a1 + 20) = 0;
      *(_BYTE *)(a1 + 22) = 0;
      *(_DWORD *)(a1 + 24) = 0;
      *(_DWORD *)(a1 + 28) = 0;
      *(_DWORD *)(a1 + 32) = 0;
      *(_BYTE *)(a1 + 36) = 0;
      *(_DWORD *)(a1 + 40) = 0;
      *(_DWORD *)(a1 + 12) = 42;
      return 0;
    }
    *(_BYTE *)(a1 + 21) = *v4;
    *(_DWORD *)(a1 + 8) = v4 + 1;
  }
  return 1;
}
