/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lread
// Address: 0x00070690

//----- (00070690) --------------------------------------------------------
size_t __fastcall lread(_DWORD *a1, void *a2, signed int a3)
{
  size_t result; // r0

  if ( !a1 || (unsigned int)(*a1 - 3) >= 2 && *a1 != 1 )
    sub_1C9E4("no support for remote linput in standalone utilities");
  result = qlread((int)a1, a2, a3);
  if ( result != a3 )
    sub_1C9E4("read error");
  return result;
}
