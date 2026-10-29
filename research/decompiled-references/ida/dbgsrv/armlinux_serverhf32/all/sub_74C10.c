/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74C10
// Address: 0x00074C10

//----- (00074C10) --------------------------------------------------------
__int64 __fastcall sub_74C10(int a1)
{
  if ( !a1 )
    return -1;
  if ( *(int *)a1 <= 1 )
    return sub_70F9C(*(_DWORD *)(a1 + 8));
  return *(_QWORD *)(a1 + 16);
}
