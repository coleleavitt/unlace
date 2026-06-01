/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7059E
// Address: 0x0007059E

//----- (0007059E) --------------------------------------------------------
int __fastcall sub_7059E(int a1, int a2)
{
  int result; // r0

  result = 1;
  if ( a2 <= 1 )
  {
    result = 1;
    if ( !*(_BYTE *)(*(_DWORD *)(a1 + 4) + 59) )
      return *(unsigned __int8 *)(*(_DWORD *)(a1 + 4) + 59);
  }
  return result;
}
