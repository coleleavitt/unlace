/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_408B50
// Address: 0x0000000000408B50

//----- (0000000000408B50) ----------------------------------------------------
__int64 __fastcall sub_408B50(__int64 a1)
{
  __int64 v1; // x19
  __int64 v2; // x0
  unsigned int v3; // w2

  v1 = a1 + 1920;
  v2 = *(_QWORD *)(a1 + 1936);
  if ( v2 == v1 )
  {
    return 0;
  }
  else
  {
    while ( 1 )
    {
      v3 = *(unsigned __int8 *)(v2 + 65);
      if ( *(_BYTE *)(v2 + 65) )
      {
        if ( !*(_DWORD *)(v2 + 48) && !*(_DWORD *)(v2 + 44) )
          break;
      }
      v2 = sub_49F6E8(v2);
      if ( v2 == v1 )
        return 0;
    }
  }
  return v3;
}
