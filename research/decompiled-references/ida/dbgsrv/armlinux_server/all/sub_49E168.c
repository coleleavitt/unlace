/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49E168
// Address: 0x000000000049E168

//----- (000000000049E168) ----------------------------------------------------
__int64 __fastcall sub_49E168(unsigned __int8 *a1, __int64 a2, __int64 a3)
{
  unsigned __int8 *v3; // x1
  unsigned int v4; // t1

  if ( a2 )
  {
    v3 = &a1[a2];
    do
    {
      v4 = *a1++;
      a3 = 0x100000001B3LL * (v4 ^ (unsigned __int64)a3);
    }
    while ( a1 != v3 );
  }
  return a3;
}
