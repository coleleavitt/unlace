/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_438C30
// Address: 0x0000000000438C30

//----- (0000000000438C30) ----------------------------------------------------
__int64 __fastcall sub_438C30(_QWORD *a1, __int64 a2)
{
  if ( a1[3] - a2 <= 3 )
    sub_4371C0();
  return *(unsigned int *)(*a1 + a2);
}
