/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lread
// Address: 0x0009B410

//----- (0009B410) --------------------------------------------------------
int __cdecl lread(__int64 a1, size_t a2)
{
  int result; // eax

  if ( !(_DWORD)a1 || (unsigned int)(*(_DWORD *)a1 - 3) >= 2 && *(_DWORD *)a1 != 1 )
    sub_1DE10("no support for remote linput in standalone utilities");
  result = qlread(a1, a2);
  if ( result != a2 )
    sub_1DE10("read error");
  return result;
}
