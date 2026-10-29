/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_493B08
// Address: 0x0000000000493B08

//----- (0000000000493B08) ----------------------------------------------------
__int64 __fastcall sub_493B08(int a1)
{
  __pid_t v2; // w0
  __pid_t v3; // w19
  __pid_t v4; // w0

  v2 = getsid(0);
  if ( v2 == -1 )
    return 0;
  v3 = v2;
  v4 = tcgetsid(a1);
  if ( v4 == -1 )
    return 0;
  else
    return (unsigned int)(v3 != v4) + 1;
}
