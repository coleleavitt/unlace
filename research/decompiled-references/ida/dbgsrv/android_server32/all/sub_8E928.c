/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8E928
// Address: 0x0008E928

//----- (0008E928) --------------------------------------------------------
int __fastcall sub_8E928(int a1)
{
  int result; // r0
  __int64 v3; // r2

  result = 0;
  if ( a1 )
  {
    if ( *(_QWORD *)(a1 + 96) )
    {
      v3 = *(_QWORD *)(a1 + 56);
      if ( !v3 || v3 == 0xFFFF || *(_QWORD *)(a1 + 80) != v3 )
        return *(_DWORD *)(a1 + 88);
    }
  }
  return result;
}
