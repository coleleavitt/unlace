/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EF994
// Address: 0x00000000000EF994

//----- (00000000000EF994) ----------------------------------------------------
__int64 __fastcall sub_EF994(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // x3
  unsigned __int64 v4; // x1
  __int64 result; // x0

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a3 + 8);
  if ( v3 >= v4 )
    LODWORD(result) = 0;
  else
    LODWORD(result) = -1;
  if ( v3 > v4 )
    return 1;
  else
    return (unsigned int)result;
}
