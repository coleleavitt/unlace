/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49C768
// Address: 0x000000000049C768

//----- (000000000049C768) ----------------------------------------------------
__int64 __fastcall sub_49C768(__int64 result)
{
  unsigned __int64 v1; // x2
  __int64 v2; // x20
  unsigned __int64 i; // x19
  unsigned int v4; // w1

  v1 = *(_QWORD *)(result + 8);
  if ( v1 )
  {
    v2 = result;
    for ( i = 0; i < v1; ++i )
    {
      v4 = *(_DWORD *)(*(_QWORD *)(v2 + 24) + 4 * i);
      result = v4;
      if ( v4 != -1 )
      {
        j__close(v4);
        result = *(_QWORD *)(v2 + 24);
        *(_DWORD *)(result + 4 * i) = -1;
        v1 = *(_QWORD *)(v2 + 8);
      }
    }
  }
  return result;
}
