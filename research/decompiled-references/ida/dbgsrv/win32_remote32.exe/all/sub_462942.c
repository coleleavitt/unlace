/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_462942
// Address: 0x00462942

//----- (00462942) --------------------------------------------------------
bool __cdecl sub_462942(int a1)
{
  int v1; // eax
  bool result; // al

  result = false;
  if ( MEMORY[0x400000] == 23117
    && *(_DWORD *)(MEMORY[0x40003C] + 0x400000) == 17744
    && *(_WORD *)(MEMORY[0x40003C] + 4194328) == 267 )
  {
    v1 = sub_46280E(0x400000, a1 - 0x400000);
    if ( v1 )
    {
      if ( *(int *)(v1 + 36) >= 0 )
        return true;
    }
  }
  return result;
}
