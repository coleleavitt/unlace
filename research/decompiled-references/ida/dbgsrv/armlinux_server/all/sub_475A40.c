/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475A40
// Address: 0x0000000000475A40

//----- (0000000000475A40) ----------------------------------------------------
__int64 __fastcall sub_475A40(__int64 a1)
{
  _QWORD *v1; // x0
  unsigned int v2; // w1

  if ( *(_QWORD *)(a1 + 8) )
  {
    v1 = (_QWORD *)(a1 + 16);
    v2 = 1;
    while ( *v1++ )
    {
      if ( ++v2 == 16 )
      {
        *__errno_location() = 23;
        return 0xFFFFFFFFLL;
      }
    }
  }
  else
  {
    return 0;
  }
  return v2;
}
