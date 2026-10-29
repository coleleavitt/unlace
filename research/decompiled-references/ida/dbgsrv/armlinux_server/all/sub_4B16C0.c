/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B16C0
// Address: 0x00000000004B16C0

//----- (00000000004B16C0) ----------------------------------------------------
__int64 *__fastcall sub_4B16C0(__int64 *a1, char *s)
{
  unsigned __int64 v4; // x0

  v4 = strlen(s);
  if ( v4 > 0x7FFFFFFFFFFFFFFFLL - a1[1] )
    sub_4A04D0("basic_string::append");
  return sub_4B1578(a1, s, v4);
}
