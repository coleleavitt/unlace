/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6DB38
// Address: 0x0006DB38

//----- (0006DB38) --------------------------------------------------------
int __fastcall sub_6DB38(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 28);
  if ( result != -1 )
  {
    if ( a2 >= 0 )
    {
      shutdown(result, a2);
      result = *(_DWORD *)(a1 + 28);
    }
    close(result);
    *(_DWORD *)(a1 + 28) = -1;
    return -1;
  }
  return result;
}
