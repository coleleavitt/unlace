/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_418030
// Address: 0x00418030

//----- (00418030) --------------------------------------------------------
int __cdecl sub_418030(DWORD dwProcessId)
{
  HANDLE v1; // eax

  v1 = OpenProcess(0x400u, 0, dwProcessId);
  if ( !v1 )
    return -1;
  CloseHandle(v1);
  return 0;
}
