/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4812DF
// Address: 0x004812DF

//----- (004812DF) --------------------------------------------------------
HANDLE sub_4812DF()
{
  HANDLE result; // eax

  result = hConsoleOutput;
  if ( hConsoleOutput != (HANDLE)-1 && hConsoleOutput != (HANDLE)-2 )
    return (HANDLE)CloseHandle(hConsoleOutput);
  return result;
}
