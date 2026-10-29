/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140062250
// Address: 0x0000000140062250

//----- (0000000140062250) ----------------------------------------------------
__int64 __fastcall sub_140062250(__int64 a1, int a2, int a3)
{
  __int8 v3; // si
  unsigned __int8 v4; // di
  __int8 *i; // rax

  v3 = a3;
  v4 = a2;
  if ( a2 != a3 )
  {
    if ( a1 )
    {
      for ( i = sub_14006CA14(a1, a2); i; i = sub_14006CA14((__int64)i, v4) )
        *i = v3;
    }
  }
  return a1;
}
