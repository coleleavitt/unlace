/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_438C50
// Address: 0x0000000000438C50

//----- (0000000000438C50) ----------------------------------------------------
__int64 __fastcall sub_438C50(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp

  v2 = (unsigned int)sub_438C30(a1, a2);
  return v2 + (sub_438C30(a1, a2 + 4) << 32);
}
