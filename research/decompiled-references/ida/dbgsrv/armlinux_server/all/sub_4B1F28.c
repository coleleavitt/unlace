/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B1F28
// Address: 0x00000000004B1F28

//----- (00000000004B1F28) ----------------------------------------------------
__int64 __fastcall sub_4B1F28(_QWORD *a1, unsigned __int8 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // x3

  v3 = a1[1];
  if ( a3 >= v3 )
    return -1;
  if ( *(unsigned __int8 *)(*a1 + a3) == a2 )
  {
    while ( ++a3 != v3 )
    {
      if ( *(unsigned __int8 *)(*a1 + a3) != a2 )
        return a3;
    }
    return -1;
  }
  return a3;
}
