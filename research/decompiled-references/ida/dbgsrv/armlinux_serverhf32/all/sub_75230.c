/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75230
// Address: 0x00075230

//----- (00075230) --------------------------------------------------------
int __fastcall sub_75230(int result)
{
  int v1; // r4
  int v2; // r2

  v1 = result;
  v2 = *(_DWORD *)(result + 20);
  *(_DWORD *)result = &off_D1BB4;
  if ( v2 == 1 )
  {
    sub_749E0(*(void **)(result + 24));
    return v1;
  }
  else if ( v2 )
  {
    if ( v2 != 2 )
    {
      if ( under_debugger )
        __und(0xFFu);
      sub_78AFC(193);
    }
  }
  else
  {
    sub_749E8(*(void ***)(result + 24));
    return v1;
  }
  return result;
}
// D1BB4: using guessed type _UNKNOWN *off_D1BB4;
// D5C00: using guessed type char under_debugger;
