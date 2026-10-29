/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A1290
// Address: 0x00000000004A1290

//----- (00000000004A1290) ----------------------------------------------------
__int64 __fastcall sub_4A1290(_QWORD *a1, unsigned __int8 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // x4

  v3 = *(_QWORD *)(*a1 - 24LL);
  if ( a3 >= v3 )
    return -1;
  while ( *(unsigned __int8 *)(*a1 + a3) == a2 )
  {
    if ( ++a3 == v3 )
      return -1;
  }
  return a3;
}
