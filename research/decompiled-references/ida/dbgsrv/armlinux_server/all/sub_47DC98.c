/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47DC98
// Address: 0x000000000047DC98

//----- (000000000047DC98) ----------------------------------------------------
size_t __fastcall sub_47DC98(int *a1, void *a2, size_t a3)
{
  int v4; // w2
  size_t result; // x0

  if ( !a1 || (v4 = *a1, *a1 != 1) && (!v4 || (unsigned int)(v4 - 3) > 1) )
    sub_40A608("no support for remote linput in standalone utilities");
  result = sub_48C160((__int64)a1, a2, a3);
  if ( result != a3 )
    sub_40A608("read error");
  return result;
}
