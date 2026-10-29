/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49FFF0
// Address: 0x000000000049FFF0

//----- (000000000049FFF0) ----------------------------------------------------
__int64 __fastcall sub_49FFF0(__int64 a1, __int64 a2)
{
  unsigned int v2; // w2

  v2 = 0;
  if ( a1 )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)a1 == 1 )
        ++v2;
      if ( a1 == a2 )
        break;
      a1 = *(_QWORD *)(a1 + 8);
    }
  }
  return v2;
}
