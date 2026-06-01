/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6AF70
// Address: 0x0006AF70

//----- (0006AF70) --------------------------------------------------------
size_t __fastcall sub_6AF70(_DWORD *a1, void *a2, signed int a3)
{
  size_t result; // r0

  if ( !a1 || *a1 != 1 && (!*a1 || (unsigned int)(*a1 - 3) > 1) )
    sub_17188("no support for remote linput in standalone utilities");
  result = sub_74B94((int)a1, a2, a3);
  if ( result != a3 )
    sub_17188("read error");
  return result;
}
