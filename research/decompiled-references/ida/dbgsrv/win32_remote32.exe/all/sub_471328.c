/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_471328
// Address: 0x00471328

//----- (00471328) --------------------------------------------------------
char __thiscall sub_471328(int this, int a2, int a3)
{
  if ( a2 == *(_DWORD *)(this + 16) && a3 == *(_DWORD *)(this + 20) )
    return 1;
  **(_BYTE **)(this + 24) = 0;
  return 0;
}
