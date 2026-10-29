/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4700F0
// Address: 0x00000000004700F0

//----- (00000000004700F0) ----------------------------------------------------
void __fastcall sub_4700F0(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = -1;
  if ( a3 )
  {
    if ( a2 >= 0 )
    {
      *(_QWORD *)(a1 + 8) = a3;
      *(_QWORD *)(a1 + 16) = a4;
      *(_DWORD *)(a1 + 24) = a2;
    }
  }
}
