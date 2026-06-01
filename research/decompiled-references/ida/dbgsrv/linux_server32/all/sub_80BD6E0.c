/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BD6E0
// Address: 0x080BD6E0

//----- (080BD6E0) --------------------------------------------------------
int __cdecl sub_80BD6E0(int a1, int how)
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
