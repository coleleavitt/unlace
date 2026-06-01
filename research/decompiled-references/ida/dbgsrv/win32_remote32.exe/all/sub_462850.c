/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_462850
// Address: 0x00462850

//----- (00462850) --------------------------------------------------------
char sub_462850()
{
  PVOID StackBase; // edx
  signed __int32 v1; // eax

  if ( sub_4639B9() )
  {
    StackBase = NtCurrentTeb()->NtTib.StackBase;
    while ( 1 )
    {
      v1 = _InterlockedCompareExchange(&dword_4B7500, (signed __int32)StackBase, 0);
      if ( !v1 )
        break;
      if ( StackBase == (PVOID)v1 )
        return 1;
    }
  }
  return 0;
}
// 4B7500: using guessed type int dword_4B7500;
