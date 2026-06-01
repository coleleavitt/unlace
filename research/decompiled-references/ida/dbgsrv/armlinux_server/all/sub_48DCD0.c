/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48DCD0
// Address: 0x000000000048DCD0

//----- (000000000048DCD0) ----------------------------------------------------
FILE *__fastcall sub_48DCD0(const char *a1, unsigned __int8 *a2)
{
  FILE *v3; // x19
  char v5[24]; // [xsp+20h] [xbp-20h] BYREF

  sub_493350((unsigned __int64)v5, a2, 20);
  sub_493488(v5, (unsigned __int8 *)"e", 20);
  v3 = sub_48DBF8(a1, v5, 8);
  if ( !v3 )
    sub_4869C8(1);
  return v3;
}
