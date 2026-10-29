/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000718E0
// Address: 0x00000001000718E0

//----- (00000001000718E0) ----------------------------------------------------
bool __fastcall sub_1000718E0(__int64 a1, int a2, char a3)
{
  __int64 v3; // x8
  _BOOL8 result; // x0
  __int64 v5; // x8

  v3 = *(_QWORD *)(a1 + 24);
  result = false;
  if ( v3 )
  {
    if ( *(unsigned __int8 *)(v3 + 1) == a2 )
    {
      if ( (a3 & 1) != 0 )
        return true;
      if ( (*(_DWORD *)(a1 + 16) & 0x49) == 0x41 )
      {
        v5 = *(_QWORD *)(a1 + 48);
        if ( !v5 || *(_DWORD *)(v5 + 20) && *(_DWORD *)(v5 + 28) )
          return true;
      }
    }
  }
  return result;
}
