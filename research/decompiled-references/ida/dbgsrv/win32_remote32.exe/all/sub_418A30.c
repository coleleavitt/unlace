/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_418A30
// Address: 0x00418A30

//----- (00418A30) --------------------------------------------------------
int __stdcall sub_418A30(int a1, DWORD dwProcessId)
{
  int v2; // eax

  if ( dwProcessId != -1 && dwProcessId != GetCurrentProcessId() && byte_4B6ABD )
  {
    v2 = sub_418030(dwProcessId);
    if ( v2 == -1 )
      return 0;
    if ( !v2 )
      return 8;
  }
  return 4;
}
// 4B6ABD: using guessed type char byte_4B6ABD;
