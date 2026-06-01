/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74D78
// Address: 0x00074D78

//----- (00074D78) --------------------------------------------------------
__int64 __fastcall sub_74D78(int a1)
{
  if ( !a1 )
    return -1;
  if ( *(int *)a1 <= 1 )
    return sub_71108(*(_DWORD *)(a1 + 8));
  return *(_QWORD *)(a1 + 16);
}
