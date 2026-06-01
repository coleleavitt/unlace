/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75398
// Address: 0x00075398

//----- (00075398) --------------------------------------------------------
int __fastcall sub_75398(int result)
{
  int v1; // r4
  int v2; // r2

  v1 = result;
  v2 = *(_DWORD *)(result + 20);
  *(_DWORD *)result = &off_D2BB4;
  if ( v2 == 1 )
  {
    sub_74B4C(*(void **)(result + 24));
    return v1;
  }
  else if ( v2 )
  {
    if ( v2 != 2 )
    {
      if ( under_debugger )
        __und(0xFFu);
      sub_78C64(193);
    }
  }
  else
  {
    sub_74B54(*(void ***)(result + 24));
    return v1;
  }
  return result;
}
// D2BB4: using guessed type _UNKNOWN *off_D2BB4;
// D6C20: using guessed type char under_debugger;
