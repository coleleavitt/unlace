/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlfile
// Address: 0x00000000000BE850

//----- (00000000000BE850) ----------------------------------------------------
__int64 __fastcall qlfile(__int64 a1)
{
  if ( !a1 )
    return 0;
  if ( *(int *)a1 <= 1 )
    return *(_QWORD *)(a1 + 8);
  return 0;
}
