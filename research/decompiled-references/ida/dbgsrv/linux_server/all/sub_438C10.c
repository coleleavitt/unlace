/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_438C10
// Address: 0x0000000000438C10

//----- (0000000000438C10) ----------------------------------------------------
__int64 __fastcall sub_438C10(_QWORD *a1, __int64 a2)
{
  if ( a1[3] - a2 <= 1 )
    sub_4371C0();
  return *(unsigned __int16 *)(*a1 + a2);
}
