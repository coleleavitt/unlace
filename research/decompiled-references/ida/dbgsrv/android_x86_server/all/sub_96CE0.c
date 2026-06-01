/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96CE0
// Address: 0x00096CE0

//----- (00096CE0) --------------------------------------------------------
int __cdecl sub_96CE0(int a1, int how)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 28);
  if ( result != -1 )
  {
    if ( how >= 0 )
    {
      shutdown(result, how);
      result = *(_DWORD *)(a1 + 28);
    }
    result = close(result);
    *(_DWORD *)(a1 + 28) = -1;
  }
  return result;
}
