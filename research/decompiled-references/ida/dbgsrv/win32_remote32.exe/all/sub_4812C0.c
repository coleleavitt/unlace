/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4812C0
// Address: 0x004812C0

//----- (004812C0) --------------------------------------------------------
BOOL sub_4812C0()
{
  char *v0; // ecx

  v0 = (char *)hConsoleOutput;
  if ( hConsoleOutput == (HANDLE)-2 )
  {
    sub_4812A1();
    v0 = (char *)hConsoleOutput;
  }
  return v0 + 1 != nullptr;
}
