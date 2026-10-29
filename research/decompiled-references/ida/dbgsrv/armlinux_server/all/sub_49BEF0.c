/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49BEF0
// Address: 0x000000000049BEF0

//----- (000000000049BEF0) ----------------------------------------------------
__int64 __fastcall sub_49BEF0(__int64 a1, unsigned int a2)
{
  int v2; // w3
  _DWORD *v4; // x0

  a2 = (unsigned __int8)a2;
  if ( !(_BYTE)a2 )
  {
    v2 = *(_DWORD *)(a1 + 16);
    if ( (v2 & 0x41) == 0x41 && (v2 & 8) == 0 )
    {
      v4 = *(_DWORD **)(a1 + 48);
      if ( v4 )
      {
        if ( *v4 )
          return v4[1] != 0;
      }
      else
      {
        return 1;
      }
    }
  }
  return a2;
}
